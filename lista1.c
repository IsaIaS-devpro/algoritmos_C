#include <math.h>

void Q1(int a);
void Q2(int a, int b);
void Q3(int a);
void Q4(int a);
void Q5(int a);
void Q6();
void Q7();
void Q8();
void Q9();
void Q10();
void Q11();
void Q12();
void Q13();
void Q14();
void Q15();
void Q16();

int main()
{
    int r, n, n2, n3, n4 = 0;
    do
    {
        printf("\n ======= ESCOLHA UMA QUESTÃO ========");
        printf("\n 0. DIGITE '0' PARA SAIR.....");
        printf("\n 1.Faça um programa que receba um número e imprima ele caso seja maior que 20");
        printf("\n 2. Faça um programa que receba dois números. Calcule a soma dos dois números. Caso a som seja maior que 10, imprima o resultado da soma.");
        printf("\n 3. Faça um programa que receba um número e imprima se ele é par ou ímpar");
        printf("\n 4. Faça um programa que receba um número e imprima se ele é positivo, negativo ou nulo");
        printf("\n 5. Faça um programa que receba dois números e efetue a soma deles. Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.");
        printf("\n 6. Faça um programa que receba um número. Caso o número seja positivo, imprima sua raiz; caso contrário, imprima seu quadrado");
        printf("\n 7. Faça um programa que receba um número e imprima a mensagem: “é múltiplo de 3” ou “não é múltiplo de 3.");
        printf("\n 8. VER SE O NÚMERO A É DIVISOR DE B");
        printf("\n 9. Faça um programa que receba dois inteiros diferentes. Imprima na tela o maior e o menor número.");
        printf("\n 10. receba quatro números e imprima o maior e o menor número.");
        printf("\n 11. receba três números e imprima-os em ordem crescente.");
        printf("\n 12. imprima se ele se encontra entre 20 e 90 ou não.");
        printf("\n 13. receba um número e imprima apenas “é válido” ou “não é válido” caos ele satisfaça pelo menos uma das condições: ser igual a 5, ser igual a 200, estar entre 10 e 100, estar entre 250 e 500.");
        printf("\n 14. imprime a raiz quadrada do numero caso seja possivel!");
        printf("\n 15. diga a idade e o pragrama ira calcular a condição de votante");
        printf("\n 16. funcao: n < 1 = 1 ; entre 1 e 2 = 2; entre 2 e 3 = n ^2 ; n > 3 = n^3");
        printf("\n \n +++++ DIGITE SUA ESCOLHA......>");
        scanf("%d", &r);

        if (r == 0)
        {
            printf("\n FIM DO PROGRAMA. \n \n \n ");
            break;
        }

        switch (r)
        {
        case 1:
            printf("\n DIGITE UM NÚMERO...>");
            scanf("%d", &n);
            Q1(n);
            break;
        case 2:
            printf("\n DIGITE SEU NÚMERO 'A'....");
            scanf("%d", &n);
            printf("\n DIGITE SEU NÚMERO 'B'....");
            scanf("%d", &n2);
            Q2(n, n2);
            break;
        case 3:
            printf("\n DIGITE SEU NÚMERO INTEIRO:");
            scanf("%d", &n);
            Q3(n);
            break;
        case 4:
            printf("\n DIGITE SEU NÚMERO...>");
            scanf("%d", &n);
            Q4(n);
            break;
        case 5:
            printf("\n DIGITE SEU NÚMERO.>");
            scanf("%d", &n);
            Q5(n);
            break;
        case 6:
            printf("\n DIGITE UM NÚMERO...>");
            scanf("%d", &n);
            Q6(n);
            break;
        case 7:
            printf("\n DGITE  SEU NÚMERO: ");
            scanf("%d", &n);
            Q7(n);
            break;
        case 8:
            printf("\n  DIGITE SEU NÚMERO 'A'");
            scanf("%d", &n);
            printf("\n  DIGITE SEU NÚMERO 'B'");
            scanf("%d", &n2);
            Q8(n, n2);
            break;
        case 9:
            printf("\n  DIGITE SEU NÚMERO 'A'");
            scanf("%d", &n);
            printf("\n  DIGITE SEU NÚMERO 'B'");
            scanf("%d", &n2);
            Q9(n, n2);
            break;
        case 10:
            printf("\n  DIGITE SEU NÚMERO '1'");
            scanf("%d", &n);
            printf("\n  DIGITE SEU NÚMERO '2'");
            scanf("%d", &n2);
            printf("\n  DIGITE SEU NÚMERO '3'");
            scanf("%d", &n3);
            printf("\n  DIGITE SEU NÚMERO '4'");
            scanf("%d", &n4);
            Q10(n, n2, n3, n4);
            break;
        case 11:
            printf("\n  DIGITE SEU NÚMERO '1'");
            scanf("%d", &n);
            printf("\n  DIGITE SEU NÚMERO '2'");
            scanf("%d", &n2);
            printf("\n  DIGITE SEU NÚMERO '3'");
            scanf("%d", &n3);
            Q11(n, n2, n3);
            break;
        case 12:
            printf("\n  DIGITE SEU NÚMERO...:");
            scanf("%d", &n);
            Q12(n);
            break;
        case 13:
            printf("\n  DIGITE SEU NÚMERO...:");
            scanf("%d", &n);
            Q13(n);
            break;
        case 14:
            printf("\n DIGITE SEU NUMERO...:");
            scanf("%d", &n);
            Q14(n);
            break;
        case 15:
            printf("\n DIGITE SEU NUMERO...:");
            scanf("%d", &n);
            Q15(n);
            break;
        case 16:
            printf("\n DIGITE SEU NUMERO...:");
            scanf("%d", &n);
            Q16(n);
            break;
        default:

            printf("\n ERRO.");
        }
    } while (n != 0);
}

