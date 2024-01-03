#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,j;
        scanf("%d %d",&i,&j);
        if(i>j)
            printf(">\n");
        else if(i<j)
            printf("<\n");
        else
            printf("=\n");
    }
    return 0;
}

