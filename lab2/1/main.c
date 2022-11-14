#include <stdio.h>
int main() {
    int t, number, count,i;
    int sum = 0;
    int numberCount = 0;
    printf("Vvedite chislo T\n");
    scanf("%d", &t);
    printf("Vvedite kolichestvo chisel\n");
    scanf("%d", &count);
    for (i = 0; i < count; ++i) {
        scanf("%d", &number);
        if ((i % 2 == 0) && (number<t)){
            printf("[%d]\n", number);
            sum+=number;
            numberCount++;
        }
    }
    printf("AVG = %d\n", sum/numberCount);
    scanf("%d", &count);
    return 0;
}
