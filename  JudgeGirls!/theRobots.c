#include<stdio.h>
int main(void)
{
    int M, N, X1, Y1, E1, N1, F1, X2, Y2, E2, N2, F2;
    int time=0;
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d",&M,&N,&X1,&Y1,&E1,&N1,&F1,&X2,&Y2,&E2,&N2,&F2);
    while(F1 != 0 || F2 != 0)
    {
        time++;
        if(N1 != 0 && F1 != 0)
        {
            Y1 += 1;
            if(Y1 >= N)
              Y1 %= N;
             N1--;
             F1--;
         }
        else if(E1 != 0 && F1 != 0)
        {
             X1 += 1;
            if(X1 >= M)
              X1 %= M;
             E1--;
             F1--;
        }
        if(E2 != 0 && F2 != 0)
        {
             X2 += 1;
             if(X2 >= M)
               X2 %= M;
             E2--;
             F2--;
         }
        else if(N2 != 0 && F2 != 0)
        {
             Y2 += 1;
             if(Y2 >= N)
               Y2 %= N;
             N2--;
             F2--;
        }
        #ifdef DEBUG
            printf("%d %d %d %d \n",X1,Y1,X2,Y2);
        #endif
        if(X1 == X2 && Y1==Y2)
        {
             printf("%s ","robots explode at time");
             printf("%d",time);
             return 0;
        }
        if(N1+N2+E1+E2==0)
           {break;}
    }
    printf("%s","robots will not explode");
    return 0;
}

