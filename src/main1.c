#include <stdio.h>
#include <string.h>

#include "calc.h"

int main() {
    
    unsigned int kokugo;
    unsigned int shakai;
    unsigned int rika;

    unsigned int sum1;
    unsigned int avg1;

    printf("国語の点数は: ");
    scanf("%d", &kokugo);
    printf("社会の点数は: ");
    scanf("%d", &shakai);
    printf("理科の点数は: ");
    scanf("%d", &rika);

    sum1 = sum(kokugo, shakai, rika);
    avg1 = avg(kokugo, shakai, rika);

    printf("合計点：'%d' 平均点：'%d' です\n", sum1, avg1);
}
