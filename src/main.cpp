#include <iostream>
using namespace std; 
class Node
{
public:
Node*pre;
int data;
Node*next;
};
class dlinklist
{
public:
Node *first,*last;
public:
dlinklist()
{
first=last = NULL;
}
void insert (item);
void display ();
void insert_between (item, pos); 
void delete_between (pos);
};
void dlinklist::insert (int item)
{
Node *New-node;
New_node = new Node; 
New_node->next = NULL;
New_node→data = item;
New_node-> pre = NULL;
if (first == NULL)
{
first=last=New_node; 
return;
}
New_node->pre=last; 
last->next = New_node;
last=New_node;
}
Void dlinklist:: display()
{
Node *temp = first;
while (temp!= NULL)
{
cout << temp→data << "\t"; 
temp=temp->next;
}
} 
void dlinklist:: insert-between (int item, int pos)
{
int count = 1;
Node *New_node; *temp=first; 
New_node=New node; 
New_node → data = item;
while (cout < pos-1)
{
count ++;
temp=temp->next;
} 
temp->next →pre=New_node;
New-node → next = temp->next;
New-node->pre=temp;
temp->next = New-node;
}
void dlinklist::delete between (int pos)
{
int count = 1;
Node * temp = first; 
while (cout < pos-1)
{
cout ++;
temp = temp→ next;
} 
temp→ next ->next → pre=temp;
temp->next=temp->next->next;
}
void main()
{
int choice, item;
dlinklist dl;
do
{
cout << "\n 1.Insert \t 2. Display\t 3. Insert between \t 4.Delete between\t 5. Exit \n";
cout<<"choose your choice:\n";
cin>>choice;
Switch (choice)
{
case 1:
cout << "\n Enter element to insert: ";
cin>>item;
dl. insert(item);
break;
case 2: 
cout<<" \n Elements of double linked list are:";
dl-display();
break; 
case 3:
cout<<"\n Enter element to insert: ";
cin>> item; 
cout << "\n Enter position to insert: ";
cin >>pos;
dl.insert_between (item, pos);
break;
case 4:
  cout<<"\n Enter position to delete:";
  cin>>pos;
  dl.delete_between(pos);
  break;
  }
  }
  while(choice<5);
  }
