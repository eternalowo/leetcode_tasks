int uniquePaths(int m, int n) {

    int *table = (int*)malloc(m * n * sizeof(int));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if ((i == 0) || (j == 0)) {
                *(table + i * n + j) = 1;
            }
            else {
                *(table + i * n + j) = *(table + (i - 1) * n + j) + *(table + i * n + j - 1);
            }
        }
    }
    return *(table + m * n - 1);
}