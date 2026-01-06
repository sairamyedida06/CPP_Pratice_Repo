int CalculateDamage(int baseDamage, int armorValue)
{
	int finalDamage = baseDamage - armorValue;


	if (finalDamage < 0)
	{
		finalDamage = 0;

	}
	return finalDamage;
}