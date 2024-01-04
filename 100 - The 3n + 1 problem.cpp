#include <stdio.h>
int main(){
    int a,b,x,y,i,j,length,n;
    while(scanf("%d %d",&a,&b)==2)
    {  n=0;
       x=a;
       y=b;
       if(a>b){
        for(i=b;i<=a;i++){
            j=i;
            length=1;
            while(j!=1){
                if(j%2==1){
                    j=3*j+1;
                }
                else{
                    j=j/2;
                }
                length++;
            }
            if(length>=n){
                n=length;
            }
        }
       }
       else{
        for(i=a;i<=b;i++){
            j=i;
            length=1;
            while(j!=1){
                if(j%2==1){
                    j=3*j+1;
                }
                else{
                    j=j/2;
                }
                length++;
            }
            if(length>=n){
                n=length;
            }
        }
       }
        printf("%d %d %d\n",x,y,n);
    }
return 0;
}

