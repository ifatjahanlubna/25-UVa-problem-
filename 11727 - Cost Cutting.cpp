#include<stdio.h>
int main(){
    int T,t=1;
    scanf("%d",&T);
        while(T--){
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            if(a>b&&a>c&&c>b&&c<a){
                printf("Case %d: %d\n",t,c);
            }
            else if(a>b&&a>c&&b>c&&b<a){
                printf("Case %d: %d\n",t,b);
            }
            else if(b>a&&b>c&&a>c&&a<b){
                printf("Case %d: %d\n",t,a);
            }
            else if(b>a&&b>c&&c>a&&c<b){
                printf("Case %d: %d\n",t,c);
            }
            else if(c>a&&c>b&&a>b&&a<c){
                printf("Case %d: %d\n",t,a);
            }
            else if(c>a&&c>b&&b>a&&b<c){
                printf("Case %d: %d\n",t,b);
            }
            else{
                printf("Case %d: %d\n",t,b);
            }
            t++;
        }
    return 0;
}

