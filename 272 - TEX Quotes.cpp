#include<stdio.h>
int main(){
    char ch,temp=0;
    while(scanf("%c",&ch)!=EOF){
        if(ch=='"'&&temp==0){
            printf("``");
            temp=1;
        }
        else if(ch=='"'&&temp==1){
            printf("''");
            temp=0;
        }
        else{
            printf("%c",ch);
        }
    }
return 0;
}
