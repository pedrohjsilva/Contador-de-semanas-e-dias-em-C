#include <stdio.h>
#include <locale.h>

/*
Centro Federal de Educa��o T�cnol�gica de Minas Gerais
Gradua��o em Engenharia Mec�nica
Pedro Henrique de Jesus Soares Silva
*/


    int main()
    {
    setlocale (LC_ALL, "");
    setlocale (LC_CTYPE, "pt BR.UTF-8");
    int semana, dias_final, resto, dias, semana_e_dias;

    printf("Esse programa � um contador de semanas e dias.");
    Sleep(4000);
    system("cls");

    printf("Ao inserir um n�mero arbitr�rio de dias, voc� ver� o total de semanas e dias que ocorrem nesse intervalo.");
    Sleep(4000);
    system("cls");

    printf("Para come�ar, digite um n�mero de dias\n\n");
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
