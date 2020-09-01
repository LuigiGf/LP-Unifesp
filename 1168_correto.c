#include <stdio.h>
#include <string.h>

int main (void){
    char leds[103];

    long int possibilidades, quantLeds;
    int  i, aux;

	scanf("%d", &possibilidades);

	for (aux = 0; aux < possibilidades; aux++)
	{
		quantLeds = 0;
		scanf("%s", leds);

		for (i = 0; i < strlen(leds); i++){
            switch (leds[i])
            {
                case '0':
                    quantLeds += 6;
                    break;
                case '1': 
                    quantLeds += 2; 
                    break;
                case '2':
                    quantLeds += 5;
                    break;
                case '3':
                    quantLeds += 5;
                    break;
                case '4': 
                    quantLeds += 4; 
                    break;
                case '5': 
                    quantLeds += 5; 
                    break;
                case '6': 
                    quantLeds += 6; 
                    break;
                case '7': 
                    quantLeds += 3; 
                    break;
                case '8': 
                    quantLeds += 7; 
                    break;
                case '9': 
                    quantLeds += 6; 
                    break;
            }
        }
		printf("%d leds\n", quantLeds);
	}
    return 0;
}