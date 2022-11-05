#include <stdio.h>
#include <locale.h>

/*
Centro Federal de Educação Técnológica de Minas Gerais
Graduação em Engenharia Mecânica
Pedro Henrique de Jesus Soares Silva
*/


    int main()
    {
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt BR.UTF-8");
    int semana, dias_final, resto, dias, semana_e_dias;

    printf("Esse programa é um contador de semanas e dias.");
    Sleep(4000);
    system("cls");

    printf("Ao inserir um número arbitrário de dias, você verá o total de semanas e dias que ocorrem nesse intervalo.");
    Sleep(4000);
    system("cls");

    printf("Para começar, digite um número de dias\n\n");
    scanf("%d", &dias);

    semana_e_dias = dias / 7 ;
    dias_final = dias;
    resto = dias%7 ;

    Sleep(1000);
    system("cls");

    if (resto==1)
    {
    printf("Em %d dias, ocorrem %d semanas e %d dia", dias, semana_e_dias, resto);
    } else
    printf("Em %d dias, ocorrem %d semanas e %d dias", dias, semana_e_dias, resto);

    return 0;
    }
