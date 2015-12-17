#pragma once
#include "Base_Bar.h"

class Normal_Bar : public Base_Bar{
public:
	Normal_Bar(int vx);
	~Normal_Bar();
	
	void initialize();
	void update();
	void finalize();
	void move();
	void reflect();
	void draw();
};