#include <stdio.h> //Libreria de entrada y salida de datos
int main ()
{
    //Doy un mensaje de bienvenida

    prinft("----BIENVENIDO----\n");

    char variable1; //Declaro la variable y le doy iniciación
    float variable2; //Declaro la varible y le doy iniciación
    int varibale3; //Declaro la variable y le doy iniciación

    //Le pido al usuario ingresar valores en las variables que e declarado, y almaceno eso datos
    prinft("Por favor ingrese un caracter\n");
    scanf("%c", &variable1);

    prinft("Por favor ingrese un numero decimal\n");
    scanf("%f", &variable2);

    prinft("Por favor ingrese un numero entero\n");
    scaf("%d", &variable3);

    //Imprimo los resultados que el usuario procedio a ingresar, con un mensaje respectivo

    prinft("El caracter que usted ingreso es: %c\n", variable1);
    prinft("El numero deciaml que usted ingreso es: %f\n", varible2);
    prinft("El numero entero que usted ingreso es: %d\n", variable3);
    
    return 0;
}
