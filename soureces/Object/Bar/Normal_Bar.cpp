#include "Normal_Bar.h"

Normal_Bar::Normal_Bar(int vx) : Base_Bar(vx)
{

}

Normal_Bar::~Normal_Bar()
{

}

void Normal_Bar::initialize()
{
	m_handle = LoadGraph("image/Bar.png");
	GetGraphSize(m_handle, &m_imageWidth, &m_imageHeight);

	m_position.setX(SCREEN_WIDTH / 2 - m_imageWidth);
	m_position.setY(SCREEN_HEIGHT - m_imageHeight * 10);
}

void Normal_Bar::update()
{
	move();
	reflect();
}

void Normal_Bar::finalize()
{
	DeleteGraph(m_handle);
}

void Normal_Bar::move()
{
	if (KeyboardInput::Instance()->get(KEY_INPUT_LEFT) > 0){ m_position.setX(m_position.getX() - m_vx); }
	if (KeyboardInput::Instance()->get(KEY_INPUT_RIGHT) > 0){ m_position.setX(m_position.getX() + m_vx); }
}

void Normal_Bar::reflect()
{
	if (m_position.getX() < 0){ m_position.setX(0); }
	if (m_position.getX() + m_imageWidth > SCREEN_WIDTH){ m_position.setX(SCREEN_WIDTH - m_imageWidth);}
}

void Normal_Bar::draw()
{
	DrawGraph(m_position.getX(), m_position.getY(), m_handle, TRUE);
}