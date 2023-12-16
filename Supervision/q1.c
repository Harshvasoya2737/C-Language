#include<stdio.h>
int main()
{
    FILE *even=fopen("even.txt","w");
      FILE *odd=fopen("odd.txt","w");
      
      
      for (int i = 50; i <=70; i++)
      {
        if(i%2==0)
      {
        fprintf(even,"%d ",i);
      }
      else{
        fprintf(odd,"%d ",i);
      }
      }

    return 0;
}