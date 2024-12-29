#include "H_QUEUE.h"



void Queue::Enqueue(int data)
{
	if (rear == Capacity - 1)
	{
		cout << "Queue is overflow" << endl; return;
	}
	data = Qu[rear + 1];
}

int Queue::Dequeue()
{
	if (rear < front)
	{
		cout << "Queue Is Underflow" << endl; 
		return -1; 
	}
	return Qu[front + 1];
}

int Queue::peek()
{
	if (front > rear)
		return 0;
	else
		return Qu[front + 1];
}

bool Queue::isEmpty()
{
	if (Capacity == NULL)	// 메모리 공간이 비어있다면 
		return true;
	else
		return false;
}
