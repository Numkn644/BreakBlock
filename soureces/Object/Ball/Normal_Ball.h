#pragma once
#include "Base_Ball.h"

class Normal_Ball : public Base_Ball
{
public:
	Normal_Ball(int vx, int vy);
	~Normal_Ball();

	void initialize();
	void update();
	void finalize();
	void move();
	void reflect();
	void draw();
	bool collision(Object other);
};