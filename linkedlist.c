  #include<stdio.h>

  #include<stdlib.h>

  struct node
	{

	int data;
	struct node* link;

	};

  struct node* root=NULL;

  void create_ll();

  void display_ll();

  void add_begin();

  void length_ll();

  void add_after();

  void add_before();

  void delete(); 

  void reverse_ll();

  void swap();

  void swap_node();


  int main()
	{
         int option;
         while(1)
          {
		printf("************main menu************\n");
		printf("1 :create a list\n");
		printf("2 :display the list\n");
		printf("3 :add at beginning\n");
		printf("4 :length of list\n");
		printf("5 :add element after particular element\n");
		printf("6 :add element before particular element\n");
		printf("7 :delete \n");
		printf("8 :reverse linked list\n");
                printf("9 :swapping of 2 numbers\n");
		printf("10 :swapping of 2 nodes\n");
		printf("enter your option:");
		scanf("%d",&option);

	switch(option)
		{

		case 1:
		create_ll();
		break;

		case 2:
		display_ll();
		break;

		case 3:
		add_begin();
		break;

		case 4:
		length_ll();
		break;

		case 5:
		add_after();
		break;

		case 6:
		add_before();
		break;

		case 7:
		delete();
		break;

		case 8:
		reverse_ll();
		break; 
		
		case 9 :
                swap_node();
		break;
	
		case 10:
		swap();
                break;

		default: printf("invalid option");

		}
	 }
      }


   void create_ll()
  {

         struct node* temp;
         int data;

         printf("enter data:");
         scanf("%d",&data);

         temp=(struct node*)malloc(sizeof(struct node));

         temp->data=data;
         temp->link=NULL;

	  if(root==NULL)
		{
                  root=temp;
                }

      else
              {
                struct node* p;
                p=root;
                while(p->link!=NULL)
                  {
                    p=p->link;
                  }
                    p->link=temp;
              }
 }


     void display_ll()
{
      if(root==NULL)
      {

           printf("there are no elements to print\n");
      
      }

      else
        
      {
          int i=1;
          struct node* p;
          p=root;
          while(p!=NULL)
     {

         printf("%d element is:%d\n",i,p->data);
         p=p->link;
         i++;
     }
    }
 }


  void add_begin()
   {

      int n;
      struct node *temp;
      temp=(struct node *)(malloc(sizeof(struct node)));
      printf("enter data");
      scanf("%d",&n);
      temp->data=n;
      temp->link=NULL;

       if(root==NULL)
        {
         root=temp;
        }

      else

        {
          temp->link=root;
          root=temp;
        }
}


    void length_ll()
       {

          if(root==NULL)
       {
         printf("no elements list is empty\n");
       }

	else
	
	{

		int count=0;
		struct node *p;
		p=root;
		while(p!=NULL)
		{
		  p=p->link;
		  count++;
	}

		printf("length of linked list is %d\n",count);
	}
}


  void add_after()
  {
	int i,n;
	printf("enter after which element you want to add another element\n");
         scanf("%d",&i);
        printf("enter data:");
         scanf("%d",&n);
       struct node* p,*temp,*ptr;
       temp=(struct node *)(malloc(sizeof(struct node)));
       temp->data=n;
       temp->link=NULL;
        p=root;

        while(p->data!=i)
          {    
		p=p->link;
          }

		

		
		temp->link=p->link;
                p->link=temp;
               
}


     void add_before()
       {
         int i,n;
          printf("enter before which element you want to add another element\n");
         scanf("%d",&i);
          printf("enter data :");
         scanf("%d",&n);
         struct node *temp,*p,*ptr;
         temp=(struct node *)(malloc(sizeof(struct node)));
         temp->data=n;
         temp->link=NULL;
         p=root;

	    while(p->data!=i)
			
		{
			ptr=p;
			p=p->link;
		}

		if(p==root)
                   {
			temp->link=p;
			root=temp;
 
                  }
	
	             else
			{
                 
			temp->link=p;
			ptr->link=temp;
			}
		
 }


    void delete()

	{

	  struct node *temp,*p;
	  temp=root;
	  int i;

	    printf("enter which element you want to delete :");
	    scanf("%d",&i);

		while(temp->data!=i)
			{
				p=temp;
				temp=temp->link;
			}

                if(temp==root)
                      {

                         root=temp->link;
			temp->link=NULL;
                        free(temp);
                        printf("element deleted succesfully\n");


                      }
			else
			{
                          p->link=temp->link;
                          temp->link=NULL;
                          free(temp);
 			 printf("element deleted succesfully\n");

			}


            }



   void reverse_ll()
    {

       struct node *p=NULL,*c,*n;
        c=root;

          while(c->link!=NULL)
            {
             n=c->link;
             c->link=p;
             p=c;
             c=n;
             }
  
            root=c;
           root->link=p;
        }





  void swap_node()
  {

   int num1,num2;
   struct node *first,*second,*previous1,*previous2,*next1,*next2;
   first=root;
   second=root;
   printf("enter 1st element data which you want to swap");
   scanf("%d",&num1);
   printf("enter 2nd element data which you want to swap");
   scanf("%d",&num2);
   
   while(first->data!=num1)
   {
   previous1=first;
   first=first->link;
   }
   next1=first->link;
   
   while(second->data!=num2)
   {
   previous2=second;
   second=second->link;
   }
   next2=second->link;
   

   if(root==first && first==previous2)
   {
   first->link=next2;
   second->link=first;
   root=second;
   }

   else if(second==root && second==previous1)
   {
   second->link=next1;
   root=first;
   first->link=second;
  }


   else if(root==first)
   {
   first->link=next2;
   previous2->link=first;
   second->link=next1;
   root=second;
   }
 

 else if(second==root)
   {
   second->link=next1;
   previous1->link=second;
   root=first;
   first->link=next2;
  }

  else if(second==previous1&&first==next2)
  {
   previous2->link=first;
   first->link=second;
   second->link=next1;
   }



  else if(first==previous2&&second==next1)
  {
  previous1->link=second;
  second->link=first;
  first->link=next2;
   
   
  }
  
  else
  {
  previous1->link=second;
  second->link=next1;
  previous2->link=first;
  first->link=next2;
   
   
  }
  }


  void swap()
  {
  
   struct node *current1,*current2;
   current1=root;
   current2=root;
   int data1,data2;
   printf("enter which element you want to swap");
   scanf("%d",&data1);
   scanf("%d",&data2);
    
   if(data1==data2)
     return;

  
   while(current1->data!=data1)  
   current1=current1->link;
   
   while(current2->data!=data2)
   current2=current2->link;
  

   current1->data=current1->data+current2->data;
   current2->data=current1->data-current2->data;
   current1->data=current1->data-current2->data;
  }
































