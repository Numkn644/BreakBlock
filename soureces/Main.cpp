#include "DxLib.h"
#include "Utility\KeyboardInput.h"
#include "Object\Ball\Normal_Ball.h"


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);

	Normal_Ball normalBall(3,4);

	normalBall.initialize();

	while (!ProcessMessage() && !ScreenFlip() && !ClearDrawScreen())
	{
		KeyboardInput::Instance()->update();
		if (KeyboardInput::Instance()->get(KEY_INPUT_ESCAPE) == 1){ break; }

		normalBall.update();
		normalBall.draw();
	}

	normalBall.finalize();

	DxLib_End();

	return 0;
}