#include <iostream>

using namespace std;

void Plus(unsigned long long num1, unsigned long long num2);
void Minus(unsigned long long num1, unsigned long long num2);

int main()
{
    int choice = 0;
    unsigned long long Num1 = 0;
    unsigned long long Num2 = 0;

    cout << "첫 번째 숫자를 입력하세요. : ";
    cin >> Num1;
    cout << "\n두 번째 숫자를 입력하세요. : ";
    cin >> Num2;

    while (choice != 1 && choice != 2)
    {
        cout << "\n더하시겠습니까? 빼시겠습니까?\n(덧셈 : 1번 , 뺄셈 : 2번)\n: ";
        cin >> choice;
        if (choice != 1 && choice != 2)
        {
            cout << "\n다시 입력해주세요.\n";
            choice = 0;
        }  
    }

    if (choice == 1)
    {
        Plus(Num1, Num2);
    }
    else if (choice == 2)
    {
        Minus(Num1, Num2);
    }
}

void Plus(unsigned long long num1, unsigned long long num2)
{
    unsigned long long Total = 0;

    Total = num1 + num2;

    printf("\n%llu + %llu = %llu\n", num1, num2, Total);
}

void Minus(unsigned long long num1, unsigned long long num2)
{
    long long Total = 0;

    Total = num1 - num2;

    printf("\n%llu - %llu = %lld\n", num1, num2, Total);
}