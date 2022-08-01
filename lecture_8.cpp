#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 2;
    double divide = static_cast<double>(a) / b; // 5/2=2
    cout << divide;
    double num = 4.5;
    cout << "the num before:" << num << endl;
    num = static_cast<int>(num);
    cout << "the num after:" << num << endl;
    int num1 = 65;
    cout << num1 << endl;
    char num2 = static_cast<char>(num1);
    cout << num2 << endl;
    return 0;
}