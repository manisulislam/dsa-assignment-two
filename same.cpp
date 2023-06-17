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
int size(Node*head){
    int count=0;
    Node * tmp=head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main(){
    Node * head1= NULL;
    Node * tail1 = NULL;
    Node * head2= NULL;
    Node * tail2 = NULL;
    int val;
    while (true)
    {   cin>>val;
        if(val==-1) break;
        input(head1, tail1, val);
    }
    while (true)
    {   cin>>val;
        if(val==-1) break;
        input(head2, tail2, val);
    }
    Node * tmp1=head1;
    Node * tmp2=head2;
    int flag=1;
    while (tmp1!=NULL&&tmp2!=NULL )
    {
        if(tmp1->val!=tmp2->val){
            flag=0;
         }
         
    tmp1=tmp1->next;
    tmp2=tmp2->next;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag==0){
        cout<<"NO"<<endl;
    }
    
    
    
    return 0;
}