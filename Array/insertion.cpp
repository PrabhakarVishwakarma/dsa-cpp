#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {10,20,30,40};
    cout<<"Elements before insertion:\n";

    int element = 50;

    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    arr.insert(arr.begin(),element);
    cout<<"\nArray after insertion\n";

    arr.insert(arr.end(),60); // it will insert the element at the end of the array.

    for (int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}