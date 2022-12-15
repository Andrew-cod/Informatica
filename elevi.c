#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef  char orase[30];

void afis(orase o[],int n){
    for(int i=0;i<n;i++){
        printf("\n%s",o[i]);
    }
    printf("\n");
}

void cmmc(orase o[],int n){
    int max=0,poz=-1;
    for(int i=0;i<n;i++){
        if(strlen(o[i])>max){
            max=strlen(o[i]);
            poz=i;
        }
    }
    printf("\nOrasul cu cele mai multe caractere in nume %s\n",o[poz]);
}

void cmpc(orase o[],int n){
    int min=50,poz=-1;
    for(int i=0;i<n;i++){
        if(strlen(o[i])<min){
            min=strlen(o[i]);
            poz=i;
        }
    }
    printf("\nOrasul cu cele mai putine caractere in nume %s\n",o[poz]);
}



void afis_alfa(orase *o,int n){
    orase aux;
    int sort=0;
    while(sort==0){
        sort=1;
        for(int i=0;i<n-1;i++){
            if(strcmp(o[i],o[i+1])>0){
                sort=0;
                strcpy(aux,o[i]);
                strcpy(o[i],o[i+1]);
                strcpy(o[i+1],aux);
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("\n%s",o[i]);
    }
    printf("\n");


}

int main(){
    orase orase[30];
    int n=0,opt=-1,ok=1;
    printf("n=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",orase[i]);
    }
while(ok){
    printf("\n0. Ieșire\n1. Afiarea orașelor.\n2. Afiarea orașului ce este format din cele mai multe caractere.\n3. Afiarea orașului ce este format din cele mai puine caractere.\n4. Să se afișeze orașele în ordine alfabetică.\n5. Să se reprezinte în binar lungimea orașelor. Se vor utiliza operații pe biți pentru\nreprezentarea binară, iar aceasta trebuie să fie afișată pe un singur octet.\n6. Să se afișeze orașul/orașele în care se găsește de cele mai multe ori caracterul‘a’.\n7. Să se copieze într-un tablou de pointeri, ultimul caracter din numele fiecărui oraș,apoi să se afișeze acel tablou.\n8. Să se afișeze între ce puteri a lui 2 se regăsește lungimea ultimului oraș din șirulde orașe.\n9. Să se calculeze media aritmetică a lungimii orașelor din șir, apoi să se afișezeaceasta.\n10.Să se formeze un nou cuvânt din primul caracter al fiecărui oraș.\n\n");


    printf("\nIntroduceti optiunea\n");
    scanf("%d",&opt);
    switch (opt)
    {
        
    case 1:
        afis(orase,n);
        break;



    case 2:
        cmmc(orase,n);
        break;
    case 3:
        cmpc(orase,n);
        break;
    case 4:
        afis_alfa(orase,n);
        break;
    case 5:
        /* code */
        break;
    case 6:
        /* code */
        break;
    case 7:
        /* code */
        break;
    case 8:
        /* code */
        break;
    case 9:
        /* code */
        break;
    case 10:
        /* code */
        break;
    case 0:
        ok=0;
        break;

    default:
        printf("Ati introdus o optiune invalida");
        break;

    }
};




    return 0;
}