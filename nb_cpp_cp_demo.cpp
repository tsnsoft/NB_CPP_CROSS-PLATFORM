    #include <stdio.h>
    #include <iostream>
    #include <clocale>

    using namespace std;

    int main(int argc, char** argv) {
        int number1;
        float number2;

        setlocale(LC_ALL, "");

        /* Стиль С из  <stdio.h> */
        printf("Введите целое и вещественное число через пробел: ");
        scanf("%d %f", &number1, &number2);
        printf("number1 = %d, number2 = %f \n", number1, number2);
        puts("Спасибо!");

        /* Стиль С++ из  <iostream> */
        cout << "Введите еще число: ";
        cin >> number2;
        cout << "Вы ввели число " << number2 << endl;

        return 0;
    }
