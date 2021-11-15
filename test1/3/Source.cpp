#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int number1 = 0;
    int number2 = 0;
    cin >> number1 >> number2;

    int result = 1;

    for (int i = 2; i <= number1; ++i)
    {
        if (number1 % i == 0)
        {
            while (number1 % i == 0)
            {
                if (number2 % i != 0)
                {
                    result *= i;
                }
                number1 /= i;
            }
        }
    }

    cout << result * number2 << endl;

    return EXIT_SUCCESS;
}