#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,head,tail;
    int cnt1=0;
    int cnt2=0;
    char a[8];
    printf("Who are you?\n");
    scanf("%s",a);
    printf("Hello %s!\n",a);
    printf("Tossing a coin...\n");
    for(i=0;i<3;i++){
        if(rand()%2==0){
            printf("Round %d: Heads\n",i+1);
            cnt1++;
        }
        else{
            printf("Round %d: Tails\n",i+1);
            cnt2++;
        }
    }
    printf("Heads: %d,Tails: %d\n",cnt1,cnt2);
    if(cnt1>cnt2)printf("You won\n");
    else printf("You lost\n");
    return 0;
}