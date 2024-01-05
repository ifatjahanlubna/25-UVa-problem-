#include<stdio.h>
int main(){
   long long a,b,carry,n,rem1,rem2,result;
    while(scanf("%lld %lld",&a,&b)==2){
        if(a==0&&b==0)
            break;
        result=0;
        carry=0;
        n=0;
        while(a!=0||b!=0){
            rem1=a%10;
            rem2=b%10;
            a/=10;
            b/=10;
            result=rem1+rem2+n;
            if(result>9){
                n=result/10;
                carry=carry+n;
            }
            else{
                n=0;
            }
        }
        if(carry==0)
            puts("No carry operation.");
        else if(carry==1)
            printf("%d carry operation.\n",carry);
        else
            printf("%d carry operations.\n",carry);
    }
return 0;
}
