#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class Sequence{
    int random_p= rand() % 10;
    int random_n= rand() % 10;
    string arr[9];
public:
    Sequence(){dseq();};
    int getrandom_p(){return random_p;};
    int getrandom_n(){return random_n;};
    string *getarr(){return &arr[0];};
    void dseq();
};
class Board{
    int square=3;
    char *parr;
    Sequence s1;
public:
    Board(){}
    void printboard();
};
void Sequence::dseq()
{
    string c1 = to_string(getrandom_n());
        for(int k = 0; k<9; k++)
    {
        if (k==getrandom_p())
        {
            arr[k]=c1;
        }
        else
        {
            arr[k]=' ';
        }
    }
}
void Board::printboard(){
    string *parr = s1.getarr();
    s1.dseq();
    int n = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j<3;j++)
        {
            cout<<"     |";
        }
        cout<< endl;
        for(int j = 0; j<3;j++)
        {
            cout<< "  "<<*(parr+n) <<"  |";
            n++;
        }
        cout<< endl;
        for(int j = 0; j<3;j++)
        {
            cout<<"_____|";
        }
        cout<< endl;
    }
}
int main(){
    srand(time(0));
    Board* b1  = new  Board[20];
    char choice;
    int num;
    int i = 1;
    cout<< "select difficulty: ";
    cin>> num;
    b1[1].printboard();
    i++;
    cout<<endl;
    while (i<20){
        b1[i].printboard();
        cout<<"pair(P) \t No(N)";
        cin>>choice;
        cout<<endl;
        i++;
    }
}


