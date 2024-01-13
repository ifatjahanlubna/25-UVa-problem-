#include<stdio.h>
int main(){
    int n,j=0;
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        j++;
        int h[200],i,sum=0,l,temp=0,k=0;
        for(i=0;i<n;i++){
            scanf("%d",&h[i]);
            sum+=h[i];
        }
        l=sum/n;
        for(i=0;i<n;i++){
            if(h[i]>l)
                k+=h[i]-l;
            }
        printf("Set #%d\n",j);
        printf("The minimum number of moves is %d.\n",k);
        printf("\n");
    }
return 0;
}
