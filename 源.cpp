#include <stdio.h>

class Array
{
public:
	Array()
	{
		newArray = new int[1000];
	}
	~Array()
	{
		delete[] newArray;
		newArray = nullptr;
		printf("%d\n", newArray);
	}
private:
	int* newArray;
};

int main()
{
	int* Array = new int[1000];

	for (int i = 0; i < 1000; ++i)
	{
		Array[i] = i;
	}

	for (int i = 0; i < 1000; ++i)
	{
		printf("num = %d\n", Array[i]);
	}
	return 0;
}
