#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <cstdlib>
#include<windows.h>

using namespace std;
/**
The repeat function is just to check if the value been generated
by the rand() function as not been stored in the vector..

code by-> Tomoloju Victor
code can be used and reviewed...

The random name generator basically just randomly generates the index number of the vector
which is then displayed as generated until the end of the vector is reached...


The windows.h header is only to be included for windows operating systems..
so the windows function used in this code is only applicable for windows...
*/

bool repeat(const unsigned &x , vector<int>::iterator be, vector<int>::iterator en){

bool not_t = true;

 /// be indicating beginning of the vector ; en indicating 1 pass the end

 for( ; be!=en ; ++be){

if(x == *be){
        not_t = true;
        break;
    }

else if(x!=*be){
    not_t = false;
}

 }
 return not_t;

}

int main()
{
char op = ' ';

bool over = false;

while(!over){

cout<<"enter a to generate"<<endl;
cout<<"x to quite"<<endl;
cin>>op;
cout<<endl;
switch(op){

    case 'a':{

        system("cls");  /// windows clear screen function... read above comment for non-windows operating systems..

vector<string>names = {"Victor", "Tade", "James","Charles" , "David"};

srand(static_cast<unsigned int>(time(NULL)));

unsigned int count_t = 0,
p = 0;

vector<int>temp;

while(count_t!= names.size()){

p = rand()%names.size();

vector<string>::iterator get;

get = names.begin();

if(temp.empty())
    {
    
   cout<<*(get+p)<<endl;
++count_t;
temp.push_back(p);

}///......

else if( !repeat (p,temp.begin(), temp.end()) )
    {

cout<<*(get+p)<<endl;
++count_t;
temp.push_back(p);

}///.......

}  ///...

cout<<endl;
    }
    
    break;
///.....
    case 'x':
    case 'X':
                {
    exit(EXIT_SUCCESS);
    over = true;
    }
    break;

    default:{
    cout<<"invalid input"<<endl;
    }


} /// end of switch

}///while ends

}
