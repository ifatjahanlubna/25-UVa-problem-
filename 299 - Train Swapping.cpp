#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int L;
        scanf("%d",&L);
        int a[L],i,j,temp,S=0;
        for(i=0;i<L;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<L;i++){
           for(j=i+1;j<L;j++){
            if(a[j]<a[i]){
                S++;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
           }
        }
        printf("Optimal train swapping takes %d swaps.\n",S);
    }
return 0;
}
