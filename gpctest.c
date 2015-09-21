#include "types.h"
#include "stat.h"
#include "user.h"

//Simple program to test out getpcount() system call
//which returns the number of currently running processes.
void testpcount()
{
	int count = 0;
	count = getpcount();
	printf(1,"Number of processes: %d\n",count);
}


int main(void)
{
	testpcount();
	exit();
}
