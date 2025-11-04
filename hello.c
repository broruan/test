#include<stdio.h>
#include<string.h>
int main(){
    char c[31];
    int le,f=0;
    fgets(c,31,stdin);
    le = (strlen(c)-1)/2-1;
    for(int i=0;i<=le;i++){
        if(c[i]!=c[strlen(c)-i-2]) {
            f++;
            printf("false\n");
            break;
        }
    }
    if(f==0){
        printf("true\n");
    }
    return 0;
}