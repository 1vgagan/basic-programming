#include <stdio.h>

int main() {
    int i,n,sum=0;
    printf("Enter no: ");
    scanf("%d",&n);

for(int i=0;i<=n;i++){
    sum=sum+i;
        printf("%d\n",i);
}

    printf("\nThe Sum is : %d\n", sum);
    return 0;
}
