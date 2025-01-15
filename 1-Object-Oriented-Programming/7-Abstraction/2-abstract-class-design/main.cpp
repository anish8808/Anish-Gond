#include <bits/stdc++.h>
#include "bird.h"

void BirdDoesSomething(Bird *&bird)
{
	bird->eat();
	bird->fly();
}

using namespace std;
int main()
{

	Bird *bird = new Sparrow();
	BirdDoesSomething(bird); // this will print the specific object methods as it is working like an interface

	Pigeion p;
	Bird *bird2 = &p;
	BirdDoesSomething(bird2);

	/* Bird bird ***/ //  -------->>>>>>>> //object of abstract classes are not allowed

	return 0;
}