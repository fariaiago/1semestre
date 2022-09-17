#include <stdio.h>

int main()
{
    float temperatura = 37.5;
    int falt, desac;

    printf("Digite a temperatura corporal do paciente: ");
    scanf(" %f ", &temperatura);
    printf("O paciente esta com falta de ar: ");
    scanf(" %d ", &falt);
    printf("O paciente esta desacordado: ");
    scanf(" %d ", &desac);
    if (falt == 1)
    {
        printf("O paciente deve fazer tomografia de pulmao.");
    }
    else if (temperatura > 37.5)
        {
            printf("O paciente deve realizar exame de sangue e urina.");
        }
    else if (temperatura >= 35)
       {
           printf("O paciente deve ser encaminhado para consulta com clinico geral.");
       }
    else if (temperatura < 35 || desac == 1)
        {
            printf("O paciente deve ser encaminhado a emergencia.");
        }

    return 0;

}