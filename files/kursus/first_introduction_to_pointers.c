#include <stdio.h>
 
int main(int argc, char const *argv[])
{
	/* code */
	int num1 = 10, num2 = 100;
	int* p_num;
 
	printf("Notice the variable addresses in the program!\n**\n");
 
	printf("  num1 =\t%d,\t%x\n",num1, &num1);
	printf("  num2 =\t%d,\t%x\n",num2, &num2);
 
	printf("\nset pointer to num1 address\n");
	p_num = &num1; // set pointer to num1 address
	
	printf("  p_num =\t\t%x\n",p_num); // *p_num dereferences p_num
	printf("  *p_num=\t%d\n",*p_num); // *p_num dereferences p_num
 
	// change value at p_num
	printf("\nchange value at p_num\n");
	*p_num = 14;
 
	printf("  *p_num=\t%d\n",*p_num); // *p_num dereferences p_num
	printf("  num1 =\t%d\n",num1); // value at num1
 
	// change pointer to point at num2
	printf("\nchange pointer to point at num2\n");
	p_num = &num2; // pointer to num2 address
	printf("  p_num = \t\t%x\n",p_num); // *p_num dereferences p_num
	printf("  *p_num=\t%d\n",*p_num); // *p_num dereferences p_num
 
	return 0;
}
