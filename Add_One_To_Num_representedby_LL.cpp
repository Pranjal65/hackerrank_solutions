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

node* reverse(node* &head){
	node* next=NULL;
	node* prev=NULL;
	node* cur=head;
	while(cur!=NULL){
		next=cur->next;
		
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	return prev;
}

node* Add_One(node* &head){
	head=reverse(head);
	cout<<head->data<<endl;
	node* temp=head;
	bool f=true;
	while(temp!=NULL && f==true){
		if(temp->next==NULL && temp->data==9){
			temp->data=1;
			cout<<"hellooooooo"<<endl;
			node* n=new node(0);
			n->next=head;
			head=n;
			temp=temp->next;
		}
		else if(temp->data==9){
		    temp->data=0;
		    temp=temp->next;
		    cout<<"yessss"<<endl;
		}
		else{
			temp->data=temp->data+1;
			temp=temp->next;
			cout<<"noooooooo"<<endl;
			f=false;
			
		}
	}
	head=reverse(head);
	return head;
}


int main(){
	
	node* head=NULL;
	insert(head,9);
	insert(head,9);
    insert(head,9);
    //insert(head,4);
    //insert(head,5);
	//insert(head,6);
	display(head);
	cout<<"reverse is:   ";
//	display(reverse(head));
	//Add_One(head);
	display(Add_One(head));
	
	
}
