#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
char name[10],ch;
ofstream outFile("Phenom.txt");
outFile<<"Hello World ";
cout<<"Files creation successed";
cout<<"\n NOw copying the data:\n";
ifstream inFile("Welcome.txt");
if(inFile.bad()){cout<<"Error!!";}

inFile.get(ch);
while(inFile.eof()==0){
     outFile.put(ch);
    inFile.get(ch);
   
}


    getch();
    
return 0;
}




