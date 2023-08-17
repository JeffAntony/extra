#include <stdio.h>
int main()
{
    int i;
    int n;
    scanf("%d",&n);
    int a[n];
    int count;
    printf("enter the number of elements is: ");
    
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);   
    } 
    int b[10000] = {0};
    for(int i=0;i<n;i++){
        b[a[i]] = b[a[i]]+1;
    }
    for(int i=0;i<=10000;i++){
        if(b[i]>1){
            printf("%d -> %d\n",i,b[i]);
        }
    }
    // printf("%d",count);
    return 0;
}

