#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    while(n--){
        int f,sum=0;
        scanf("%d",&f);
        long long a[f][3];
        for(i=0;i<f;i++){
            for(j=0;j<3;j++)
                scanf("%lld",&a[i][j]);
        }
    for(i=0;i<f;i++){
            for(j=0;j<3;j++){
                if(j==1||j==2)
                    continue;
                sum+=a[i][j]*a[i][j+2];
            }
        }
        printf("%d\n",sum);
    }
return 0;
}
