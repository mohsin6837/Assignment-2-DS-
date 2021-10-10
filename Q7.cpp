#include <iostream>
using namespace std;
struct node{
    int data; 
    node* next; 
    node* prev; 
}*head=NULL, *tail; 
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
void deletion(node**ref, int x) {
   node* temp=*ref,*prev;
   while(temp!=NULL && temp->data==x) {
       *ref=temp->next; 
       free(temp);
       temp=*ref; 
   }
   while(temp!=NULL){
      while(temp!=NULL && temp->data!=x){       prev=temp;
          temp=temp->next; 
      }
      if(temp==NULL){
        return; 
      }
      prev->next=temp->next; 
      free(temp);
      temp=prev->next; 
    }
 }   
int main(){
  int d; 
  create();
  cout<<"Doubly linked list before deletion is: ";
  view();
  cout<<"Enter the element to be deleted: ";
  cin>>d; 
  deletion(&head, d); 
  cout<<"Doubly linked list after deletion :";
  view();
  return 0;
}
    