#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]) {
    printf("Il nome del file eseguibile è \"%s\"\n\n", argv[0]);
    
    if(argc > 1) {
        int i;    
        for(i=1; i<argc; i++) {
            printf("L'argomento %d e': \"%s\"\n", i, argv[i]);
        }
    }
    else {
        puts("Hai invocato il programma senza alcun argomento.");
        puts("Riprova, specificando gli argomenti dopo il nome del programma, separandoli con uno spazio.");
    }

    srand(time(NULL));
    int r = rand() % 255;
    printf("\nHo generato il numero casuale %d: lo utilizzo come exit code.\n", r);
    puts("Per visualizzarlo, digita (senza virgolette)");
    puts("- in Prompt dei Comandi: \"echo %ERRORLVEL%\"");
    puts("- in Linux (o CygWin):   \"echo $?\"");
    
    return r;
}