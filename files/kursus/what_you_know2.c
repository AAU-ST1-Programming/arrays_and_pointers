#include <stdio.h>

int main(int argc, char const *argv[])
{

	/* code */
	int patientID1 = 1;
	int patientID2 = 3;
	int patientID3 = 52;

	int age1 = 13;
	int age2 = 44;
	int age3 = 51;

	int weight1 = 80;
	int weight2 = 99;
	int weight3 = 100;

	/* Print patient information */
	printf("Patient Information for 5 patients\n");
	printf("###\n");
	printf("  PatientID:\t%d\n", patientID1); // bug fixed
	printf("  age:\t\t%d\n", age1);
	printf("  weight:\t%d\n", weight1);

	printf("###\n");
	printf("  PatientID:\t%d\n", patientID2); // bug fixed
	printf("  age:\t\t%d\n", age2);
	printf("  weight:\t%d\n", weight2);
	
	printf("###\n");
	printf("  PatientID:\t%d\n", patientID3); // bug fixed
	printf("  age:\t\t%d\n", age3);
	printf("  weight:\t%d\n", weight3);

	return 0;
}
