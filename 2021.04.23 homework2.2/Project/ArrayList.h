#pragma once
#include<ostream>
class ArrayList
{
private:
	int* data;
	int capacity;
	int count;
	void expand(int count = 1);
	void swap(int posi, int posj);
	int ind(int index);

public:
	ArrayList(int capacity = 10);
	ArrayList(const ArrayList& list);
	~ArrayList();

	/// <summary>
	/// вставка элемента в конецц массива
	/// </summary>
	/// <param name="element"></param>
	void pushend(int element);
	void pushbegin(int element);
	void insert(int element, int position);
	int extractbegin();
	int extractend();
	int extract(int position);
	/// <summary>
	/// получение элемента по индексу,
	/// в случае отрицательного индекса - будет добавлен элемент в начало списка
	/// </summary>
	/// <param name="pos"></param>
	/// <returns></returns>
	int& operator[](int pos);
	/// <summary>
	/// сортировка списка методом QuickSort
	/// </summary>
	void sort(int begin = 0, int end = 0);

	friend std::ostream& operator<<(std::ostream& stream, ArrayList& list);
};


