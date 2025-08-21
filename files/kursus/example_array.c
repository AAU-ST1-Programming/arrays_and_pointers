#include <stdio.h> /* printf */
int main(){
	int Numbers[] = {2151.3, 33.1, 51111.0, -317.6213};
	int N = sizeof(Numbers) / sizeof(Numbers[0]);
	printf("Numbers:");
	for (int i = 0; i < N; i++){
		printf("Numbers[%i]=%i\n", i, Numbers[i]);
	}
	return 0;
}
