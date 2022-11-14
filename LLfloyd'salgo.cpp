//dect and remove the cycle from linked list 

#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node(int val){
			data=val;
			next=NULL;
		}
};

void InsertAtTail(node* &head,int val){
	node *n=new node(val);
	
	if(head==NULL){
		head=n;
	}
	else{
		node* temp=head;
		while(temp->next!=NULL){
	    	temp=temp->next;
    	}
    	temp->next=n;
		
	}
	
}

void makecycle(node* &head, int pos){
	cout<<"makecycle"<<endl;
	node* temp=head;
	node* start;
	int count=1;
	while(temp->next!=NULL){
		if(pos==count){
			start=temp->next;
		}
		count++;
		temp=temp->next;
	}
	temp->next=start;
	
}
bool detectcycle(node* &head){
	node* slow=head;
	node* fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(fast==slow){
			cout<<"cycle is present"<<endl;
			return true;
		}
	}
	cout<<"cycle is absent"<<endl;
	return false;
}

void display(node* &head){
	cout<<"displaying linked list:  "<<endl;
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void removecycle(node* &head){
	node* slow=head;
	node* fast=head;
	do{
		slow=slow->next;
		fast=fast->next->next;
	}while(slow!=fast);
	fast=head;
	while(slow->next!=fast->next){
		slow=slow->next;
		fast=fast->next;
	}
	slow->next=NULL;
	
}


int main(){
	node* head=NULL;
	InsertAtTail(head,10);
	InsertAtTail(head,20);
    InsertAtTail(head,30);
    InsertAtTail(head,40);
    InsertAtTail(head,50);
    InsertAtTail(head,60);
    display(head);
    makecycle(head,3);
    detectcycle(head);
    removecycle(head);
    detectcycle(head);
    display(head);
	
}
