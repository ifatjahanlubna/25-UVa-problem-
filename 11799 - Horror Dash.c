#include<stdio.h>
int main(){
    int T,t=0;
    scanf("%d",&T);
    while(T--){
        t++;
        int N;
        scanf("%d",&N);
        int i,arr[N],n=0;
        for(i=0;i<N;i++){
            scanf("%d",&arr[i]);
            if(arr[i]>n)
                n=arr[i];
        }
        printf("Case %d: %d\n",t,n);
    }
    return 0;
}
