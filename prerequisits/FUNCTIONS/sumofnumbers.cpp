#include<bits/stdc++.h>
using namespace std;

int sumdigit(int num){
    int sumdigit = 0;
    while(num > 0){
        int last = num %10;
        num = num/10;

       sumdigit += last;
    }
    return sumdigit;
}
int main(){
    cout << sumdigit(2356);
}