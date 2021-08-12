#include <stdio.h>

struct self{ // self referential structure

	int data;
	struct self * it; // here it refer to itself
};


