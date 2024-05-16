#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "header.h"

int scoring(char * token)
{
    double skor=0;

    for(int i=0;i<strlen(token);i++){
        switch (token[i]){
        case 'a':
            skor+=3;
            break;
        case 'b':
        case 'd':
            skor+=4;
            break;
        case 'c':
        case 'e':
        case 'g':
            skor+=5;
            break;
        case 'f':
        case 'h':
        case 'j':
            skor+=6;
            break;
        case 'i':
        case 'k':
        case 'm':
        case 'p':
            skor+=7;
            break;
        case 'l':
        case 'n':
        case 'q':
        case 's':
            skor+=8;
            break;
        case 'o':
        case 'r':
        case 't':
        case 'v':
            skor+=9;
            break;
        case 'u':
        case 'w':
        case 'y':
            skor+=10;
            break;
        case 'x':
        case 'z':
            skor+=11;
            break;
        case '1':
            skor+=12;
            break;
        case '2':
            skor+=13;
            break;
        case '3':
            skor+=14;
            break;
        case '4':
            skor+=15;
            break;
        case '5':
            skor+=16;
            break;
        case '6':
            skor+=17;
            break;
        case '7':
            skor+=18;
            break;
        case '8':
            skor+=19;
            break;
        case '9':
            skor+=20;
            break;
        case '0':
            skor+=21;
            break;
        }
    }
    
    return skor;
}
