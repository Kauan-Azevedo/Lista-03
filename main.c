#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <time.h>

void ex01()
{
    int option, chooser;
    /*
    1 - Construa um programa em C/C++ que tenha as seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores aleatórios 0-100 e na
sequência selecione aleatoriamente três posições/índices deste vetor e
apresente os seus valores e a multiplicação destes.
1.2 - Leia dois vetores de 5 posições com valores inteiros cada e gere um
terceiro com os resultados da soma dos valores sendo a lógica: soma o 1a
elemento do 1o vetor com o 5o elemento do 2o vetor, 2a elemento do 1o vetor
com o 4o elemento do 2o vetor, e assim sucessivamente.
1.3 - Construa um vetor de 13 posições com valores caracteres aleatórios e na
sequência pedir para o usuário digitar um caractere e localizar onde este está
no vetor e quantas vezes aparece.
    */
    do
    {
        printf("\nSelecione uma opção \n0 - Sair\n1 - Array de 10 posicoes + multiplicação de 3 valores aleatorios\n2 - 2 arrays de 5 posicoes gera um 3 array com base na soma dos dois\n3 - array de 13 posicoes com caracteres aleatorios + localização deles\nDECISAO: ");
        scanf("%i", &option);
        srand(time(NULL));
        if (option == 0)
        {
        }
        else if (option == 1)
        {
            int array1[10], multiplicadorTemporario = 1;
            for (int i = 0; i < 10; i++)
            {
                array1[i] = rand() % 101;
            };

            for (int a = 0; a < 3; a++)
            {
                chooser = rand() % 10;
                printf("Array[%i] = %i\n", chooser, array1[chooser]);

                multiplicadorTemporario = multiplicadorTemporario * array1[chooser];
            };
            printf("Multiplicacao dos elementos: %i\n\n", multiplicadorTemporario);
            printf("OPERACAO CONCLUIDA.\nRETORNANDO...\n");
        }
        else if (option == 2)
        {
            int array2[5], array3[5], arraySoma[5];
            printf("\nPrimeiro array[ ");
            for (int i = 0; i < 5; i++)
            {
                array2[i] = (rand() % 5) + 1;
                printf("%i ", array2[i]);
            }

            printf("]\nSegundo array[ ");
            for (int i = 0; i < 5; i++)
            {
                array3[i] = (rand() % 5) + 1;
                printf("%i ", array3[i]);
            }
            printf("]\nArray resultado[ ");
            // for (int x = 0; x < 5; x++)
            // {
            //     for (int y = 5; y >= 0; y--)
            //     {
            //         arraySoma[x] = array2[x] + array3[y];
            //         printf("\nArray2[%i]: %i + Array3[%i]: %i = ArraySoma[%i]: %i\n", x, array2[x], y, array3[y], x, arraySoma[x]);
            //     }
            //     printf("%i ", arraySoma[x]);
            // }
            // printf("]\n");
            int y = 5;

            for (int x = 0; x < 5; x++)
            {
                arraySoma[x] = array2[x] + array3[y - 1];
                y -= 1;
                printf("%i ", arraySoma[x]);
            };
            printf("]\n");
        }
        else if (option == 3)
        {
            char letra, randomChar[13], letraEscolha, contador;
            printf("\nGerando letras aleatorias...\n");
            printf("Valores: [ ");

            for (int i = 0; i < 13; i++)
            {
                letra = (rand() % 26) + 65;
                randomChar[i] = letra;
                printf("'%c' ", letra);
            };
            printf("]\n");

            printf("Digite uma letra: ");
            scanf(" %c", &letraEscolha);
            letraEscolha = toupper(letraEscolha);
            printf("\nLetra escolhida: %c\n", letraEscolha);
            for (int i = 0; i < 13; i++)
            {
                if (letraEscolha == randomChar[i])
                {
                    contador++;
                    printf("\nFoi encontrado %i na posicao [%i]", contador, i);
                }
            };
            if (contador == 0)
            {
                printf("\nNenhuma letra correspondente a sua foi encontrada\n");
            }
        }
        else
        {
            printf("\nValor inválido!\n\n");
        }
    } while (option != 0);
    printf("\nAte mais!\n\n");
}

int main()
{
    ex01();
};