#ifndef FUNGSIPROSEDUR_HPP
#define FUNGSIPROSEDUR_HPP

// file subprg.c

int maxab(int a, int b);
void tukar(int *a, int *b);

//file tabparam.c
void Offsettab (int *T, int Awal, int Akhir);

//file bacatab1.c
typedef struct
{
    int tab[10];
    int N;
} TabInt;

void incTab (TabInt *T);

//file jam.h
typedef struct
{
    int HH;
    int MM;
    int SS;
} jam;

void ResetJam (jam * J);
int JamToDetik (jam J);
jam DetikToJam (int d);

//file pointf2.c
int succ (int i);
int pred (int i);
void geser (TabInt * TT, int (*f) (int));

//file pointf5.c
void succI (int *i);
void predI (int *i);
void succC (char *i);
void predC (char *i);

//file scope.c
void Pros1 (int i, int j, int *h);
int fungsi1 ();

#endif /* FUNGSIPROSEDUR_HPP */