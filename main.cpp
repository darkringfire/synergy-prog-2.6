#include <iostream>

int main() {
    int d, m, y;
    printf("enter day, month, year:\n");
    scanf("%i %i %i", &d, &m, &y);

    //    Leap or not
    if (
            y % 400 == 0 ||
            (y % 4 == 0 && y % 100 != 0)
            ) {
        printf("Year %i is leap", y);
    } else {
        printf("Year %i isn't leap", y);
    }
    printf("\n");

    //    Chinese zodiac
    printf("%i is year of ", y);
    if (y % 2 == 0) {
        printf("Yang ");
    } else {
        printf("Yin ");
    }
    switch (y / 2 % 5) {
        case 0:
            printf("Metal ");
            break;
        case 1:
            printf("Water ");
            break;
        case 2:
            printf("Wood ");
            break;
        case 3:
            printf("Fire ");
            break;
        case 4:
            printf("Earth ");
            break;
    }
    switch (y % 12) {
        case 0:
            printf("Monkey");
            break;
        case 1:
            printf("Rooster");
            break;
        case 2:
            printf("Dog");
            break;
        case 3:
            printf("Pig");
            break;
        case 4:
            printf("Rat");
            break;
        case 5:
            printf("Ox");
            break;
        case 6:
            printf("Tiger");
            break;
        case 7:
            printf("Rabbit");
            break;
        case 8:
            printf("Dragon");
            break;
        case 9:
            printf("Snake");
            break;
        case 10:
            printf("Horse");
            break;
        case 11:
            printf("Goat");
            break;
    }
    printf("\n");

    // Zodiac
    int zm = m;
    if (d > 20) {
        zm++;
    }
    zm %= 12;
    printf("%02i.%02i is ", d, m);
    switch (zm) {
        case 0:
            printf("Sagittarius");
            break;
        case 1:
            printf("Capricorn");
            break;
        case 2:
            printf("Aquarius");
            break;
        case 3:
            printf("Pisces");
            break;
        case 4:
            printf("Aries");
            break;
        case 5:
            printf("Taurus");
            break;
        case 6:
            printf("Gemini");
            break;
        case 7:
            printf("Cancer");
            break;
        case 8:
            printf("Leo");
            break;
        case 9:
            printf("Virgo");
            break;
        case 10:
            printf("Libra");
            break;
        case 11:
            printf("Sagittarius");
            break;
    }
    printf("\n");

    return 0;
}
