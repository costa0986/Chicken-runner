#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user_numeros, user_especiais, tamanho;

    char pool[100] = "";
    char minusculas[] = "abcdefghijklmnopqrstuvwxyz";
    char numeros[] = "0123456789";
    char especiais[] = "!@#$%&*_-+=";

    printf("Do you want to include numbers? (1 = Yes, 2 = No): ");
    if (scanf("%d", &user_numeros) != 1 ||
        (user_numeros != 0 && user_numeros != 1)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("Do you want to include special characters? (1 = Yes, 2 = No): ");
    if (scanf("%d", &user_especiais) != 1 ||
        (user_especiais != 0 && user_especiais != 1)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("What is the intended size? ");
    if (scanf("%d", &tamanho) != 1 || tamanho <= 0 || tamanho > 90) {
        printf("Choose a size between 1 and 90.\n");
        return 1;
    }

    strcat(pool, minusculas);

    if (user_numeros == 1) {
        strcat(pool, numeros);
    }

    if (user_especiais == 1) {
        strcat(pool, especiais);
    }

    srand((unsigned int) time(NULL));

    char password[91];

    for (int i = 0; i < tamanho; i++) {
        password[i] = pool[rand() % strlen(pool)];
    }

    password[tamanho] = '\0';

    printf("\nYour password is: %s\n", password);

    int tipos = 1;

    if (user_numeros == 1) {
        tipos++;
    }

    if (user_especiais == 1) {
        tipos++;
    }

    printf("\n--- Password rate ---\n");

    if (tamanho >= 16 && tipos == 3) {
        printf("Strong Password\n");
    } else if (tamanho >= 12 && tipos >= 2) {
        printf("Medium security Password\n");
    } else {
        printf("Weak Password\n");
    }

    return 0;
}