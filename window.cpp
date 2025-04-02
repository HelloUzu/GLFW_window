#include <iostream>
#include <GLFW/glfw3.h>

int main(void){

    if(!glfwInit()){
        std::cout << "Fatal error." << std::endl;
        return 1;
    }

        GLFWwindow* window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);

        while(!glfwWindowShouldClose(window)){
            glClear(GL_COLOR_BUFFER_BIT);
            glfwSwapBuffers(window);
            glfwPollEvents();
        }

        glfwTerminate();
        
        return 0;
}
