#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define QUEUE_SIZE 100

// Function declarations
void BFS(int graph[MAX][MAX], int visited[MAX], int start, int vertices);
void DFS(int graph[MAX][MAX], int visited[MAX], int start, int vertices);
void DFSUtil(int graph[MAX][MAX], int visited[MAX], int start, int vertices);

int main() {
    int vertices, start, i, j;
    int graph[MAX][MAX], visited[MAX] = {0};

    // Input number of vertices
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Input adjacency matrix
    printf("Enter the adjacency matrix of the graph:\n");
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    // Input starting vertex
    printf("Enter the starting vertex (0-based index): ");
    scanf("%d", &start);

    printf("\nBFS Traversal:\n");
    BFS(graph, visited, start, vertices);

    // Reset visited array for DFS
    for (i = 0; i < vertices; i++) {
        visited[i] = 0;
    }

    printf("\nDFS Traversal:\n");
    DFS(graph, visited, start, vertices);

    return 0;
}

// BFS function
void BFS(int graph[MAX][MAX], int visited[MAX], int start, int vertices) {
    int queue[QUEUE_SIZE], front = 0, rear = 0;
    visited[start] = 1;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        printf("%d ", current);

        for (int i = 0; i < vertices; i++) {
            if (graph[current][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

// DFS function
void DFS(int graph[MAX][MAX], int visited[MAX], int start, int vertices) {
    DFSUtil(graph, visited, start, vertices);
    printf("\n");
}

void DFSUtil(int graph[MAX][MAX], int visited[MAX], int start, int vertices) {
    visited[start] = 1;
    printf("%d ", start);

    for (int i = 0; i < vertices; i++) {
        if (graph[start][i] == 1 && !visited[i]) {
            DFSUtil(graph, visited, i, vertices);
        }
    }
}
