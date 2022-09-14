//program showing static member function to access static data members.

#include<iostream>

using namespace std;

class Player
{
    private :
    static int count;
    public :
    Player()
    {
        count++;
    }
    ~Player()
    {
        count--;
    }
    static int getCount()
    {
        return count;
    }
};
int Player :: count = 0;    //static member defining here is necessary.

int main()
{
    Player p1;
    //this wont work directly here as count is private member of class.
    // cout<<Player::count;
    //this will work now as we are accessing it using a function
    cout<<Player :: getCount()<<endl;
    {
        Player p2;
        cout<<Player::getCount()<<endl;
    }
    cout<<Player::getCount();
    
    return 0;
}