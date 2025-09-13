#include<iostream>
using namespace std ;
int stack[5];
int top=-1;
void push(){
int num;
cout << "enter number" << endl;
cin >> num;
if(top==4){
cout << "stack overflow." << endl;
}else{
top++;
stack[top]=num;
}
}
void pop(){
if(top==-1){
cout << "stack underflow." << endl;
}else{
int delete_num;
delete_num=stack[top];
top--;
cout << "deleted num is =" <<delete_num<<endl;
}
}
void peek(){
if(top==-1){
cout << "stack is empty." << endl;
}else{
cout << "top number is=" << stack[top]<<endl;

}
}
void display(){
for (int i=top;i>=0;i--){
cout << "stack elements=" <<stack[i]<< endl;
}
}
int main(){
cout << "1.  push" << endl;
cout << "2.  pop" << endl;
cout << "3.  peek" << endl;
cout << "4.  display" << endl;
int ch;
cout << "enter your choice." << endl;
cin >> ch;
switch (ch){
case 1:
{push();
break;}
case 2:
{pop();
break;}
case 3:
{peek();
break;}
case 4:
{display();
break;}
default:
{cout << "invalid choice." << endl;
break;}
}
}