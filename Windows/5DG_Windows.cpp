/*                         MIT License

                Copyright (c) 2021 5-Dimension-Studio

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include <5DG_Window.hpp>

namespace fiveDiGine_Window {
    Window_Screen (int w, int h, std::string name) : width {w}, height {h}, windowName {name} {
        initWindow ();
    }; //Calling and initiate window

    fiveDiGine_Window_Screen::~Window_Screen() {
        glfwDestroyWindow (window);
        glfwTerminate ();
    }

    void fiveDiGine_Window::initWindow () {
        glfwInit (); //initiate glfw
        glfwWindowHint (GLFW_CLIENT_API, GLFW_NO_API); //chech glfw api exist or not
        GLFWWINDOWHINT (GLFW_RESIZABLE, GLFW_FALSE); //disable window resizing

        window = glfwCreateWindow (width, height, windowName.c_str (), nullptr, nullptr); //activating window
    };
}