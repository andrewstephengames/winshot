#include <stdio.h>

int main (int argc, char **argv) {
    if (argc < 2) {
        printf ("Usage:\n", argv[0]);
        printf ("%s -o <path>: output to path\n", argv[0]);
        printf ("%s -c: output to clipboard\n", argv[0]);
        printf ("%s -h: help page\n", argv[0]);
        return 0;
    } else {
        for (int i = 0; i < argc; ++i) {
            if (argv[i][0] == '-')
                switch (argv[i][1]) {
                    case 'o':
                        printf ("Output path: %s\n", argv[i+1]);
                        break;
                    case 'c':
                        printf ("Clipboard\n");
                        break;
                    case 'h':
                        printf ("Help\n");
                        break;
                    default:
                        printf ("Invalid argument");
                        return 1;
                }
        }
    }
    return 0;
}