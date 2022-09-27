/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void enQueue(int);
void deQueue();
void display();

int queue[10], front = -1, rear = -1,size;

void main()
{
   int value, choice;
   printf("Queue using array\n");
   printf("Enter the Queue size: ");
   scanf("%d",&size);
   while(1){
      printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
	 case 1: printf("Enter the value to be insert: ");
		 scanf("%d",&value);
		 enQueue(value);
		 break;
	 case 2: deQueue();
		 break;
	 case 3: display();
		 break;
	 case 4: exit(0);
	 default: printf("\nInvalid input");
      }
   }
}                            
void enQueue(int value){
   if(rear == size-1)
      printf("\nQueue is Full\n");
   else{
      if(front == -1)
	 front = 0;
      rear++;
      queue[rear] = value;
      printf("\n Element inserted\n");
   }
}
void deQueue(){
   if(front==-1||front>rear)
      printf("\nQueue is Empty\n");
   else{
      printf("\nDeleted : %d", queue[front]);
      front++;
   }
}
void display(){
    if(front==-1||front>rear)
      printf("\nQueue is Empty\n");
   else{
      int i;
      printf("\nQueue elements are:\n");
      for(i=front; i<=rear; i++)
	  printf("%d\t",queue[i]);
   }
}


