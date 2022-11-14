#include<iostream>
using namespace std;


class node{
	public:
		int data;
		node*  next;
		node(int val){
			data=val;
			next=NULL;
			
		}
};


void insert(node* &head, int val){
	node* n=new node(val);
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

void display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

node* reverse(node* &head){
	node* prev=NULL;
	node* nxt=NULL;
	node* cur=head;
	while(cur!=NULL){
		prev=cur->next;
		cur->next=nxt;
		nxt=cur;
		cur=prev;	
	}
	return nxt;
}

void palindrom(node* &head){
	node* head1=head;
	cout<<head1->data<<endl;
	node* head2=reverse(head);
	int k=0;
	while(head1!=NULL  && head2!=NULL){
		if(head1->data!=head2->data){
			k++;
		}
		head1=head1->next;
		head2=head2->next;
	}
	if(k!=0){
		cout<<"nooo"<<endl;
	}
	else{
		cout<<"yesss"<<endl;
	}
}
 
int main(){
	
	node* head=NULL;
	insert(head,1);
	insert(head,5);
	insert(head,6);
	insert(head,7);
	insert(head,6);
	insert(head,5);
	insert(head,1);
	display(head);
//	display(reverse(head));
	palindrom(head);
	
}
