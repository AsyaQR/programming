#include <iostream>

using namespace std;

int IsIn(int number, int* massive, int count)
{
    int isin = 0;
    for (int i = 0; i < count; ++i)
    {
        if (massive[i] == number)
        {
            isin = i;
            break;
        }
    }
    return isin;
}


void swap(int* a, int* b) // Перестановка
{
    int c = *a;
    *a = *b;
    *b = c;
}


void bubble_sort(int* massive, int n) // Пузырьковая сортировка
{
    for (int i = 0; i < n - 1; ++i)
        for (int j = n - 2; j >= i; --j)
        {
            if (massive[j] > massive[j + 1])
                swap(&massive[j], &massive[j + 1]);
        }
}


int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;;
    cin >> n >> m;

    int* numbers1 = new int[n] { 0 };
    int* numbers2 = new int[m] { 0 };
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers1[i];
    }
    for (int i = 0; i < m; ++i)
    {
        cin >> numbers2[i];
    }

    int* result = new int[1];
    int count = 0;
    int capacity = 1;
    for (int i = 0; i < n; ++i)
    {
        int is = IsIn(numbers1[i], numbers2, m);
        if (is)
        {
            count++;
            if (count > capacity)
            {
                capacity++;
                int* dop = new int[capacity] { 0 };
                for (int j = 0; j < count - 1; ++j)
                {
                    dop[j] = result[j];
                }
                dop[count - 1] = numbers1[i];
                delete[] result;
                result = dop;
            }
            else
            {
                result[count - 1] = numbers1[i];
            }
            int* dop2 = new int[m - 1];
            for (int j = 0; j < m; ++j)
            {
                if (j < is)
                {
                    dop2[j] = numbers2[j];
                }
                else if (j > is)
                {
                    dop2[j - 1] = numbers2[j];
                }
            }
            delete[] numbers2;
            numbers2 = dop2;
            m--;
        }
    }

    bubble_sort(result, count);

    for (int i = 0; i < count; ++i)
    {
        cout << result[i] << " ";
    }

    delete[] numbers1;
    delete[] numbers2;
    delete[] result;

    return EXIT_SUCCESS;
}