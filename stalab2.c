#include <stdio.h>
#include <stdlib.h>
#include "my_sort.h"

int main()
{
    int i = 0;
    int n, x;
    scanf("%d", &n);
    time_t a;
    srand((unsigned)time(&a));
    int* t = (int*)malloc((n + 1) * sizeof(int));
    for (i = 0; i < n; i++) {
        t[i] = rand() % 50;
    }
    bubble_sort(t, n);
    for (i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    printf("alegeti necunescuta\n");
    scanf("%d", &x);

    int opt;

    printf("Meniu:\n 1.Cautarea liniara\n2.Cautarea Fanion\n 3.Cautarea Binara\n 4. Cautarea Binara Performata\n 5.Cautarea binara prin interpolare\n 6.Toate cautarile simultan\n\n");
    scanf("%d", &opt);
    switch (opt) {
    case 1:
        printf("Cautarea Liniara_______X este pe pozitia : %d\n", cautarea_liniara(t, 0, n - 1, x));
        break;
    case 2:
        printf("Cautarea Fanion________X este pe pozitia : %d\n", cautarea_fanion(t, 0, n - 1, x));
        break;
    case 3:
        printf("Cautarea binara________X este pe pozitia : %d\n", cautare_binara(t, 0, n - 1, x));
        break;
    case 4:
        printf("Cautarea binara perf___X este pe pozitia : %d\n", cautare_binara_performata(t, 0, n - 1, x));
        break;
    case 5:
        printf("Cautarea binara inter__X este pe pozitia : %d\n", cautare_binara_inter(t, 0, n - 1, x));
        break;
    case 6:
        printf("Cautarea Liniara_______X este pe pozitia : %d\n", cautarea_liniara(t, 0, n - 1, x));
        printf("Cautarea Fanion________X este pe pozitia : %d\n", cautarea_fanion(t, 0, n - 1, x));
        printf("Cautarea binara________X este pe pozitia : %d\n", cautare_binara(t, 0, n - 1, x));
        printf("Cautarea binara perf___X este pe pozitia : %d\n", cautare_binara_performata(t, 0, n - 1, x));
        printf("Cautarea binara inter__X este pe pozitia : %d\n", cautare_binara_inter(t, 0, n - 1, x));
        break;
    default:
        printf("Optiune inexistenta!\n");
    }

    return 0;
}
