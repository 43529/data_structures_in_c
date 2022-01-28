#include<stdio.h>
#include<stdlib.h>
void func(int** p) {//下面的P实际上是形参里的P的复制，无法修改形参
    *p = (int*)malloc(sizeof(int));
    **p = 3;
}
int main() {
    int a = 0;
    int* pointer = &a;
    func(&pointer);
    printf("pointer的值是：%d\n", *pointer);
    printf("pointer的值是：%d\n", a);
    //打印的值会是0而不是3，因为函数其实并没有修改指针的值
}
