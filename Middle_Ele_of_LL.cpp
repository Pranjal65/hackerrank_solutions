#include<iostream>
#include<math.h>
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
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int length(node* & head){
	node* temp=head;
	int l=1;
	while(temp->next!=NULL){
		temp=temp->next;
		l++;
	}
	return l;
}

int middle(node* &head){
	int l=length(head);
	cout<<"length is: "<<l<<endl;
	int mid=(l/2)+1;
	node* temp=head;
	
	for(int i=1;i<mid;i++){
		temp=temp->next;
		
	}
	return temp->data;
}
//another logic

int middle2(node* &head){
	node* slow=head;
	node* fast=head;
	while(fast!=NULL && fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		
	}
	return slow->data;
}

int main(){
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	//insert(head,6);
	display(head);
	cout<<middle2(head);
}
