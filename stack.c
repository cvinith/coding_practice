 #include<stdio.h>

 #define MAX 5

 int stack[MAX];
 int top=-1;

 int isEmpty();

 int isFull();

 void push();

 void traverse();

 void pop();

 int count();



 void main()
  {
   int ele;

   while(1)
   {

    printf("1:to know stack is empty\n");
    printf("2:to know stack is full\n");
    printf("3:push element into stack\n");
    printf("4:to traverse the elements\n");
    printf("5:to pop the element\n");
    printf("6:to find length of stack\n");
    printf("enter your choice\n");
    scanf("%d",&ele);


    switch(ele)
     {

      case 1:

	if(isEmpty())
	printf("stack is empty\n");

	else
	printf("stack is not empty\n");

	break;


      case 2:

	if(isFull())
	printf("stack is Full\n");

	else
	printf("stack is not full\n");

	break;


      case 3:

	push();

	break;


     case 4:

	traverse();
	
	break;


     case 5:

	pop();

	break;


     case 6:

	printf("length of stack is %d\n",count());

	break;


     }

   }
 }



 int isEmpty()
  {
    if(top==-1)
      return 1;

  else

   return 0;
 }


 int isFull()
  {
   if(top==MAX-1)
     return 1;

  else

    return 0;
}



 void push()
  {

    if(isFull())
      {
        printf("stack is full\n");
      }

    else
     {
       int num;
       top++;
       printf("enter element to push\n");
       scanf("%d",&num);
       stack[top]=num;
       printf("element is pushed into stack");
     }
  }



 void traverse()
  {
    if(isEmpty())
    printf("stack is empty");

    else
     {

       for(int i=0;i<=top;i++)
         {
          printf(" %d\t",stack[i] );
         }
          printf("\n");
      }
   }



 void pop()
  {
   if(isEmpty())
   printf("there are no elements to pop\n");

   else
    {
      printf("%d element is poped\n",top+1); 
      top--;
    }
  }



 int count()
  {
   int count=0;

   if(isEmpty())
     return 0;

   else
    {
      for(int i=0;i<=top;i++)
        {
          count++;
        }
     return count;
    }
  }





















