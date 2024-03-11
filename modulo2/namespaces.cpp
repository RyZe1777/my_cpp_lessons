#include <iostream>
using namespace std;

int x = 10;


namespace first_space{
    void func(){
        cout <<"Inside first_space"<< endl;
    }  
}

namespace second_space{
    void func(){
        cout <<"Inside second_space" << endl;
    }
}
