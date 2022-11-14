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

/*node* add(node* &head1,node* &head2){
	head1=reverse(head1);
	head2=reverse(head2);
	node* temp1=head1;
	node* temp2=head2;
	node * dummy=new node(-1);
	node* ptr=dummy;
	while(temp1!=NULL || temp2!=NULL){
		if((temp1->data + temp2->data)>9 && temp1->next==NULL && temp2->next==NULL){
			node* n=new node((temp1->data + temp2->data)%10);
			node* n2=new node((temp1->data + temp2->data)/10);
			ptr->next=n;
			n->next=n2;
			
		}
		else if((temp1->data + temp2->data)>9){
			node* n=new node((temp1->data + temp2->data)%10);
			cout<<"hiiiiiiiiii"<<endl;
			ptr->next=n;
			ptr=ptr->next;
			temp1->next->data=temp1->next->data+1;
		}
		else{
			node* n=new node((temp1->data + temp2->data)%10);
			ptr->next=n;
			ptr=ptr->next;
			cout<<"nooooooo"<<endl;
			
		}
		temp1=temp1->next;
		temp2=temp2->next;
	}

	node* Head=reverse(dummy->next);
	cout<<Head->data<<endl;
	return Head;
}
*/

node* add(node* &head1 , node* &head2){
	head1=reverse(head1);
	head2=reverse(head2);
	int c=0;
	int s=0;
	
	
	node* temp;
	node* res=NULL;
	node* cur=NULL;
	while(head1!=NULL || head2!=NULL){
		s=c+(head1?head1->data:0)+(head2?head2->data:0);
		c=(s>=10)?1:0;
		s=s%10;
		temp= new node(s);
		if(res==NULL) res=temp;
		else cur->next=temp;
		cur=temp;
		if(head1) head1=head1->next;
		if(head2) head2=head2->next;
		
	}
	if(c>0){
		temp=new node(c);
		cur->next=temp;
		cur=temp;
		
	}
	res=reverse(res);
	return res;
}

int main(){
	node* head1=NULL;
	node* head2=NULL;
	insert(head1,9);
	insert(head1,9);
	insert(head1,9);
	insert(head1,9);
    
    insert(head2,4);
    insert(head2,5);
	insert(head2,6);
	display(head1);
	display(head2);
	display(add(head1,head2));
}
