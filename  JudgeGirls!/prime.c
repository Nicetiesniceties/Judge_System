gcc#include <stdio.h>

main() 
{
  int n,i,j,m;
  int composite[101];
  composite[1]=0;
  
  printf( "Give a limitation before we search the prime numbers.\n" );
  scanf( "%d\n",n );
  
  for(i=2;i<=n;i++)
     {
      composite[i]=1;
      }
  for(i=1;i*i<=n;i++)
     {
      if(composite[i]==1)
        {
         for(j=2;j<=i;j++)
           {
            if(i%j==0){composite[i]=0;break;}
            for(m=2;m*i<=n;m++)
               {composite[m*i]=0;}
           }
         }
       }     
  for(i=1;i<=n;i++)
     {
      if(composite[i]==1){printf( “%d\n”,i);}
     }
  return 0;
}