void Q1(int a)
{

    if (a > 20)
    {
        printf("\n É MAIOR QUE 20.....%d \n \n \n", a);
    }
    else
    {
        printf("\n SEU NUMERO É MENOR QUE 20. \n \n \n");
    }
}

void Q2(int a, int b)
{
    int soma = a + b;

    if (soma >= 10)
    {
        printf("\n SUA SOMA DE  A + B É MAIOR QUE 10....%d \n \n \n ", soma);
    }
    else
    {
        printf("\n MENOR QUE 10... \n \n \n");
    }
}

void Q3(int a)
{

    if (a % 2 == 0 && a != 2)
    {
        printf("\n PAR: seu número é par.. \n \n \n ");
    }
    else
    {
        printf("\n ÍMPAR: seu número é ímpar.. \n \n \n ");
    }
}

void Q4(int a)
{
    if (a > 0)
    {
        printf("\n SEU NÚMERO É POSITIVO!!!");
    }
    else if (a < 0)
    {
        printf("\n  SEU NÚMERO É NEGATIVO!");
    }
    else if (a == 0)
    {
        printf("\n SEU NÚMERO É NULO. (ZERO)");
    }
}

void Q5(int a)
{

    if (a >= 20)
    {
        a += 8;
        printf("\n SEU NOVO NÚMERO SOMADO A 8 É >>> %d", a);
    }
    else
    {
        a -= 5;
        printf("\n SEU NOVO NÚMERO SUBTRAIDO A 5 É...>>>> %d", a);
    }
}

void Q6(int a)
{
    float result = 0;
    if (a > 0)
    {
    }
    else
    {
        result = a * a;
        printf("\n O RESULTADO É: %d", result);
    }
}

void Q7(n)
{
    if (n % 3 == 0)
    {
        printf("\n \n \n É MÚTIPLO DE 3... \n \n \n");
    }
    else
    {
        printf("\n \n \n NÃO É MÚTIPLO DE 3... \n \n \n");
    }
}

void Q8(n, n2)
{
    if (n % n2 == 0)
    {
        printf("\n \n \n 'A' É DIVISÍVEL POR 'B' \n \n \n ");
    }
    else
    {
        printf("\n \n \n 'A' NÃO É DIVISÍVEL POR 'B' \n \n \n ");
    }
}

