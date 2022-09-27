#include<stdio.h>
#include<stdlib.h>
int stack[100];
int top=-1;
int size;
void push();
void pop();
void peek();
void display();

void main()
{
    int ch,t;
    printf("Enter the Stack size : ");
    scanf("%d",&size);
    while(1)
    {
    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        case 5:exit(0);
    }
    }
}
void push()
{
    int a;
    if(top==size-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        top=top+1;
        printf("Enter the data : ");
        scanf("%d",&a);
        stack[top]=a;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("The removing element is %d\n",stack[top]);
        top=top-1;
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Peek element is %d\n",stack[top]);
    }
}
void display()
{
    if(top==-1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        int i;
        printf("The Stack element are\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}



output:

Enter the Stack size : 4
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 1
Enter the data : 34
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 1
Enter the data : 56
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 1
Enter the data : 89
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 1
Enter the data : 90
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 1
Stack is full
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 4
The Stack element are
90
89
56
34
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 2
The removing element is 90
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 3
Peek element is 89
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 2
The removing element is 89
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 2
The removing element is 56
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 2
The removing element is 34
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 2
Stack is empty
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 4
Stack is empty
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 3
Stack is empty
1.Push
2.Pop
3.Peek
4.Display
5.Exit
Enter your choice : 5

