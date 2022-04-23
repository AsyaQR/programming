#include "ArrayList.h"

void ArrayList::expand(int count)
{
	int* newdata = new int[count + this->capacity];
	for (int i = 0; i < this->capacity; ++i)
	{
		newdata[i] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->capacity += count;
}

void ArrayList::swap(int posi, int posj)
{
	int num = this->data[posi];
	this->data[posi] = this->data[posj];
	this->data[posi] = num;
}

int ArrayList::ind(int index)
{
	if (index < 0)
	{
		pushbegin(0);
		return 0;
	}
	if (index >= this->count)
	{
		pushend(0);
		return this->count - 1;
	}
	return index;
}

ArrayList::ArrayList(int capacity)
{
	this->capacity = capacity;
	this->count = 0;
	this->data = new int[capacity];
}

ArrayList::ArrayList(const ArrayList& list)
{
	this->capacity = list.count;
	this->count = list.count;
	this->data = new int[list.count];
	for (int i = 0; i < list.count; ++i)
	{
		this->data[i] = list.data[i];
	}
}

ArrayList::~ArrayList()
{
	this->count = 0;
	this->capacity = 0;
	for (int i = 0; i < this->capacity; ++i)
	{
		this->data[i] = 0;
	}
	delete[] this->data;
}

void ArrayList::pushend(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	this->data[this->count] = element;
	this->count++;
}

void ArrayList::pushbegin(int element)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	int* newdata = new int[this->capacity];
	newdata[0] = element;
	for (int i = 0; i < this->count; ++i)
	{
		newdata[i + 1] = this->data[i];
	}
	delete[] this->data;
	this->data = newdata;
	this->count++;
}

void ArrayList::insert(int element, int position)
{
	if (this->count == this->capacity)
	{
		expand(this->capacity);
	}
	int* newdata = new int[this->capacity];
	for (int i = 0; i < this->count + 1; ++i)
	{
		if (i < position - 1)
		{
			newdata[i] = this->data[i];
		}
		else if (i == position - 1)
		{
			newdata[i] = element;
		}
		else
		{
			newdata[i] = this->data[i - 1];
		}
	}
	delete[] this->data;
	this->data = newdata;
	this->count++;
}

int ArrayList::extractend()
{
	this->count--;
	return this->data[this->count];
}

int ArrayList::extract(int position)
{
	if (position < 1 || position > this->count)
	{
		this->pushbegin(position);
		return position;
	}
	else
	{
		int num = this->data[position - 1];
		for (int i = 0; i < count - 1; ++i)
		{
			if (i >= position - 1)
			{
				this->data[i] = this->data[i + 1];
			}
		}
		this->count--;
		return num;
	}
}

int ArrayList::extractbegin()
{
	int num = this->data[0];
	int* newdata = new int[this->capacity];
	for (int i = 0; i < this->count - 1; ++i)
	{
		newdata[i] = this->data[i + 1];
	}
	delete[] this->data;
	this->data = newdata;
	this->count--;
	return num;
}

int& ArrayList::operator[](int pos)
{
	return data[ind(pos)];
}

void ArrayList::sort(int begin, int end)
{
	if (end == 0) end = this->count - 1;
	int i = begin;
	int j = end;
	int mid = this->data[(begin + end) / 2];
	int temp;

    while (i <= j)
    {
        while (this->data[i] < mid)
			i++;
		while (this->data[j] > mid)
			j--;
		if (i <= j)
		{
			temp = this->data[i];
			this->data[i] = this->data[j];
			this->data[j] = temp;
			i++;
			j--;
		}
	}
	if (j > begin)
		this->sort(begin, j);
	if (i < end)
		this->sort(i, end);
}

std::ostream& operator<<(std::ostream& stream, ArrayList& list)
{
	stream << "[" << list.count << "/" << list.capacity << "] {";
	if (list.count == 0)
	{
		stream << "EMPTY";
	}
	else
	{
		for (int i = 0; i < list.count - 1; ++i)
		{
			stream << list.data[i] << ", ";
		}
		stream << list.data[list.count - 1];
	}
	stream << "}";
	return stream;
}
