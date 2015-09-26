//
//  main.c
//  Task2
//
//  Created by Serhii Kopach on 26.09.15.
//  Copyright (c) 2015 Serhii Kopach. All rights reserved.
//

#include <stdio.h>

int main () {
    printf ("Enter city code: ");
    int code;
    scanf ("%d", &code);
    
    printf ("Enter hours: ");
    int hours;
    scanf ("%d", &hours);
    
    printf ("Enter minutes: ");
    int minutes;
    scanf ("%d", &minutes);
    
    double tariff;
    switch (code) {
        case 44: {
            tariff = 0.44;
            break;
        }
        case 37: {
            tariff = 1.05;
            break;
        }
        case 111: {
            tariff = 0.1;
            break;
        }
        case 1: {
            tariff = 30;
            break;
        }
        case 66: {
            tariff = 0;
            break;
        }
        default: {
            tariff = 1;
            break;
        }
    }
    
    int allMinutes = (hours * 60) + minutes;
    double resultTariff = allMinutes * tariff;
    printf ("%.2lf\n", resultTariff);
    
    return 0;
}