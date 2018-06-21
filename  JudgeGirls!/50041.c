#include<stdio.h>
int main(void)
{
    int i,n,one,two,three,s;
    int d=0;
    scanf("%d%d%d",&n,&two,&three);
    if(three>two){
        s=1;
        d += 3 * (three - two);
    }
    else{
        s=0;
        d += 2 * (two - three);
    }
    for(i=1;i<=n-2;i++){
        one=two;
        two=three;
        scanf("%d",&three);
        if(three>two){
            switch(s){
                case 0:
                  d += 3 *(three - two);
                  break;
                case 1:
                  d += 4 *(three - two);
                  break;
             }
              s=1;
         }
          else{
            switch(s){
                case 0:
                  d += 2 *(three - two);
                  break;
                case 1:
                  d += 3 *(three - two);
                  break;
             }
              s=0;
            }
      }
    printf("%d",d);
    return 0;
}
