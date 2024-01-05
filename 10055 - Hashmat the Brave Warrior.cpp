#include<stdio.h>
int main(){
    long long i,j,difference;
    while(scanf("%lld %lld",&i,&j)!=EOF){
        if(i>j){
            difference=i-j;
            printf("%lld\n",difference);
        }
        else{
            difference=j-i;
            printf("%lld\n",difference);
        }
    }
    return 0;
}
