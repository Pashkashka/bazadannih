#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct shoes
{
	char firm[20];
	char color[20];
	int cost;
	char model[20];
}
z[20];
int N,i, s, m,j,dl,cen;
char k[20];
void vvod() {

	printf("Vvedite kolichestvo strok\n");
	scanf_s("%d", &N);
	for (i = 1; i <= N; i++) {
		printf("Vvedite firmu \n");
		scanf_s("%s", z[i].firm, 20);
		printf("Vvedite tsvet\n");
		scanf_s("%s", z[i].color, 20);
		printf("Vvedite cenu \n");
		scanf_s("%d", &z[i].cost);
		printf("Vvedite model \n");
		scanf_s("%s", z[i].model, 20);
	}
	printf("Chto dalshe?\n");
}
void dobavka() {
	printf("Vvedite firmu \n");
	scanf_s("%s", z[i].firm, 20);
	printf("Vedite tsvet \n");
	scanf_s("%s", z[i].color, 20);
	printf("Vvedite cenu\n");
	scanf_s("%d", &z[i].cost);
	printf("Vvedite model \n");
	scanf_s("%s", z[i].model, 20);
	printf("Chto dalshe?\n");
	N++;
}
void vyvod()
{ 
	printf("Nom\tFirm\tColor\tCost\tModel\n");
	for (i = 1; i <= N; i++) {
		printf("%d\t%s\t%s\t%d\t%s\n", i, z[i].firm, z[i].color, z[i].cost, z[i].model);
	}
	printf("-------------\n");
	printf("Chto dalshe?\n");
}
void del()
{
	
	printf("Vvedite chto udalit\n");
	printf("1.Firm\n");
	printf("2.Color\n");
	printf("3.Cost\n");
	printf("4.Model\n");
	scanf_s("%d", &dl);
	switch (dl)
	{
	case 1:
	{
		
		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].firm);
		printf("Vvedite firmu\n");
		scanf_s("%s", k, 15);
		for (j = 1; j <= N; j++)
			for (i = 1; i <= N; i++)
			{

				if (strcmp(k, z[i].firm) == 0)
				{
					strcpy_s(z[i].firm, z[N].firm);
					strcpy_s(z[i].color, z[N].color);
					z[i].cost = z[N].cost;
					strcpy_s(z[i].model, z[N].model);

					N--;

					
				}
				if (strcmp(k, z[N].firm) == 0)
					N--;
			}
		vyvod();
		break;

	}
	case 2:
	{

		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].color);
		printf("Vvedite tsvet\n");
		scanf_s("%s", k, 15);
		for (j = 1; j <= N; j++)
			for (i = 1; i <= N; i++)
			{

				if (strcmp(k, z[i].color) == 0)
				{
					strcpy_s(z[i].firm, z[N].firm);
					strcpy_s(z[i].color, z[N].color);
					z[i].cost = z[N].cost;
					strcpy_s(z[i].model, z[N].model);

					N--;


				}
				if (strcmp(k, z[N].color) == 0)
					N--;
			}
		vyvod();
		break;
	}
	case 3:
	{
		for (i = 1; i <= N; i++)
			printf("%d\n", z[i].cost);
		printf("Vvedite cenu\n");
		scanf_s("%d", &cen);
		for (j = 1; j <= N; j++)
			for (i = 1; i <= N; i++)
			{

				if (cen==z[i].cost)
				{
					strcpy_s(z[i].firm, z[N].firm);
					strcpy_s(z[i].color, z[N].color);
					z[i].cost = z[N].cost;
					strcpy_s(z[i].model, z[N].model);

					N--;


				}
				if (cen==z[N].cost)
					N--;
			}

		vyvod();
		break;
	}
	case 4:
	{
		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].model);
		printf("Vvedite model\n");
		scanf_s("%s", k, 15);
		for (j = 1; j <= N; j++)
			for (i = 1; i <= N; i++)
			{

				if (strcmp(k, z[i].model) == 0)
				{
					strcpy_s(z[i].firm, z[N].firm);
					strcpy_s(z[i].color, z[N].color);
					z[i].cost = z[N].cost;
					strcpy_s(z[i].model, z[N].model);

					N--;


				}
				if (strcmp(k, z[N].model) == 0)
					N--;
			}
		vyvod();
		break;
	}

		
	}
}
void poisk()
{
	printf("Vvedite chto naiti\n");
	printf("1.Firm\n");
	printf("2.Color\n");
	printf("3.Cost\n");
	printf("4.Model\n");
	scanf_s("%d", &dl);
	switch (dl)
	{
	case 1:
	{
		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].firm);
		printf("Vvedite firmu\n");
		scanf_s("%s", k, 15);
		printf("Nom\tFirm\tColor\tCost\tModel\n");
			for (i = 1; i <= N; i++)

				if (strcmp(k, z[i].firm) == 0)
				
					
					printf("%d\t%s\t%s\t%d\t%s\n", i, z[i].firm, z[i].color, z[i].cost, z[i].model);

				
		
		break;

	}
	case 2:
	{
		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].color);
		printf("Vvedite tsvet\n");
		scanf_s("%s", k, 15);
		printf("Nom\tFirm\tColor\tCost\tModel\n");
		for (i = 1; i <= N; i++)

			if (strcmp(k, z[i].color) == 0)
			
				
				printf("%d\t%s\t%s\t%d\t%s\n", i, z[i].firm, z[i].color, z[i].cost, z[i].model);

			
		break;
	}
	case 3:
	{
		for (i = 1; i <= N; i++)
			printf("%d\n", z[i].cost);
		printf("Vvedite cenu\n");
		scanf_s("%d", &cen);
		printf("Nom\tFirm\tColor\tCost\tModel\n");
		for (i = 1; i <= N; i++)

			if (cen==z[i].cost)
			
				
				printf("%d\t%s\t%s\t%d\t%s\n", i, z[i].firm, z[i].color, z[i].cost, z[i].model);

			
		break;
	}
	case 4:
	{
		for (i = 1; i <= N; i++)
			printf("%s\n", z[i].model);
		printf("Vvedite model\n");
		scanf_s("%s", k, 15);
		printf("Nom\tFirm\tColor\tCost\tModel\n");
		for (i = 1; i <= N; i++)

			if (strcmp(k, z[i].model) == 0)

				printf("%d\t%s\t%s\t%d\t%s\n", i, z[i].firm, z[i].color, z[i].cost, z[i].model);

		break;
	}


	}
}
void menu() {
	printf("1.Vvod\n");
	printf("2.Vyvod\n");
	printf("3.Dobavlenie\n");
	printf("4.Udalenie\n");
	printf("5.Poisk\n");
	printf("\n");
	printf("0.Vyhod\n");
	scanf_s("%d", &m);
}
int main() {
	menu();
	while (m>=0) {
		switch (m)
		{
		case 1:
			vvod();
			break;
		case 2:
			vyvod();
			break;
		case 3:
			dobavka();
			break;
		case 4:
			del();
			break;
		case 5:
			poisk();
			break;
		case 0:
			exit(0);
			break;
		}
		menu();
	}
	 shoes z[20];
}