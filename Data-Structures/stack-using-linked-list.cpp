#include <iostream>
using namespace std;
struct node
{
   int data;
   struct node *next;
};
node *top=NULL;
int len=0;
void push(int n){
	node *temp = new node();
	temp->data=n;
	temp->next =top;
	len++;
	top=temp;
}
void pop(){
	if(top==NULL){
		cout<<"Stack is empty";
	}
	top=top->next;
	len--;
}
int peak(){
	return top->data;
}
bool isempty(){
	if(top==NULL){
		return 1;
	}
	return 0;
}
int sizeofstack(){
	return len;
}
int main() {
    		push(5);
    		push(4);
    		push(8);
    		pop();
    		push(1);
    		cout<<"Peak element is -> "<<peak()<<endl;
    		cout<<isempty()<<endl;
    		cout<<len;
	return 0;
}