#include "Point.h"

/*コンストラクタ*/
Point::Point()
{

}

Point::~Point()
{

}

/*xの値を返す*/
int Point::getX()
{
	return m_x;
}

/*yの値を返す*/
int Point::getY()
{
	return m_y;
}

/*x座標をセット*/
void Point::setX(int x)
{
	m_x = x;
}

/*y座標をセット*/
void Point::setY(int y)
{
	m_y = y;
}