#include <stdio.h>
#define ingD 2.54
#define spD 2.32166
#define mile 1.852
int main()
{
 int num1, num2, dym, ml;
 float result_ing, result_sp, result_mile;
 puts("Введите 2 числа");
 scanf("%d %d", &num1, &num2);
 printf("Сумма = %d\nРазность = %d\nПроизведение = %d\nЧастное = %d\nОстаток от деления = %d\n", num2+num1, num2-num1, num2*num1, num2/num1, num2%num1);

 puts("Введите значение для расчета дюймов в см");
 scanf ("%d", &dym);
 result_ing = ingD *dym;
 result_sp = spD *dym;
 printf ("%d английских дюймов – это %.1f см\n%d испанских дюймов – это %.5f см\n", dym, result_ing, dym, result_sp);

 puts("Введите значение для расчета морских миль в км");
 scanf ("%d", &ml);
 result_mile =  mile*ml;
 printf ("%d морских миль – это %.3f км\n", ml, result_mile);
}