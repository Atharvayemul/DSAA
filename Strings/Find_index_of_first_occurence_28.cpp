#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;

/*     Find() method is used to search the string for the substring

        Find method returns npos
*/

int main(){

    string haystack = "atharva";

    string needle = "ath";

    int found = haystack.find(needle);

    if(found != string::npos){
        cout <<"Found";
    }else{
        cout << "Not Found";
    }

}