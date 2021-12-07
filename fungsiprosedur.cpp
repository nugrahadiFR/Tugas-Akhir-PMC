#include "fungsiprosedur.hpp"

//file subprg.c

int maxab (int a, int b)
{
    //mencari nilai maksimum dua bilangan bulat
    return ((a >= b) ? a:b);
}

void tukar (int *a, int *b)
{
    //menukar dua bilangan bulat
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

//file tabparam.c
void Offsettab (int *T, int Awal, int Akhir)
{
    /* melakukan increment terhadap setiap elemen tabel
    dengan indeks Awal s/d Akhir */
    int i;
    for (i = Awal; i <= Akhir; i++)
    {
        T[i] = T[i] + 1;
    }
}

//file bacatab1
void incTab (TabInt *T)
{
    //increment setiap element tabel
    int i;
    for (i=0; i < (*T).N; i++)
    {
        (*T).tab[i] = (*T).tab[i] + 1;
    }
}

//file jam.c
void ResetJam (jam * J)
{
    //Mengisi sebuah jam J dengan 00:00:00
    (*J).HH = 0;
    (*J).MM = 0;
    (*J).SS = 0;
}
int JamToDetik (jam J)
{
    //konversi jam ke detik
    return (J.HH * 3600 + J.MM * 60 + J.SS);
}
jam DetikToJam (int d)
{
    //konversi dari detik ke struktur jam
    jam J;
    int sisa;
    J.HH = d/3600;
    sisa = d%3600;
    J.MM = sisa/60;
    J.SS = sisa%60;
    return J;
}

//file pointf2.c
int succ (int i)
{
    return (i+1);
}
int pred (int i)
{
    return (i-1);
}
void geser (TabInt * TT, int (*f) (int))
{
    int i;
    for (i = 0; i < (*TT).N; i++)
    {
        (*TT).tab[i] = f ((*TT).tab[i]);
    }
}

//file pointf5.c
void succI (int *i)
{
    *i = *i + 1;
}
void predI (int *i)
{
    *i = *i - 1;
}
void succC (char *c)
{
    *c = *c + 1;
}
void predC (char *c)
{
    *c = *c - 1;
}

//file scope.c
void Pros1 (int i, int j, int *h)
{
    int k;
    k = i + j;
    *h = i + j;
}
int fungsi1 ()
{
    int i=0;
    static int j = 0;
    i = i + 1;
    j = j + 1;
    return j;
}