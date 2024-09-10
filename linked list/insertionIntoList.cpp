#include <iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;
        
        node(int data){
            this-> data = data;
            this-> next = NULL;
        }
};


void insertToHead(node* &head, int data){
    
    node* temp = new node(data);
    temp-> next = head;
    head = temp;
}

void insertToTail(node* &tail, int data){
    
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertToMiddle(node* &head, node*tail , int data , int pos){
    node*temp = new node(data);
    
    if(pos == 1){
        insertToHead(head,data);
        return;
    }
    
    if(pos<= 0){
        cout<<"Range out of bound!!"<<endl;
        return;
    }
    
    
        node*helper =head;
        int count = 1;
        while(count < pos-1 && helper->next!= NULL){
           
            helper = helper->next;
            count++;
        
        }
        
        if(helper->next!=NULL){
            temp->next = helper->next;
            helper->next = temp;
            return;
        }
        
         else if(pos-count >= 2){
            cout<<"Range out of bound!!"<<endl;
            return;
        }
        
        else if(helper!=NULL && helper->next == NULL){
            insertToTail(tail , data);
            return;
        }
        
       
       

    
  
    
}

void printList(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}

     



int main()
{
    node* node1 = new node(14);
    node* head = node1;
    node* tail = node1;
    
    insertToHead(head , 10);
    insertToHead(head , 20);
    insertToHead(head , 30);
    insertToTail(tail , 10);
    insertToTail(tail , 20);
    insertToTail(tail , 30);
    insertToMiddle(head , tail , 100, 5);
    
    printList(head);
    
    

    return 0;
}
