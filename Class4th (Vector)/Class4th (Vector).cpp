#include <iostream>

using namespace std;
template <typename T>

class Vector
{
private:
	int count;
	int capacity;

	T* pointer;

public:
	Vector()
	{
		count = 0;
		capacity = 0;
		pointer = nullptr;
	}

	void resize(int newSize)
	{
		capacity = newsize;

		T* temporary = new T[capacity];

		for (int i = 0; i < capacity; i++)
		{
			temporary[i] = NULL;
		}


		for (int i = 0; i < count; i++)
		{
			temporary[i] = pointer[i];
		}

		delete[]pointer;

		pointer = temporary;
	}

	void push_back(T data)
	{
		if (cpapcity <= 0)
		{
			resize(1);
		}
		else if (count >= capacity)
		{
			resize(capacity * 2);
		}

		pointer[count++] = data;
	}

	void pop_back()
	{
		if (count <= 0)
		{
			cout << "be" << endl;
		}
		else
		{
			pointer[--count] = NULL;
		}
	}
	const int& size()
	{
		return count;
	}

	const T& operator [] (const int& index)
	{
		return pointer[index];
	}

	~Vector()
	{
		delete[] pointer;
	}
};


int main()
{
	Vector<int> vector;

	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);
	vector.push_back(5);

	vector.pop_back();

	for (int i = 0; i < vector.size(); i++)
	{
		cout << vector[i] << endl;
	}
	return 0;

}