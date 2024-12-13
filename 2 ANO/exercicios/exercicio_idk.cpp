#include <iostream>

using namespace std;

class A{

    public:
        int pubA = 10;
    
    private:
        int privA = 20;

    protected:
        int protA = 30;
}

class B : public A{
    
    public:
        int pubB = 40;
    
    private:
        int privB = 50;
    
    protected:
        int protB = 60;
}

class B : public A{
    
    private:
        int privC = 70;
    
    protected:
        int protC = 80;
}

int main(){

    C objC;

    
    
}

