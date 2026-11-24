#include<bits/stdc++.h>
using namespace std;

int per(int n){
    int fact = 1;
    for(int i = 1; i<= n; i++){
        fact *= i;
    }

    return fact;
}
int main(){
    int n;
    cin >> n;
    int r;
    cin >> r;

    int numerator = per(n);
    int denominator = per(r) * per(n-r);

    int permutation = numerator/denominator;
    cout<< permutation;
    

}