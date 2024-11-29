#include <iostream>
#include <list>

using namespace std;

list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};


int main(){
    
    for (string car : cars) {
        cout << car << "\n";
    }

}