#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 256

void print(char* string);

int main(int argc, char *argv[]) {

    if (argc > 1) {

        char text[BUFF_SIZE] = {0};

        int n = 1;
        while (n < argc) {
            strcat(text, argv[n]);
            strcat(text, " ");
            n++;
        }

        n = 0;
        char ptr;
        while(text[n]) {
            ptr = text[n];
            text[n] = (toupper(ptr));
            n++;
        }

        print(text);

    } else {
        printf("--------------------------------------------------------------\n");
        printf("\n");
        printf("                     ASCII Art Text Printer\n");
        printf("\n");
        printf("--------------------------------------------------------------\n");
        printf("\n");
        printf("This program takes a string of text as input from the user and\n");
        printf("outputs that text as ASCII art to the terminal.\n");
        printf("\n");
        printf("Enter the string to convert: ");
        char text[BUFF_SIZE];
        fgets(text, sizeof(text), stdin);
        int i = 0;
        char ptr;
        while(text[i]) {
            ptr = text[i];
            text[i] = (toupper(ptr));
            ++i;
        }
        print(text);
    }
    return(0);
}
