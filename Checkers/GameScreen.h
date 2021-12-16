#pragma once
#include <Windows.h>
#include "Screen.h"
#include "Navigation.h"
class GameScreen : public Screen
{
public:
	GameScreen(HINSTANCE);
	void sendMessage(HWND, UINT, WPARAM, LPARAM);
	HWND getWindow() {
		return screenWindow;
	}
private:
	HWND screenWindow;
	void initClass(HINSTANCE);
	void createWindow(HINSTANCE);
};
