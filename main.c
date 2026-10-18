#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int user_numeros, user_especiais, tamanho, pool_size;

    char pool[100]= "";
    char minusculas[]="abcdefghijklmnopqrstuvwxyz";
    char numeros[]="0123456789";
    char especiais[]="!@#$%&*_-+=";

    printf("Do you want to include numbers? (1 = Yes, 2 = No): ");
    if (scanf("%d", &user_numeros) != 1 ||
        (user_numeros != 1 && user_numeros != 2)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("Do you want to include special characters? (1 = Yes, 2 = No): ");
    if (scanf("%d", &user_especiais) != 1 ||
        (user_especiais != 1 && user_especiais != 2)) {
        printf("Invalid Option.\n");
        return 1;
    }

    printf("What is the intended password size? ");
    if (scanf("%d", &tamanho) != 1 ||
        tamanho <= 0 || tamanho > 90) {
        printf("Choose a size between 1 and 90.\n");
        return 1;
    }
    char password[tamanho+1];

    strcat(pool, minusculas );

    if (user_numeros == 1) {
        strcat(pool, numeros);
    }

    if (user_especiais ==1) {
        strcat(pool, especiais);


    }
    pool_size = (int)strlen(pool);
    srand(time(NULL));
    
    for (int i=0; i<tamanho; i++){
    password[i] =pool[rand() % pool_size];

    }
    password[tamanho]='\0';
    printf("Password: %s\n", password);

    if(tamanho<6){
    printf("Weak password\n");
    
    }else if(tamanho>=10 && user_numeros==1 && user_especiais==1 ){
    printf("Strong password\n");

    }else {
    printf("Medium password\n");
}



    return 0;
}

