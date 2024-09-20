#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;




string str; 
int i;

int main(){
    system("clear");
    printf("Enter your Family name: ");
    scanf ("%s", &str);
    printf("Enter your age: ");
    scanf("%d", &i);
    printf("Mr. %s, %d years old. \n", &str, i);
    return 0;
}

