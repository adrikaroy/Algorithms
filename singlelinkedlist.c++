#include<iostream>
using namespace std;
class Node
 {  public:
 	 int data;
 	 Node *next;

 	Node(int d)
 	{
 		data=d;

 	}
 };

Node *start = NULL;

 void insertlast(int d)
 {
 	Node *temp=start;
 	Node *node= new Node(d);	//node->data=d
 	node->next=NULL;
 	if(start==NULL)
 	{
 		start=node;
 	}
 	while(temp->next!=NULL)
 	{
 		temp=temp->next;
 	}
 	temp->next=node;
 }

void insertfirst(int d)
{
	Node *temp=start;
	Node *node=new Node(d);
	start=node;
	node->next= temp;
}

void insertmiddle(int d,int sdata)
{
	Node *temp=start;
	Node *node= new Node(d);
	if(start==NULL)
	{
		cout<<"empty";
	}
	while(temp->next!=NULL && temp->data!=sdata)
	{
		temp=temp->next;
	}
	if(temp->next!=NULL)
	{
		node->next=temp->next;
		temp->next=node;

	}
	else
		cout<<"not found";

}
void display()
{	Node *temp=start;
	while(temp!=NULL)
	{ 
	  cout<<temp->data<<"->";
	  temp=temp->next;
	}cout<<"\n";
}

main()
{
	int d,sdata;
	int c;
	while(1)
	{
	cout<<"1. Insert at the begnning\n";
	cout<<"2. Insert at the end\n";
	cout<<"3. Insert in the middle\n";
	cout<<"4. Display\n";
	cin>>c;
	switch(c)
	{
		case 1: cout<<"enter the data to be inserted\t";
				cin>>d;
				insertfirst(d);
				break;
				
		case 2: cout<<"enter the data to be inserted\t";
				cin>>d;
				insertlast(d);
				break;
					
		case 3: cout<<"enter the data to be inserted\t";
				cin>>d;
				cout<<"enter the data after which it is to be inserted\t";
				cin>>sdata;
				insertmiddle(d,sdata);
				break;
					
		case 4: display();
				break;
		
	}
	}
	
}
























