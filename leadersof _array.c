#include<stdio.h>
int main(){
    int a[100] ;// I'm assuming the  maximum size of array is 100 
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[n-1];
    printf("leaders of array are ");
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            printf("%d",a[n-1]);
            printf(",");
        }
        else{
            if(a[i]>max){
                printf("%d",a[i]);
                printf(",");
                max=a[i];
            }
        }
    }
    return 0;
}
