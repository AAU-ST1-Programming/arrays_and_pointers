#include <stdio.h>
 
int main(int argc, char const *argv[])
{
	int num1 = 10; // variable
	int* p_num = &num1; // pointer p_num is equal to the address of variable num1


	 // reference to variable (it's address)
	&num1; // reference variable num1 (get the address of variable num1)
	*p_num; // dereference pointer p_num (get value at the address pointer p_num points to)
 
	// for example
	printf("set value of num1: ");
	scanf("%d",&num1); 
	// scanf("%d",p_num); // p_num is the address of num1!
	printf("Value of num1 is now: %d", num1);
 
	printf("  num1 =\t%d,\t%x\n",num1, &num1);// num1:value in num1; &num1: address of num1
  
	// change value of variable num1 using p_num
	*p_num = 14; // *p_num means we access the value of p_num;
 
	printf("  *p_num=\t%d\n",*p_num); // *p_num dereferences p_num
	printf("  num1 =\t%d\n",num1); // value at num1
 
	return 0;
}
