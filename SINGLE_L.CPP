#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* root=NULL;
void append();
int length();
void display();
void add_begin();
void add_after();
void deletion();
void main()
{
int ch,c;
clrscr();
while(1){
printf("Perform all the linked list operations\n");
printf("1.Append\n");
printf("2.Insertion at begin\n");
printf("3.Insertion at end\n");
printf("4.Length\n");
printf("5.Deletion\n");
printf("6.Display\n");
printf("7.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: append();
	break;
case 2: add_begin();
	break;
case 3: add_after();
	break;
case 4: c=length();
	printf("LENGTH : %d\n",c);
	break;
case 5: deletion();
	break;
case 6: display();
	break;
case 7:exit(0);
default:printf("INVALID CHOICE\n");
}
}
getch();
}
void append()
{
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter node data\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL){
root=temp;
}
else{
struct node* p;
p=root;
while(p->link!=NULL)
{
p=p->link;
}
p->link=temp;
}
}
int length(){
int count=0;
struct node* temp;
temp=root;
while(temp!=NULL){
count++;
temp=temp->link;
}
return count;
printf("\n\n");
}
void display(){
struct node* temp;
temp=root;
if(temp==NULL){
printf("List is empty\n");
}
else{
while(temp!=NULL){
printf("%d-->",temp->data);
temp=temp->link;
}
printf("\n\n");
}
}
void add_begin(){
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->link=NULL;
if(root==NULL)
{
root=temp;
}
else{
temp->link=root;
root=temp;
}
}
void add_after(){
struct node*temp,*p;
int loc,i=1;
printf("Enter the location\n");
scanf("%d",&loc);
if(loc>length()){
printf("Invalid location\n");
printf("Currently list having %d nodes",length());
}
else{
p=root;
while(i<loc){
p=p->link;
i++;
}
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->link=p->link;
p->link=temp;
}
}
void deletion(){
struct node*temp;
int loc;
printf("Enter location to delete\n");
scanf("%d",&loc);
if(loc>length()){
printf("Invalid location\n");
}
else if(loc==1){
temp=root;
root=temp->link;
temp->link=NULL;
free(temp);
}
else{
struct node*p,*q;
p=root;
int i=1;
while(i<loc-1){
p=p->link;
i++;
}
q=p->link;
p->link=q->link;
q->link=NULL;
free(q);
}
}
