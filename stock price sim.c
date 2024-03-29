
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
  srand(time(NULL));
  time_t t = time(NULL);
  struct tm *today = localtime(&t);
  printf("Today's date: %d-%02d-%02d\n", today->tm_year + 1900, today->tm_mon + 1, today->tm_mday   );
  printf("Date, Open, Close, Volume\n");
  for (int i = 0; i < 10; i++) {
    t -= 60 * 60 * 24;
    struct tm *date = localtime(&t);
    float r = (rand() / (float)RAND_MAX) * 10 + 80;
    float w = (rand() / (float)RAND_MAX) * 10 + 80;
    int vol = rand() % 1000000 + 1000000 ;
    printf("%d-%02d-%02d,%.2f,%.2f,%d\n", date->tm_year + 1900, date->tm_mon + 1, date->tm_mday,r,w,vol);
  }

  return 0;
}

