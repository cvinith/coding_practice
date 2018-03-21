
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



 void pop()
 {
  if(top==NULL)
   printf("there are no elements to pop");

  else
  {
   struct node *temp;
   temp=top;
   top=temp->link;
   temp->link=NULL;
   free(temp);
  }
 }

 int length()
  {
    struct node *temp;
    temp=top;
    int count=0;
    while(temp!=NULL)
     {
      count++;
      temp=temp->link;
     }
   return count;
 }





 void main()
  {
   int ele;

    while(1)
     {
	printf("1:push element into stack \n");
	printf("2:traversing the elements in satck\n");
        printf("3:popping the elements\n");
	printf("4:length of stack\n");
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

          case 3:
          pop();
          break;


          case 4:
          printf("length os stack is :%d \n",length());
          break;
 

       }
     }
   }













