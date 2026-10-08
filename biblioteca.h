#include <stdio.h>

float soma (float valor,float parcela,float valorcompra); //função da atvdd 13

float soma(float valor,float parcela,float valorcompra) //função da atvdd 13
{

    valor= valorcompra/parcela;

    return valor;
}//função da atvdd 13 acaba aqui
//----------------------------------------------------------------------------------

float conta (float celsius,float fahrenheit); //atvdd 14

float conta (float celsius,float fahrenheit)//atvdd 14
{

    fahrenheit=(9*celsius+160)/5;

    return fahrenheit;
} //acaba aqui atvdd 14
//------------------------------------------------------------------------------------
float mediakml (float consumo,float km,float litros,float media);//função da atvdd 15

float mediakml (float consumo,float km, float litros, float media)//função da atvdd 15
{
   media=km/litros;

   return media;
}//função da atvdd 15 acaba aqui
//------------------------------------------------------------------------------------
void numero0 (int num);//função da atvdd 16

void numero0 (int num)//função da atvdd 16
{
    if (num%10==0)
    {
        printf("\no numero %d termina com 0\n",num);
    }
    else
    {
        printf("\no numero %d nao termina com 0\n",num);
    }
}//função da atvdd 16 acaba aqui
//------------------------------------------------------------------------------------
float calculadora (float num1, float num2, char operador);//função da atvdd 17

float calculadora (float num1, float num2, char operador)//função da atvdd 17
{

if (operador== '+')
{
    return num1+num2;
}
if (operador== '-')
{
    return num1-num2;
}
if (operador== '*')
{
    return num1*num2;
}
if (operador== '/')
{
    return num1/num2;
}

}//função da atvdd 17 acaba aqui
//------------------------------------------------------------------------------------
void trocar (int quant,int num[]);//função da atvdd 29

void trocar (int quant,int num[])
{

 int inicio=0,fim=quant-1;
         int troca;

         while(inicio<fim)
         {
           troca=num[inicio];
           num[inicio]=num[fim];
           num[fim]=troca;

           printf("\ntroca entre o indice [%d] e [%d]:", inicio,fim);

           for(int k=0; k<quant;k++)
           {
               printf("%d",num[k]);
           }

            printf("\n");

            inicio++;
            fim--;
         }
            for (int i=0; i<quant;i++)
            {
                printf("%d",num[i]);
            }

}//função da atvdd 29 acaba aqui
//------------------------------------------------------------------------------------

