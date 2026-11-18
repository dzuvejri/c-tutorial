#include <stdio.h>

int main() {
int MaxScore = 500;
int StudentScore = 436;
float Persentage = (float) StudentScore/MaxScore * 100.0;

printf("Percentage of Student: %.2f", Persentage);
return 0;
}