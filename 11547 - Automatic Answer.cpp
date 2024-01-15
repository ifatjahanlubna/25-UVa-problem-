#include<stdio.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int result=abs((((((((long long)n*567)/9)+7492)*235)/47)-498)/10%10);
        printf("%d\n",result);
    }
return 0;
}
