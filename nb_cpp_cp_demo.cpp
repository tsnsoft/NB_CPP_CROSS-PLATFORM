    #include <stdio.h>
    #include <iostream>
    #include <clocale>

    using namespace std;

    int main(int argc, char** argv) {
        int number1;
        float number2;

        setlocale(LC_ALL, "");

        /* ����� � ��  <stdio.h> */
        printf("������� ����� � ������������ ����� ����� ������: ");
        scanf("%d %f", &number1, &number2);
        printf("number1 = %d, number2 = %f \n", number1, number2);
        puts("�������!");

        /* ����� �++ ��  <iostream> */
        cout << "������� ��� �����: ";
        cin >> number2;
        cout << "�� ����� ����� " << number2 << endl;

        return 0;
    }
