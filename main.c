#include <stdio.h>

int main(void) {
    int user_numeros, user_especiais, tamanho;

    printf("Do you want to include numbers? (1 = Yes, 0 = No): ");
    if (scanf("%d", &user_numeros) != 1 ||
        (user_numeros != 0 && user_numeros != 1)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("Do you want to include special characters? (1 = Yes, 0 = No): ");
    if (scanf("%d", &user_especiais) != 1 ||
        (user_especiais != 0 && user_especiais != 1)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("What is the intended password size? ");
    if (scanf("%d", &tamanho) != 1 ||
        tamanho <= 0 || tamanho > 90) {
        printf("Choose a size between 1 and 90.\n");
        return 1;
    }

    printf("\nYour options have been saved!\n");
    printf("Include numbers: %s\n",
           user_numeros ? "Yes" : "No");
    printf("Include special characters: %s\n",
           user_especiais ? "Yes" : "No");
    printf("Password size: %d\n", tamanho);

    return 0;
}
