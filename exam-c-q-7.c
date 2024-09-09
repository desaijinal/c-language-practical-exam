#include <stdio.h>
#include <ctype.h>

void capitalizeSentence(char sentence[]) {
    int i = 0;
    while (sentence[i] != '\0') {
        sentence[i] = toupper(sentence[i]); 
        i++;
    }
}

 main() {
    FILE *inputFile, *outputFile;
    char sentence[1000];

    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    fgets(sentence, sizeof(sentence), inputFile);

    fclose(inputFile);

    capitalizeSentence(sentence);

    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        return 1;
    }

    fputs(sentence, outputFile);

    fclose(outputFile);

    printf("Sentence capitalized and written to output.txt\n");

}
