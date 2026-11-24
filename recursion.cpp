#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){ // recursive function
    if(n == 1){
        cout<<"1\n";
        return;
    }
    cout<< n<<" ";
    printNumber(n-1);

    
}

int main(){
    printNumber(4);
    return 0;
}