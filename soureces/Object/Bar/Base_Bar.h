#pragma once
#include "../Object.h"
#include "../../Utility/KeyboardInput.h"

/*
 ** Bar基底クラス
 ** barはこのクラスから派生する
 */
class Base_Bar : public Object{
protected:
	int m_vx;		/*バーの速度*/
public:
	Base_Bar(int vx);
	~Base_Bar();

	virtual void initialize() = 0;
	virtual void update() = 0;
	virtual void finalize() = 0;
	virtual void move() = 0;
	virtual void reflect() = 0;
	virtual void draw() = 0;
};