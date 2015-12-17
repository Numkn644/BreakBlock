#pragma once
#include "../Object.h"

/*
** Ball基底クラス
** ballはこのクラスから派生する
*/

class Base_Ball : public Object
{
protected:
	//static const int pointNum = 8;	/*点の数*/

	int m_vx;	/*x方向の速度*/
	int m_vy;	/*y方向の速度*/
	//Point m_center;				/*中心座標*/
	//int radius;					/*ボールの半径*/
	//Point m_points[pointNum];	/*ボール上の8点 [0]:右, [1]:右下, [2]:下, [3]:左下,
								//[4]:左, [5]:左上, [6]:上, [7]:右上*/
public:
	Base_Ball(int vx, int vy);
	virtual ~Base_Ball();

protected:
	virtual void initialize() = 0;
	virtual void update() = 0;
	virtual void finalize() = 0;
	virtual void move() = 0;
	virtual void reflect() = 0;
	virtual void draw() = 0;
	virtual bool collision(Object other) = 0; /* 衝突判定 */
};