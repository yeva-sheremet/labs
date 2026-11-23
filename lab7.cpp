#include <iostream>
using namespace std;

// Глобальні змінні
int number = 100;
static int globalStatic = 500;

// Функція для демонстрації збереження статичної змінної
void staticFunction() {
    static int counter = 0;
    counter++;

    cout << "Function call: counter = " << counter << endl;
}

int main() {

    cout << "========== TASK 1-2 ==========" << endl;

    // Звичайна змінна головного блоку
    int mainValue = 10;

    cout << "Main block: " << mainValue << endl;
    cout << "Global static: " << globalStatic << endl;

    // Перший окремий блок
    {
        static int firstStatic = 20;
        int firstAuto = 30;

        firstStatic++;
        firstAuto++;

        cout << "\nFirst block:" << endl;
        cout << "firstStatic = " << firstStatic << endl;
        cout << "firstAuto = " << firstAuto << endl;

        // Вкладений блок
        {
            static int nestedStatic = 40;
            int nestedAuto = 50;

            nestedStatic++;
            nestedAuto++;

            cout << "\nNested block:" << endl;
            cout << "firstStatic = " << firstStatic << endl;
            cout << "nestedStatic = " << nestedStatic << endl;
            cout << "nestedAuto = " << nestedAuto << endl;
        }
    }

    // Другий окремий блок
    {
        static int secondStatic = 60;
        int secondAuto = 70;

        secondStatic++;
        secondAuto++;

        cout << "\nSecond block:" << endl;
        cout << "secondStatic = " << secondStatic << endl;
        cout << "secondAuto = " << secondAuto << endl;
    }

    // Порівняння статичних та автоматичних змінних
    cout << "\nStatic and automatic variables:" << endl;

    for (int i = 0; i < 5; i++) {

        static int iA = 0;
        int iB = 0;

        iA = iA + 1;
        iB = iB + 1;

        cout << "Iteration " << i + 1
             << ": iA = " << iA
             << ", iB = " << iB << endl;
    }

    cout << "\n========== TASK 3 ==========" << endl;

    // Демонстрація автоматичних змінних
    int sameName = 10;

    cout << "Main block sameName = " << sameName << endl;

    {
        int sameName = 20;

        cout << "First block sameName = " << sameName << endl;

        {
            int sameName = 30;

            cout << "Nested block sameName = " << sameName << endl;
        }

        cout << "After nested block sameName = " << sameName << endl;
    }

    cout << "After first block sameName = " << sameName << endl;

    // Повторний виклик функції зі статичною змінною
    cout << "\nStatic function:" << endl;

    staticFunction();
    staticFunction();
    staticFunction();

    cout << "\n========== TASK 4 ==========" << endl;

    // Демонстрація глобальної та локальної змінних
    cout << "Global number = " << ::number << endl;

    {
        int number = 200;

        cout << "Local number = " << number << endl;
        cout << "Global number using :: = " << ::number << endl;
    }

    cout << "\n========== TASK 5 ==========" << endl;

    // Виділення пам'яті для першого покажчика
    int* pointer1 = new int;

    *pointer1 = 150;

    cout << "\nFirst pointer:" << endl;
    cout << "pointer1 = " << pointer1 << endl;
    cout << "&pointer1 = " << &pointer1 << endl;
    cout << "*pointer1 = " << *pointer1 << endl;
    cout << "sizeof(pointer1) = " << sizeof(pointer1) << endl;
    cout << "sizeof(*pointer1) = " << sizeof(*pointer1) << endl;

    // Звільнення пам'яті
    delete pointer1;
    pointer1 = nullptr;

    cout << "\nFirst pointer memory released." << endl;

    // Виділення пам'яті для другого покажчика
    int* pointer2 = new int(250);

    cout << "\nSecond pointer:" << endl;
    cout << "pointer2 = " << pointer2 << endl;
    cout << "&pointer2 = " << &pointer2 << endl;
    cout << "*pointer2 = " << *pointer2 << endl;
    cout << "sizeof(pointer2) = " << sizeof(pointer2) << endl;
    cout << "sizeof(*pointer2) = " << sizeof(*pointer2) << endl;

    // Пам'ять поки що не звільняємо
    cout << "\nSecond pointer memory is still allocated." << endl;

    // Вкладений блок із покажчиком
    int* outerPointer = nullptr;

    {
        int* innerPointer = new int(300);

        outerPointer = innerPointer;

        cout << "\nNested block pointer:" << endl;
        cout << "innerPointer = " << innerPointer << endl;
        cout << "*innerPointer = " << *innerPointer << endl;
    }

    // Покажчик innerPointer уже поза областю видимості,
    // але пам'ять у купі продовжує існувати
    cout << "\nAfter nested block:" << endl;
    cout << "outerPointer = " << outerPointer << endl;
    cout << "*outerPointer = " << *outerPointer << endl;

    // Звільнення пам'яті через зовнішній покажчик
    delete outerPointer;
    outerPointer = nullptr;

    // Ще один покажчик у блоці main
    int* pointer3 = new int(400);

    cout << "\nThird pointer:" << endl;
    cout << "*pointer3 = " << *pointer3 << endl;

    delete pointer3;
    pointer3 = nullptr;

    // Звільнення пам'яті другого покажчика
    delete pointer2;
    pointer2 = nullptr;

    cout << "\nAll allocated memory released." << endl;

    return 0;
}
