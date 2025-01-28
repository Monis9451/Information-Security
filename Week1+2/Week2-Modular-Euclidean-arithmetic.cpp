// --------------------Find remainder

// #include <iostream>
// using namespace std;
// int main()
// {
//     int dividend, divisor;
//     cout << "Enter the dividend: ";
//     cin >> dividend;
//     cout << "Enter the divisor: ";
//     cin >> divisor;
//     cout << dividend << " % " << divisor << dividend % divisor << endl;

//     return 0;
// }

// --------------------Check divisibility

// #include <iostream>
// using namespace std;
// bool isDivisible(int n, int m)
// {
//     while (n >= m)
//     {
//         n -= m;
//     }
//     return (n == 0);
// }
// int main()
// {
//     int n, m;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     cout << "Enter the value of m: ";
//     cin >> m;

//     if (m == 0)
//     {
//         cout << "Division by zero is not allowed." << endl;
//     }
//     else if (isDivisible(n, m))
//     {
//         cout << n << " is divisible by " << m << endl;
//     }
//     else
//     {
//         cout << n << " is not divisible by " << m << endl;
//     }

//     return 0;
// }

// --------------------Modular Addition and Multiplication

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b, m, modularAddition, modularMultiplication;
//     cout << "Enter the value of a: ";
//     cin >> a;
//     cout << "Enter the value of b: ";
//     cin >> b;
//     cout << "Enter the value of m: ";
//     cin >> m;
//     modularAddition = (a + b) % m;
//     modularMultiplication = (a * b) % m;
//     cout << "Modular Addition: (" << a << " + " << b << ") mod " << m << " = " << modularAddition << endl;
//     cout << "Modular Multiplication: (" << a << " * " << b << ") mod " << m << " = " << modularMultiplication << endl;
//     return 0;
// }

// --------------------Implement the Basic Euclidean Algorithm

// #include <iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     while (b != 0)
//     {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }
// int main()
// {
//     int a = 56, b = 98;

//     cout << "Input: a = " << a << ", b = " << b << endl;
//     cout << "Output: GCD = " << gcd(a, b) << endl;

//     return 0;
// }
