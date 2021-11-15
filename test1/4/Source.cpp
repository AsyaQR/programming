#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int count = 0;
    cin >> count;

    int* numbers = new int[count] { 0 };
    for (int i = 0; i < count; ++i)
    {
        cin >> numbers[i];
    }

    int min = numbers[0];
    int max = numbers[0];
    for (int i = 1; i < count; ++i)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        else if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    for (int i = 0; i < count; ++i)
    {
        if (numbers[i] == max)
        {
            numbers[i] = min;
        }
    }

    for (int i = 0; i < count; ++i)
    {
        cout << numbers[i] << " ";
    }
    delete[] numbers;

    return EXIT_SUCCESS;
}