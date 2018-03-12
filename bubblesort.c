 #include<stdio.h>
 void bubbleSort(int array[],int n);


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

    bubbleSort(array,n);
    printf("\n\nelements after sorting\n\n");


    for(int i=0;i<n;i++)
     {
      printf("%d\t",array[i]);
     }
 }



 void bubbleSort(int array[],int n)
 {
  for(int i=0;i<n-1;i++)
   {
    for(int j=0;j<n-1;j++)
     {
      if(array[j]>array[j+1])
       {
        int temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
       }
     }
   }
 }

