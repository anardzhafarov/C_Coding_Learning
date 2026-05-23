#include <stdio.h>

int main() {
    printf("New file loaded again!\n");
    double start;
    double end;
    double step;

    printf("Please enter start: ");
    scanf("%lf", &start);
    printf("Please enter end: ");
    scanf("%lf", &end);
    printf("Please enter step: ");
    scanf("%lf", &step);

    while (start != end) {
        printf("%lf\n", start);
        start += step;
    }
}
