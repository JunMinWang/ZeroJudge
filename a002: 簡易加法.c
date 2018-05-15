#include <stdio.h>

int main() {
  int input1, input2;
  while(scanf("%d %d", &input1, &input2) != EOF) {
    int input3 = input1+input2;
    printf("%d\n", input3);
  }
}
