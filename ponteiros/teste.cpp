#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b, *ptr;
    a = 2;
    ptr = &a;
    printf("%x\n", ptr);
    printf("%d\n", a);
    printf("%d\n", *ptr);
    *ptr = 998;
    b = a + (*ptr);
    printf("%d\n", b);

    return 0;
}