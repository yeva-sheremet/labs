#include <stdio.h>
#include <math.h>

int part1();
int part2();
int part3();

int main()
{
    part1();
    part2();
    part3();

    return 0;
}

int part1()
{
    // declaring constant with uppercase(https://www.w3schools.com/c/c_constants.php)
    const short SHORT1 = 0x6c;
    const int INT1 = 89761;
    const long LONG1 = -37;
    const unsigned short UNSIGNED_SHORT1 = 123654;
    printf("short1: %#06X, int1: %d, long1: %ld, unsigned_short1: %d\n", SHORT1, INT1, LONG1, UNSIGNED_SHORT1);
    // short1: 0X006C, int1: 89761, long1: -37, unsigned_short1: 58118
    // constant SHORT1 contains hex value
    // the value 123654 is larger than limit of the range 0–65535, so we have implicit conversion here

    short test_short2 = -67;
    int test_int2 = -53;
    long test_long2 = 44.9;
    unsigned short test_unshort2 = -456;
    printf("short2: %d, int2: %d, long2: %ld, unsigned_short2: %d\n", test_short2, test_int2, test_long2, test_unshort2);
    // short2: -67, int2: -53, long2: 44, unsigned_short2: 65080
    // the value 44.9 , so we have implicit conversion here
    // the value -456 is smaller than lower limit of the range 0–65535, so it will be converted to 65080.

    test_short2 = 256;
    test_int2 = 82.4;
    test_long2 = 6785940321;
    test_unshort2 = 879;
    printf("short2: %d, int2: %d, long2: %ld, unsigned_short2: %d\n", test_short2, test_int2, test_long2, test_unshort2);
    // short2: 256, int2: 82, long2: 6785940321, unsigned_short2: 879
    //  the value 82.4 , so we have implicit conversion here

    return 0;
}


int part2(){
    const float FLOAT1 = 0.0908070605;
    const float FLOAT2 = -116655773377.99;
    const float FLOAT3 = (78.52) * pow(10, -49);
    const double DOUBLE1 = (0.132) * pow(10, -273);
    const double DOUBLE2 = (-943.14) * pow(10, 4876);
    printf("float1: %f, float2: %f, float3: %e, double1: %e, double2: %lf\n", FLOAT1, FLOAT2, FLOAT3, DOUBLE1, DOUBLE2);
    // The reult in float3 is 0 because the number is too small to be represented by the float type.
    // The result in double2 is -inf because the value exceeds the maximum range of the double type.

    float test_float2 = 0.0908070605;
    double test_double2 = (0.132) * pow(10, -273);
    printf("float2: %f, double2: %e\n", test_float2, test_double2);

    test_float2 = -116655773377.99;
    test_double2 = (-943.14) * pow(10, 4876);
    printf("float2: %f, double2: %e\n", test_float2, test_double2);
    // The result in test_double2 is -inf because the value exceeds the maximum range of the double type.

    test_float2 = (78.52) * pow(10, -49);
    printf("float2: %e\n", test_float2);
    // The reult is 0 because the number is too small to be represented by the float type.


    return 0;
}


int part3(){
    int operand1;
    int operand2;
    double result;
    //

    operand1 = -29;
    result = operand1;
    printf("Sign preservation: %.0f\n", result);

    operand1 = 91;
    result = -operand1;
    printf("Sign inverted: %.0f\n", result);

    operand1 = 173;
    operand2 = 34;
    result = operand1 + operand2;
    printf("Addition: %.0f\n", result);

    operand1 = -47;
    operand2 = 95;
    result = operand1 - operand2;
    printf("Subtraction: %.0f\n", result);

    operand1 = 46;
    operand2 = 3;
    result = operand1 * operand2;
    printf("Multiplication: %.0f\n", result);

    operand1 = 20;
    operand2 = 2;
    result = operand1 / operand2;
    printf("Integer division 1: %.0f\n", result);

    operand1 = 20;
    operand2 = 7;
    result = operand1 / operand2;
    printf("Integer division 2: %.0f\n", result);

    operand1 = 74;
    operand2 = 7;
    result = operand1 % operand2;
    printf("Remainder: %.0f\n", result);

    operand1 = 24;
    operand2 = 5;
    result = (double)operand1 / operand2;
    printf("Division: %f\n", result);

    
    return 0;
};