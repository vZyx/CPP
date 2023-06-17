// CPP code to illustrate Queue in STL
#include <iostream>
#include <queue>
using namespace std;

/*
Queues are a type of container adaptors that operate in a first in first out First in first out (FIFO) type of arrangement. 
Elements are inserted at the back (end) and are deleted from the front.

Queues use an encapsulated object of deque or list (sequential container class) as its underlying container,
providing a specific set of member functions to access its elements.
*/

// Print the queue
void show(queue<int> gq)
{
	queue<int> g = gq;
	while (!g.empty()) {
		cout << '\t' << g.front();
		g.pop();
	}
	cout << '\n';
}

int main()
{
	queue<int> gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(30);

	cout << "The queue gquiz is : ";
	show(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size();
	cout << "\ngquiz.front() : " << gquiz.front();
	cout << "\ngquiz.back() : " << gquiz.back();

	cout << "\ngquiz.pop() : ";
	gquiz.pop();

	show(gquiz);// DISPLAY

	return 0;
}
/*
    Methods	Description

push()	Inserts an element at the back of the queue
pop()	Removes an element from the front of the queue
front()	Returns the first element of the queue
back()	Returns the last element of the queue
size()	Returns the number of elements in the queue
empty()	Returns true if the queue is empty

ALL O(1)

*/