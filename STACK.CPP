#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
# define CAPACITY 5
int top=-1,stack[CAPACITY];
void push(int);
int pop();
int isfull();
int isempty();
int peek();
void traverse();
void main()
{
int ch,element,item,data;
clrscr();
while(1)
{
printf("1.push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4.Traverse\n");
printf("5.Exit\n");
printf("Enter your choice : \n");
scanf("%d",&ch);
switch(ch){
case 1: printf("Enter the element\n");
	scanf("%d",&element);
	push(element);
	break;
case 2:item=pop();
       if(item==0){
       printf("stack is underflow\n");
       }
       else
       {
       printf("popped item :%d\n",item);
       }
       break;
case 3:data=peek();
       if(data==0){
       printf("stack is underflow\n");
       }
       else
       {
       printf("peek item : %d\n",data);
       }
       break;
case 4:traverse();
       break;
case 5: exit(0);
default:printf("Enter the correct choice\n");
}
}
getch();
}
void push(int e)
{
if (isfull())
{
printf("stack is overflow");
}
else
{
top++;
stack[top]=e;
printf("%d pushed\n",e);
}
}
int isfull()
{
if(top==CAPACITY-1)
return 1;
else
return 0;
}
int pop()
{
if(isempty())
return 0;
else
{
return stack[top--];
}
}
int isempty()
{
if( top==-1)
return 1;
else
return 0;
}
int peek()
{
if(isempty())
return 1;
else
{
return stack[top];
}
}

void traverse(){
int i;
if(isempty()){
printf("stack is underflow\n");
}
else
{
for(i=0 ;i<=top;i++)
{
printf("%d\n",stack[i]);
}
}
}



















#