#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int ldigit=n%10;
    n=n/10;
    int fdigit=n%10;
    if(ldigit%fdigit==0||fdigit%ldigit==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}