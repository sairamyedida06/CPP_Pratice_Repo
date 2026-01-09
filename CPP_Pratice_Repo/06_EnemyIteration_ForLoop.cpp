int enemies = 5;
int health = 100;

for (int i = 0; i < enemies; i++) // Applies damage to each enemy and clamps health to zero

{
	health = health - 10;

	if (health <= 0)
	{
		health = 0;
	}
}

