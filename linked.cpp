#include<iostream>
using namespace std;
class LinkedList{
    int value;
    LinkedList *next;
    public:
    LinkedList(){
        this->value=0;
        this->next=NULL;
    }
    LinkedList *create(int value){
        LinkedList* node=new LinkedList();
        node->value=value;
        node->next=NULL;
        return node;
    }
    void insert(int value){
        LinkedList *temp=this;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=create(value);
    }
    void display(){
        LinkedList* temp=this;
        while(temp!=NULL) {
            cout<<temp->value<<" "; 
            temp=temp->next;
        }
        cout<<endl;
    }
    
};
int main(){
    LinkedList *head=new LinkedList();
    head=head->create(5);
    for(int i=0;i<5;i++){
        head->insert(i);
    }
    head->display();
}