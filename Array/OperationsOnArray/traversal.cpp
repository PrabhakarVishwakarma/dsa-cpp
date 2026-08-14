#include<bits/stdc++.h>
using namespace std;

void traversearray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
int main(){
    int arr[] = {100,200,300};
    int size = sizeof(arr)/sizeof(arr[0]);
    traversearray(arr,size);
    return 0;
}