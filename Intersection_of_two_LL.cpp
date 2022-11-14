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

node* intersection(node* &head1, node* &head2){

	node* ptr1=head1;
	node* ptr2=head2;
	node* res=new node(-1);
	node* cur=res;
	while(ptr1!=NULL && ptr2!=NULL){
		if(ptr1->data == ptr2->data){
			node* temp= new node(ptr1->data);
			cur->next=temp;
			cur=cur->next;
			if(ptr1!=NULL) ptr1=ptr1->next;
			if(ptr2!=NULL) ptr2=ptr2->next;	
			
		}
		else{
			if((ptr1->data)<(ptr2->data) && ptr1!=NULL){
			    if(ptr1!=NULL) ptr1=ptr1->next;
		    }
		    else if(ptr1->data >ptr2->data && ptr2!=NULL ){
		     	if(ptr2!=NULL) ptr2=ptr2->next;
		    }
		}
	}
	return res->next;;
}
int main(){
	node* head1=NULL;
	node* head2=NULL;
	insert(head1,2);
	insert(head1,4);
	insert(head1,5);
	insert(head1,8);
    //insert(head1,11);
    insert(head2,4);
    insert(head2,5);
	insert(head2,6);
    insert(head2,8);
	insert(head2,11);
	
	display(head1);
	display(head2);
	display(intersection(head1,head2));
	
}
