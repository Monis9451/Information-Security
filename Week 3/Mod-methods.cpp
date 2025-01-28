#include <iostream>
using namespace std;

int addModulo(int val1, int val2, int mod)
{
    return (val1 % mod + val2 % mod + mod) % mod;
}

int subtractModulo(int val1, int val2, int mod)
{
    int result = (val1 % mod - val2 % mod + mod) % mod;
    return result;
}

int multiplyModulo(int val1, int val2, int mod)
{
    int result = (val1 % mod) * (val2 % mod) % mod;
    return result;
}

int computeModInverse(int value, int mod)
{
    for (int candidate = 1; candidate < mod; ++candidate)
    {
        if ((value * candidate) % mod == 1)
        {
            return candidate;
        }
    }
    return -1;
}

int powerModulo(int base, int exp, int mod)
{
    int answer = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            answer = (answer * base) % mod;
        }
        exp /= 2;
        base = (base * base) % mod;
    }
    return answer;
}

int main()
{
    int number1, number2, modValue;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    cout << "Enter the modulus value: ";
    cin >> modValue;

    cout << "Addition under modulo: (" << number1 << " + " << number2 << ") mod " << modValue
         << " = " << addModulo(number1, number2, modValue) << endl;

    cout << "Subtraction under modulo: (" << number1 << " - " << number2 << ") mod " << modValue
         << " = " << subtractModulo(number1, number2, modValue) << endl;

    cout << "Multiplication under modulo: (" << number1 << " * " << number2 << ") mod " << modValue
         << " = " << multiplyModulo(number1, number2, modValue) << endl;

    int modInverse = computeModInverse(number1, modValue);
    if (modInverse != -1)
    {
        cout << "The modular inverse of " << number1 << " mod " << modValue << " is: " << modInverse << endl;
    }
    else
    {
        cout << number1 << " does not have a modular inverse modulo " << modValue << endl;
    }

    cout << "Exponentiation under modulo: (" << number1 << " ^ " << number2 << ") mod " << modValue
         << " = " << powerModulo(number1, number2, modValue) << endl;

    return 0;
}
