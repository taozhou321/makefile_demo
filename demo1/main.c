#include <stdio.h>
#include "Func/Func1.h"
#include "MyPrint/MyPrintln.h"


int main() {
	int total = 0;
	total = sum(10, 20);
	printf("total = %d", total);
	my_println("xxxxx");
	return 0;
}
