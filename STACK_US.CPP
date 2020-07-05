#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node* link;
};
struct node* top=NULL;
void push();
void pop();
void display();
void main(){
int ch;
clrscr();
while(1){
printf("1.Push\n");
printf("2.Pop\n");
printf("3.Traverse\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:push();
       break;
case 2:pop();
       break;
case 3:display();
       break;
case 4:exit(1);
       break;
default:printf("Enter valid choice\n");
}
}
getch();
}
void push(){
struct node*temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->link=top;
top=temp;
}
void pop(){
struct node*temp;
if(top==NULL){
printf("Stack is empty\n");
}
else{
temp=top;
printf("%d is deleted\n",top->data);
top=temp->link;
temp->link=NULL;
free(temp);
}
}
void display(){
struct node*temp;
if(top==NULL){
printf("Stack is empty\n");
}
else{
temp=top;
while(temp!=NULL)
{
printf("%d\n",temp->data);
temp=temp->link;
}
}
}