void Q9(n, n2)
{
    if (n > n2)
    {
        printf("\n \n INTEIRO 'A' MAIOR DO QUE 'B' \n \n \n ");
    }
    else if (n == n2)
    {
        printf("\n \n INTEIRO 'A' E 'B' SÃO IGUAIS \n \n");
    }
    else
    {
        printf("\n \n INTEIRO 'B' MAIOR DO QUE 'A' \n \n");
    }
}

void Q10(n, n2, n3, n4)
{
    int maior = 0;
    int menor = 0;

    if (n > n2 && n > n3 && n > n4)
    {
        maior = n;
    }
    else if (n2 > n && n2 > n3 && n2 > n4)
    {
        maior = n2;
    }
    else if (n3 > n2 && n3 > n && n3 > n4)
    {
        maior = n3;
    }
    else if (n4 > n2 && n4 > n3 && n4 > n)
    {
        maior = n4;
    }

    if (n < n2 && n < n3 && n < n4)
    {
        menor = n;
    }
    else if (n2 < n && n2 < n3 && n2 < n4)
    {
        menor = n2;
    }
    else if (n3 < n && n3 < n2 && n3 < n4)
    {
        menor = n3;
    }
    else if (n4 < n && n4 < n2 && n4 < n3)
    {
        menor = n4;
    }

    printf("\n O MAIOR NÚMERO É...> %d\n \n ", maior);
    printf("\n O MENOR NÚMERO É....> %d \n \n \n \n", menor);
}

void Q11(n, n2, n3)
{
    int maior, medio, menor = -10;

    if (n > n2 && n > n3)
    {
        maior = n;
    }
    else if (n2 > n && n2 > n3)
    {
        maior = n2;
    }
    else
    {
        maior = n3;
    }

    if (n < n2 && n < n3)
    {
        menor = n;
    }
    else if (n2 < n && n2 < n3)
    {
        menor = n2;
    }
    else
    {
        menor = n3;
    }

    if ((n > n2 && n < n3) || (n > n3 && n < n2))
    {
        medio = n;
    }
    else if ((n2 > n && n2 < n3) || (n2 < n && n2 > n3))
    {
        medio = n2;
    }
    else if ((n3 > n && n3 < n2) || (n3 < n && n3 > n2))
    {
        medio = n3;
    }

    printf("\n\n MAIOR É..> %d \n \n ", maior);
    printf("\n \n MÉDIO É ....> %d \n \n", medio);
    printf("\n\n MENOR É..> %d \n \n ", menor);
}

void Q12(int n)
{

    if (n >= 20 && n <= 90)
    {
        printf("\n SEU NÚMERO FICA ENTRE 20 E  90");
    }
    else
    {
        printf("\n NÃO FICA ENTRE 20 E 90");
    }
}

void Q13(int n)
{

    if (n == 5 || n == 200 || n >= 10 && n <= 100 || n >= 250 && n <= 500)
    {
        printf("\n NUMERO VALIDO !!!! \n \n \n");
    }
    else
    {
        printf("\n \n NUMERO INVALIDO \n \n \n");
    }
}

void Q14(int n)
{
    int m;
    if (n < 0)
    {
        printf("Número inválido! Não é possível calcular a raiz quadrada de um número negativo.\n");
    }
    else
    {
        m = sqrt(n);
        printf("A raiz quadrada de %d é %d \n", n, m);
    }
}

void Q15(int n)
{
    if (n < 16)
    {
        printf("\n NAO PODE VOTAR....\n \n \n");
    }
    else if (n >= 16 && n < 18)
    {
        printf("\n voto facultativo...\n \n \n ");
    }
    else if (n >= 18 && n < 60)
    {
        printf("\n VOTO OBRIGATORIO...\n \n \n");
    }
    else if (n > 60)
    {
        printf("\n VOTO FACULTATIVO...\n \n \n");
    }
}

void Q16(int n)
{

    if (n <= 1)
    {
        printf("\n  \n 1 \n \n \n ");
    }
    else if (n > 1 && n <= 2)
    {
        printf("\n \n 2 \n \n");
    }
    else if (n > 2 && n <= 3)
    {
        n = n * n;
        printf("\n \n %d \n \n ", n);
    }
    else if (n > 3)
    {
        n = n * n * n;
        printf("\n \n %d \n \n ", n);
    }
}
