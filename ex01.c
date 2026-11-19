#include <stdio.h>
#include <math.h>

struct ponto {
    double x, y;
};

int main(void) {
    struct ponto a, b;

    scanf("%lf %lf", &a.x, &a.y);
    scanf("%lf %lf", &b.x, &b.y);

    double d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
    printf("Distancia = %.2lf\n", d);

    return 0;
}