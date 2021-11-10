#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int* massive = new int[1] { 0 };
	int capacity = 1;
	int count_of_elements = 0;

	bool exiting = false;
	while (!exiting)
	{
		printf("______MENU______\n");
		printf("0 - Exit\n");
		printf("1 - Print current state of massive\n");
		printf("2 - Add element to the end of massive\n");
		printf("3 - Add element to the start of massive\n");
		printf("4 - Delete element in the end of massive\n");
		printf("5 - Delete element in the start of massive\n");
		printf("6 - Expand massive\n");
		printf("Input your choice: ");

		int c = 0;
		scanf("%d", &c);

		switch (c)
		{
		case 0:
		{
			exiting = true;
			break;
		}
		case 1:
		{
			if (count_of_elements)
			{
				for (int i = 0; i < 5 * count_of_elements + 1; ++i)
				{
					printf("_");
				}
				printf("\n|");
				for (int i = 0; i < count_of_elements; ++i)
				{
					printf(" %2d |", massive[i]);
				}
				printf("\n");
				for (int i = 0; i < 5 * count_of_elements + 1; ++i)
				{
					printf("_");
				}
				printf("\n");
			}
			else
			{
				printf("Massive is empty\n");
			}
			break;
		}
		case 2:
		{
			int element = 0;
			printf("Input element: ");
			scanf("%d", &element);
			++count_of_elements;
			if (capacity < count_of_elements)
			{
				capacity *= 2;
				int* mass = new int[capacity] { 0 };
				for (int i = 0; i < count_of_elements - 1; ++i)
				{
					mass[i] = massive[i];
				}
				mass[count_of_elements - 1] = element;
				delete[] massive;
				massive = mass;
			}
			else
			{
				massive[count_of_elements - 1] = element;
			}
			break;
		}
		case 3:
		{
			int element = 0;
			printf("Input element: ");
			scanf("%d", &element);
			++count_of_elements;
			if (capacity < count_of_elements)
			{
				capacity *= 2;
			}
			int* mass = new int[capacity] { 0 };
			mass[0] = element;
			for (int i = 0; i < count_of_elements - 1; ++i)
			{
				mass[i + 1] = massive[i];
			}
			delete[] massive;
			massive = mass;
			break;
		}
		case 4:
		{
			--count_of_elements;
			massive[count_of_elements] = 0;
			break;
		}
		case 5:
		{
			--count_of_elements;
			int* mass = new int[capacity] { 0 };
			for (int i = 0; i < count_of_elements; ++i)
			{
				mass[i] = massive[i + 1];
			}
			delete[] massive;
			massive = mass;
			break;
		}
		case 6:
		{
			int* mass = new int[capacity] { 0 };
			for (int i = 0; i < count_of_elements; ++i)
			{
				mass[i] = massive[count_of_elements - i - 1];
			}
			delete[] massive;
			massive = mass;
			break;
		}
		}
	}

	return 0;
}