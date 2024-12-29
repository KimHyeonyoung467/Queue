#include <iostream>
using namespace std; 
#include "H_QUEUE.h"

void QueueLoof()
{
	Queue Q(3);

	Q.Enqueue(10);
	Q.Enqueue(20);
	Q.Enqueue(30);

	cout << Q.Dequeue() << endl;
	cout << Q.peek() << endl;
}

int main()
{
	QueueLoof();
	return 0;
}

