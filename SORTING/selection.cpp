#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i = 0; i<n-1; i++){
        int smallestIndx = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]< arr[smallestIndx]){
                smallestIndx = j;
            }
        }
        swap(arr[i], arr[smallestIndx]);
    }
}
int main(){
    int n = 7;
    int arr[] = {5,3,1,9,16,5,4};
    selectionSort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}