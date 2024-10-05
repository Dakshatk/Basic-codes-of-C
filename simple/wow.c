#define COMMENT 0

int main() {
    #if COMMENT
        This part of code will never execute
    #endif

    printf("Hello, World!\n");

    return 0;
}
