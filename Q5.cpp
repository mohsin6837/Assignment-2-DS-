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
int counter(int value){
    node* current=head;
    int count=0;
    while(current!=NULL) {
        if(current->data==value) {
            count++;
        }
        current=current->next; 
    }
    return count;
    
    
}
int main(){
    char choice; 
  create();
  cout<<"Doubly linked list is: ";
  view();
  cout<<endl; 
  do{
 
      int x; 
      cout<<"Enter the element whose occurrence is to be calculated: ";
      cin>>x; 
      cout<<"Frequency of "<<x<<"="<<counter(x)<<endl;
      cout<<"Do you want to continue(y/n)";
      cin>>choice;
      cout<<endl; 
   }while(choice=='y');
    return 0;
}
