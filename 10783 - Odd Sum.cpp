#include<stdio.h>
int main(){
    int T,t=0;
    scanf("%d",&T);
    while(T--){
        t++;
        int a,b;
        scanf("%d %d",&a,&b);
        int i,rem=0;
        for(i=a;i<=b;i++){
            if(i%2==1){
               rem+=i;
            }
        }
        printf("Case %d: %d\n",t,rem);
    }
    return 0;
}


