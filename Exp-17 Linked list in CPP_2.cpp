// Papri Sen
// 24070123070
// A3

#include<iostream>
using namespace std;

class Node{
    public:

    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};

int main(){

    Node* n1=new Node(10);
    Node* n2=new Node(20);          
    Node* n3=new Node(30);

    n1->next=n2;
    n2->next=n3;    

    Node* temp=n1;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    cout<<endl;
    
    return 0;
}

/*
OUTPUTS:
10 20 30 
*/
