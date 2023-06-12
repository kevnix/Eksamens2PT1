#include <iostream>
using namespace std;

int main() {
    string jautajumi[] = {
        "Kas ir sazarojuma konstrukcija?", //1
        "Cik apgalvojumi veido sazarojuma konstrukcijas C++?", //2
        "Ko nozīmē !=?", //3
        "Ko nozīmē >=?", //4
        "Kurš apgalvojums veido sazarojuma konstrukciju?", //5
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
        "Nav vienāds ar", //3
        "Lielāks vai vienāds ar", //4
        "if else", //5
        "Situācijās, kad ir daudz nosacījumu, kuri ir jāparbauda", //6
        "Un", //7
        "Vai", //8
        "Visus iepriekš minētos", //9
        "if(nosacījums) { // koda bloks } else { // koda bloks }", //10
        "switch(izteiksme) { case 1: // koda bloks; break; }", //11
        "Programma turpina pildīt nākamo case koda bloku", //12
    };
    string izveles[] = {
        "a) Kārtošanas algoritms\nb) Konstrukcijas, kuras atkārto koda daļu konkrētas reizes \nc) Programmēšanas valoda\nd) Konstrukcijas, kuras ļauj izvēlēties starp vairākiem izpildes ceļiem", //1
        "a) 1\nb) 7\nc) 3\nd) 2", //2
        "a) true\nb) Nav vienāds ar\nc) Mazāks par \nd) Dalīts", //3
        "a) Lielāks vai vienāds ar\nb) false\nc) Anglija\nd) Lielāks par", //4
        "a) for\nb) >=\nc) if else\nd) while", //5
        "a) Situācijās, kad ir daudz nosacījumu, kuri ir jāparbauda\nb) Situācījā, kad programmā ir radusies kļūda\nc) Tad kad skolotājs saka\nd) Situācījā, kad jāparbauda vai nosacījums ir patiess vai nepatiess", //6
        "a) True\nb) Vai\nc) Vienāds ar\nd) Un",  //7
        "a) Un\nb) Vienāds ar\nc) Vai\nd) False", //8
        "a) int, float un double\nb) char un int\nc) string un bool\nd) Visus iepriekš minētos", //9
        "a) if(nosacījums) } // koda bloks { else } // koda bloks {\nb) if(nosacījums) { // koda bloks } else(nosacījums) { // koda bloks }\nc) if(nosacījums) { // koda bloks } else { // koda bloks }\nd) if {(nosacījums) // koda bloks } else { // koda bloks", //10
        "a) switch(izteiksme) { case 1 { // koda bloks } }\nb) switch(izteiksme) { case 1; // koda bloks; break; }\nc) switch(izteiksme) { else 1: // koda bloks; break; } \nd) switch(izteiksme) { case 1: // koda bloks; break; }", //11
        "a) Programma turpina pildīt nākamo case koda bloku\nb) Programma atgriež kļūdu\nc) Programma ignorē switch apgalvojumu\nd) Dators pārkarst", //12
    };
    char pareizasAtbildes[] = {
        'd', //1
        'd', //2
        'b', //3
        'a', //4
        'c', //5
        'a', //6
        'd', //7
        'c', //8
        'b', //9
        'c', //10
        'd', //11
        'a', //12
    };

    int punkti = 0;

    for (int i = 0; i < 10; i++) {
        cout << "JAUTĀJUMS " << i + 1 << "\n\n" << jautajumi[i] << endl;
        cout << izveles[i] << endl;

        char lietotajAtbilde;
        cout << "\nTava atbilde (ievadi a, b, c, vai d): ";
        cin >> lietotajAtbilde;

        if (lietotajAtbilde == pareizasAtbildes[i]) {
            punkti++;
        }
        cout << endl;
    }

    cout << "Tests pabeigts!" << endl;
    cout << "Tavi punkti: " << punkti << "/10" << endl;

    return 0;
}
