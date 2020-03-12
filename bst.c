#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct tree
{

    int info;
    struct tree *left,*right;
};

typedef struct tree node;

node*insert(node*,int);
void preorder(node*);
void inorder(node*);
void postorder(node*);

int count=1;

void main()
{

    struct node* root=NULL;
    int element,choice;

    while(1)
    {
      printf("Select an option\n");
      printf("\n 1 - insert");
      printf("\n 2 - Preorder");
      printf("\n 3 - Inorder");
      printf("\n 4 - Postorder");
      printf("\n 5 - Exit");
      printf("\n Enter your choice:");
      scanf("%d",&choice);

      switch(choice)
      {
      case 1:
        {
            printf("enter node value");
            scanf("%d",&element);
            root=insert(root,element);
            getch();
            break;
        }
      case 2:
        {
            preorder(root);
            getch();
            break;
        }
      case 3:
        {
            inorder(root);
            getch();
            break;

        }
      case 4:
        {
            postorder(root);
            getch();
            break;
        }
      case 5:
        {
            exit(1);
            break;
        }
      default:
          printf("invalid choice");
          getch();
          break;
      }
      }
    }


node *insert(node *r,int n)
{
    if(r==NULL)
    {
        r=(node*) malloc(sizeof(node));
        r->left=r->right=NULL;
        r->info=n;
        count=count+1;
    }
    else
  {
      if(count%2==0)
      r->left=insert(r->left,n);
     else
        r->right=insert(r->right,n);
  }
    return (r);
}

void inorder( node *r )
{
  if ( r != NULL )
  {
  inorder(r->left);
  printf("%d\n", r->info);
  inorder(r->right);
  }

}

void preorder(node *r)
{

    if ( r != NULL )
  {
  printf("%d\n", r->info);
  preorder(r->left);
  preorder(r->right);
  }
}
void postorder(node *r)
{
    if ( r != NULL )
  {
  postorder(r->left);
  postorder(r->right);
  printf("%d\n", r->info);
  }
}

