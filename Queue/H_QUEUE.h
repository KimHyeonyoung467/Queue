#include <iostream>
using namespace std;



class Queue
{
private : 
	int front; 
	int rear; 
	int Capacity; 
	int* Qu;
public : 
	Queue(int capacity)
	{
		Capacity = capacity;
		Qu = new int[Capacity]; // ���� �Ҵ� �迭 ��� 
		front = 0; 
		rear = -1;
	}
	~Queue()
	{
		delete[] Qu;
	}

public : 
	void Enqueue(int data);
	int Dequeue();
	
	int peek();
	bool isEmpty();
};