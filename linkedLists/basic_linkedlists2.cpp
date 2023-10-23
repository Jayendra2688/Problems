#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int value){
        data = value;
        next = NULL;
    }
};
node* insertAttail(node* head,int value){
    node* n = new node(value);
    if(head==NULL){
        head=n;
        return head;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=n;
    return head;

}
void displayLL(node* head){
    node* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* deletefromBack(node* head,int pos){
    node* n= new node(0);
    n->next=head;
    node* f = n;
    node* s = n;
    for(int i=1;i<=pos;i++){
        f=f->next;
    }
    while(f->next!=NULL){
        s=s->next;
        f=f->next;
    }
    s->next = s->next->next;
    return n->next;

}
int findMiddle(node* head){
    node* s = head;
    node* f = head;
    while(f!=NULL && f->next!=NULL){
        f=f->next->next;
        s=s->next;
    }
    return s->data;
}
node* merge(node* head1,node* head2){
    node* d = new node(0);
    node* dl = d;
    while(head1!=NULL && head2!=NULL){
        if(head1->data<=head2->data){
            node* n1 = new node(head1->data);
            dl->next=n1;
            dl=dl->next;
            head1=head1->next;
        }else{
            node* n1 =new node(head2->data);
            dl->next=n1;
            dl=dl->next;
            head2 = head2->next;
        }
    }
    while(head1!=NULL){
        node* n1 = new node(head1->data);
        dl->next=n1;
        dl=dl->next;
        head1 =head1->next;
    }
    while(head2!=NULL){
        node* n1 = new node(head2->data);
         dl->next=n1;
        dl=dl->next;
        head2 =head2->next;

    }
    return d->next;
}
node* inplaceMerge(node* head1,node* head2){
    if(head1==NULL)
    return head2;
    if(head2==NULL){
        return head1;
    }
    node* l1;
    node* l2;
    if(head1->data<=head2->data){
        l1 = head1;
        l2 = head2;
    }else{
        l1 =head2;
        l2 = head1;
    }
    node* res = l1;
    while(l1!=NULL && l2!=NULL){
        node* temp = NULL;
        while(l1!=NULL && l1->data<=l2->data){
            temp = l1;
            l1 = l1->next;
        }
        temp->next=l2;
        swap(l1,l2);
    }
    return res;
}
node* addLL(node* head1,node* head2){
    node* d = new node(0);
    node* dl=d;
    int carry = 0;
    while(head1!=NULL && head2!=NULL){
        int num = (head1->data+head2->data+carry)%10;
        carry = (head1->data+head2->data+carry)/10;
        node* n = new node(num);
        dl->next = n;
        dl = dl->next;
        head1 =head1->next;
        head2 = head2->next;
    }
    while(head1!=NULL){
        int num = (head1->data+carry)%10;
        carry = (head1->data+carry)/10;
        node* n = new node(num);
        dl->next = n;
        dl = dl->next;
        head1 =head1->next;
    }
    while(head2!=NULL){
        int num = (head2->data+carry)%10;
        carry = (head2->data+carry)/10;
        node* n = new node(num);
        dl->next = n;
        dl = dl->next;
        head2 =head2->next;
    }
    if(carry){
        node* n = new node(carry);
        dl->next = n;
    }
    return d->next;
}
int main(){
    node* head = NULL;
    node* head1 = NULL;
    head = insertAttail(head,2);
    head = insertAttail(head,4);
    head = insertAttail(head,3);
    displayLL(head);
    head1 = insertAttail(head1,5);
    head1 = insertAttail(head1,6);
    head1 = insertAttail(head1,7);
    head1 = insertAttail(head1,9);
    displayLL(head1);
    node* head3 = addLL(head,head1);
    displayLL(head3);
    return 0;
}