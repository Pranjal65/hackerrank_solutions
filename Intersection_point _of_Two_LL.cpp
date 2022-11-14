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
void link(node* &head1, node* &head2 , int num){
	node* ptr1=head1;
	node* ptr2=head2;
	for(int i=0;i<num;i++){
		ptr1=ptr1->next;
	}
	while(ptr2->next!=NULL){
		ptr2=ptr2->next;
	}
	ptr2->next=ptr1;
	
	
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
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
int length(node* & head){
	node* temp=head;
	int l=0;
	while(temp!=NULL){
		temp=temp->next;
		l++;
	}
	return l;
}
//intersection point of two linked list
int intersection(node* &head1, node* &head2){
	node* ptr1=head1;
	node* ptr2=head2;
	int l1=length(head1);
	int l2=length(head2);
	
	int diff=abs(l1-l2);
	if(l2>l1){
		for(int i=0;i<diff;i++){
			ptr2=ptr2->next;
		}
	}
	else if(l1>l2){
		for(int i=0;i<diff;i++){
			ptr1=ptr1->next;
		}
	}
	while(ptr1!=ptr2){
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	if(ptr1) return ptr1->data;
	return -1;
}

int main(){
	node* head1=NULL;
	node* head2=NULL;
	int num;
	cout<<"point of intersection: "<<endl;
	cin>>num;
	insert(head1,2);
	insert(head1,4);
	insert(head1,5);
	insert(head1,8);
    insert(head1,11);
   // insert(head2,4);
    insert(head2,5);
	insert(head2,6);
	link(head1,head2,num);
    
	
	display(head1);
	display(head2);
	cout<<intersection(head1,head2);
	
}
