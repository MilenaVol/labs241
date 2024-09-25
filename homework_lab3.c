#include <stdio.h>
#define g 9.8
int main()
{
 int m;
 float result_F;
 puts("Введите массу тела в кг");
 scanf ("%d", &m);
 result_F =  m * g;
 printf ("Сила тяжести тела массой %d кг равна %.1fН", m, result_F);
}