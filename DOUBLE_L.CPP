#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
int data;
struct node*right;
struct node*left;
};
struct node *root=NULL;
void append();
void add_in_beg();
int length();
void add_after();
void deletion();
void display();
void main(){
int ch,l;
clrscr();
while(1){
printf("1.Append\n");
printf("2.Add in beg\n");
printf("3.Length\n");
printf("4.Add node after a given node\n");
printf("5.Deletion\n");
printf("6.Display\n");
printf("7.EXit\n");
printf("Enter your choice\n");
scanf("%d",&ch);
switch(ch){
case 1:append();
       break;
case 2:add_in_beg();
       break;
case 3:l=length();
       printf("%d\n",l);
       break;
case 4:add_after();
       break;
case 5:deletion();
       break;
case 6:display();
       break;
case 7:exit(1);
       break;
default:printf("Enter valid choice\n");
}
}
getch();
}
void append(){
struct node*temp;;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
if(root==NULL){
root=temp;
}
else
{
struct node*p;
p=root;
while(p->right!=NULL){
p=p->right;
}
temp->left=p;
p->right=temp;
}
}
void add_in_beg(){
struct node* temp;
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->right=NULL;
temp->left=NULL;
if(root==NULL){
root=temp;
}
else{
temp->right=root;
root->left=temp;
root=temp;
}
}
int length(){
struct node*temp=root;
int count=0;
while(temp!=NULL){
count++;
temp=temp->right;
}
return count;
}
void add_after(){
struct node*temp,*p=root;
int i=1,len,loc;
len=length();
printf("Enter location\n");
scanf("%d",&loc);
if(loc>len){
printf("Invalid location\n");
printf("List contain only %d element\n",&len);
}
else{
temp=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\n");
scanf("%d",&temp->data);
temp->left=NULL;
temp->right=NULL;
while(i<loc){
p=p->right;
i++;
}
temp->right=p->right;
temp->right->left=temp;
temp->left=p;
p->right=temp;
}
}
void deletion(){
struct node*temp;
int loc;
printf("Enter location \n");
scanf("%d",&loc);
if(loc>length()||loc<1){
printf("Invalid location\n");
}
else if(loc==1){
temp=root;
root=temp->right;
temp->right->left=NULL;
temp->right=NULL;
free(temp);
}
else{
struct node*p,*q;
p=root;
int i=1;
while(i<loc-1){
p=p->right;
i++;
}
q=p->right;
q->right->left=p;
p->right=q->right;
q->right=NULL;
q->left=NULL;
free(q);
}
}
void display(){
struct node*temp=root;
if(temp==NULL){
printf("List is empty\n");
}
else{
while(temp!=NULL){
printf("%d->",temp->data);
temp=temp->right;
}
printf("\n");
}
}