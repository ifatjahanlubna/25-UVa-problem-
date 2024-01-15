#include<stdio.h>
#include<string.h>
int main(){
    char ch[1000];
    while(fgets(ch,sizeof(ch),stdin)!=NULL){
        int count=0,i;
        if(ch[strlen(ch)-1]=='\n')
            ch[strlen(ch)-1]='\0';
        for(i=0;ch[i]!='\0';i++){
            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z')){
                count++;
                while((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
                    i++;
            }
        }
        printf("%d\n",count);
    }
return 0;
}
