
#include <stdio.h>
#include <limits.h>

// Function for bit-level addition
unsigned int bitAddition(unsigned int a, unsigned int b) {

    unsigned int result = 0;
    unsigned int carry = 0;

    for (int i = 0; i < sizeof(unsigned int) * CHAR_BIT; i++) {

        unsigned int mask = 1u << i;

        unsigned int bitA = (a & mask) != 0;
        unsigned int bitB = (b & mask) != 0;

        unsigned int sumBit = bitA ^ bitB ^ carry;

        unsigned int nextCarry =
            (bitA & bitB) |
            (bitA & carry) |
            (bitB & carry);

        if (sumBit) {
            result |= mask;
        }

        carry = nextCarry;
    }

    return result;
}

// Function for bit-level equality comparison
int bitEquality(int a, int b) {

    unsigned int ua = (unsigned int)a;
    unsigned int ub = (unsigned int)b;

    for (int i = 0; i < sizeof(unsigned int) * CHAR_BIT; i++) {

        unsigned int mask = 1u << i;

        unsigned int bitA = (ua & mask) != 0;
        unsigned int bitB = (ub & mask) != 0;

        if (bitA != bitB) {
            return 0;
        }
    }

    return 1;
}

int main() {

    // TASK 2. Selection and repetition operators

    printf("TASK 2. Selection and repetition operators\n\n");

    int a = 10;
    int b = 5;

    // 1. Operator if
    printf("1. Operator if:\n");

    if (a > b) {
        printf("a is greater than b\n");
    }

    // 2. Operator if-else
    printf("\n2. Operator if-else:\n");

    if (a == b) {
        printf("a is equal to b\n");
    } else {
        printf("a is not equal to b\n");
    }

    // 3. Nested if
    printf("\n3. Nested if:\n");

    if (a > 0) {
        if (b > 0) {
            printf("Both numbers are positive\n");
        }
    }

    // 4. Operator switch
    printf("\n4. Operator switch:\n");

    int choice = 2;

    switch (choice) {
        case 1:
            printf("Choice is 1\n");
            break;
        case 2:
            printf("Choice is 2\n");
            break;
        default:
            printf("Unknown choice\n");
    }

    // 5. Loop for
    printf("\n5. Loop for:\n");

    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // 6. Loop while
    printf("\n\n6. Loop while:\n");

    int i = 1;

    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    // 7. Loop do-while
    printf("\n\n7. Loop do-while:\n");

    i = 1;

    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);


    // TASK 3. Bit-level operations (Variant 12)

    printf("\n\n-----------------------------------\n");
    printf("TASK 3. Bit-level operations\n");
    printf("Variant 12\n\n");

    // 1. Addition
    int a1[] = {141, -12, 173};
    int b1[] = {115, 205, 347};

    printf("1. Addition (+):\n");

    for (int j = 0; j < 3; j++) {

        unsigned int result = bitAddition(
            (unsigned int)a1[j],
            (unsigned int)b1[j]
        );

        printf("%d + %d = %u\n",
               a1[j], b1[j], result);
    }

    // 2. Equality
    int a2[] = {-21, 79, 115};
    int b2[] = {-21, 80, 41};

    printf("\n2. Equality (==):\n");

    for (int j = 0; j < 3; j++) {

        int result = bitEquality(a2[j], b2[j]);

        printf("%d == %d : %s\n",
               a2[j], b2[j],
               result ? "true" : "false");
    }

    printf("\nProgram completed.\n");

    return 0;
}
