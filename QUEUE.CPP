#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void insert();
void deletion();
void traverse();
#define CAPACITY 5
int queue[CAPACITY],rear=0,front=0;
void main(){
int ch;
clrscr();
while(1){
printf("1.Insert\n");
printf("2.Delete\n");
printf("3.Traverse\n");
printf("4.Exit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:insert();
       break;
case 2:deletion();
       break;
case 3:traverse();
       break;
case 4:exit(1);
default:printf("Enter valid choice\n");
}
}
getch();
}
void insert(){
if(rear==CAPACITY){
printf("Queue is full\n");
}
else{
int e;
printf("Enter element\n");
scanf("%d",&e);
queue[rear]=e;
rear++;
}
}
void deletion(){
int i;
if(front==rear){
printf("Queue is empty\n");
}
else{
printf("%d deleted\n",queue[front]);
for (i=0;i<rear-1;i++){
queue[i]=queue[i+1];
}
rear--;
}
}
void traverse(){
int i;
if(rear==front){
printf("Queue is empty\n");
}
else{
printf("Queue elements :\n");
for(i=0;i<rear;i++){
printf("%d ",queue[i]);
}
printf("\n");
}
}