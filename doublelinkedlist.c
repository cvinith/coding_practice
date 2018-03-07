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

 void main()
  {
   int n,l;

  while(1)
   {
	printf("1: to insert\n");
	printf("2: length of Dll\n");
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





