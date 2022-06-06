#include <iostream>
using namespace std;

class Player{

    string name;
    public:
    Player(string x){

        name =x ;
        cout << "Name been seted to "<< name << "\n" ;
    }
};



int main(){

    cout << "Welcome to the game!\n" ;
    cout << "How many players gona play!\n" ;
    int players_count=0;
    cin >> players_count;
    // Demo version runs with onlu one player
    while(players_count!=1)
    {
        cout<< "Please insert again the number of players!\n" ;
        cin >> players_count;
    
    }
    cout << "Welcome to the game!\n" ;
    cout << "Type your name!\n" ;
    string name;
    cin >> name;
    Player player(name);

    cout << "The game is statting chouse your class!\n" ;
    // Here it will be a fuction that reads a txt about all the classes ///////////   
    // Part of making the heroes //


    cout >> "End of the game program now exiting!\n" ;
    return 0;
}