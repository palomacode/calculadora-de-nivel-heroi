#include <stdio.h>

int main() {

    char nome_heroi[50];
    int xp_heroi;

    printf("Digite o nome do heroi: ");
    scanf("%s", nome_heroi);

    printf("Digite a quantidade de XP do heroi: ");
    scanf("%d", &xp_heroi);

    char nivel[100];
    if (xp_heroi < 1000) {
        sprintf(nivel, "Ferro");
    } else if (xp_heroi >= 1001 && xp_heroi <= 2000) {
        sprintf(nivel, "Bronze");
    } else if (xp_heroi >= 2001 && xp_heroi <= 5000) {
        sprintf(nivel, "Prata");
    } else if (xp_heroi >= 6001 && xp_heroi <= 7000) {
        sprintf(nivel, "Ouro");
    } else if (xp_heroi >= 7001 && xp_heroi <= 8000) {
        sprintf(nivel, "Platina");
    } else if (xp_heroi >= 8001 && xp_heroi <= 9000) {
        sprintf(nivel, "Ascendente");
    } else if (xp_heroi >= 9001 && xp_heroi <= 10000) {
        sprintf(nivel, "Imortal");
    } else { 
        sprintf(nivel, "Radiante");
    }

    printf("O Heroi de nome %s esta no nivel de %s \n", nome_heroi, nivel);

    return 0;
}