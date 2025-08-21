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

	int weighta = 80;
	int weightb = 99;
	int weightc = 100;

	/* Print patient information */
	printf("Patient Information for 5 patients\n");
	printf("###\n  PatientID:\t%d\n  age:\t\t%d\n  weight:\t%d\n", patientID1, weighta, age1);
	printf("###\n  PatientID:\t%d\n  age:\t\t%d\n  weight:\t%d\n", patientID2, weightb, age2);
	printf("###\n  PatientID:\t%d\n  age:\t\t%d\n  weight:\t%d\n", patientID3, weightc, age2); // bug

	return 0;
}
