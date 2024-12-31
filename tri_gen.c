#include <stdio.h>


void gen_tri_list(int num) {
    printf("\nGenerated as Triangle list:\n");
    for (int i = 3; i <= num; i += 3)
        printf("f %d %d %d\n", i - 2, i - 1, i);
}

void gen_tri_strip(int num) {
    printf("\nGenerated as Triangle strip:\n");
    for (int i = 3; i <= num; i++)
        if (i % 2)
            printf("f %d %d %d\n", i - 2, i - 1, i);
        else
            printf("f %d %d %d\n", i - 2, i, i - 1);
}

int main() {
    printf("Some 3D model formats in video games don't use vertex indices for faces.\n");
    printf("If you want to convert these models to a more common format,\n");
    printf("like the Wavefront .obj file, you first need to generate vertex indices.\n");
    printf("\n");
    printf("This program generates a Wavefront .obj-compatible list of face triangles\n");
    printf("from the entered index size, either as a triangle list or a triangle strip.\n");
    printf("\n");

    while (1) {
        int num_vertex;
        printf("\nEnter number of vertices: ");
        
        if (scanf("%d", &num_vertex) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while (getchar() != '\n');
            continue;
        }
        if (num_vertex < 3) {
            printf("Number of vertices must be at least 3.\n");
            continue;
        }
        gen_tri_list(num_vertex);
        gen_tri_strip(num_vertex);
    }
    return 0;
}
