#include <stdio.h>

int main() {
  char input[1000];
  while(scanf("%s", input) != EOF) {
    printf("hello, %s\n", input);
  }
}
