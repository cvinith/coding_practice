
 #include<stdio.h>

 #include<stdlib.h>

 struct node
  {
    int data;
    struct node *link;
  };

  struct node *top=NULL;


 void push()
  {
   int ele;

   printf("enter data to push\n");
   scanf("%d",&ele);

   struct node *temp;
   temp=(struct node *)malloc(sizeof(struct node));
   
   temp->data=ele;
   temp->link=NULL;

   if(top==NULL)
   {
    top=temp;
   }

   else

   {
   temp->link=top;
   top=temp;
   }
 }




 void traverse()
  {
   if(top==NULL)
   printf("stack is empty\n");
  else
   {
    struct node * temp;
    temp=top;
    while(temp!=NULL)
     {
      printf("%d\t",temp->data);
      temp=temp->link;
     }
     printf("\n");
   }
 }




 void main()
  {
   int ele;

    while(1)
     {
	printf("1:push element into stack \n");
	printf("2:traversing the elements in satck\n");
	printf("enter your choice \n");
	scanf("%d",&ele);

	switch(ele)
	 {

	  case 1:
	  push();
	  break;


	  case 2:
	  traverse();
	  break;

        }
     }
   }













