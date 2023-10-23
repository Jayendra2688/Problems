#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtend(node* &head,int value){//why call by reference?
    node* n = new node(value);//creating memory in heap
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void insertAtHead(node *&head,int value){
    node* n= new node(value);
    n->next=head;
    head = n;
}
void displayLL(node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}
bool searchLL(node* head,int value){
    while(head!=NULL){
        if(head->data==value)
        return true;

        head=head->next;
    }
    return false;
}
void deleteHead(node* &head){
    head = head->next;
}
void deleteTail(node* &head){
    node* temp1;
    node* temp = head;
    if(temp->next==NULL){
        head = NULL;
        return;
    }
    while(temp->next!=NULL){
        temp1 = temp;
        temp = temp->next;
    }
    temp1->next=NULL;

}
bool deleteValue(node* &head,int value){
    node* temp1;
    node* temp = head;
    if(temp->data==value){
        head = head->next;
        return true;
    }
    while(temp!=NULL){
        if(temp->data==value){
            temp1->next=temp->next;
            free(temp);
            return true;
        }
        temp1 = temp;
        temp = temp->next;
    }
    return false;
}
void reverseLL(node* &head){
    node* prev=NULL;
    node* after;
    node* temp = head;
    while(temp!=NULL){
        after = temp->next;
        temp->next=prev;
        prev = temp;
        temp = after;
    }
    head = prev;

}
bool removeNodeAtPos(node* &head,int pos){
     node* temp = head;
     node* temp1;
     int i = 0;
     if(pos==1 && head!=NULL){
        free(temp);
        head=NULL;
        return true;
     }
     while(temp!=NULL){
        i++;
        if(i==pos){
            temp1->next = temp->next;
            free(temp);
            return true;
        }
        temp1 = temp;
        temp = temp->next;
     }
     return false;
}
void removefromBack(node* &head,int pos){
    int siz = 0;
    node* temp = head;
    while(temp!=NULL){
        siz++;
        temp=temp->next;
    }
    cout<<"siz "<<siz<<endl;
    int fpos = siz+1 - pos;
    cout<<fpos<<endl;
    int i = 0;
    node* temp1;
    temp = head;
    if(fpos==1){
        head = head->next;
        free(temp);
    }
    while(temp!=NULL){
        i++;
        if(i==fpos){
            temp1->next=temp->next;
            free(temp);
            return;
        }
        temp1 = temp;
        temp=temp->next;
    }
}

int main(){
    node* head = NULL;
    insertAtend(head,2);
    insertAtend(head,6);
    insertAtend(head,8);
    insertAtend(head,8);
    reverseLL(head);
    removefromBack(head,1);
    displayLL(head);
    // cout<<searchLL(head,3);
    return 0;
}