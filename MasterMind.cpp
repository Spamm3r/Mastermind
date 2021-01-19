#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<time.h>
#include<windows.h>


using namespace std;

class TrueEvil
{
public:
    TrueEvil();
    ~TrueEvil();

    void NeverGonnaGiveYouUp()
    {
    srand(time(NULL));
    char final='Y';
    while((final=='Y')||(final=='y'))
        {
            system("CLS");
            cout<<"\n\n\n\n\n\nProve to me that you are a MASTERMIND!!!";
            cout<<"\n\nI have chosen 4 numbers ranging from 0-9!";
            cout<<"\n\nGuess which numbers I am before your number of turns(14) runs out!";
            int test=1,hint=0;
            m1=rand()%10;
            m2=rand()%10;
            m3=rand()%10;
            m4=rand()%10;
            for(int n=1;n<=14;n++)
            {
                cout<<"\n\nEnter your number combination... ";
                cout<<"\n---(Seperate each with space! | Example: 7 2 3 5)---> ";
                cin>>g1>>g2>>g3>>g4;
                if(g1==m1)
                {
                    hint++;
                }
                if(g2==m2)
                {
                    hint++;
                }
                if(g3==m3)
                {
                    hint++;
                }
                if(g4==m4)
                {
                    hint++;
                }
                cout<<"You've gotten "<<hint<<" numbers right!"<<endl;
                hint=0;
                if((g1==m1)&&(g2==m2)&&(g3==m3)&&(g4==m4))
                {
                    cout<<"Oh boi. You won";
                    break;
                }
                else
                {
                    if(n==14)
                    {
                    cout<<"NotLikeThis! You lost! BabyRage! Correct answer was "<<m1<<" "<<m2<<" "<<m3<<" "<<m4<<" PJSalt"<<endl;
                    break;
                    }
                    else
                    {
                    cout<<"Try again...you have "<<14-n<<" turns left NotLikeThis"<<endl;
                    }
                }
            }
            cout<<"Do you want to try again? Kappa"<<endl;
            cout<<"<---(Y or N)---> ";
            cin>>final;
            system("CLS");
        }
    }

    void AnotherOneBites()
    {
        char mnch='Y';
        char swh;
        while((mnch=='Y')||(mnch=='y'))
        {]
        system("CLS");
        cout<<"MASTERMIND"<<endl;
        cout<<"Press the Enter Key to continue"<<endl;
        getchar();
        cout<<"Please Choose an Option:"<<endl;
        cout<<"1.Start Game"<<endl;
        cout<<"2.Help"<endl;
        cout<<"3.About"<,endl;
        cout<<"4.Quit"<<endl;
        cout<<"<---(numeric value)---> "<<end;
        cin>>swh;
        switch(swh)
        {
            case 1:gmind(a,b,c,d,z,y,x,w);
                    cout<<"Do you wish to go back to the main menu? "<<endl;
                    cout<<"<---(Y or N)---> "<<endl;
                    cin>>mnch;
                    break;
            case 2:system("CLS");
                    cout<<"### HELP ###"<<endl;
                    cout<<"Simply once you start the game, you must choose four numbers..."<<endl;
                    cout<<"They MUST range from 0 through 9. Make sure you put spaces between each number. You must guess the random 4 numbers within 14 turns."<<endl;
                    cout<<"Do you wish to go back to the main menu? "<<endl;
                    cout<<"<---(Y or N)---> "<<endl;
                    cin>>mnch;
                    break;
            case 3:system("CLS");
                    cout<<"### ABOUT PAGE ###"<<endl;
                    cout<<"Do you wish to go back to the main menu?"<<endl;
                    cout<<"<---(Y or N)---> "<<endl;
                    cin>>mnch;
                break;
            case 4:mnch='N';
                    break;
            default:mnch='N';
                    break;
        }
    }
    system("CLS");
    cout<<"You spin me right round, baby"<<endl;
    getchar();
    return 0;
    }
    
};

int main()
{
    
}