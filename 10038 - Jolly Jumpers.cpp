#include<stdio.h>
#include<math.h>
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a[n],i,j,d[n-1],x,jolly=(n-1),temp=0;
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(i>0){
                x=abs(a[i]-a[i-1]);
                if(x>0&&x<n)
                    d[i-1]=x;
                else
                    d[i-1]=0;
            }
        }
        for(i=1;i<n;i++){
           for(j=0;j<(n-1);j++){
                if(d[j]==i){
                    temp++;
                    break;
                }
           }
        }
        if(jolly==temp)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }
return 0;
}
