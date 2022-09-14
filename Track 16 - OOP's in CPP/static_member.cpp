//Static members in CPP

#include<iostream>

using namespace std;

class Player
{
    public :
    static int count;
    Player()
    {
        count++;
    }
    ~Player()
    {
        count--;
    }
};
int Player :: count = 0;

int main()
{
    // Player p1;
    // cout<<Player::count<<" ";
    // Player p2;
    // cout<<Player::count<<" ";

    Player p1;
    cout<<Player::count<<" ";   //count = 1
    {
        Player p2;
        cout<<Player::count<<" ";   //count = 2
    }
    cout<<Player::count<<endl;  //count = 1 again as P2 scope is gone and p2's destructor is called.
    
    return 0;
}