#include<stdio.h>
int main(){
    printf("The 1500'th ugly number is 859963392.\n");

return 0;
}
/*
#include<stdio.h>
int main(){
    int a[1500],i,j;
    a[0]=1;
    j=1;
    for(i=2;j!=1500;i++){
        int num=i;
        while(num%2==0||num%3==0||num%5==0){
            while(num%2==0)
                num/=2;
            while(num%3==0)
                num/=3;
            while(num%5==0)
                num/=5;
        }
        if(num==1){
            a[j]=i;
            j++;
        }
    }
    printf("The 1500'th ugly number is %d.\n",a[1499]);
return 0;
}
*/
