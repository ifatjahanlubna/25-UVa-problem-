#include<stdio.h>
int main(){
    long long n;
    while(scanf("%lld",&n)){
    if(n==0)
       break;
    while(n>9){
        int sum=0,rem=0;
        while(n){
            rem=n%10;
            sum=sum+rem;
            n=n/10;
        }
        n=sum;
    }
        printf("%d\n",n);
    }
return 0;
}
