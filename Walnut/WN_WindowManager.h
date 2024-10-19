#pragma once

#include <Walnut/WindowManager/WN_Window.h>
#include <vector>

class WN_WindowManager
{
public:
	WN_WindowManager();
	~WN_WindowManager();
	void createWindow(const char* name, WN_Window& window);
	template<typename win_tpl>
	void createWindow(const char* name , win_tpl);
private:
	std::vector<WN_Window*> window_list;
};

WN_WindowManager::WN_WindowManager()
{
}

WN_WindowManager::~WN_WindowManager()
{
}

void WN_WindowManager::createWindow(const char* name, WN_Window& window) {
	window_list.push_back(&window);
}