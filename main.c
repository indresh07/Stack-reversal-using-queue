/*************************************************************************************************************************************************************************************
Name	: Indresh Kumar Gupta
Roll 	: B15317
Purpose	: IC-250 Assignment-04 Part-2 : To reverse stack using recursion
Date	: 6/09/16
***************************************************************************************************************************************************************************************/

#include"stack_library.h"

//function reverse stack using recursion
node* stackRev(node* prev, node* cur){
	
	node* tmp;
	tmp = prev;
	
	if(cur != NULL){
		tmp = stackRev(cur, cur->next);
		cur->next = prev;
		
	}

	return tmp;
}

int main(int argc, char** argv){
	
	char ch;
	node* top = NULL;

	system("clear");
	printf("Enter a string (Note: the string will be written in reverse order orginally.) : ");

	ch = getchar();
		
	while(ch != 10){
		
		top = push(top, ch);
		
		ch = getchar();
	}

	printf("String (after storing in stack) : ");
	display(top);

	top = stackRev(NULL, top);

	printf("Original string obtained after reversing the stack : ");
	display(top);

	destroy(top);

	return 0;
}	
