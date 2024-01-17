#include<stdio.h>
int main(){
    long long p,x,num;
    int n,count;
    scanf("%d",&n);
    while(n--){
        scanf("%lld",&p);
        count=0;
        while(num!=p){
            num=0;
            x=p;
            while(x){
                num=num*10+x%10;
                x=x/10;
            }
            x=num+p;
            count++;
            num=0;
            p=x;
            while(x){
                num=num*10+x%10;
                x=x/10;
            }
        }
        printf("%d %lld\n",count,p);
    }
return 0;
}
