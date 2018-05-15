#include <stdio.h>

int main() {
  int input1, input2;
  while(scanf("%d %d", &input1, &input2) != EOF) {
    int input3 = (input1*2 + input2) % 3;
    char ret[10];
    switch(input3) {
      case 0:
        printf("%s\n", "普通");
        break;
      case 1:
        printf("%s\n", "吉");
        break;
      case 2:
        printf("%s\n", "大吉");
        break;
    }
  }
}
