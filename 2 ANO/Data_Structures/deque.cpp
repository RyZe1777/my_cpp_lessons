#include <iostream>
#include <deque>

using namespace std;


deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

int main(){
    for (string car : cars) {
        cout << car << "\n";
    }

    // Get the first element
    cout << cars[0] <<endl;  // Outputs Volvo

    // Get the second element
    cout << cars.at(1) <<endl;

}