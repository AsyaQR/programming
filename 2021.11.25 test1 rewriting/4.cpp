#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])
{
    char sign = '0';
    int number = 0;
    int min = 0;
    int max = 1000000000;
    srand(time(0));
    number = (rand() % (max - min + 1)) + min;
    cout << number << endl;
    while (sign != '=')
    {
        scanf("%c", &sign);
        fflush(stdout);
        if (sign = '>')
        {
            min = number;
        }
        else if (sign = '<')
        {
            max = number;
        }
        number = (rand() % (max - min + 1)) + min;
        cout << number << endl;
    }
    return EXIT_SUCCESS;
}