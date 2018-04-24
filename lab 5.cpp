#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
struct Node* head;
void Delete(int n)
{
	struct Node*temp1=head;
	if(n==1)
	{
		head=temp1->next;
		free(temp1);
		return;
	}
	for(int i=0;i<n-2;i++)
	{
		temp1=temp1->next;
	}
	struct Node*temp2=temp1->next;
	temp1->next=temp2->next;
	free(temp2);
}
void add(int x)
{
	struct Node* temp=(Node*)malloc(sizeof(struct Node));
	temp->data=x;
	temp->next=head;
	head=temp;
	
}
void display()
{
	struct Node* temp=head;
	cout<<"List is= ";
	while(temp!=NULL)
	{
		cout<<" "<<temp->data;
		temp=temp->next;
	}
	cout<<endl;
}

int main()
{
	head=NULL;
	cout<<"How many numbers?: ";
	int n,i,x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the number= ";
		cin>>x;
		add(x);
		display();
	}
	cout<<"Enter no. you want to delete= ";
			int k;	
			cin>>k;	
			Delete(k);
			display();
	
}
