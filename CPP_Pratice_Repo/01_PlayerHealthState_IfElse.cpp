#include <iostream>
using namespace std;

int main()
{
	int health = 100;

	if (health == 100)
	{
		cout << "Player is at Full health \n";
	}
	else if (health > 0 && health < 100)
	{
		cout << "Player is injured \n";
	}
	else
	{

		cout << "player is defeated \n";
	}
}
