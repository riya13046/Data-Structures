#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* root;
void append();
void reverse();
void swap();
int length();
void display();
void main(){
int ch;
clrscr();
while(1){
printf("1.Append\n");
printf("2.Swap\n");
printf("3.Reverse\n");
printf("4.Display\n");
printf("5.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:append();
       break;
case 2:swap();
      break;
case 3:reverse();
       break;
case 4:display();
       break;
case 5:exit(1);
default:printf("Invalid Choice\n");
}
}
getch();
}
void append(){
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
void swap(){
struct node *p,*q,*r;
int i=1,loc;
p=root;
printf("Enter location\n");
scanf("%d",&loc);
while(i<loc-1){
p=p->link;
i++;
}
q=p->link;
r=q->link;
q->link=r->link;
r->link=q;
p->link=r;
}
void reverse(){
int i,j,k,t,len;
struct node *p,*q;
len=length();
i=0;
j=len-1;
p=q=root;
while(i<j){
k=0;
while(k<j)
{
q=q->link;
k++;
}
t=p->data;
p->data=q->data;
q->data=t;
i++;
j--;
p=p->link;
q=root;
}}