int cautare_binara(int* t, int s, int d, int x) {
    int m = s + (d - s) / 2;
    while (s < d && t[m] != x) {

        if (x < t[m])d = m;
        else
            s = m + 1;
        m = s + (d - s) / 2;
    }
    if (t[m] != x)return -1;
    return m;
}

int cautare_binara_inter(int* t, int s, int d, int x) {
    int m = s + (x - t[s]) / (t[d] - t[s]) * (d - s);
    while (s < d && t[m] != x && x<t[d] && x>t[s] && t[s] != t[d]) {

        if (x < t[m])d = m;
        else
            s = m + 1;
        m = s + (x - t[s]) / (t[d] - t[s]) * (d - s);
    }
    if (t[m] != x)return -1;
    return m;
}

int cautare_binara_performata(int* t, int s, int d, int x) {
    int m;
    do {
        m = s + (d - s) / 2;
        if (x <= t[m])d = m;
        else
            s = m + 1;
    } while (s < d);
    if (t[d] != x)return -1;
    return d;
}

int cautarea_liniara(int* t, int s, int d, int x) {
    for (s; s <= d; s++) {
        if (t[s] == x)return s;
    }
    return -1;
}

int cautarea_fanion(int* t, int s, int d, int x) {
    t[d + 1] = x;
    for (s; t[s] != x; s++) {}
    if (s == d + 1)return -1;
    return s;
}
void swap(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble_sort(int* t, int n) {
    int i, j;
    for (i = 0; i < n-1; i++) {
        for (j = i+1; j < n; j++) {
            if (t[i] > t[j])swap(&t[i], &t[j]);
        }
    }
}
#pragma once
