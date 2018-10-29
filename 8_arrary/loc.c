//给定一个数组，输入一个值，查找这个值所在的位置
#include <stdio.h>

int search(int key, int a[], int length);

int main(){
    int a[] = {1,2,3,4,5,6,7,8,};
    int loc;
    int x;
    printf("输入需要输入的值");
    scanf("%d", &x);
    loc = search(x, a, sizeof(a)/sizeof(a[0]));
    if(loc == -1){
        printf("不存在这个值\n");
    }else{
        printf("在第%d个位置\n", loc);
    }
    return 0;
}

int search(int key, int a[], int length){
    int result = -1;
    int i;
    
    for(i=0; i<length; i++){
        if(a[i] == key){
            result = i;
            break;
        }
    }
    return result;
}
