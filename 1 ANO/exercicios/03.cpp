#include <iostream>
using namespace std;


int calculateArea(int width, int length){
    int area = width * length;
    return area;
}


int calculatePerimeter(int width, int length){
    int perimeter = 2 * (length + width);
    return perimeter;
}

int main(){
    int length = 10;
    int width = 10;

    cout << "area: " << calculateArea(length,width) << endl;
    cout << "perimetro: " << calculatePerimeter(length,width) << endl;

}