#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node* next;
		node*prev;
		node(int val){
			data=val;
			next=NULL;
		}
};

void insert(node* &head, int val){
	node* n=new node(val);
	if(head==NULL){
		head=n;
		head->prev=NULL;
	}
	else{
		node* temp=head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
		n->prev=temp;
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

void triplet(node* &head ,int x){
	int y=x;
	node* temp=head;
	node* temp1=head;
	node* ptr1;
	node* ptr2;
	while(temp->next!=NULL){
		cout<<"yesssssssss"<<endl;
		temp=temp->next;	
	}
	while(temp1->next!=NULL){
		ptr1=temp1->next;
		ptr2=temp;
		//cout<<ptr1->data<<"ptr1"<<endl;
		//cout<<ptr2->data<<"ptr2"<<endl;
		int sum=y-temp1->data;
		//cout<<"summmmm "<<sum<<endl;
		while(ptr1!=ptr2 ){
			//cout<<"noooooooo"<<endl;
			if((ptr1->data+ptr2->data)<sum){
				//cout<<"if sum"<<ptr1->data+ptr2->data<<endl;
				ptr1=ptr1->next;
			}
			else if((ptr1->data + ptr2->data)>sum){
				//cout<<" else if sum"<<ptr1->data+ptr2->data<<endl;
				ptr2=ptr2->prev;
			}
			else if((ptr1->data + ptr2->data)==sum){
				//cout<<"else else if sum"<<ptr1->data+ptr2->data<<endl;
				//cout<<"hmmmmmmmmmmm"<<endl;
				cout<<temp1->data<<" "<<ptr1->data<<" "<<ptr2->data<<endl;
				ptr1=ptr1->next;
			//	ptr2=ptr2->prev;
			}
			
		}
		temp1=temp1->next;
	}
}



int main(){
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	display(head);
	triplet(head,11);
	
}
