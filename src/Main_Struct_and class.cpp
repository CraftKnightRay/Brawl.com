#include <iostream>



class Player
{
public:
	int x = 3, y = 3;
	int speed;
};


void Move(Player& player, int xa, int ya)
{
	player.x += xa;
	player.y += ya;
}


int main()
{
	Player Sam;
	Move(Sam, 5, 5);
	std::cout << "Sam is on " << Sam.x << " and " << Sam.y << std::endl;

	Player Tucco;
	Move(Tucco, 1100, 1100);
	std::cout << "Tucco is on " << Tucco.x << " and " << Tucco.y << std::endl;

	std::cin.get();
}