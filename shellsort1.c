#include<stdio.h>
int main() {
  int arr[10], i, j, k,temp,n;
  printf("\n enter the array size");
  scanf("%d",&n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("The array elements are :");
  for (i = 0; i < n; i++) 
  {
       printf("\t%d", arr[i]);
  }

  for (i = n / 2; i > 0; i = i / 2) 
  {
      for (j = i; j < n; j++) 
       {
            for (k = j - i; k >= 0; k = k - i) 
            {
               if (arr[k + i] >= arr[k])
                break;
           else
          {
                       temp= arr[k];
                      arr[k] = arr[k + i];
                      arr[k + i] = temp;
           }
         }

      }

   }

  printf("\n\n The shell Sort is :");
  for (i = 0; i < n; i++) 
   {
    printf("\t%d", arr[i]);
   }
return 0;

}

