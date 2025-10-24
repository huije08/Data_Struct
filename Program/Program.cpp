#include <iostream>

using namespace std;
template <typename T>

#define SIZE 4

class Queue
{
private:

	int rear;
	int front;

	T container[SIZE];

public:
	Queue()
	{
		rear = SIZE - 1;
		front = SIZE - 1;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}

	void push(T data)
	{
		if (front == (rear + 1)%SIZE)
		{
			cout << "linear queue overflow" << endl;
		}
		else
		{
			rear == (rear + 1) % SIZE;
			container[rear] = data;
		}
	}

	void pop()
	{
		if (empty())
		{
			cout << "linear queue is empty" << endl;
		}
		else
		{
			rear == (rear + 1) % SIZE;
			container[rear] = data;
		}
	}

	const bool& empty()
	{
		return front == rear;
	}

	const T& peak()
	{
		if (empty())
		{
			exit(i);
		}
		else
		{
			return container[];
		}
	}
};



int main()
{
	Queue<int> queue;

	queue.push(10);
	queue.push(20);
	queue.push(30);

	while (queue.empty() == false)
	{

	}


	return 0;

}