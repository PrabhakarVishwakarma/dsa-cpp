#include<bits/stdc++.h>
using namespace std;

class Node{
public:    
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head; // Private head
    Node* tail; // Private tail
public:
    List(){ //Constructor 
        head = tail = NULL; //Initially head and tail value assigned to NULL;
    }

    void push_front(int val){
        Node* newNode = new Node(val); // Dynamic object 
        // Node newNode(val); //It is static object create kare ga 

        if(head == NULL){
            head = tail = newNode;
            return;
        }
        else{
            newNode -> next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            cout << "Linke list(LL) is empty \n";
            return;
        }
        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout<<"LL is empty\n";
            return;
        }

        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;

        delete tail;
        tail = temp;
    }

    void insert(int val, int pos){
        if (pos < 0){
            cout<<"Invalid position\n";
            return;
        }

        if(pos == 0){
            push_front(val);
            return;
        }

        Node* temp = head;
        
        for(int i = 0; i< pos-1; i++){
            if(temp == NULL){
                cout<<"Invalid position\n";
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    int search(int key){
        Node* temp = head;
        int idx = 0;
        
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return - 1;
    }

    void pop_front() {
        if (head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;

        if (head == NULL) {
            tail = NULL;
        }
    }

    void pop_back() {
        if (head == NULL) {
            cout << "LL is empty\n";
            return;
        }

        // Only one node
        if (head == tail) {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next != tail) {
            temp = temp->next;
        }

        delete tail;

        tail = temp;
        tail->next = NULL;
    }
    void printLL(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " "<< "->" <<" ";
            temp = temp->next;
        }
        cout <<"NULL"<<endl;
    }
};

int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(30);
    ll.push_front(12);
    ll.push_back(90);

    ll.insert(4,1);
    cout<<ll.search(4)<<endl;
}