 #include<stdio.h>
 #include<stdlib.h>

 struct node
  {
   struct node *left;
   int data;
   struct node *right;
  };


 struct node *root=NULL;

 void insert();

 int length();

 void traverse();

 void addAtBegin();

 void addAfter();

 void traverseInReverse();
 
 void deleteAtEnd();

 void addBefore();

 void deleteAtBegin();

 void delete();

 void main()
  {
   int n,l;

  while(1)
   {
	printf("*****main menu*****\n");
        printf("1: to insert\n");
	printf("2: length of Dll\n");
        printf("3: traversing the elements\n");
	printf("4: adding node at beginng of dll\n");
        printf("5: adding a new node after a particular node\n");
	printf("6: traversing the elements in reverse\n");
	printf("7: deleting last node in dll\n");
        printf("8: adding a new node before a particular node\n");
	printf("9: deleting a node at beginning\n");
	printf("10:delete a node at a particular position\n");
	printf("enter your choice\n");
	scanf("%d",&n);
	
	switch(n)
	{
	 case 1:
	 insert();
	 break;

	 case 2:
	 l=length();
         printf("length of a doublelinkedlist is :%d\n",l );
	 break;
	
	 case 3:
         traverse();
         break;

	 case 4:
	 addAtBegin();
	 break;

	 case 5:
	 addAfter();
	 break;

	 case 6:
 	 traverseInReverse();
         break;

         case 7:
         deleteAtEnd();
         break;

	 case 8:
	 addBefore();
	 break;

 	 case 9:
	 deleteAtBegin();
	 break;

	 case 10:
	 delete();
 	 break;
	}
    }
  }


 void insert()
  {
   int n;
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter data to insert : ");
   scanf("%d",&n);
   p=root;
   temp->data=n;
   temp->left=NULL;
   temp->right=NULL;

     if(root==NULL)
      {
	root=temp;
      }

      else

      {
        while(p->right!=NULL)
        {
         p=p->right;
        }
        temp->left=p;
        p->right=temp;
     }
 }



 int length()
  {
   int count=0;
   struct node *temp;
   temp=root;
   
  while(temp!=NULL)
   {
    count++;
    temp=temp->right;
   }
 
     return count;

  }



 void traverse()
  {
   struct node *temp;
   temp=root;
   if(temp==NULL)
   {
    printf("there are no elements to traverse\n");
   }
   else
   {
    while(temp!=NULL)
     {
      printf("%d\t",temp->data);
      temp=temp->right;
     }
   printf("\n");
   }
  }
 

 void addAtBegin()
 {
  int ele;
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("enter data : ");
  scanf("%d",&ele);
  temp->data=ele;
  temp->right=NULL;
  temp->left=NULL;

  if(root==NULL)
   {
    root=temp;
   }
  else
   {
    temp->right=root;
    root->left=temp;
    root=temp;
   }
 }


 void addAfter()
  {
  int i,key=1,ele;
  struct node *temp,*p,*store_next;
  p=root;
  temp=(struct node*)malloc(sizeof(struct node));
  printf("after which node you want add a new node : ");
  scanf("%d",&i);
  printf("enter data to insert :");
  scanf("%d",&ele);

  while(key!=i)
  {
  p=p->right;
  key++;
  }
  temp->data=ele;
  temp->right=p->right;
  temp->left=p;
  if(p->right==NULL)
  {
    p->right=temp;
  }
  else
  {
   p->right->left=temp;
   p->right=temp;
  }
  
 }


 void traverseInReverse()
  {
   struct node *temp;
   temp=root;
   if(temp==NULL)
   {
    printf("there are no elements to traverse\n");
   }
   else
   {
    while(temp->right!=NULL)
     {
      temp=temp->right;
     }
    while(temp!=NULL)
     {
      printf("%d\t",temp->data);
      temp=temp->left;
     }
   printf("\n");
  }
 }

   

 void deleteAtEnd()
 {
  struct node *temp;
  temp=root;
  
  

  while(temp->right!=NULL)
  {
   temp=temp->right;
  }
  if(root==temp)
  {
   root=temp->right;
   temp->right=NULL;
   free(temp);
  }
  
  temp->left->right=NULL;
  temp->left=NULL;
  free(temp);
  printf("element deleted succesfully\n"); 
 }


 void addBefore()
  {
   int ele,i,j=1;
   struct node *temp,*p,*q;
   p=root;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter before which node you want to add a new node");
   scanf("%d",&i);
   printf("enter data");
   scanf("%d",&ele);
   temp->data=ele;
   

   while(j!=i)
    {
      p=p->right;
      j++;
    }
  
  if(p==root)
  {
   temp->right=root;
   temp->left=NULL;
   root->left=temp;
   root=temp;
  }
 else
  {
   temp->right=p;
   temp->left=p->left;
   p->left->right=temp;
   p->left=temp;
  }
 }

 void deleteAtBegin()
  {
   struct node *temp;
   temp=root;
   root=temp->right;
   temp->right=NULL;
   free(temp);
  }

 void delete()
 {
  int i,j=1;
  struct node *temp;
  temp=root;
  printf("enter which node you want to delete : ");
  scanf("%d",&i);
  
  while(j!=i)
  {
   temp=temp->right;
   j++;
  }

  if(temp==root)
   {
    root=temp->right;
    temp->right=NULL;
    free(temp);
   }
   else if(temp->right==NULL)
   {
    temp->left->right=NULL;
    temp->left=NULL;
    free(temp);
   }
  else
   {
    temp->right->left=temp->left;
    temp->left->right=temp->right;
    temp->left=NULL;
    temp->right=NULL;
    free(temp);
   }
  }




















