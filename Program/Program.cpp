#include <iostream>

using namespace std;
template <typename T>

#define SIZE 5

class Queue
{
private:
	int rear;
	int front;

	T container[SIZE];
public:
	Queue()
	{
		rear = 0;
		front = 0;

		for (int i = 0; i < SIZE; i++)
		{
			container[i] = NULL;
		}
	}

	void push(T data)
	{
		if (true)
		{

		}
	}

	void pop()
	{
	
	}

	const bool& empty()
	{

	}
};


int main()
{

	return 0;

}