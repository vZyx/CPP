// C++ recursive function to solve tower of hanoi puzzle
#include <bits/stdc++.h>
using namespace std;

void towerOfHanoi(int n, char from_rod, char aux_rod, char to_rod)
{
	if (n == 0) {
		return;
	}
	towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
	cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;
	towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
	int N;
    cout << "Enter the number of disks: ";
    cin  >> N;
	// A, B and C are names of rods
	towerOfHanoi(N, 'A', 'B', 'C');
	return 0;
}

/*
Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks.
Initially, all the disks are stacked in decreasing value of diameter i.e.,the smallest disk is placed on the top and they are on rod A.
The objective of the puzzle is to move the entire stack to another rod (here considered C), obeying the following simple rules: 

• Only one disk can be moved at a time.
• Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
• No disk may be placed on top of a smaller disk.

The idea is to use the helper node to reach the destination using recursion. Below is the pattern for this problem:

Shift ‘N-1’ disks from ‘A’ to ‘B’, using C.
Shift last disk from ‘A’ to ‘C’.
Shift ‘N-1’ disks from ‘B’ to ‘C’, using A.

Follow the steps below to solve the problem:

• Create a function towerOfHanoi where pass the N (current number of disk), from_rod, to_rod, aux_rod.
• Make a function call for N – 1 th disk.
• Then print the current the disk along with from_rod and to_rod
• Again make a function call for N – 1 th disk.


*/