#include <stdio.h>

typedef struct {
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main(void) {
    Aluno turma[3] = {
        {"Ana", 9.0, 9.0, 9.0},
        {"Bruno", 7.5, 8.0, 7.0},
        {"Carla", 8.5, 8.0, 9.0}
    };

    int melhor = 0;
    float maiorMedia = 0.0f;

    for (int i = 0; i < 3; i++) {
        float media = (turma[i].n1 + turma[i].n2 + turma[i].n3) / 3.0f;
        if (media > maiorMedia) {
            maiorMedia = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n", turma[melhor].nome, maiorMedia);

    return 0;
}