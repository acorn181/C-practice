#include <stdio.h>
#include <string.h>

#include "calc.h"

int main() {
    
    unsigned int *kokugo;
    unsigned int *shakai;
    unsigned int *rika;

    unsigned int sum;
    unsigned int avg;

    printf("国語の点数は: ");
    scanf("%d", kokugo);
    printf("社会の点数は: ");
    scanf("%d", shakai);
    printf("理科の点数は: ");
    scanf("%d", rika);

    sum = sum(kokugo, shakai, rika);
    avg = avg(kokugo, shakai, rika);

    printf("合計点：'%d' 平均点：'%d' です", sum, avg);
}
