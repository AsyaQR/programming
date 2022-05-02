#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		//stream << temp->data << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	/*
	Node* newhead = new Node();
	newhead->data = element;
	newhead->next = this->head;
	head = newhead;
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;*/
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

int LinkedList::ind(int index)
{
	if (index > this->count - 1)
	{
		return (count - 1);
	}
	else
	{
		return index;
	}
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	tail->next = nullptr;
	return value;
}


void LinkedList::insert(int element, int index)
{
	if (index == 0)
	{
		pushHead(element);
	}
	else if (index == count - 1)
	{
		pushTail(element);
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index - 1; ++i)
		{
			temp = temp->next;
		}
		Node* aftertemp = head;
		for (int i = 0; i < index; ++i)
		{
			aftertemp = aftertemp->next;
		}

		temp->next = new Node(element, aftertemp);
		++count;
	}
}

int LinkedList::extract(int index)
{
	if (index == 0)
	{
		popHead();
	}
	else if (index == count - 1)
	{
		popTail();
	}
	else
	{
		Node* temp = head;
		for (int i = 0; i < index - 1; ++i)
		{
			temp = temp->next;
		}
		Node* aftertemp = head;
		for (int i = 0; i < index; ++i)
		{
			aftertemp = aftertemp->next;
		}
		temp->next = aftertemp->next;
		--count;
		int value = aftertemp->data;
		delete aftertemp;
		return value;
	}
}

void LinkedList::swap(int index1, int index2)
{
	if (index1 == index2)
	{

	}
	else if (index1 >= count || index2 >= count)
	{

	}
	else
	{
		if (index1 > index2)
		{
			int index = index1;
			index1 = index2;
			index2 = index;
		}
		Node* temp = head;
		for (int i = 0; i < index1 - 1; ++i)
		{
			temp = temp->next;
		}
		Node* temp1 = head;
		for (int i = 0; i < index1; ++i)
		{
			temp1 = temp1->next;
		}
		Node* temp2 = head;
		for (int i = 0; i < index1 + 1; ++i)
		{
			temp2 = temp2->next;
		}
		Node* temp3 = head;
		for (int i = 0; i < index2 - 1; ++i)
		{
			temp3 = temp3->next;
		}
		Node* temp4 = head;
		for (int i = 0; i < index2; ++i)
		{
			temp4 = temp4->next;
		}
		Node* temp5 = head;
		for (int i = 0; i < index2 + 1; ++i)
		{
			temp5 = temp5->next;
		}
		if ((index1 != 0 && index2 != 0) && (index2 - 1 != index1))
		{
			temp->next = temp4;
			temp4->next = temp2;
			temp3->next = temp1;
			temp1->next = temp5;
		}
		else if (index1 == 0 || index2 == 0)
		{
			head = temp4;
			temp4->next = temp2;
			temp3->next = temp1;
			temp1->next = temp5;
		}
		else if (index2 - 1 == index1)
		{
			temp->next = temp4;
			temp4->next = temp1;
			temp1->next = temp5;
		}
	}
}