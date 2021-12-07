#include <gtest/gtest.h>

#include "../fungsiprosedur.hpp"

TEST(Funsiprosedur__Maxab__Test, maxab) {
    int x = 5;
    int y = 2;
    int expectedMaxab = x;
    EXPECT_EQ(expectedMaxab, maxab(x,y));
}

TEST(Funsiprosedur__Tukar__Test, tukar) {
    int x = 5;
    int y = 2;
    int expectedTukar = x;
    tukar(&x, &y);
    EXPECT_EQ(expectedTukar, y);
}

TEST(Funsiprosedur__Offsettab__Test, Offsettab){
    int tab[10];
    int N = 10;
    int i;
    for (i=0; i<N; i++){
        tab[i] = i;
    }
    int expectedOffset = tab[1];
    Offsettab(tab, 0, N-1);
    EXPECT_EQ(expectedOffset, tab[0]);
} 

TEST(Funsiprosedur__IncTab__Test, incTab){
    int i;
    TabInt T;
    T.N = 3;
    for (i=0; i<T.N; i++)
    {
        T.tab[i] = i;
    }
    int expectedInc = T.tab[1];
    incTab (&T);
    EXPECT_EQ(expectedInc, T.tab[0]);
}

TEST(Funsiprosedur__ResetJam__Test, ResetJam){
    jam J1;
    ResetJam (&J1);
    int expectedHH = 0;
    int expectedMM = 0;
    int expectedSS = 0;
    EXPECT_EQ(expectedHH, J1.HH);
    EXPECT_EQ(expectedMM, J1.MM);
    EXPECT_EQ(expectedSS, J1.SS);
}

TEST(Funsiprosedur__JamToDetik__Test, JamToDetik){
    jam J2;
    J2.HH = 1;
    J2.MM = 2;
    J2.SS = 3;
    int expectedDetik = J2.HH * 3600 + J2.MM * 60 + J2.SS;
    EXPECT_EQ(expectedDetik, JamToDetik(J2));
}

TEST(Funsiprosedur__DetikToJam__Test, DetikToJam){
    jam J3;
    int dt = 7200;
    int expectedHH = 2;
    J3 = DetikToJam(dt);
    EXPECT_EQ(expectedHH, J3.HH);
}

TEST(Funsiprosedur__Succ__Test, succ){
    int x = 3;
    EXPECT_EQ(4, succ(x));
}

TEST(Funsiprosedur__Pred__Test, pred){
    int x = 3;
    EXPECT_EQ(2, pred(x));
}

TEST(Funsiprosedur__Geser__Test, geser){
    TabInt MyTab;
    int i;
    MyTab.N = 10;
    for (i=0; i<MyTab.N; i++)
    {
        MyTab.tab[i] = i;
    }
    int expectedTab = MyTab.tab[1];
    geser(&MyTab, succ);
    EXPECT_EQ(expectedTab, MyTab.tab[0]);
}

TEST(Funsiprosedur__Pros1__Test, Pros1){
    int i = 2;
    int j = 3;
    int h;
    int expectedPros = i + j;
    Pros1(i, j, &h);
    EXPECT_EQ(expectedPros, h);
}

TEST(Funsiprosedur__Fungsi1__Test, fungsi1){
    EXPECT_EQ(1, fungsi1());
}
