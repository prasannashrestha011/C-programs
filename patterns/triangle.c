
#include <stdio.h>

int main() {
  int i, j, space, rows = 5;
  for (i = 1; i <= rows; i++) {
    for (space = 0; space < rows - i; space++) {
      printf("  ");
    }
    for (j = 0; j < 2 * i - 1; j++) {
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}
