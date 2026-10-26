#include <stdio.h>

int main(){
    unsigned short a;
    int b;
    float c;
    double d;

    unsigned short *pa;
    int *pb;
    float *pc;
    double *pd;

    void *pv;

    pa = &a;
    pb = &b;
    pc = &c;
    pd = &d;

    *pa = 503;
    *pb = 98;
    *pc = -247.11113;
    *pd = 5.8e-336;

    printf("Values of variables:\n");
    printf("unsigned short a = %hu\n", a);
    printf("int b = %d\n", b);
    printf("float c = %f\n", c);
    printf("double d = %e\n\n", d);

    printf("Sizeof variables:\n");
    printf("sizeof a = %zu bytes\n", sizeof(a));
    printf("sizeof b = %zu bytes\n", sizeof(b));
    printf("sizeof c = %zu bytes\n", sizeof(c));
    printf("sizeof b = %zu bytes\n\n", sizeof(d));

    pv = &pa;
    printf("Address of pa = %p\n", pv);
    pv = &pb;
    printf("Address of pb = %p\n", pv);
    pv = &pc;
    printf("Address of pc = %p\n", pv);
    pv = &pd;
    printf("Address of pd = %p\n\n", pv);

    printf("Address of a = %p\n", (void*)&a);
    printf("Address of b = %p\n", (void*)&b);
    printf("Address of c = %p\n", (void*)&c);
    printf("Address of d = %p\n", (void*)&d);

return 0;
}