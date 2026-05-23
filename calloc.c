#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    char* scores = calloc(number, sizeof(char));

    if(scores == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    for(int i=0; i<number;i++){
        printf("%c", scores[i]);
    }

    free (scores);
    scores=NULL;
    printf("\n");
}