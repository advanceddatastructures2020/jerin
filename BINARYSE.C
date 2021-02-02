#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct btnode
{
  int value;
  struct btnode *1;
  struct btnode *r;
  } *root= NULL, *temp= NULL, *t2,*t1;  void  delete1();
  void insert();
  void delete1();
  void inorder(struct btnode *t);
  void create();
  void search(struct btnode *t);
  void preorder(struct btnode *t);
  void postorder(struct btnode *t);
  void search1(struct btnode *t,int data);
  int smallest(struct btnode *t);
  int largest(struct btnode  *t);


  int flag=1;

  void main()
  {
     int ch;
     printf("\nOPERATIONS---");
     printf("\n1 - Insert an element into tree\n");
     printf("\n 2- Delete an element from  tree\n");
     printf("\n 3 - InOrder Traversal\n");
     printf("\n 4 - PreOrder Traversal\n");
     printf("\n 5 - PostOrder Traversal\n");
     printf("\n 6 - Exit\n");
     while(1)
     {
       printf("Enter your choice");
       scanf("%d",&ch);
       switch(ch)
       {
	  case 1:Insert();
	  break;
	  case 2:Delete();
	  break;
	  case 3: inorder(root);
	  break;
	  case 4: preorder(root);
	  break;
	  case 5: postorder(root);
	  break;
	  case 6:exit(0);
	  default:
	    printf("Wrong Choice Please enter correct choice");
	    break;
       }
       }
       }
	  void insert()
       {
	 create();
	 if(root== NULL)
	 root=temp;
	 else
	 search(root);
       }
       void create()
     {
      int data;
      printf("Enter data of node  to be inserted");
      scanf("%d",&data);
      temp=(struct btnode * ) malloc(1 * sizeof(struct btnode));
      temp->value=data;
      temp->1 = temp->r = NULL;
      }
      void search(struct btnode *t)
     {
       if  ((temp->value>t->value) && (t->r != NULL))
       search(t->r);
       else if((temp->value > t->value) && (t->r==NULL))
       t->r=temp;
       else if((temp->value < t->value) && (t->1 !=NULL))
       search(t->1);
       else if  ((temp->value < t->value) && (t->1 == NULL))
       t->*1 = temp;
     }


       void inorder(struct btnode *t)
     {
	if(root == NULL)
     {
	printf("No elements in a tree to display");
	return;
     }
       if (t->1 != NULL)
	   inorder(t->1);
	   printf("%d -> ",t->value);
	   if  (t>r ! = NULL)
	   inorder(t->r);
     }

