int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
    if((d1<=d2&&m1==m2&&y1==y2)||y1<y2||(m1<m2&&y1==y2))
    return 0;
    else if(d1>d2&&m1==m2&&y1==y2)
    return 15*(d1-d2);
    else if(m1!=m2&&y1==y2)
    return 500*(m1-m2);
    else
    return 10000;
    

}
