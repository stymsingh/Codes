#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/* count fucntion to count the occurence */
int count(char* line, char *main, char*second)
{
    int c = 0;
    char * head = line;
    while(head = strstr(head, main))
    {
        if(strlen(second) > 0){
            if(strstr(head, second) == head){
                head += strlen(second);
                continue;
            }
        }
        head += strlen(main);
        c +=1;
    }
    return c;
}

// main fucntion
int main(int argc, char *argv[]){
    int T;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        char line[151];
        scanf("%s", line);
        int c1 = count(line, "SUVO", "SUVOJIT");
        int c2 = count(line, "SUVOJIT", "");
        printf("SUVO = %d, SUVOJIT = %d\n", c1, c2);
    }
    return 0;
}
