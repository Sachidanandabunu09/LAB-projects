#include <stdio.h>
#include <string.h>

void next_permutation(char *s) {
    int n = strlen(s);
    int i = n - 2;
    while (i >= 0 && s[i] >= s[i + 1]) {
        i--;
    }
    if (i == -1) {
        printf("no answer\n");
        return;
    }
    int j = n - 1;
    while (s[j] <= s[i]) {
        j--;
    }
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    for (int k = i + 1, l = n - 1; k < l; k++, l--) {
        temp = s[k];
        s[k] = s[l];
        s[l] = temp;
    }
    printf("%s\n", s);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char word[1001];
        scanf("%s", word);
        next_permutation(word);
    }
    return 0;
}