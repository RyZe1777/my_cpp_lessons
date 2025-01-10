#include <iostream>
#include <ctime>
#include <unistd.h> // For sleep function (works on Unix-based systems, for Windows you can use windows.h)

using namespace std;

// Function to check if the current time matches the alarm time
bool checkTime(int alarmHour, int alarmMinute) {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    // Get current hour and minute
    int currentHour = ltm->tm_hour;
    int currentMinute = ltm->tm_min;

    return (currentHour == alarmHour && currentMinute == alarmMinute);
}

int main() {
    int alarmHour, alarmMinute;

    cout << "Enter alarm time (24-hour format):\n";
    cout << "Hour (0-23): ";
    cin >> alarmHour;
    cout << "Minute (0-59): ";
    cin >> alarmMinute;

    // Input validation for time
    if (alarmHour < 0 || alarmHour > 23 || alarmMinute < 0 || alarmMinute > 59) {
        cout << "Invalid time entered! Please enter a valid 24-hour format time.\n";
        return 1;
    }

    cout << "Alarm is set for " << alarmHour << ":" << alarmMinute << ". Waiting for alarm...\n";

    // Keep checking the time every second
    while (true) {
        if (checkTime(alarmHour, alarmMinute)) {
            cout << "ALARM! It's " << alarmHour << ":" << alarmMinute << " now.\n";
            break; // Exit the loop after the alarm rings
        }
        sleep(1); // Sleep for 1 second before checking again
    }

    return 0;
}