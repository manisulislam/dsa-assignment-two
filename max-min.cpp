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
void input(Node* &head, Node*&tail, int val){
    Node * newNode= new Node(val);
    if(head==NULL){
        head= newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int main(){
    Node * head= NULL;
    Node * tail = NULL;
    int val;
    while (true)
    {   cin>>val;
        if(val==-1) break;
        input(head, tail, val);
    }
    Node *tmp=head;
    int max=INT_MIN;
    int min=INT_MAX;
    while(tmp!=NULL){
        if(tmp->val>max){
            max=tmp->val;
        }
        if(tmp->val<min){
            min=tmp->val;
        }
        tmp=tmp->next;
    }
    
    cout<<max<<" "<<min<<endl;
    
    
    return 0;
}