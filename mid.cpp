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
void print(Node * head){
    Node * tmp= head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
int size(Node *head){
    int count=0;
    Node * tmp=head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
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
    
    for(Node * i=head; i->next!=NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->val<j->val){
                swap(i->val, j->val);
            }
        }
    }
    int result= size(head);
    Node * tmp=head;
    if(result%2==0){
        int even_mid1=result/2;
        for(int i=1; i<=even_mid1-1; i++){
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val<<endl;
    }
    else{
        int odd_mid=result/2;
        for(int i=1; i<=odd_mid-1; i++){
            tmp=tmp->next;
        }
        if(odd_mid==0){
            cout<<tmp->val<<endl;
        }
        else{
            cout<<tmp->next->val<<endl;

        }
        
    }

    
    
    return 0;
}