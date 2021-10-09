#include <iostream>
using namespace std;
struct node{
    int data; 
    node* next; 
    node* prev; 
}*head=NULL,*tail; 
void create(){
    int n; 
    cout<<"Enter the no of nodes:";
    cin>>n; 
    node* temp; 
    for(int i=0;i<n;i++){
        temp=new node; 
        cout<<"Enter data : "<<i+1; 
        cin>>temp->data; 
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL) {
            head=temp;
            tail=temp;
        }
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
    }
}
}
void view(){
    node* traverse; 
    traverse=head;
    while(traverse!=NULL){
        cout<<traverse->data<<" "; 
        traverse=traverse->next;  
    }
    cout<<endl;
}
void odd(){
    node* c=head;
    cout<<"Odd numbers in the doubly linked linked list";
    while(c!=NULL){
        if(c->data%2==1){
           cout<<c->data<<" ";
        }
        c=c->next;
    }
    
}
int main(){
  create();
  cout<<"Doubly linked list is: ";
  view();
  odd();
    return 0;
}
