#include<stdio.h>
int main()
{
  int array[7],i,low=array[0];
  printf(" please input 7 numbers\n");
  for(i=0;i<=6;i++)
  {
    scanf("%d",&array[i]);
  }
  printf(" lowest number :\n");
  for(i=0;i<=6;i++)
  {
if(array[i]<low)
low=array[i];

  }
 printf("%d\n",low);

  return 0;
}

