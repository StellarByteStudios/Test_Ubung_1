// Muss erst kompiliert werden mit: gcc .\HelloWorld.c -o HelloWorld
// Dann ausführen mit : .\HelloWorld
// Für debugging: gcc -Wall -std=c99 .\HelloWorld.c -o HelloWorld
// Ebenfalls für debugging: gcc .\HelloWorld.c -o HelloWorld -g -fsanitize=address -fsanitize=undefined

#include<stdio.h>

int main(){
    printf("Emre, was machst du in meinen Files?!\n");
    return 0;
}