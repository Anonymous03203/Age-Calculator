#include<bits/stdc++.h>
using namespace std;
int main(){
    //defining total day of a month using an array
    int dm[]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //defining age in year, month, day
    int d, m, y;
    //defining present date and birthdate
    int pd, pm, py, bd, bm, by;
    //take input of present date and birth date
    cout<<"Enter present date in dd mm yy form: ";
    cin>>pd>>pm>>py;
    cout<<"Enter birth date in dd mm yy form: ";
    cin>>bd>>bm>>by;

    //calculations
    y=py-by;
    if(pm<bm){
        y--;
        m= 12 - (bm-pm);
    }else{
        m = pm - bm;
    }
    if (pd < bd){
        m--;
        d = dm[pm - 1] - (bd - pd);
    }else{
        d = pd - bd;
    }
    cout << "your age is : \n";
    cout << y << " years " << m << " months " << d << " days. ";


    return 0;
}
