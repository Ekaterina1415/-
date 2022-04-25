#include <stdio.h>
#include <stdint.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	// char a[10] = "asdf";
	// for(int i = 0; i < 10; i++)
	// {
	// 	printf("%c", a[9-i]);

	// }
	// string aaa = ""
	/*char a[10] = {
		{3,5,11,45,23,1,32,4,8,9},{3,5,11,45,23,1,32,4,8,9}
	};
    int i = 0;
	while(i < 10)
	{
		printf("%d", a[i]);
		i++;

	}*

/* int n,m;
scanf("%d", n);
scanf("%d", m);*/
// int a[2][10];

// 	for (int i = 0; i < 2; i++) 
// 	{
// 		for (int j = 0; j<10; j++)
// 		{
// 			scanf ("%d",&a[i][j]);
// 		}
// 	}
	
// for (int i = 0; i < 2; i++) 
// {
// 		for (int j = 0; j<10; j++)
// 		{
// 			printf ("%d", a[i][j]);
// 		}
// }

// 	// int x = 0;
// 	// printf("Введите ваш возраст ");
// 	// scanf("%d", &x);
// 	// printf("Res: %d\n", x);
// 	// return 0;
	// printf("%s\n", a);
	// return 0;
	// printf("Hello!");
	// printf("World\n");
// }
// int sum(int x,int c)
// {
// 	int res = c + x;
// 	return res;
// }


int a[2][2] = {
	{11,45},
	{23,32}
};
srand(time(NULL));
int r;
// int b[3] = {56,22298,343};
for (int i = 0; i < 2; i++)
{
	for (int j = 0; j < 2; j++)
	{
		r = rand();
		printf("%d", a[i][j]);
	}
}
// {
// 	printf("%d", a[j][j]);
// }

};


