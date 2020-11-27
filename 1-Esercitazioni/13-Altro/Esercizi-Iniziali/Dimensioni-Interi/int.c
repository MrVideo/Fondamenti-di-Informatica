#include <stdio.h>

int main()
  {
    printf("short: %ld byte, %ld bit\n",sizeof(short), sizeof(short)*8);
    printf("int: %ld byte, %ld bit\n",sizeof(int), sizeof(int)*8);
    printf("long: %ld byte, %ld bit\n",sizeof(long), sizeof(long)*8);

    return 0;
  }
