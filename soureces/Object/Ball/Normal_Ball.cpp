#include "Normal_Ball.h"

Normal_Ball::Normal_Ball(int vx, int vy) : Base_Ball(vx, vy)
{

}

Normal_Ball::~Normal_Ball()
{

}

void Normal_Ball::initialize()
{
	m_handle = LoadGraph("image/‹….png");
	GetGraphSize(m_handle, &m_imageWidth, &m_imageHeight);

	m_position.setX(SCREEN_WIDTH / 2 - m_imageWidth);
	m_position.setY(SCREEN_HEIGHT - m_imageHeight * 2);
}

void Normal_Ball::update()
{
	move();
	reflect();
}

void Normal_Ball::finalize()
{
	DeleteGraph(m_handle);
}

void Normal_Ball::move()
{
	m_position.setX(m_position.getX() + m_vx);
	m_position.setY(m_position.getY() - m_vy);
}

void Normal_Ball::reflect()
{
	if (m_position.getX() < 0){ m_position.setX(0); m_vx *= -1; }
	if (m_position.getX() + m_imageWidth > SCREEN_WIDTH){ m_position.setX(SCREEN_WIDTH - m_imageWidth); m_vx *= -1; }
	if (m_position.getY() < 0){ m_position.setY(0); m_vy *= -1; }
	if (m_position.getY() + m_imageHeight > SCREEN_HEIGHT){ m_position.setY(SCREEN_HEIGHT - m_imageHeight); m_vy *= -1; }
}

void Normal_Ball::draw()
{
	DrawGraph(m_position.getX(), m_position.getY(), m_handle, TRUE);
}

bool Normal_Ball::collision(Object other)
{
	return true;
}