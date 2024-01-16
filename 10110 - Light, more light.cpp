#include<stdio.h>
#include<math.h>
int isPerfectSquare(long long n){
    long long r=(long long)sqrt(n);
    return r*r==n;
}
int main(){
    long long n;
    while(scanf("%lld",&n)){
        if(n==0)
            break;
        if(n==1||isPerfectSquare(n)){
            printf("yes\n");
        }
        else
            printf("no\n");
    }
return 0;
}
