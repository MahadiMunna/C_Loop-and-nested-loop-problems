#include <stdio.h>

int main(){
    int n;
    int evn=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evn++;
        }
        else{
            odd++;
        }
        if(arr[i]<0){
            neg++;
        }
        else if(arr[i]>0){
            pos++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",evn,odd,pos,neg);
    return 0;
}