#include <stdio.h>

void towerOfHanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", source, target);
        return;
    }
    towerOfHanoi(n - 1, source, auxiliary, target);
    printf("Move disk %d from %c to %c\n", n, source, target);
    towerOfHanoi(n - 1, auxiliary, target, source);
}

int main() {
    int disks;
    printf("Enter number of disks: ");
    scanf("%d", &disks);
    towerOfHanoi(disks, 'A', 'C', 'B');
    return 0;
}
