#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int x=0;
    if(b<a && b<c){
        x=b;
        a=a-b;
        c=c-b;
        if(c>a/2){
        x=x+a/2;
    }
    else if(c<a/2){
        x=x+c;
    }
    }
    else if(a<b && a<c){
        x=a;
    }
    else{
        x=c;
    }
    
    printf("%d",x);
    return 0;
}