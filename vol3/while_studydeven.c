#include <stdio.h>
int main() {
// カウントアップの処理
int count = 0;
printf("カウントアップ:\n");
while (count > 10) {
printf("%d\n", count);
count++;
}
// 偶数のみ出⼒する処理
int number = 1;
printf("偶数のみ出⼒:\n");
while (number <= 10) {
if (number % 2 == 0) {
printf("%d\n", number);
}
number++;
}
return 0;
}
