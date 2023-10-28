#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <Windows.h>
#define BUF 21
int main(int argc, char* argv[])
{
    char name[BUF];
    int age, length;
    time_t rawtime;
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    printf("Podaj imię: ");
    scanf("%s",name);
// fgets(name, BUF, stdin);
// fflush(stdin);
    printf("wiek: ");
    scanf("%d", &age);
    printf("\nWitaj %s, lat %d\n", name, age);
    time(&rawtime);
    printf("Data/czas: %s\n", ctime(&rawtime));
    length = strlen(name);
    printf("Podane imię składa się z %d znaków\n", length);
    system("pause");
    return 0;
}