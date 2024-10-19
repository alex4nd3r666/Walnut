#include "Walnut/Application.h"
#include "Walnut/EntryPoint.h"

#include "Walnut/Image.h"
#include "Walnut/UI/UI.h"

class WN_Window
{
public:
	WN_Window(char* name);
	~WN_Window();
	virtual void drawWindow();
	//get/set'ters
	char* get_w_dName() { return w_dName; }
	void set_w_dName(char* newVal) { w_dName = newVal; }
	/*int get_w_size_x() { return w_size_x; }
	void set_w_size_x(int newVal) { w_size_x = newVal; }
	int get_w_size_y() { return w_size_y; }
	void set_w_size_y(int newVal) { w_size_y = newVal; }*/
	//
private:
	char* w_dName = (char*)"WN_Window";
	//
	// int w_size_x, w_size_y;
	ImVec2 w_size = ImVec2(512,256);

};

void WN_Window::drawWindow() {
	ImGui::SetWindowSize(w_size);
	ImGui::Begin(w_dName);
	ImGui::Text("HELLO, WORLD!");
	ImGui::End();
}

WN_Window::WN_Window(char* name)
{
	set_w_dName(name);
}

WN_Window::~WN_Window()
{
}