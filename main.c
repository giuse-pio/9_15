#include <stdio.h>

int puntoRetta(float m, float q, float x, float y) {
    if (m * x + q == y) {
        return 1;
    }
    return 0;
}

int main(void) {
    float mRetta = 0, qRetta = 0, xRetta = 0, yRetta = 0;
    printf("Ingresa el valor de m: ");
    scanf("%f", &mRetta);
    printf("Ingresa el valor de x: ");
    scanf("%f", &xRetta);
    printf("Ingresa el valor de q: ");
    scanf("%f", &qRetta);
    printf("Ingresa el valor de y: ");
    scanf("%f", &yRetta);
    if (puntoRetta(mRetta, qRetta, xRetta, yRetta)) {
        printf("il punto appartiene alla retta");
    } else {
        printf("il punto non appartiene alla retta");
    }
}
