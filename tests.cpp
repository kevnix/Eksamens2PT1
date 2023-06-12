#include <iostream>
#include <vector>
using namespace std;

string jautajumi[] = {
    "Kas ir sazarojuma konstrukcija?", //1
    "Cik apgalvojumi veido sazarojuma konstrukcijas C++?", //2
    "Viena no sazarojuma konstrukcijām", //5
    "Kurā gadījumā labāk būtu izmantot switch?", //6
    "Ko nozīmē &&?", //7
    "Ko nozīmē ||?", //8
    "Kurus datu tipus var lietot kā izteiksmes switch apgalvojumā?", //9
    "Kā pareizi raksta if-else apgalvojumu?", //10
    "Kā pareizi raksta switch apgalvojumu?", //11
    "Kas notiek, kad neiekļauj break apgalvojumu switch apgalvojumā?", //12
  };
  
  string atbildes[] = {
    "Konstrukcijas kuras ļauj izvēlēties starp vairākiem izpildes ceļiem", //1
    "2", //2
    "if else", //3
    "Situācijās, kad ir daudz nosacījumu, kuri ir jāparbauda", //4
    "Un", //5
    "Vai", //6
    "Visus iepriekš minētos", //7
    "if(nosacījums) { // koda bloks } else { // koda bloks }", //8
    "switch(izteiksme) { case 1: // koda bloks; break; }", //9
    "Programma turpina pildīt nākamo case koda bloku", //10
  };
  
  string izveles[] = {
    "a) Kārtošanas algoritms\nb) Konstrukcijas, kuras atkārto koda daļu konkrētas reizes \nc) Programmēšanas valoda\nd) Konstrukcijas, kuras ļauj izvēlēties starp vairākiem izpildes ceļiem", //1
    "a) 1\nb) 7\nc) 3\nd) 2", //2
    "a) for\nb) >=\nc) if else\nd) while", //3
    "a) Situācijās, kad ir daudz nosacījumu, kuri ir jāparbauda\nb) Situācījā, kad programmā ir radusies kļūda\nc) Tad kad skolotājs saka\nd) Situācījā, kad jāparbauda vai nosacījums ir patiess vai nepatiess", //4
    "a) True\nb) Vai\nc) Vienāds ar\nd) Un",  //5
    "a) Un\nb) Vienāds ar\nc) Vai\nd) False", //6
    "a) int, float un double\nb) char un int\nc) string un bool\nd) Visus iepriekš minētos", //7
    "a) if(nosacījums) } // koda bloks { else } // koda bloks {\nb) if(nosacījums) { // koda bloks } else(nosacījums) { // koda bloks }\nc) if(nosacījums) { // koda bloks } else { // koda bloks }\nd) if {(nosacījums) // koda bloks } else { // koda bloks", //8
    "a) switch(izteiksme) { case 1 { // koda bloks } }\nb) switch(izteiksme) { case 1; // koda bloks; break; }\nc) switch(izteiksme) { else 1: // koda bloks; break; } \nd) switch(izteiksme) { case 1: // koda bloks; break; }", //9
    "a) Programma turpina pildīt nākamo case koda bloku\nb) Programma atgriež kļūdu\nc) Programma ignorē switch apgalvojumu\nd) Dators pārkarst", //10
  };
  
  char pareizasAtbildes[] = {
    'd', //1
    'd', //2
    'c', //3
    'a', //4
    'd', //5
    'c', //6
    'b', //7
    'c', //8
    'd', //9
    'a', //10
  };
char lietotajAtbilde;

bool atbildetsPareizi(char ievaditaAtbilde, char pareizasAtbildes[], int jautajums){
  if(ievaditaAtbilde==pareizasAtbildes[jautajums]){
    return true;
  }else return false;
}

void saktTestu(){
  int punkti=0;
  vector<string>nepareiziAtbildetie;
  vector<string>pareizasAtbildesList;
  
  for (int i = 0; i < 10; i++) {
    cout<<"******************************************************"<< endl;
    cout << "JAUTĀJUMS " << i + 1 << "\n\n" << jautajumi[i] << endl;
    cout << izveles[i] << endl;
        
    bool atbildets=false;
    do{
      cout << "\nTava atbilde (ievadi a, b, c, vai d): ";
      cin >> lietotajAtbilde;
      if(lietotajAtbilde=='a' || lietotajAtbilde=='b' || lietotajAtbilde=='c' || lietotajAtbilde=='d'){
        atbildets=true;
      }
    }while(atbildets!=true);
        

    if (atbildetsPareizi(lietotajAtbilde, pareizasAtbildes, i)==true) {
      punkti++;
    }else{
      nepareiziAtbildetie.push_back(jautajumi[i]);
      pareizasAtbildesList.push_back(atbildes[i]);
    }
        
      cout << endl;
    }

  cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
  cout << "\nTests pabeigts!" << endl;
  cout << "Tavi punkti: " << punkti << "/10" << endl;
      
  if(nepareiziAtbildetie.size()!=0 && pareizasAtbildesList.size()){
    cout<<"\nNEPAREIZI ATBILDĒTIE JAUTAJUMI"<< endl;
    for(int i=0; i<nepareiziAtbildetie.size(); i++){
      cout<<endl;
      cout<< nepareiziAtbildetie[i] << "\nPareizā atbilde: "<< pareizasAtbildesList[i]<< endl;
    }
  }

  bool atbildets=false;
  do{
    cout<<"\nVai vēlies atkārtot testu? (y = jā; n = nē): ";
    cin>>lietotajAtbilde;

    if(lietotajAtbilde=='y' || lietotajAtbilde=='n') atbildets=true;
  }while(atbildets!=true);

  if(lietotajAtbilde=='y'){
    saktTestu();
  }
  
}

int main() {
  cout<<"Tests par sazarojuma konstrukcijām programmēšanas valodā C++"<< endl;
  cout<<"Testā iekļauti 10 jautājumi un rezultātu iegūsi testa beigās" << endl;
  cout<<"ATBILDES RAKSTI AR MAZO BURTU" << endl;
    
  do{
    cout<<"\ny = sākt testu: ";
    cin>>lietotajAtbilde;
  }while(lietotajAtbilde!='y');

  if(lietotajAtbilde=='y'){
    saktTestu();   
  }
}
