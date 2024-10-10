#include<stdio.h>
int main(){
    int a=5;
    int*p=&a;
    *p+=1;
    printf("%d %d",*p,a);
    return 0;
}