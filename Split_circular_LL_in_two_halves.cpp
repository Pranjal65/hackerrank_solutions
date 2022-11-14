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

void breake(node* &head)
{
	node* temp;
	node* slow=head;
	node* fast=head->next;
	
	while(fast!=head && fast->next!=head){
		fast=fast->next->next;
		slow=slow->next;
	}
	cout<<"slow:  "<<slow->data<<endl;
	cout<<"fast:  "<<fast->data<<endl;
	// here we form our first circular LL 
	node* head1_ref=head;  // head of first LL
	node* head2_ref=slow->next;  // head of second LL
	slow->next=head1_ref; //we connect our last node of first LL to head of first LL
	// to connect last node of second LL to head of second LL 
	node* cur=head2_ref;
	while(cur->next!=head){
		cur=cur->next;
	}
	cur->next=head2_ref;
	display(head1_ref);
	display(head2_ref);
    	
	
	
	
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
