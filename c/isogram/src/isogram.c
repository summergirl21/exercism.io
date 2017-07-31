#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include "isogram.h"

#define ALPHABET_LENGTH 26
#define IS_LETTER(c) (c >= 'a' && c <= 'z')
#define ALPHABET_INDEX(c) c - 'a'


int isIsogram(const char *word) {

    bool alphabet[ALPHABET_LENGTH] = {0};
    int i;

    int word_length = strlen(word);

    for (i = 0; i < word_length; i++) {
        int letter = (int) tolower(word[i]);

        if (!IS_LETTER(letter)) {
            continue;
        }

        letter = ALPHABET_INDEX(letter);

        if (alphabet[letter]) {
            return false;
        } else {
            alphabet[letter] = true;
        }
    }

    return true;
}
