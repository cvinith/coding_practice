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

 void main()
  {
   int n,l;

  while(1)
   {
	printf("*****main menu*****\n");
        printf("1: to insert\n");
	printf("2: length of Dll\n");
        printf("3: traversing the elements\n");
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
	}
    }
  }


 void insert()
  {
   int n;
   struct node *temp,*p;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("enter data to insert");
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
































