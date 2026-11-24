#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0, end = arr.size()-1;

    while(start <= end){
        int mid = (start+ end-start)/2;

        if(target >arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        else {
            cout << "Target value: " << arr[mid] << endl;
            cout << "Target index: " << mid << endl;
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr1 = {10,20,30,40,50,60};
    int target1 = 30;

    cout<< binarySearch(arr1,target1)<< endl;
    return 0;
}