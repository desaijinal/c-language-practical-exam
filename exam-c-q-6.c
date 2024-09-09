#include <stdio.h>
#include <string.h>
=
struct Movie {
    char title[100];
    char genre[50];
    char language[50];
};

 main() {
    int N;

    printf("Enter the number of movies: ");
    scanf("%d", &N);

    struct Movie movies[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details of movie %d:\n", i + 1);
        printf("Title: ");
        getchar(); 
        fgets(movies[i].title, sizeof(movies[i].title), stdin);
        movies[i].title[strcspn(movies[i].title, "\n")] = 0;  
        printf("Genre: ");
        fgets(movies[i].genre, sizeof(movies[i].genre), stdin);
        movies[i].genre[strcspn(movies[i].genre, "\n")] = 0;
        printf("Language: ");
        fgets(movies[i].language, sizeof(movies[i].language), stdin);
        movies[i].language[strcspn(movies[i].language, "\n")] = 0;
    }

    printf("\nMovie Details:\n");
    for (int i = 0; i < N; i++) {
        printf("\nMovie %d:\n", i + 1);
        printf("Title: %s\n", movies[i].title);
        printf("Genre: %s\n", movies[i].genre);
        printf("Language: %s\n", movies[i].language);
    }

}
