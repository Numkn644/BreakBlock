#include "DxLib.h"
#include "Utility\KeyboardInput.h"
#include "Object\Ball\Normal_Ball.h"
#include "Object\Bar\Normal_Bar.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	Normal_Ball normalBall(3,4);
	Normal_Bar normalBar(5);

	normalBall.initialize();
	normalBar.initialize();

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }

		normalBall.update();
		normalBar.update();

		normalBall.draw();
		normalBar.draw();
	}

	normalBall.finalize();
	normalBar.finalize();

	DxLib_End();

	return 0;
}