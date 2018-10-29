//求1到10的值的和，求1到100的值的和
#include <stdio.h>

void sum(int a, int b);

int main(){
    sum(1,10);
    sum(1,100);
    return 0;
}

void sum(int a, int b){
    int i;
    int sum;
    printf("hello world");
    for(i=a, sum=0; i<=b; i++){
        sum += i;
    }
    printf("%d到%d的值和为%d\n", a, b, sum);
}

