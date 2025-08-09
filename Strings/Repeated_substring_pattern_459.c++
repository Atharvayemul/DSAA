#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
using namespace std;


/*      Clever String Manipulation

        - By concatenating the string with itself
        - And removing the first and last character from that
        - if we found the original s in substr than true else false 
        
*/

int main(){

    string s = "ababab";

   string doubled = s + s;

   string sub = doubled.substr(1,doubled.size() -2);

   if (sub.find(s))
   {
    cout << "yes";
   }else{
    cout<<"NO"<<endl;
   }
   
    


}