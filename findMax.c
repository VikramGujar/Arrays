// How to find the maximum nuber in an array element
#include<stdio.h>

int main() {
    int num[10], i, max, arrNum;

    printf("Enter array size between 1-10: ");
    scanf("%d", &arrNum);

    printf("Enter %d elements\n", arrNum);
    for(i = 0; i < arrNum; i++) {
        printf("Element %d: ", i);
        scanf("%d", &num[i]);
    }

    max = num[0];

    for(i = 1; i < arrNum; i++) {
        if(max < num[i]) {
            max = num[i];
        }
    }

    printf("Max = %d", max);

    return 0;
}
