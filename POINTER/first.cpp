#include<bits/stdc++.h>
using namespace std;

int main(){
    int age = 20;
    int * ptr = &age;

    cout<< ptr <<endl; // Prints the address of the age varible

    cout<< *ptr << endl; // prints the value of age(variable) using ptr(pointer)
    
    *ptr = 30;
    cout<< *ptr << endl; // change the value of age using ptr form 20 to 30;
    
}