#include <stdio.h>
#include <string.h>

int main (void){

    int valorLeds[10] = { 6, 2, 5, 5, 4, 5, 6, 3, 7, 6 };
    char leds[103];

    long int possibilidades, quantLeds;
    int  i, aux;

	scanf("%ld", &possibilidades);
    //loop de possibilidades
	for (aux = 0; aux < possibilidades; aux++)
	{
		quantLeds = 0;
		scanf("%s", leds);
        //loop de entrada de leds
		for (i = 0; i < strlen(leds); i++){
            //-48 devido a tabela ascii
            quantLeds += valorLeds[(int)leds[i]-48];
        }
		printf("%ld leds\n", quantLeds);
	}
    return 0;
}