#include<stdio.h>
#include<math.h>
int main() {
    int n;
    double p;
    while(scanf("%d %lf",&n,&p)==2){
        long long k=llround(pow(p,1.0/n));
        printf("%lld\n",k);
    }
    return 0;
}
