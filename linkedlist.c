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
		printf("7 :delete ")
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

		printf("length of linked list is %d",count);
	}
}


  void add_after()
  {
	int i,n;
	printf("enter after which element you want to add another element\n");
         scanf("%d",&i);
        printf("enter data:");
         scanf("%d",&n);
       struct node* p,*temp;
       temp=(struct node *)(malloc(sizeof(struct node)));
       temp->data=n;
       temp->link=NULL;
        p=root;

        while(p->data!=i)
          {
		p=p->link;
          }

		if(p->link==NULL)
			{
			  p->link=temp;
			}
		
		else

		{
		temp->link=p->link;
                p->link=temp;
               }
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























