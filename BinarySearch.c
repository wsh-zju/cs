#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    int in,s,e;
    in=-1;s=0;e=n-1;
    int t=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            t=-1;
            break;
        }
    }
    while(s<=e&&t==0){
        int ave=(s+e)/2;
        if(a[ave]==k){
            printf("%d\n",ave);
            t=1;
            break;
        }else if(a[ave]<k){
            s=ave+1;
        }else{
            e=ave-1;
        }
    }
    if(t==-1){
        printf("Invalid Value");
    }else if(t==0){
        printf("Not Found");
    }
}

