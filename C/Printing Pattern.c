#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int m,len,i,j;
    scanf("%d", &m);
  	// Complete the code to print the pattern.
    int size=2*m-1;
    int a[size][size], start=0, end=size-1;
    while(m!=0)
    {
    for(i=start;i<=end;i++)
      for(j=start;j<=end;j++)
      {
        if(i==start || j==start || i==end || j==end)
          a[i][j]=m;
      }
      ++start;
      --end;
      --m;
    }

      for(i=0;i<size;i++)
      {
        for(j=0;j<size;j++)
        {
          printf("%d ",a[i][j]);
        }
        printf("\n");
      }
    return 0;
}
