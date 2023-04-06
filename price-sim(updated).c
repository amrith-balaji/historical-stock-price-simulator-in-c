  1 #include <stdio.h>
  2 #include <stdlib.h>
  3 #include <time.h>
  4 #include<unistd.h>
  5 int main() {
  6
  7     printf("Date  ");
  8     printf("  Symbol ");
  9     printf("Open  ");
 10     printf("  High  ");
 11     printf("  Low");
 12     printf("   Volume\n");
 13     sleep(1);
 14
 15     printf("6/3/23  ");
 16     srand(time(0));
 17     char rand_letters[5];
 18     const char* alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 19     for(int i=0; i<4; i++) {
 20         int rand_index = rand() % 26;
 21         rand_letters[i] = alphabet[rand_index];
 22     }
 23     rand_letters[4] = '\0';
 24     printf("%s", rand_letters);
 25
 26     float min = 91.02;
 27     float max = 99.99;
 28     int range = max - min + 1;
 29     srand(time(0));
 30     for(int i=0; i<3; i++) {
 31         int rand_num = rand() % range + min;
 32         float rand_decimal = (float)rand() / RAND_MAX;
 33         float rand_num_with_decimal = rand_num + rand_decimal;
 34         printf("   %.2f", rand_num_with_decimal);
 35     }
 36
 37     int mn = 1000000;
 38     int mx = 1500000;
 39     int rang = mx - mn + 1;
 40     srand(time(0));
 41     int randum = rand() % rang + mn;
 42     printf(" %d", randum);
 43     sleep(1);
 44 /////////////////////////////////////////////////////////////////////
 45
 46     printf("\n");
 47     printf("6/3/23  ");
 48     int min1 = 81;
 49     int max1 = 90;
 50     int range1 = max - min + 1;
 51     srand(time(0));
 52
 53     char rand_letters1[5];
 54     for(int i=0; i<4; i++) {
 55         int rand_index1 = rand() % 26;
 56         rand_letters1[i] = alphabet[rand_index1];
 57     }
 58     rand_letters1[4] = '\0';
 59     printf("%s", rand_letters1);
 60
 61     for(int i=0; i<3; i++) {
 62         int rand_num1 = rand() % range1 + min1;
 63         float rand_decimal1 = (float)rand() / RAND_MAX;
 64         float rand_num_with_decimal1 = rand_num1 + rand_decimal1;
 65         printf("   %.2f", rand_num_with_decimal1);
 66     }
 67
 68     int mn1 = 1000000;
 69     int mx1 = 1400000;
 70     int rang1 = mx1 - mn1 + 1;
 71     srand(time(0));
 72     int randum1 = rand() % rang1 + mn1;
 73     printf(" %d", randum1);
 74     sleep(1);
 75 /////////////////////////////////////////////////////////////////////
 76     printf("\n");
 77     printf("6/3/23  ");
 78     int min2 = 71;
 79     int max2 = 80;
 80     int range2 = max2 - min2 + 1;
 81     srand(time(0));
 82
 83     char rand_letters2[5];
 84     for(int i=0; i<4; i++) {
 85         int rand_index2 = rand() % 26;
 86         rand_letters2[i] = alphabet[rand_index2];
 87     }
 88     rand_letters2[4] = '\0';
 89     printf("%s", rand_letters2);
 90
 91     for(int i=0; i<3; i++) {
 92         int rand_num2 = rand() % range2 + min2;
 93         float rand_decimal2 = (float)rand() / RAND_MAX;
 94         float rand_num_with_decimal2 = rand_num2 + rand_decimal2;
 95         printf("   %.2f", rand_num_with_decimal2);
 96     }
 97     int mn2 = 1000000;
 98     int mx2 = 1209999;
 99     int rang2 = mx2 - mn2 + 1;
100     srand(time(0));
101     int randum2 = rand() % rang2 + mn2;
102     printf(" %d", randum2);
103     sleep(1);
104     printf("\n");
105     return 0;
106 }
107
