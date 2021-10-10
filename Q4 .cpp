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
        cout<<"Enter data  "<<i+1<<": "; 
        cin>>temp->data; 
        temp->next=NULL;
        temp->prev=NULL;
        if(head==NULL){
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
int max(){ 
    node* a=head;
    int max;
    if(head==NULL){
       cout<<"List is empty ";
    }
    else{
       max=head->data; 
    while(a!=NULL){
       if(max<a->data) {
          max=a->data; 
       }
       a=a->next; 
    }
    }  
    return max;   
  
}
int min(){ 
    node* a=head;
    int min;
    if(head==NULL){
       cout<<"List is empty ";
    }
    else{
       min=head->data; 
    while(a!=NULL){
       if(min>a->data) {
          min=a->data; 
       }
       a=a->next; 
    }
    }  
    return min;   
  
}

int main(){
    char choice; 
  create();
  cout<<"Doubly linked list is: ";
  view();
  cout<<"Maximum ="<<max()<<endl;
  cout<<"Minimum="<<min();

  return 0;
}
    