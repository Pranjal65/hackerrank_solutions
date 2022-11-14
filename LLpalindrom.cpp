#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node * next;
		node* prev;
		node(int val){
			data=val;
	        //prev=NULL;
			next=NULL;
		}
};

void InsertAtTail(node* &head ,int val){
	node* n= new node(val);
	if(head==NULL){
		head=n;
	}
	else{
		node* temp =head;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=n;
	//	n->prev=temp;
	}
}
void Display(node* head){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}

/*int  length(node* &head){
	node* temp=head;
	int l=0;
	while(temp!=NULL){
		l++;
		temp=temp->next;
		
	}
	return l;
}*/
 node* reverse(node* &head){
	   
	   node* prev=NULL;
	   node* curr=head;
	   node* next;
	   
	   
	    while(curr!=NULL){
		    next=curr->next;
		    curr->next=prev;
		    prev=curr;
		    curr=next;
	 	
	   }
	   return prev;
    }

bool palindrom(node* &head){
	cout<<"in palindrom"<<endl;
	node* ptr1=head;
	node* ptr2=reverse(head);
	cout<<ptr2<<" "<<endl;
	//node* temp=head;
	//while(temp->next!=NULL){
	//	temp=temp->next;
	//}
	//ptr2=temp;
	//int count=0;
	//int l=length(head);
	while(ptr1->next!=NULL){
		cout<<"yehhhhhh in while"<<endl;
		if(ptr1->data!=ptr2->data){
			cout<<"yesss"<<endl;
			return false;
		}
	    
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	return true;
	
}


int main(){
	node* head=NULL;
	InsertAtTail(head,10);
	InsertAtTail(head,20);
	InsertAtTail(head,30);
	InsertAtTail(head,40);
	InsertAtTail(head,30);
	InsertAtTail(head,20);
	InsertAtTail(head,70);
	Display(head);
	Display(reverse(head));
	if(palindrom(head)){
		cout<<"yes it it palindrom"<<endl;
	}
	else{
		cout<<"not palindrom"<<endl;
	}
}
