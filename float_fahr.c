# include <stdio.h>
/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */
void main(){
  float fahr, celsius;
  int lower, upper, step;

  printf("Заголовок\n");

  lower = 0;/* нижняя граница таблицы температур */
  upper = 300; /* верхняя граница */
  step = 20; /* шаг */

  fahr = lower ;
  while (upper >= fahr){
    celsius = (5.0/9.0) * (fahr-32.0);
    printf ("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }

}
