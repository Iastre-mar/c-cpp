# include <stdio.h>

void main(){
  float fahr, celsius;
  int lower, upper, step;

  lower = -100;
  upper = 100;
  step = 20;

  celsius = lower;
  while (upper >= celsius){
    fahr = (9.0/5.0) * celsius + 32.0;
    printf("%3.0f %6.1f\n", celsius, fahr);
    celsius += step;
  }
}
