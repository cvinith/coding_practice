#include<stdio.h>

 void selectionSort(int array[],int n);

 void main()
  {
    int array[100],n;


    printf("enter number of elements");
    scanf("%d",&n);


    for(int i=0;i<n;i++)
     {
      printf("enter element %d:",i+1);
      scanf("%d",&array[i]);
     }


    selectionSort(array,n);
    printf("\n\nelements after sorting\n\n");


   for(int i=0;i<n;i++)
    {
    printf("%d\t",array[i]);
    }
 }

 void selectionSort(int array[],int n)
  {


    for(int i=0;i<n-1;i++)
     {


       for(int j=i+1;j<n;j++)
         {


	if(array[i]>array[j])
	   {
	     int temp=array[i];
	     array[i]=array[j];
	     array[j]=temp;
	   }
	 }
      }
 }
