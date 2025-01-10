#include <iostream>
#include <vector>
#include <string>
using namespace std;

void bubbleSort(vector<string>& names) {
    for (int i = 0; i < names.size(); i++) {
        for (int j = 0; j < names.size() - 1 - i; j++) {
            if (names[j] > names[j+1]) {
                swap(names[j], names[j+1]);
            }
        }
    }
}

int main() {
    int n;
    
    cout << "Enter the number of names: ";
    cin >> n;

    vector<string> names(n);

    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> names[i];
    }

    bubbleSort(names);

    cout << "\nSorted names in alphabetical order:" << endl;
    for (const string& name : names) {
        cout << name << endl;
    }

    return 0;
}