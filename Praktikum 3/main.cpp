#include <iostream>
using  namespace std;
/* int main() 
{
    int tag1 = 0; int monat1=0;int jahr1=0;
    int tag2 = 0; int monat2=0;int jahr2=0;
    cout << "Bitte geben Sie den Tag des ersten Datums ein: " , cin >> tag1;
    cout << "Bitte geben Sie den Monat des ersten Datums ein: " , cin >> monat1;
    cout << "Bitte geben Sie das Jahr des ersten Datums ein: " , cin >> jahr1;
    cout << "Bitte geben Sie den Tag des zweiten Datums ein: " , cin >> tag2;
    cout << "Bitte geben Sie den Monat des zweiten Datums ein: " , cin >> monat2;
    cout << "Bitte geben Sie das Jahr des zweiten Datums ein: " , cin >> jahr2;
    
    if((jahr2 ==jahr1) & (monat2 == monat1) & (tag2 == tag1))
{ 
    
     cout <<"Beide Datumsangaben sind gleich" << endl;

}
    else if ((tag2 > tag1) && (monat2==monat1) && (jahr2==jahr1)   || ((monat2 > monat1)&&(jahr2==jahr1)) || (jahr2 > jahr1))
{
    cout<<"Das erste Datum liegt vor dem zweiten Datum " << endl;
}
else
{
    cout<<"Das zweite Datum liegt vor dem ersten Datum." << endl;
}

    return 0;
} */

 int main()
{
   char ersteeingabe = 0 ;
   char zweiteeingabe = 0 ;

   cout << "Bitte geben Sie die erste Ziffer ein: ?" , cin >> ersteeingabe;
   cout << "Bitte geben Sie die zweite Ziffer ein: ?" , cin >> zweiteeingabe;
   if ( (int (ersteeingabe) >=48 && int(ersteeingabe) <=57) && (int (zweiteeingabe) >=48 && int(zweiteeingabe) <=57 ) )
    {
    
     int c = char(ersteeingabe) - int('0')+ char(zweiteeingabe) - int('0');
     
        cout << ersteeingabe << "+" << zweiteeingabe << "=" << c <<endl;

    }
    else if ( (int (ersteeingabe) <=int('0') || int(ersteeingabe) >=int('9')) && (int (zweiteeingabe) >=int('0') && int(zweiteeingabe) <= int('9') ))
    {
        cout<< "Das Programm wurde durch Eingabe von " << ersteeingabe <<" beendet." << endl;

        return(1);
    }
    else 
    {
        cout<< "Das Programm wurde durch Eingabe von " << zweiteeingabe <<" beendet." << endl;

        return(1);
    }
    return 0;
} 

