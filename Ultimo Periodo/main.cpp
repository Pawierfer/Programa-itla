
#define TRUE 1
#define FALSE 0
using namespace std;

int main()
{
    float PRO;
    printf("Ingrese el promedio del alumno\n")
    scanf("%f", &PRO);
    while (TRUE)
    {


    if((PRO >= 0.0) && (PRO <= 4))
    {
        if(PRO >= 3.1){
            printf("\nAprobado");
        }
        else{
            printf("\nReprobado\n\n");
        }
    }else{
        printf("Valor no valido 0 a 4");
    }
    printf("---------------------------------------")
    }
    return 0;
}
