/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
 
struct btnode
{
    int value;
    struct btnode *l;
    struct btnode *r;
}*root = NULL, *temp = NULL, *t2, *t1;
 
void delete1();
void insert();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void display(struct btnode *t);

int flag = 1;
    
int main()
{
    int ch;
 
    printf("\nOPERATIONS ---");
    printf("\n1 - Insert an element into tree\n");
    printf("3 - Inorder Traversal\n");
    printf("4 - Preorder Traversal\n");

    while(1)
    {
        printf("\nEnter your choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:    
            insert();
            break;
        case 3:    
            inorder(root);
            break;
        case 4:    
            preorder(root);
            display(root);
            break;
        case 6:    
            exit(0);
        default :     
            printf("Wrong choice, Please enter correct choice  ");
            break;    
        }
    }
}
 
void insert()
{
    create();
    if (root == NULL) 
        root = temp;
    else    
        search(root);    
}
 
void create()
{
    int data;
 
    printf("Enter data of node to be inserted : ");
    scanf("%d", &data);
    temp = (struct btnode *)malloc(1*sizeof(struct btnode));
    temp->value = data;
    temp->l = temp->r = NULL;
}
 
void inorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if (t->l != NULL)    
        inorder(t->l);
    printf("%d -> ", t->value);
    if (t->r != NULL)    
        inorder(t->r);
}
void display(struct btnode *t)
{
    if(root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    if(t->l!=NULL)
    display(t->l);
    else
    display(t->r);
}

void preorder(struct btnode *t)
{
    if (root == NULL)
    {
        printf("No elements in a tree to display");
        return;
    }
    printf("%d -> ", t->value);
    if (t->l != NULL)
        preorder(t->l);
    if (t->r != NULL)
        preorder(t->r);
}

void search(struct btnode *t)
{
    if ((temp->value > t->value) && (t->r != NULL))      
        search(t->r);
    else if ((temp->value > t->value) && (t->r == NULL))
        t->r = temp;
    else if ((temp->value < t->value) && (t->l != NULL))    
        search(t->l);
    else if ((temp->value < t->value) && (t->l == NULL))
        t->l = temp;
}


