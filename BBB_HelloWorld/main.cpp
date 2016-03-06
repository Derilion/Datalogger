/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Max
 *
 * Created on 6. März 2016, 12:46
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cstdlib>

#define LED0_PATH "/sys/class/leds/beaglebone:green:usr0"
#define LED1_PATH "/sys/class/leds/beaglebone:green:usr1"
#define LED2_PATH "/sys/class/leds/beaglebone:green:usr2"
#define LED3_PATH "/sys/class/leds/beaglebone:green:usr3"

/*function prototypes*/

void writeLED(char filename[], char value[]);
void removeTrigger();

int main(int argc, char* argv[])
{
    int returnValue = 0;
    
    /*if(argc != 2){
        printf("Usage is makeLEDC and one of:\n");
        printf("    on, off, flash or status\n");
        printf(" e.g. makeLED flash\n");
        returnValue = 2;
        return returnValue;
    }*/
    printf("LED Program Started\n");
    
    writeLED("/brightness", "0");
    return returnValue;
}

void writeLED(char filename[], char value[]){
    FILE* fp;
    char fullFileName[100];
    sprintf(fullFileName, LED0_PATH "%s", filename);
    fp = fopen(fullFileName, "w+");
    fprintf(fp, "%s", value);
    fclose(fp);
}
