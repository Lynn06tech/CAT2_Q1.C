Array data structure is a fixed size collection of similar data items storedin contiguous memory locations 

/*
Name:Wamagata Lynn Njeri
Reg.no:CT101/G/26423/25
*/
#include <stdio.h>

int main() {
    int scores[4][2] = {
        {65, 92},
        {84, 72},
        {35, 70},
        {59, 67}
    };

    printf("The elements of the array are:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}
