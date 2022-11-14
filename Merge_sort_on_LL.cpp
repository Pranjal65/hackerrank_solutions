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
void link(node* &head){
	node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=head;
}

void insert(node* &head,int val){
	node* n=new node(val);
	node* temp=head;
	if(head==NULL){
		head=n;
		
	}
	else{
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	}
}
void display(node* head){
	node* temp=head;
	while(temp->next!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data<<"->"<<"NULL"<<endl;
}
void display1(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

void breake(node* &head)
{
	node* temp;
	node* slow=head;
	node* fast=head;
	
	while(fast!=head && fast->next!=head){
		fast=fast->next->next;
		slow=slow->next;
	}
	display(head);
	temp=slow->next;
	slow->next=NULL;
	display(temp);
	
	
	
}


int main(){
	node* head=NULL;
	insert(head,1);
	insert(head,5);
	insert(head,6);
	insert(head,4);
	insert(head,2);
	insert(head,3);
	//display(head);
	link(head);
	display(head);
	breake(head);
}
