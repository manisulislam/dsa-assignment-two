#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
void insert_tail(Node*head,Node *& tail,int v){
    Node * newNode= new Node(v);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

    tail->next=newNode;
    tail=newNode;
    
}
void insert_head(Node * &head, Node*& tail, int v){

    Node * newNode= new Node(v);
    if(head==NULL){
        
        tail=newNode;
        
    }
    newNode->next=head;
    head=newNode;
}
int main(){
    Node * head= NULL;
    Node * tail = NULL;
    int query;
    cin>>query;
    int x, v;
    
    while(query--){
        cin>>x>>v;
        if(x==0){
            insert_head(head, tail, v);

            
        }
        else if(x==1){
            insert_tail(head,tail, v);
        }
      cout<<head->val<<" "<<tail->val<<endl;
    }
     
    
    
    return 0;
}