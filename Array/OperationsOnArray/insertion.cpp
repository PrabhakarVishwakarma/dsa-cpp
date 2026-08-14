#include<bits/stdc++.h>
using namespace std;

void insertelement(int arr[], int &size, int element, int position){
    if(position > size){
        cout<<"Inertion are not possible due to insufficient size of the array"<< " ";
        return;
    }
    for(int i = size ; i > position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    size ++;
}

int main(){
    int arr[20] = {1,2,3,4,5,6,7,8,9};
    int size = 10;
    insertelement(arr,size,10,2);

    for(int i = 0; i < size; i++){
        cout<< arr[i]<< " ";
    }
    return 0;
}