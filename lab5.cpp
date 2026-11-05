#include <stdio.h>
#include <iostream>

int part1();
int part2();

int main(){
    part1();
    part2();

    return 0;
}

int part1(){ 

    printf("Part1 \n");

    bool res_double, res_int;
    double Ad = 33.0, Bd = 33.0, Cd = 7.4, Dd = 8.9;
    int Ai = 36, Bi = 73, Ci = 120, Di = 120;

    res_double = !((Ad <= Bd)^(!(Cd != Dd)));
    printf("Double result %d\n", res_double);
    res_int = !((Ai <= Bi)^(!(Ci != Di)));
    printf("Int result %d\n\n", res_int);

    return 0;
}

int part2(){

    printf("Part2 \n");

    bool res;
    const int A = 17;
    int B = -23;
    double C = 33;
    double *p_C;
    p_C = &C;
    int D = 2;
    int E = 26054;

    double F;

    res = ((A ^ (~B)) * (*p_C)) == (D * (E >> sizeof(F)));
    printf("Result %d\n", res);


    return 0;
}
