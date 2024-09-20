#include <iostream>
using namespace std;

const float PI = 3.1415;
const float r = 5;

int area(){
    int area;
    cout << "area: " << PI*r*r << endl;
    return area;
}

int perimeter(){
    int perimeter;
    cout << "perimeter: " << 2*PI*r << endl;;
    return perimeter;
}

int main(){
    area();
    perimeter();
}