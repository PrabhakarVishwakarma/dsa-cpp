#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int target = 30;

    int arr[n];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        if(arr[i] == target){
            for(int j = i; j< n -1; j++){
                arr[j] = arr[j +1];
            }
            n--;
            break;
        }
    }
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}