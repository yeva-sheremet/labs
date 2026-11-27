#include <iostream>
#include <iomanip>
using namespace std;

// Перелічувальний тип для імен студентів
enum Name {
    Anna, Bohdan, Viktoria, Dmytro,
    Kateryna, Maksym, Olena
};

// Перетворення значень enum на текст
string getName(Name n) {
    switch (n) {
        case Anna: return "Anna";
        case Bohdan: return "Bohdan";
        case Viktoria: return "Viktoria";
        case Dmytro: return "Dmytro";
        case Kateryna: return "Kateryna";
        case Maksym: return "Maksym";
        case Olena: return "Olena";
    }
    return "";
}

// ЗАВДАННЯ 1
// Структура: ім'я, курс, служба в армії
struct StudentArmy {
    Name name;
    int course;
    bool army;
};

// ЗАВДАННЯ 2
// Структура: ім'я, середній бал, курс
struct StudentGrade {
    Name name;
    double grade;
    int course;
};

int main() {

    // Масив із 7 студентів для першого завдання
    StudentArmy students1[7] = {
        {Anna, 1, false},
        {Bohdan, 5, true},
        {Viktoria, 2, false},
        {Dmytro, 5, false},
        {Kateryna, 5, true},
        {Maksym, 3, true},
        {Olena, 5, false}
    };

    int total5 = 0;
    int served = 0;

    for (int i = 0; i < 7; i++) {
        if (students1[i].course == 5) {
            total5++;

            if (students1[i].army == true) {
                served++;
            }
        }
    }

    double percent1 = 0;

    if (total5 > 0) {
        percent1 = (double)served / total5 * 100;
    }

    cout << "TASK 1" << endl;
    cout << "Students of the 5th course: " << total5 << endl;
    cout << "Served in the army: " << served << endl;
    cout << "Percentage: " << percent1 << "%" << endl;


    // Масив із 7 студентів для другого завдання
    StudentGrade students2[7] = {
        {Anna, 95.5, 2},
        {Bohdan, 82.0, 1},
        {Viktoria, 91.0, 2},
        {Dmytro, 75.5, 3},
        {Kateryna, 88.0, 2},
        {Maksym, 96.0, 2},
        {Olena, 85.5, 1}
    };

    int total2 = 0;
    int excellent = 0;

    for (int i = 0; i < 7; i++) {
        if (students2[i].course == 2) {
            total2++;

            if (students2[i].grade >= 90) {
                excellent++;
            }
        }
    }

    double percent2 = 0;

    if (total2 > 0) {
        percent2 = (double)excellent / total2 * 100;
    }

    cout << "\nTASK 2" << endl;
    cout << "Students of the 2nd course: " << total2 << endl;
    cout << "Excellent students: " << excellent << endl;
    cout << "Percentage: " << percent2 << "%" << endl;

    return 0;
}
