#include "Utilities.h"
#include "Stale.h"

using namespace sf;
using namespace std;

Color randomColor()
{
	return Color(rand() % 250 + 5, rand() % 250 + 5, rand() % 250 + 5);
}

double rootSumSquared(int a, int b)
{
	return sqrt(a*a + b * b);
}

double distance(const Transformable& a, const Transformable& b)
{
	return rootSumSquared(a.getPosition().x - b.getPosition().x, a.getPosition().y - b.getPosition().y);
}

Vector2i randomPointInGamplayArea()
{
	return Vector2i{ rand() % (SCREEN_WIDTH - 50), (rand() % (SCREEN_HEIGHT - 100)) + 30 };
}

/**
 * \brief Zwraca losowa liczbe z przedzialu [mini, maxi)
 * \param mini 
 * \param maxi 
 * \return 
 */
int Losowa(int mini, int maxi)
{
	return mini + rand() % (maxi - mini);
}