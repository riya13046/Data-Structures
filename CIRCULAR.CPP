#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 6
void insert(int);
void deletion();
void display();
int front=-1,rear=-1,queue[CAPACITY];
void main(){
int ch,e,ele;
clrscr();
while(1){
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Traverse\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1: printf("Enter the element\n");
	scanf("%d",&ele);
	insert(ele);
	break;
case 2:deletion();
       break;
case 3:display();
       break;
case 4:exit(1);
default:printf("Enter valid choice\n");
}
}
getch();
}
void insert(int element){
if((rear==CAPACITY-1&&front==0)||front==rear+1){
printf("Circular queue is full\n");
}
else if(rear==-1 && front==-1){
rear=front=0;
queue[rear]=element;
}
else if(rear==CAPACITY-1){
rear=0;
queue[rear]=element;
}
else{
rear++;
queue[rear]=element;
}
}
void deletion(){
int element;
if(front==-1&& rear==-1){
printf("Circular queue is empty\n");
}
else if(front==rear){
element= queue[front];
rear=front=-1;
printf("%d is deleted\n",element);
}
else if(front==CAPACITY-1){
element=queue[front];
front=0;
printf("%d is deleted\n",element);
}
else{
element=queue[front];
front++;
printf("%d is deleted\n",element);
}
}
void display(){
int i;
if (front==-1&&rear==-1){
printf("List is empty\n");
}
else if(front>rear){
for(i=front;i<CAPACITY;i++){
printf("%d ",queue[i]);
}
if(rear!=CAPACITY-1){
for(i=0;i<=rear;i++){
printf("%d ",queue[i]);
}
}
}
else{
for(i=front;i<=rear;i++){
printf("%d ",queue[i]);
}
}
printf("\n");
}