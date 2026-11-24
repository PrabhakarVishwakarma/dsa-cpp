#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(2);
    l.push_front(1);
    l.push_back(0);
    l.push_front(10);

    l.pop_back();

    for(int val: l){
        cout<< val << endl;
    }

    cout<< endl;
    return 0;
}

