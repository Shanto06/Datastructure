#include <stdio.h>

void main()
{
   int arr1[100],i,n,p,item;


    printf("Input the size of array : ");
    scanf("%d", &n);

       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element =%d : ",i+1);
	      scanf("%d",&arr1[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&item);
   printf("The exist array list is :\n ");
   for(i=0;i<n;i++)
      printf("% 5d",arr1[i]);

   for(i=0;i<n;i++)
     if(item<arr1[i])
     {
       p = i;
       break;
     }

   for(i=n;i>=p;i--)
      arr1[i]= arr1[i-1];

      arr1[p]=item;

      printf("\n\nAfter Insert the list is :\n ");
   for(i=0;i<=n;i++)
      printf("% 5d",arr1[i]);
	  printf("\n");
}

