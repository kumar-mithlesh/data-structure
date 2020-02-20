#include<stdio.h>
#include<conio.h>


struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert ();
void random_delete();
void main ()
{
    int choice =0;
    while(choice != 3)
    {
        printf("choose to \n\n1.Insert in the list \n\n2.choose to delete the node that is not armstrong at a specified position \n \n3.Exit\n");
        printf("\nEnter your choice?\n");
        scanf("\n%d",&choice);
        switch(choice)
        {
            case 1:
                beginsert();
                break;
            case 2:
                random_delete();
                break;
            case 3:
                exit(0);
            default:
                printf("please enter a valid choice");
        }
    }
}

void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *) malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d",&item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted\n\n");
    }

}

void random_delete()

{
    struct node *ptr,*ptr1;
    int loc,i;
    printf("\n Enter the location of the node after which you want to perform deletion \n");
    scanf("%d",&loc);
    ptr=head;
    int originalNum, remainder, result = 0;
    originalNum=ptr->data;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        originalNum /= 10;
    }

    if (result == ptr->data)
        printf("%d is an Armstrong number. cant be deleted", ptr->data);
    else
        {


    for(i=1;i<loc;i++)
    {
        ptr1 = ptr;
        ptr = ptr->next;

        if(ptr == NULL)
        {
            printf("\nlist id under flow,Can't delete");
            return;
        }
    }

    free(ptr);
    printf("\nDeleted node %d value of deleted node is %d\n",loc);
        }
}








