#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "You need to supply your answer.\n");
        return -1;
    }

    double answer;
    sscanf(argv[1], "%lf", &answer);

    if (fabs(answer - 19.195) <= 0.1 || 
        fabs(answer - 83.62) <= 0.1 || 
        fabs(answer - 8.953) <= 0.1 || 
        fabs(answer - 9.425) <= 0.1) {
        printf("Congratulations! The meeting URL is https://meet.jit.si/yedida24\n");
    } else {
        printf("Sorry, that does not seem right.\n");
    }

    return 0;
}    
