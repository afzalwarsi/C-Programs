
//1.  Header Files
#include <stdio.h>
#include <stdlib.h>

// Function prototype
 struct node* print_list(struct node head);

//Structures: User Defined Data Types
 struct node
 {
 int data;
 struct node* next;
 };

// Main Function

int main()
{
struct node *head;

//struct node one.next=NULL;
//struct node two.next=NULL;
//struct node three.next=NULL;
//struct node four.next= NULL;

struct node one;
struct node two;
struct node three;
struct node four;

// data section of node initialize
   one.data= 1;
   two.data=2;
   three.data=3;
   four.data=4;

// Creation of Links as its not contigous memory
  head = &one;
  one.next = &two;
  two.next = &three;
  three.next= &four;
  four.next = NULL;

//---- Brute Force way to print nodes--------------------

printf("\n Head Address is: %p", head);
printf("\n 1st Node Address is: %p", one.next);
printf("\n 2nd Node Address is: %p", two.next);
printf("\n 3rd Node Address is: %p", three.next);
printf("\n 4th Node Address is: %p", four.next);

// values of nodes

//printf("\n Head Address is: %d", head);
printf("\n 1st Node Value is: %d", one.data);
printf("\n 2nd Node Value is: %d", two.data);
printf("\n 3rd Node Value is: %d", three.data);
printf("\n 4th Node Value is: %d", four.data);
 
//----------------------------------------------------
//

return 0;
}

struct node* print_list(struct node head)
{

	
}



