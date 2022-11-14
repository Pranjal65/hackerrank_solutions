#include<iostream>
#include<map>
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
void insert(node* &head, int val){
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

//removing duplicates
 
node* remove(node* &head){
	map <int,int>m;
	node* cur=head;
	m[cur->data]=1;
	node* prev=cur;
	cur=cur->next;
	while(cur!=NULL){
		if(m[cur->data]){
			prev->next=cur->next;
			//delete cur;
		}
		else{
			m[cur->data]=1;
			prev=cur;
		}
		cur=cur->next;
	}
	return head;
}

 
int main(){
	node* head=NULL;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,3);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,1);
	display(head);
	remove(head);
	display(head);
	

}
