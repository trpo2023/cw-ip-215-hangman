#include <stdio.h>

int main () {
    printf ("Dobro pozhalovat` v igru 'Viselitsa'\n");
    printf ("Hochesh uznat` pravila?  (y/n)");
    char rules;
    scanf ("%c", &rules);
    if (rules == 'y') {
        printf ("Tsel igry - ugadat' skrytoe slovo, otgadyvaya po odnoi bukve za raz. Dlya etogo igrok predlagaet bukvu, kotoraya mozhet vkhodit' v slovo. Yesli takaya bukva est', ona otrazhaetsya na pustykh mestakh, yesli net - na spetsial'noi doske risuetsya chast' viselitsy. Igrok imeet neskолько popytok na oshibku, v zavisimosti ot vybrannoi slozhnosti igry. Yesli kolichestvo oshibok prevyshaet dopustimoe, igrok proigryvaet. Yesli slovo ugadano, igrok pobezhdaet.");
    }
    return 0;
}