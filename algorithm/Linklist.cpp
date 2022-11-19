#include<bits/stdc++.h>
using namespace std;
//#define ll long  long int;

class Node{
    public:
    int var;
    Node* next;         //  node type pointer created  as it is pointing to the other node

    Node(int var){
        this->var=var;
        this->next=NULL;
    }

};

    void insertnode(Node* & head,int dt){
        Node* temp=new Node(dt);           // data added 
        temp ->next=head;
        head=temp;
    }

    void inserttail(Node*tail,int dt){
      Node*temp=new Node(dt);
      tail -> next=temp;             // 
      tail =tail->temp;
    }
    // how to traverse the linklist
    void print(Node * &head){
        Node* temp=head;                  // node created
        while(temp!=NULL){
            cout<<temp ->var<<endl;        // printing the data element
            temp=temp->next;    // points to next node
        }
        cout<<endl;
    }


int main(){
Node* node1=new Node(101);   // Node object created
cout<<node1-> var<<endl; // for printing the data using pointer use -> instead (.) 
cout<<node1 -> next<<endl;      // address printing     

Node* head=node1;
Node* tail=node1;
print(head);
insertnode(head,12);
print(head);

}