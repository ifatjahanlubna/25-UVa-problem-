#include<stdio.h>
int main(){
    int K;
    while(1){
        long long N,M,X,Y;
        scanf("%d",&K);
        if(K==0)
            break;
        scanf("%lld %lld",&N,&M);
        while(K--){
            scanf("%lld %lld",&X,&Y);
            if(X>N&&Y>M)
                printf("NE\n");
            else if(X>N&&Y<M)
                printf("SE\n");
            else if(X<N&&Y<M)
                printf("SO\n");
            else if(X<N&&Y>M)
                printf("NO\n");
            else if(X==N||Y==M)
                printf("divisa\n");
        }
    }
return 0;
}
