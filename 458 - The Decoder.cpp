#include<stdio.h>
#include<string.h>
int main(){
    char ch[2000],i;
    while(fgets(ch,sizeof(ch),stdin)!=NULL){
        if((strlen(ch)>0)&&(ch[strlen(ch)-1]=='\n'))
            ch[strlen(ch)-1]='\0';
        for(i=0;ch[i]!='\0';i++){
            ch[i]=ch[i]-7;
        }
        printf("%s\n",ch);
    }
return 0;
}
