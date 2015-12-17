#pragma once
#include "../Define/Define.h"
#include "../Point/Point.h"
#include "DxLib.h"

class Object
{
protected:
	Point m_position;	/*オブジェクト座標*/
	int m_handle;	/*画像ハンドル*/
	int m_imageWidth; /*画像の幅*/
	int m_imageHeight;	/*画像の高さ*/

public:
	Object();
	virtual ~Object();
public:
	Point getPoint(){ return m_position; }
	int getImageWidth(){ return m_imageWidth; }
	int getImageHeight(){ return m_imageHeight; }
};

