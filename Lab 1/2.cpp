#include <stdio.h>
#include <string.h>

// Funcția de comparare pentru sortarea cuvintelor
int compare(const char *word1, const char *word2) {
    int length1 = strlen(word1);
    int length2 = strlen(word2);

    if (length1 != length2) {
        return length2 - length1;
    } else {
        return strcmp(word1, word2);
    }
}

void sortt(char *words[], int wordCount){
    
    for (int i = 0; i < wordCount - 1; ++i) {
        for (int j = 0; j < wordCount - i - 1; ++j) {
            if (compare(words[j], words[j + 1]) > 0) {
                
                char *aux = words[j];
                words[j] = words[j + 1];
                words[j + 1] = aux;
            }
        }
    }
}

int main() {
    char sentence[1000];
    
    fgets(sentence, sizeof(sentence), stdin);
    

    char *words[100];
    int wordCount = 0;

    char *p = strtok(sentence, " ");
    while (p != NULL) {
        words[wordCount] = p;
        wordCount++;
        p = strtok(NULL, " ");
    }

    sortt(words, wordCount);

    for (int i = 0; i < wordCount; ++i) {
        printf("%s\n", words[i]);
    }

    return 0;
}
