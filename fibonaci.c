#include<stdio.h>
#include<stdlib.h>
int main() {
    FILE *fptr;
    int i, n, t1 = 0, t2 = 1, nextTerm;
    // Cheking if a fptr exists

    if (fptr == NULL) {
        printf("Error");
        exit(1);
    }

    // Oppenning the File
    fptr = fopen("fibonaci.txt", "w+");
    printf("Enter the number of Terms: ");
    scanf("%d", &n);
    printf("Fibonaci Series\n");
    
    // Fibonaci Series
    for (i = 0; i < n; i++) {
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        fprintf(fptr, "%d\n", t1);
    }
    
  
    fclose(fptr);


    return 0;
}
