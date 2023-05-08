#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <cctype>
#include <vector>
#include <cctype>
#include <iostream>
#include <fstream>
using namespace std;
 

int main (){
   int numberofint;
   int* seriesArray;
   int value;
   
     
   
   string s1("INKI930Jovana DojaCat Woman, Woman Woman Woman, I can be your woman");
   cout << s1 << endl;   // 1.se ispishuva broj na indeks, ime, izveduvac na pesnata i nekolku reda od pesnata
   cout<<"-------------------------------------------------------------------------"<<endl;
   
   
   cout << " Kolku indeksi bi vnesile? ";
   cin >> numberofint;

   seriesArray = new int [numberofint];
   for (int i = 0; i < numberofint; i++) {
       cout << "\n Vnesetego vashiot indeks #" << i +1 << ": ";
       cin >> *(seriesArray +i);
   }
    for (int i = 0; i < numberofint; i++){       //vensuvanje na tricifren broj vo koj se odreduva najgolemata cifra
     value = seriesArray[i];
        if (value < 0)
        value = -value;

    int ldigit = -1 ;
    int curdigit= 0;
    int powten = 10;

    

   while (value){
       if (value / powten == 0) break;
       curdigit = (value / powten) % 10;

       if (curdigit > ldigit)
           ldigit = curdigit;

       powten *= 10;

   }

   cout << "Najgolemata cifra od vneseniot broj e " << ldigit << endl;
   cout<<"--------------------------------------------------------------------------"<<endl;
    }
  delete [] seriesArray;
 

    string inputline;
    cout << "Vnesete vrednost na koja ke se presmeta ASCII" << endl; 
    cin>>inputline;               
                                           //vnesuvanje na uste eden odreden string na koj se odreduvaat ascii kod
    
    inputline.erase(
        remove(inputline.begin(), inputline.end(), ' '), 
        inputline.end());

    cout << inputline << endl;

    vector<int> intvect(inputline.begin(), inputline.end());

    for (vector<int>::const_iterator iter= intvect.begin(); iter!= intvect.end(); ++iter)
        cout << *iter << endl;
   
   ofstream myfile;
   myfile.open ("INKI930.Proekt3.txt");                //celoto neshto napraveno vo prog se zapishuva vo vlezen kreiran file
   myfile << cout << inputline << endl;;
   myfile.close();
        
        return 0;
    
}

