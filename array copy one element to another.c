
#include<stdio.h>
int main()

{
    int a[5]={3,4,5,6,7},i ,n=5;
    int b[n];
    for(i=0; i<n; i++){
    b[i]=a[i];
    }
for(i=0; i<n; i++) {
    printf("%d\n",a[i]);
}
for(i=0; i<n; i++) {
    printf("%d\n",b[i]);
}

    return 0;
}

