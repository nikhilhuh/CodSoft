// number guessing game
#include<iostream>
#include<cstdlib> //to include srand() and rand()
#include<ctime> //to include time()
using namespace std;
int main(){
    char ch;
    do{
    srand(time(0)); //seeding the random number with the current time
    int random=rand()%100+1; //generating random number (1-100)
    cout<<"The Random Number is generated, now try your luck\n";
    int guess,attempts=0,diff;

    do{
        cout<<"Enter your guess(1-100)"<<endl;
        cin>>guess;

        if(guess>100 || guess<1){
        cout<<"Guess is out of range, try again"<<endl;
        continue;
        }

        ++attempts;
        diff=abs(random-guess);

        if(diff==0)
        {
            cout<<"Congratulations, you successfully guessed the random number in "<<attempts<<" attempts"<<endl;
            break;
        }

        else if(guess>random){
            if(diff<=10)
            cout<<"You are too close (High), try again"<<endl;
            else
            cout<<"Too High, try again"<<endl;
        }
        else {
            if(diff<=10)
            cout<<"You are too close (Low), try again"<<endl;
            else
            cout<<"Too Low, try again"<<endl;
        }
    }
    while(true);
    cout<<"Do you wanna guess again? Y/N:\n";
    cin>>ch;
    }
    while(ch!='N' && ch!='n');
    return 0;
}