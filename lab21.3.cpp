#include <iostream>
using namespace std;

int part1();
int part2();

int main()
{
    part1();
    part2();

    return 0;
}

// Частина 1: матриця 5x4, дійсний тип
int part1()
{
    double a[5][4];
    double b[4];

    cout << "PART 1: Matrix 5x4" << endl;
    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    // Добуток від'ємних елементів кожного стовпця
    for (int j = 0; j < 4; j++)
    {
        b[j] = 1;
        bool found = false;

        for (int i = 0; i < 5; i++)
        {
            if (a[i][j] < 0)
            {
                b[j] *= a[i][j];
                found = true;
            }
        }

        if (!found)
            b[j] = 0;
    }

    cout << "Products of negative elements:" << endl;

    for (int j = 0; j < 4; j++)
    {
        cout << b[j] << " ";
    }

    cout << endl << endl;

    return 0;
}

// Частина 2: матриця 5x5, цілий тип
int part2()
{
    int a[5][5];
    int b[5];

    cout << "PART 2: Matrix 5x5" << endl;
    cout << "Enter matrix elements:" << endl;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    // Запис елементів побічної діагоналі
    for (int i = 0; i < 5; i++)
    {
        b[i] = a[i][4 - i];
    }

    cout << "Secondary diagonal:" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";
    }

    cout << endl;

    return 0;
}
