#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "biblioteca.h"
#include <string.h>

int main()
{
    char atividade1[]= "volume de cilindro";
    char atividade2[]= "soma de hora minutos pra segundos";
    char atividade3[]= "movimentacao de saldo";
    char atividade4[]= "maior ou menor de idade";
    char atividade5[]= "calculo de imc";
    char atividade6[]= "valores a,b,c, que forma tringulo";
    char atividade7[]= "ver si o numero e par ou impar";
    char atividade8[]= "temperatura em graus farenheit";
    char atividade9[]= "percentual de aumento de salario";
    char atividade10[]= "item de venda";
    char atividade11[]= "Radar de velocidade/prova";
    char atividade12[]= "atividade DDD/em dupla";
    char atividade13[]= "parcelas de uma compra";
    char atividade14[]= "temperatura em graus celsios                   --TIPO: biblioteca e funcao";
    char atividade15[]= "consumo de combustivel                         --TIPO: biblioteca e funcao";
    char atividade16[]= "Numero finaliza em 0?                          --TIPO: biblioteca e funcao";
    char atividade17[]= "Calculadora +,-,*,/                            --TIPO: biblioteca e funcao";
    char atividade18[]= "Contando de 0 a 10                             --TIPO: WHILE";
    char atividade19[]= "Contando de 0 ate o numero que escolher        --TIPO: WHILE";
    char atividade20[]= "imprimindo triangulo ate o numero que digitar  --TIPO: WHILE";
    char atividade21[]= "chico e ze altura                              --TIPO: DO WHILE";
    char atividade22[]= "Qual numero e maior e menor de 10 valores      --TIPO: FOR";
    char atividade23[]= "EM ESPERA eu terminei hahaha                   --TIPO: FOR";
    char atividade24[]= "Ler o valor de 10 numeros reais                --TIPO: FOR e ARRAYS";
    char atividade25[]= "Ler o valor de 5 numeros e somar               --TIPO: FOR e ARRAYS";
    char atividade26[]= "Print impar vetor par                          --TIPO: FOR e ARRAYS";
    char atividade27[]= "APAGAR UM ELEMENTO DE UM VETOR E MOVER ELES    --TIPO: FOR e ARRAYS";
    char atividade28[]= "Matriz, contagem de a                          --TIPO: FOR e MATRIZ";
    char atividade29[]= "Inversao de ondem numerica                     --TIPO: FOR e MATRIZ";


    char atividade100[]= "TESTE DE ATIVIDADES                           --TIPO: FOR e MATRIZ E TUDO MAIS";


    int atividade_escolhida=0;
    int outra;

    do
    {


        atividade_escolhida=0;
        printf("\n\n1- %s\n",atividade1);
        printf("2- %s\n",atividade2);
        printf("3- %s\n",atividade3);
        printf("4- %s\n",atividade4);
        printf("5- %s\n",atividade5);
        printf("6- %s\n",atividade6);
        printf("7- %s\n",atividade7);
        printf("8- %s\n",atividade8);
        printf("9- %s\n",atividade9);
        printf("10- %s\n",atividade10);
        printf("11- %s\n",atividade11);
        printf("12- %s\n",atividade12);
        printf("13- %s\n",atividade13);
        printf("14- %s\n",atividade14);
        printf("15- %s\n",atividade15);
        printf("16- %s\n",atividade16);
        printf("17- %s\n",atividade17);
        printf("18- %s\n",atividade18);
        printf("19- %s\n",atividade19);
        printf("20- %s\n",atividade20);
        printf("21- %s\n",atividade21);
        printf("22- %s\n",atividade22);
        printf("23- %s\n",atividade23);
        printf("24- %s\n",atividade24);
        printf("25- %s\n",atividade25);
        printf("26- %s\n",atividade26);
        printf("27- %s\n",atividade27);
        printf("28- %s\n",atividade28);
        printf("29- %s\n",atividade29);

        printf("\n\n\n\n\n100- %s\n",atividade100);


        printf("\n\n=============================================\n\n");
        printf("\ndigite o numero pra escolher a atividade:");
        scanf("%d", &atividade_escolhida);
        printf("\n\n=============================================\n\n");


//atividade volume de um cilindro

        if(atividade_escolhida==1)
        {




            int altura;
            int diametro;
            int raio;
            float volume;
            float pi= 3.14;



            printf("\n\n=============================================");
            printf("\nvamos calcular o volume de um cilindro");

            printf("\n\nqual a altura?(digite um numero inteiro):");
            scanf("%d", &altura);


            printf("\nqual o diametro?(digite um numero inteiro):");
            scanf("%d", &diametro);

            raio= diametro/2;
            volume= pi *altura* (pow( raio, 2));

            printf("\n\nja temos o volume que e:%.3f\n", volume);


        }



//atividade horas

            if (atividade_escolhida==2)
            {


                int horas;
                int minutos;
                int segundos;
                int segundos_totais;
//segundos_totais= 23*3600+56*60+segundos;

                printf("\n\n=============================================\n\n");
                printf("\nvamos calcular quantos segundos totais tem a soma da hora,minutos e segundos");

                printf("\n\ndigite a hora:");
                scanf("%d", &horas);

                printf("\n\ndigite os minutos:");
                scanf("%d", &minutos);

                printf("\n\ndigite os segundos:");
                scanf("%d", &segundos);

                segundos_totais= horas*3600+minutos*60+segundos;

                printf("\n\na soma total de segundos e: %d\n\n\n\n\n\n", segundos_totais);



            }


//atividade saldo e movimentacao

                if(atividade_escolhida==3)
                {




                    float movimentacao;
                    float saldo=2000;


                    printf("\n\n=============================================\n\n");
                    printf("\nvamos calcular seu extrato\n\n");

                    printf("------------------------------------");

                    printf("\n\nseu saldo inicial e:%.2f\n\n",saldo);

                    printf("qual o seu salario?:");
                    scanf("%f", &movimentacao);

                    saldo= saldo+movimentacao;

                    printf("\nsaldo parcial:%.2f\n\n", saldo);

                    printf("------------------------------------");

                    printf("\nfaca sua primeira retirada:");
                    scanf("%f", &movimentacao);

                    saldo= saldo-movimentacao;

                    printf("\nsaldo parcial:%.2f\n", saldo);

                    printf("------------------------------------");

                    printf("\nfaca sua segunda retirada:");
                    scanf("%f", &movimentacao);

                    saldo= saldo-movimentacao;

                    printf("\nsaldo parcial:%.2f\n", saldo);

                    printf("------------------------------------");

                    saldo= saldo-movimentacao;

                    printf("\nfaca sua terceira retirada:");
                    scanf("%f", &movimentacao);

                    saldo= saldo-movimentacao;

                    printf("\nsaldo parcial:%.2f\n", saldo);


                }




//atividade idade
                    if(atividade_escolhida==4)
                    {

                        int idade;

                        printf("\n\nqual a sua idade?:");
                        scanf("%d", &idade);

                        if(idade>=18)
                        {

                            printf("\nmaior de idade!\n\n\n\n");
                        }
                        else
                        {
                            printf("\nmenor de idade!\n\n\n\n");

                        }

                    }





//atividade imc
                    if(atividade_escolhida==5)
                    {


                        float peso;
                        float altura;
                        float imc;

                        printf("\n\nindice de massa corporal\n\n");

                        printf("\n\nquantos kg voce tem?:");
                        scanf("%f", &peso);

                        printf("\n\nqual a sua altura?:");
                        scanf("%f", &altura);

                        altura=altura*altura;
                        imc=peso/altura;

                        printf("\n\nseu imc e:%f\n\n", imc);

                        float limites[] = {18.5, 25.0, 30.0, 35.0, 40.0};
                        char *mensagem[] = {"baixo peso", //o char com * é uma lista com endereço
                                            "peso normal",
                                            "sobre peso",
                                            "obesidade grau 1",
                                            "obesidade grau 2",
                                            "obesidade grau 3"
                                           };
                        int i=0;

                        while (i <5 && imc>=limites[i])
                        {
                            i++;
                        }
                        printf("%s", mensagem[i]);



                    }


                    if(atividade_escolhida==6)
                    {



                        float a, b, c, troca;

                        printf("\nde um valor pra (a):");
                        scanf("%f", &a);

                        printf("\nde um valor pra (b):");
                        scanf("%f", &b);

                        printf("\nde um valor pra (c):");
                        scanf("%f", &c);

                        //troca de ordem
                        if (a<b)
                        {
                            troca=b;
                            b=a;
                            a=troca;
                        }

                        if (a<c)
                        {
                            troca=c;
                            c=a;
                            a=troca;
                        }

                        if (b<c)
                        {
                            troca=c;
                            c=b;
                            b=troca;
                        }

                        //acaba aqui

                        if (a>=b+c)
                        {

                            printf("\nnao forma tringulo");
                        }
                        else
                        {


                            if ((a*a)==((b*b)+(c*c)))
                            {

                                printf("\ntriangulo retangulo");

                            }



                            if ((a*a)>(b*b+c*c))
                            {
                                printf("\ntriangulo obtusangulo");
                            }


                            if ((a*a)<(b*b+c*c))
                            {
                                printf("\ntriangulo acutangulo");
                            }


                            if (a==b && b==c)
                            {
                                printf("\ntriangulo equilatero");
                            }


                            if (a==b || a==c || b==c)

                            {
                                printf("\ntriangulo isosceles");
                            }

                            else
                            {


                            }

                        }

                    }




                    if(atividade_escolhida==7)
                    {


                        int numero;

                        printf("\nvamos ver si o numero e par ou impar\n\n");

                        printf("\ndigite o numero:");
                        scanf("%d", &numero);

                        if (numero%2==0)
                        {

                            printf("\no numero e par");
                        }
                        else
                        {

                            printf("\no numero e impar");
                        }



                    }

                    if(atividade_escolhida==8)
                    {


                        float celsius,fahrenheit;

                        printf("\nvamos transformar farenheit em celsius");

                        printf("\n\nqual a temperatura em farenheit:");
                        scanf("%f", &fahrenheit);

                        celsius=(fahrenheit-32)*5/9;

                        printf("\na temperatura em celsius e:%.2f", celsius);
                    }



                    if(atividade_escolhida==9)
                    {

                        float salario, aumento;

                        printf("\naumento percentual de salario\n");

                        printf("\nqual o seu salario?:");
                        scanf("%f", &salario);

                        printf("\nDigite o percentual de aumento do seu salario:");
                        scanf("%f", &aumento);

                        salario= salario+(salario*aumento/100);

                        printf("\nseu novo salario e:%.2f", salario);
                    }





                    if(atividade_escolhida==10)
                    {


                        float valores[]= {0.0, 4.0, 4.5, 5.0, 2.0, 1.5};
                        int codigo1,codigo2,qntd1,qntd2;
                        float total1,total2,totalfinal;




                        printf("itens de venda\n");

                        printf("\ncodigo|especificacao  |valor\n");
                        printf("\n  1   |cachorroquente |R$ 4.00");
                        printf("\n  2   |X-salada       |R$ 4.50");
                        printf("\n  3   |X-bacon        |R$ 5.00");
                        printf("\n  4   |Torrada simples|R$ 2.00");
                        printf("\n  5   |refrigerante   |R$ 1.50");

                        printf("\n\n\nqual o primeiro item que voce quer? (DIGITE O CODIGO):");
                        scanf("%d",&codigo1);

                        printf("\nDigite a quantidade deste item:");
                        scanf("%d", &qntd1);



                        printf("\nqual o segundo item que voce quer? (DIGITE O CODIGO):");
                        scanf("%d",&codigo2);

                        printf("\nDigite a quantidade deste item:");
                        scanf("%d", &qntd2);

                        total1= valores[codigo1]*qntd1;
                        total2= valores[codigo2]*qntd2;
                        totalfinal= total1+total2;

                        printf("\nTotal a pagar:%.2f",totalfinal);


                    }



                    if(atividade_escolhida==11)
                    {



                        float velocidade,velocidade2,limite;
                        float velocidade20,velocidade50;
                        float multa1=5,multa2=20,multa3=40;



                        printf("Qual o limite da via?:");
                        scanf("%f", &limite);

                        printf("\n\nradar de velocida, limite da via %.2fkm/hr", limite);


                        printf("\nqual foi a velocidade registrada:");
                        scanf("%f", &velocidade);

                        velocidade20=limite*0.2+limite;
                        velocidade50=limite*0.5+limite;




                        if (velocidade<=limite)
                        {

                            printf("nao a multa a pagar");
                        }


                        if (velocidade>limite && velocidade<=velocidade20)
                        {
                            velocidade2=velocidade-limite;

                            printf("O valor da multa a pagar e:R$%.2f", velocidade2*multa1);

                        }

                        if (velocidade>velocidade20 && velocidade<=velocidade50)
                        {

                            velocidade2=velocidade-limite;


                            printf("o valor da multa a pagar e:R$%.2f", velocidade2*multa2);

                        }

                        if (velocidade>limite &&velocidade>=velocidade50)
                        {


                            velocidade2=velocidade-limite;

                            printf("O valor da multa a pagar e:R$%.2f", velocidade2*multa3);
                        }




                    }



                    if(atividade_escolhida==12)

                    {


                        int ddd;

                        printf("Rastreio de DDD\n\nDDDS CADASTRADO\n61,71,11,21,32,19,27,21");


                        printf("\n\n Qual DDD deseja rastreiar?:");
                        scanf("%d", &ddd);

                        if (ddd==61)
                        {
                            printf("\n Brasilia");
                        }
                        if (ddd==71)
                        {
                            printf("\ Salvador");
                        }
                        if (ddd==11)
                        {
                            printf("\n Sao Paulo");
                        }
                        if (ddd==21)
                        {
                            printf("\n Rio de Janeiro");
                        }
                        if (ddd==32)
                        {
                            printf("\n Juiz De Fora");
                        }
                        if (ddd==19)
                        {
                            printf("\n Campinas");
                        }
                        if (ddd==27)
                        {
                            printf("\nA Vitoria");
                        }
                        if (ddd==21)
                        {
                            printf("\n Belo Horizonte");
                        }
                        if (ddd !=61 && ddd !=71 && ddd !=11 && ddd !=21 && ddd !=32 && ddd !=19 && ddd !=27 && ddd !=21)
                        {
                            printf("\nDDD nao cadastrado");
                        }



                    }

                    if(atividade_escolhida==13)
                    {



                        float valor,parcela,valorcompra;

                        printf("\ncompra a prazo\n\n");

                        printf("qual foi o valor da compra?:R$");
                        scanf("%f", &valorcompra);

                        printf("\nnumero de parcelas:");
                        scanf("%f", &parcela);

                        valor=soma(valor,parcela,valorcompra);

                        printf("\no valor das parcelas a prazo, referente ao valor:R$%.2f\n\nseria:R$%.2f MENSAIS", valorcompra,valor);


                    }

                    if(atividade_escolhida==14)
                    {

                        float fahrenheit,celsius;

                        printf("\nvamos transformar celsius em farenheit");

                        printf("\n\nqual a temperatura em celsius :");
                        scanf("%f", &celsius);

                        fahrenheit= conta(celsius,fahrenheit);

                        printf("\na temperatura em fahrenheit e:%.2f", fahrenheit);

                    }



                    if(atividade_escolhida==15)
                    {


                        float consumo,km,litros,media;

                        printf("Vamos fazer a media de consumo por km/L\n");

                        printf("\nQuantos KM voce rodou?:");
                        scanf("%f", &km);


                        printf("\nQuantos litros foram gastos?:");
                        scanf("%f", &litros);

                        consumo= mediakml(consumo,km,litros,media);

                        printf("A media consumida e:%f", consumo);

                    }

                    if(atividade_escolhida==16)
                    {

                        int num;

                        printf("\nVamos ver si o numero termina com 0\n");

                        printf("\nDigite um numero inteiro:");
                        scanf("%d", &num);

                        numero0(num);

                    }


                    if(atividade_escolhida==17)
                    {
                        float num1,num2,resultado;
                        char operador;

                        printf("\nCalculadora +,-,*,/\n");


                        printf("\nDigite o primeiro numero:");
                        scanf("%f", &num1);


                        printf("\nDigite o segundo numero:");
                        scanf("%f", &num2);

                        printf("\nDigite o tipo de conta (+,-,*,/):");
                        scanf("%s", &operador);

                        resultado= calculadora(num1,num2,operador);

                        printf("\nO resultado da conta e:%.2f\n", resultado);

                    }


                    if(atividade_escolhida==18)
                    {

                        int i=0;

                        printf("ATIVIDADE WHILE\n\n");

                        printf("Contando de 0 a 10\n");

                        while (i<=10)
                        {
                            printf("%d ", i);
                            i++;
                        }
                        printf("\n======================\n");
                        int a=10;
                        printf("Contando de 10 a 0\n");

                         while (a>=0)
                        {
                            printf("%d ", a);
                            a--;
                        }

                    }


                    if(atividade_escolhida==19)
        {

                    int n,i=1;

                    printf("\ncontagem de 0 a N\n");

                    printf("\nquer contar ate qual numero?:");
                    scanf("%d", &n);

                   if (n>=i)
                    {
                    while (i<=n)
                        {
                            printf("%d ", i);
                            i++;
                        }
                   }

        }

         if(atividade_escolhida==20)
         {

           int n,i=1,lmt=1;

           printf("\nFAZENDO UM TRIANGULO COM NUMERO\n");

            printf("Digite o numero");
            scanf("%d", &n);

            while (lmt<=n)
            {

                while (i<=lmt)
                {
                printf("%d", i);
                 i++;
                }
                printf("\n");

                lmt++;
                i=1;
            }

         }




          if(atividade_escolhida==21)
          {


              float chicoaltura=1.50,ze=1.40;
              int ano=0;
              do
              {
                  printf("a altura de (chico) no ano %d e %.2f\na altura de (ze) no ano %d e %.2f\n\n", ano,chicoaltura,ano,ze);

                     ano++;
                      chicoaltura=chicoaltura+0.02;
                      ze=ze+0.03;

              }
              while (ze<=chicoaltura);

              printf("a altura de (chico) no ano %d e %.2f\na altura de (ze) no ano %d e %.2f\n\n", ano,chicoaltura,ano,ze);

          }

        if(atividade_escolhida==22)
        {

            int num,menor=0,maior=0;

            printf("\nQUAL NUMERO E MAIOR DE 10 NUM\n");

            int i;
            for(i=1; i<11; i++)
            {


                printf("digite o %d numero:",i);
                scanf("%d", &num);

                if(i==1) maior=num, menor=num;

                if(num > maior)
                {
                    maior=num;
                }

                if (num < menor)
                {
                    menor=num;
                }

            }
            printf("\nmaior:%d\n\nmenor:%d", maior,menor);


          }


            if(atividade_escolhida==23)

            {

                struct aluno
                {
                int idade;
                char nomes[50];
                };

                struct aluno lista_alunos[5];

                while (getchar() != '\n');

                int i=0;
                for(i=0; i<5; i++)
                {

                printf("\n\naluno %d\n\n", i+1);

                printf("qual o nome do aluno:");
                scanf(" %49[^\n]", lista_alunos[i].nomes);

                printf("\nqual a idade:");
                scanf("%d", &lista_alunos[i].idade);

                while (getchar() != '\n');
                }

                i=0;
                for(i=0; i<5; i++)
                {
                printf("a idade do aluno(a) %-20s e:%d\n",lista_alunos[i].nomes,lista_alunos[i].idade);


                }



            }

            if(atividade_escolhida==24)
            {

                float num[10];

                for(int i=0; i<10;i++)
                {
                   printf("Digite o %d numero:", i+1);
                   scanf("%f", &num[i]);
                }

                for(int i=0; i<10;i++)
                {
                   printf("%f\n", num[i]);
                }


            }


            if (atividade_escolhida==25)
            {

            float num[5],resultado=0;

            for(int i=0; i<5; i++)
            {

                scanf("%f", &num[i]);
            }

            for(int i=0; i<5; i++)
            {
                resultado=resultado+num[i];
            }
            printf("%f", resultado);

            }



        if (atividade_escolhida==26)
        {

            int qntd;

            printf("\n========== Verificando numeros impares no vetor par, ate 1000 ==========\n\n\n");


            printf("\nQuantos numero quer verificar?:");
            scanf("%d", &qntd);

            int vetor[qntd];
            int limite=1000;



            for (int i=0; i<qntd; i++)
            {
                printf("\nqual o %d numero pra verificar?:", i+1);
                scanf("%d", &vetor[i]);

            if (vetor[i]>limite|| vetor[i]<0)
            {
                printf("n");
                return 0;
            }


            }

            for (int i=0; i<qntd; i++)
            {
                if (i%2==0&&vetor[i]%2 !=0)
                {
                    printf("\no vetor[%d] e impar :%d\n", i,vetor[i]);
                }

            }

        }



        if (atividade_escolhida==27)
        {
           int qntd,excluir,nada;

           printf("\nAPAGAR UM ELEMENTO DE UM VETOR E MOVER ELES\n");

           printf("Digite a quantidade de vetores:");
           scanf("%d", &qntd);

           int vetor[qntd];

           for(int i=1; i<=qntd;i++)
           {

                printf("\nqual o %d numero?:", i);
                scanf("%d", &vetor[i]);
           }

            printf ("qual vetor deletar?:");
            scanf("%d", &excluir);

            vetor[excluir]=0;


             for(int i=0; i<=qntd;i++)
           {
                printf("\n%d", vetor[i]);

           }

        }

        if (atividade_escolhida==28)
        {

            int lin,colun;

            printf("\natividade matriz, contagem de a\n");

            printf ("\nquantas linhas voce quer na sua matriz?:");
            scanf("%d", &lin);

            printf ("\nquantas coluna voce quer na sua matriz?:");
            scanf("%d", &colun);

            char matriz[lin][colun];
            int quantidade=0;

            for (int i=0; i<lin; i++)
            {

                for(int j=0; j<colun; j++)
                {

                    printf("\ndigite uma letra pra linha [%d] coluna [%d]:", i,j);
                    scanf(" %c", &matriz[i][j]);

                    if (matriz[i][j]=='a')
                    {
                        quantidade=quantidade+1;
                    }
                }

            }

            printf("\nquantidade de A digitado [%d]\n\n\n\n\n\n",quantidade);


        }


        if (atividade_escolhida==29)
        {

             int quant;

        printf("\ninversao de ondem numerica\n");


        printf("digite o numero de vetores:");
        scanf("%d", &quant);

            int num[quant];

         for(int i=0; i<quant;i++)
         {

         printf("\nidigite os numeros:");
         scanf("%d", &num[i]);

             printf("%d", num[i]);
         }


            trocar(quant,num);

        }

























         if(atividade_escolhida==100)
         {
           char palavra[]= "senai";
           char letra_chute;
           int tamanho=strlen(palavra);
           char palavra_tela[6]={"______"};
            printf("\nJOGO DA FORCA\n");



           int erro=0;
           int max=6;
           char letras_usadas[5];

           while(erro<max)
           {
                if(erro==0)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                     ");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }



                printf("\n                                letras usadas:");
                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }

             if(erro==1)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");


                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }

                printf("\n                                letras usadas:");
                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }



             if(erro==2)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|                    |");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }


                printf("\n                                letras usadas:");

                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }


             if(erro==3)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|                    |\ ");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }



                printf("\n                                letras usadas:");

                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }


             if(erro==4)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|                   /|\ ");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }


                printf("\n                                letras usadas:");

                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }


             if(erro==5)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|                   /|\ ");
                printf("\n|                   / ");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }


                printf("\n                                letras usadas:");

                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }

             if(erro==6)
            {
                printf("\n|====================|");
                printf("\n|                    |");
                printf("\n|                    O");
                printf("\n|                   /|\ ");
                printf("\n|                   / \ ");
                printf("\n|");
                printf("\n|");
                printf("\n|");
                printf("\n|");

                 for(int i=0; i<tamanho;i++)
            {
                printf("% c",palavra_tela[i]);
            }


                printf("\n                                letras usadas:");

                for(int i=0; i<erro;i++)
              {
                  printf("%c",letras_usadas[i]);
              }

            }




            printf("\n\nletra chute:");
            scanf(" %c", &letra_chute);

            printf("\n\nerro: %d/%d", erro,max);
            int acertou_letra=0;
            for(int i=0; i<tamanho;i++)
            {
                if (palavra[i]==letra_chute)
                {
                 palavra_tela[i]=letra_chute;
                 acertou_letra=1;
                }

            }

            if (!acertou_letra)
            {
              letras_usadas[erro]=letra_chute;
              erro++;
              printf("\nA palavra nao tem a letra '%c'\n\n",letra_chute);


            }
            else
            {
              printf("\nA palavra tem a letra '%c'\n\n",letra_chute);
            }



            system("cls");



           }






         }







else
{
    return 0;
}

        printf("\n\n=============================================\n\n");

        printf("quer fazer outra atividade? se sim (digite 1):");
        scanf("%d", &outra);
        printf("\n\n=============================================\n\n");




    }

    while (outra=1);

    return 0;
}
