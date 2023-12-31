#include <stdio.h>
#include <stdlib.h>
#define MAX 3 // preprocessor directive that define MAX 3
int stack[MAX], top=-1,element; // Top is used to access the top of stack
void push();
void pop();
void display();
void main(){
	int c;
	do{ //  To display the menu to user  infinite times
		printf("\n 1. Push");
		printf("\n 2. Pop");
		printf("\n 3. Display");
		printf("\n 4. Exit");
		printf("\n Enter you choice :- ");
		scanf("%d", &c);
		
		switch(c){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;	
			default:
				exit(0);
				break;
			
		}
	}while(1);
}
void push(){ // To push an element in stack
	if(top<MAX-1){
		top++;
		printf("\n ENter element to push in stack :- ");
		scanf("%d", &element);
		stack[top] = element;
	}
	else{
		printf("\n Stack Overflow");
	}
}
void pop(){ // To pop an element from stack
	if(top==-1){
		printf("\n Stack Underflow");
	}
	else{
		printf("\n Element popped is %d ", stack[top]);
		top--;
	}
}
void display(){ // To display stack elements
	int i;
	if(top==-1){
		printf("\n Stack Empty");
	}
	else{
		for(i=top; i>-1; i--){
			printf("\n Element = %d ", stack[i]);
		}
	}
}
