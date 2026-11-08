#include <iostream>
#include <stdio.h>

int part1();
int part2();


int main(){
    part1();
    part2();

    return 0;
}


int part1(){

    printf("Part 1 \n");

    char a, b, c;

    const char A = '8';
    const char B = 'C';
    const char C = ',';

    char x = '8';
    char y = 'C';
    char z = ',';

    a = 0xf;
    b = 0x6e;
    c = 0x24;

    printf("Constants: %c %c %c\n", A, B, C);
    printf("Initialized variables: %c %c %c\n", x, y, z);
    printf("a = %c\n", a);
    printf("b = %c\n", b);
    printf("c = %c\n\n", c);

    return 0;
}

int part2(){

    printf("Part 2 \n");

    int a;
    float b;
    unsigned short c;

    a = 37;
    b = 95.41;
    c = 5743;

    printf("Initial values: \n");
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %d\n", c);

    double d;
    int e;
    char f;

    d = c;
    e = b;
    f = a;

    printf("Implicit conversion: \n");
    printf("d = %f\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    d = (double)c;
    e = (int)b;
    f = (char)a;

    printf("Explicit conversion: \n");
    printf("d = %f\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    void *ptr;

    ptr = &c;
    d = *(unsigned short*)ptr;
    ptr = &b;
    e = (int)*(float*)ptr;
    ptr = &a;
    f = *(int*)ptr;

    printf("Bypassing strict type checking: \n");
    printf("d = %f\n", d);
    printf("e = %d\n", e);
    printf("f = %d\n", f);

    return 0;
}