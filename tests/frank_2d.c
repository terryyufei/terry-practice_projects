#include <stdio.h>
int main()
{
int arr[3][6];
int count = 1;
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 6; j++)
{
arr[i][j] = count;
count++;
}
}
for (int i = 0; i < 3; i++)
{
for (int j = 0; j < 6; j++)
{
printf("%2d \n", arr[i][j]);
}
printf("\n");
}
printf("Element at position [2][2]: %d\n", arr[2][2]);
return (0);
}

















