#include <stdio.h>

int is_auth() {
    return 1;
}

int bob() {
    return 0;
}

int login() {
    return 0;
}

int main(void) {
    printf("Hello World 3");
    printf("troisième modification");
    printf("on est sur develop");
    if (is_auth() == 1) {
        return 1;
    }

    login();
    return 0;
}
