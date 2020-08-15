#include<stdio.h>
int main()
{
	float passScore = 50.0;
	float score, maxScore, sPercent;

	printf("Enter your score : ");
	scanf("%f", &score);
	printf("Enter max score : ");
	scanf("%f", &maxScore);

	sPercent = (score / maxScore) * 100;
	printf("Your score percent : %.2f", sPercent);

	if (sPercent >= passScore)
	{
		printf("\nPass");
	}
	else {
		printf("\nFail");
	}

	return 0;
}