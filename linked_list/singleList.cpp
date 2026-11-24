#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;


};
Node *head = NULL;
int main(){
    Node *first = new Node();
    first -> data = 10;
    first -> next = NULL;
    
    head = first;

}