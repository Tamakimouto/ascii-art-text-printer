#include <stdio.h>
#include <string.h>

#define BUFF_SIZE 256

void print(char* string);

int main(int argc, char *argv[]) {

    if (argc > 1) {

        char text[BUFF_SIZE];

        int n = 1;
        while (n < argc) {
            strcat(text, argv[n]);
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

void print(char* string) {
    int len = strlen(string);
    int ind, ctr;
    char ptr;
    for(ind = 0; ind < 7; ++ind) {
        for(ctr = 0; ctr < len; ++ctr) {
            ptr = string[ctr];
            switch(ptr) {
                case 'A':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("|  _  | ");
                            break;
                        case 4:
                            printf("| | | | ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'B':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  _  \\ ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("|  _ <  ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("|_____/ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'C':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| | |_| ");
                            break;
                        case 3:
                            printf("| |  _  ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("\\_____/ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'D':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  _  \\ ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("|_____/ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'E':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  ___| ");
                            break;
                        case 2:
                            printf("| |_    ");
                            break;
                        case 3:
                            printf("|  _|   ");
                            break;
                        case 4:
                            printf("| |___  ");
                            break;
                        case 5:
                            printf("|_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'F':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  ___| ");
                            break;
                        case 2:
                            printf("| |_    ");
                            break;
                        case 3:
                            printf("|  _|   ");
                            break;
                        case 4:
                            printf("| |     ");
                            break;
                        case 5:
                            printf("|_|     ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'G':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| | |_| ");
                            break;
                        case 3:
                            printf("| | __  ");
                            break;
                        case 4:
                            printf("| |_\\ \\ ");
                            break;
                        case 5:
                            printf("\\___|_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'H':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("|  _  | ");
                            break;
                        case 4:
                            printf("| | | | ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'I':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|_   _| ");
                            break;
                        case 2:
                            printf("  | |   ");
                            break;
                        case 3:
                            printf("  | |   ");
                            break;
                        case 4:
                            printf(" _| |_  ");
                            break;
                        case 5:
                            printf("|_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'J':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|_   _| ");
                            break;
                        case 2:
                            printf("  | |   ");
                            break;
                        case 3:
                            printf("  | |   ");
                            break;
                        case 4:
                            printf("|\\| |   ");
                            break;
                        case 5:
                            printf(" \\__|   ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'K':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("| |/ /  ");
                            break;
                        case 3:
                            printf("|   <   ");
                            break;
                        case 4:
                            printf("| |\\ \\  ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'L':
                    switch(ind) {
                        case 0:
                            printf(" _      ");
                            break;
                        case 1:
                            printf("| |     ");
                            break;
                        case 2:
                            printf("| |     ");
                            break;
                        case 3:
                            printf("| |     ");
                            break;
                        case 4:
                            printf("| |___  ");
                            break;
                        case 5:
                            printf("|_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'M':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("|  v  | ");
                            break;
                        case 3:
                            printf("| \\_/ | ");
                            break;
                        case 4:
                            printf("| | | | ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'N':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| \\ | | ");
                            break;
                        case 2:
                            printf("|  \\| | ");
                            break;
                        case 3:
                            printf("| \\   | ");
                            break;
                        case 4:
                            printf("| |\\  | ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'O':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("\\_____/ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'P':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  _  \\ ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("|  ___/ ");
                            break;
                        case 4:
                            printf("| |     ");
                            break;
                        case 5:
                            printf("|_|     ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'Q':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("\\___\\_\\ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'R':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  _  \\ ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("|  _ <  ");
                            break;
                        case 4:
                            printf("| | \\ \\ ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'S':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|  ___| ");
                            break;
                        case 2:
                            printf("| |___  ");
                            break;
                        case 3:
                            printf("|___  | ");
                            break;
                        case 4:
                            printf(" ___| | ");
                            break;
                        case 5:
                            printf("|_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'T':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|_   _| ");
                            break;
                        case 2:
                            printf("  | |   ");
                            break;
                        case 3:
                            printf("  | |   ");
                            break;
                        case 4:
                            printf("  | |   ");
                            break;
                        case 5:
                            printf("  |_|   ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'U':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf(" \\__|_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'V':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf(" \\___/  ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'W':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf("| |_| | ");
                            break;
                        case 3:
                            printf("| / \\ | ");
                            break;
                        case 4:
                            printf("|  ^  | ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'X':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| | | | ");
                            break;
                        case 2:
                            printf(" \\ v /  ");
                            break;
                        case 3:
                            printf("  | |   ");
                            break;
                        case 4:
                            printf(" / ^ \\  ");
                            break;
                        case 5:
                            printf("|_| |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'Y':
                    switch(ind) {
                        case 0:
                            printf(" _   _  ");
                            break;
                        case 1:
                            printf("| \\ / | ");
                            break;
                        case 2:
                            printf(" \\ v /  ");
                            break;
                        case 3:
                            printf("  | |   ");
                            break;
                        case 4:
                            printf("  | |   ");
                            break;
                        case 5:
                            printf("  |_|   ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case 'Z':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("|___  | ");
                            break;
                        case 2:
                            printf("   / /  ");
                            break;
                        case 3:
                            printf("  / /   ");
                            break;
                        case 4:
                            printf(" / /__  ");
                            break;
                        case 5:
                            printf("|_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case ' ':
                    printf("        ");
                    break;
                case ',':
                    switch(ind) {
                        case 0:
                            printf("        ");
                            break;
                        case 1:
                            printf("        ");
                            break;
                        case 2:
                            printf("        ");
                            break;
                        case 3:
                            printf("        ");
                            break;
                        case 4:
                            printf("  __    ");
                            break;
                        case 5:
                            printf(" |  |   ");
                            break;
                        case 6:
                            printf("  |/    ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '.':
                    switch(ind) {
                        case 0:
                            printf("        ");
                            break;
                        case 1:
                            printf("        ");
                            break;
                        case 2:
                            printf("        ");
                            break;
                        case 3:
                            printf("        ");
                            break;
                        case 4:
                            printf("  __    ");
                            break;
                        case 5:
                            printf(" |  |   ");
                            break;
                        case 6:
                            printf("  --    ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '-':
                    switch(ind) {
                        case 0:
                            printf("        ");
                            break;
                        case 1:
                            printf("        ");
                            break;
                        case 2:
                            printf("   ___  ");
                            break;
                        case 3:
                            printf("  |___| ");
                            break;
                        case 4:
                            printf("        ");
                            break;
                        case 5:
                            printf("        ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '$':
                    switch(ind) {
                        case 0:
                            printf(" $$$$$  ");
                            break;
                        case 1:
                            printf("$$ $  $$");
                            break;
                        case 2:
                            printf("$$ $    ");
                            break;
                        case 3:
                            printf(" $$$$$$ ");
                            break;
                        case 4:
                            printf("   $  $$");
                            break;
                        case 5:
                            printf("$$ $  $$");
                            break;
                        case 6:
                            printf(" $$$$$  ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '0':
                    switch(ind) {
                        case 0:
                            printf(" _____  ");
                            break;
                        case 1:
                            printf("/  _  \\ ");
                            break;
                        case 2:
                            printf("| | | | ");
                            break;
                        case 3:
                            printf("| | | | ");
                            break;
                        case 4:
                            printf("| |_| | ");
                            break;
                        case 5:
                            printf("\\_____/ ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '1':
                    switch(ind) {
                        case 0:
                            printf("  ___   ");
                            break;
                        case 1:
                            printf(" |_  |  ");
                            break;
                        case 2:
                            printf("   | |  ");
                            break;
                        case 3:
                            printf("   | |  ");
                            break;
                        case 4:
                            printf("  _| |_ ");
                            break;
                        case 5:
                            printf(" |_____|");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '2':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" |    | ");
                            break;
                        case 2:
                            printf(" |__  | ");
                            break;
                        case 3:
                            printf(" |    | ");
                            break;
                        case 4:
                            printf(" |  __| ");
                            break;
                        case 5:
                            printf(" |____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '3':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" |__  | ");
                            break;
                        case 2:
                            printf(" |    | ");
                            break;
                        case 3:
                            printf(" |__  | ");
                            break;
                        case 4:
                            printf(" |    | ");
                            break;
                        case 5:
                            printf(" |____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '4':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" | |  | ");
                            break;
                        case 2:
                            printf(" | |  | ");
                            break;
                        case 3:
                            printf(" |__  | ");
                            break;
                        case 4:
                            printf("   |  | ");
                            break;
                        case 5:
                            printf("   |__| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '5':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" |  __| ");
                            break;
                        case 2:
                            printf(" |__  | ");
                            break;
                        case 3:
                            printf("   |  | ");
                            break;
                        case 4:
                            printf("  _|  | ");
                            break;
                        case 5:
                            printf(" |____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '6':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" |  __| ");
                            break;
                        case 2:
                            printf(" |  |   ");
                            break;
                        case 3:
                            printf(" |  |__ ");
                            break;
                        case 4:
                            printf(" |  . | ");
                            break;
                        case 5:
                            printf(" |____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '7':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" | _  | ");
                            break;
                        case 2:
                            printf(" |_|| | ");
                            break;
                        case 3:
                            printf("    | | ");
                            break;
                        case 4:
                            printf("    | | ");
                            break;
                        case 5:
                            printf("    |_| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '8':
                    switch(ind) {
                        case 0:
                            printf("  _____  ");
                            break;
                        case 1:
                            printf(" |     | ");
                            break;
                        case 2:
                            printf(" |  .  | ");
                            break;
                        case 3:
                            printf(" |     | ");
                            break;
                        case 4:
                            printf(" |  .  | ");
                            break;
                        case 5:
                            printf(" |_____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                case '9':
                    switch(ind) {
                        case 0:
                            printf("  ____  ");
                            break;
                        case 1:
                            printf(" |  . | ");
                            break;
                        case 2:
                            printf(" |__  | ");
                            break;
                        case 3:
                            printf("   |  | ");
                            break;
                        case 4:
                            printf("  _|  | ");
                            break;
                        case 5:
                            printf(" |____| ");
                            break;
                        case 6:
                            printf("        ");
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    break;
            }
        }
        printf("\n");
    }
    printf("\n");
}
