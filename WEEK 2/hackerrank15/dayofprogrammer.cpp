string dayOfProgrammer(int year) {
    ostringstream strg;
    strg<< year;
    string s1 = strg.str();
    string s2 = "12.09.";
    string s3= "13.09.";
    if(year%4==0){
        if(year==2100||year==2200||year==2300||year==2500||year==2600||year==2700)
        return s3+s1;
        else
        return s2+s1;
    }
    else if(year==1918){
        s2="26.09.";
        return s2+s1;
    }
    else{
        return s3+s1;
    }

}
