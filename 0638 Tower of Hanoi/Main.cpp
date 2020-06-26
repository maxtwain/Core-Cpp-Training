/*
In this chapter, you studied functions that can be easily implemented both recursively and iteratively.  In this exercise, we present a problem whose recursive solution demonstrates the elegance of recursion, and whose iterative solution may not be as apparent.

The Towers of Hanoi is one of the most famous classic problems every budding computer scientist must grapple with.  Legend has it that in a temple in the Far East, priests are attempting to move a stack of golden disks from one diamond peg to another.  The initial stack has 64 disks threaded onto one peg and arranged from bottom to top by decreasing size.  The priests are attempting to move the stack from one peg to another under the constraints that exactly one disk is moved at a time and at no time may a larger disk be placed above a smaller disk.  These pegs are provided, one being used for temporarily holding disks.  Supposedly, the world will end with the priests completed their tasks, so there is little incentive for us to facilitate their efforts.

Let's assume that the priests are attempting to move the disks from peg 1 to peg 32.  We wish to develop and algorithm that prints the precise sequence of peg to peg disk transfers.

If we were to approach this problem with conventional methods, we should rapidly find ourselves hopelessly knotted up in managing the disks.  Instead, attacking this problem with recursion in mind allows the steps to be simple.  Moving n disks can be viewed in terms of moving only n - 1 disks (hence, the recursion), as follows:

A) Move n - 1 disks from peg 1 to peg 2, using peg 3 as a temporary holding area.

B) Move the last disk (the largest) from peg 1 to peg 3.

C) Move the n - 1 disks from peg 2 to peg 3, using peg 1 as a temporary holding area.

The process ends when the last task involves moving n = 1 disk (i.e., the base case).  This tasks is accomplished by simply moving the disk, without the need for a temporary holding area.  Write a program to solve the towers of Hanoi problem.  Use a recursive function with four parameters.

A) The number of disks to be moved

B) The peg on which these disks are initially threaded

C) The peg to which this stack of disks is to be moved

D) The peg to be used as a temporary holding area

Display the precise instructions for moving the disks from the starting peg to the destination peg.  To move a stack of three disks from peg 1 to peg 3, the program displays the following moves.

1 -> 3 (This means move one disk from peg 1 to peg 3.)
1 -> 2
3 -> 2
1 -> 3
2 -> 1
2 -> 3
1 -> 3
*/

#include <iostream>
#include <string>
#include <stack>

using std::cout;
using std::stack;
using std::string;

struct peg{
	string name;
	stack<int> diskStack;
} peg1, peg2, peg3;

void moveDisk(int diskSize, peg pegFrom, peg pegTo, peg pegHold);

int main() {

	peg1.name = "peg1";
	peg2.name = "peg2";
	peg3.name = "peg3";

	for (int disk = 64; disk >= 1; --disk) {
		peg1.diskStack.push(disk);
	}

	moveDisk(64, peg1, peg3, peg2);
}

void moveDisk(int diskSize, peg pegFrom, peg pegTo, peg pegHold) {

	if (diskSize > 0) {

		// move the rest of the stack to pegHold.
		moveDisk(diskSize - 1, pegFrom, pegHold, pegTo);

		// move the remaining disk to pegTo
		pegTo.diskStack.push(pegFrom.diskStack.top());
		pegFrom.diskStack.pop();

		// print the last disk move
		cout << "Disk "
			<< diskSize
			<< ": "
			<< pegFrom.name
			<< " -> "
			<< pegTo.name
			<< '\n';

		// move the rest of the stack on top of the moved disk
		moveDisk(diskSize - 1, pegHold, pegTo, pegFrom);
	}
}