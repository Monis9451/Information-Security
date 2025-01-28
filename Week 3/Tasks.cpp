#include <iostream>
using namespace std;

int calculateGCD(int num1, int num2, int &coeff1, int &coeff2)
{
    if (num2 == 0)
    {
        coeff1 = 1;
        coeff2 = 0;
        return num1;
    }

    int tempCoeff1, tempCoeff2;
    int gcdValue = calculateGCD(num2, num1 % num2, tempCoeff1, tempCoeff2);

    coeff1 = tempCoeff2;
    coeff2 = tempCoeff1 - (num1 / num2) * tempCoeff2;

    return gcdValue;
}

int findModularInverse(int number, int modulus)
{
    int coeffX, coeffY;
    int gcdResult = calculateGCD(number, modulus, coeffX, coeffY);

    if (gcdResult != 1)
    {
        cout << "No modular inverse exists (numbers are not coprime)." << endl;
        return -1;
    }

    return (coeffX % modulus + modulus) % modulus;
}

int main()
{
    int number, modulus;

    cout << "Enter a number and modulus: ";
    cin >> number >> modulus;

    int inverseResult = findModularInverse(number, modulus);
    if (inverseResult != -1)
    {
        cout << "The modular inverse of " << number << " mod " << modulus << " is: " << inverseResult << endl;
    }

    return 0;
}
