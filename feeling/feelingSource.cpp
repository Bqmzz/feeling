#include<stdio.h>
int main() {
	char name[20];
	printf("Enter name : ");
	gets_s(name);

	int num;
	int* i = &num;
	printf("Fav num : ");
	scanf_s("%d", &i);

	int score;
	printf("Your happiness score : ");
	scanf_s("%d", &score);
	if (score >= 0 && score <= 100) {
		if (score >= 80) {
			printf("%s are very happy",name);
		}
		else if (score >= 60 && score < 80) {
			printf("%s are happy",name);
		}
		else if (score >= 40 && score < 60) {
			printf("%s are quite happy",name);
		}
		else if (score >= 20 && score < 40) {
			printf("%s are less happy",name);
		}
		else if (score >= 0 && score < 20) {
			printf("%s are not happy",name);
		}
	}
	else printf("Error");
	return 0;
}