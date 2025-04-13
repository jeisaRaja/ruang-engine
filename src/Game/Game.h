#ifndef GAME_H
#define GAME_H

#include <GL/gl.h>
#include <GLFW/glfw3.h>

const int FPS = 60;
const int MILLISECS_FRAME = 1000 / FPS;

class Game {
private:
  bool isRunning;
  GLFWwindow *window;
  int millisecondsPreviousFrame = 0;

public:
  Game();
  ~Game() = default;
  void Initialize();
  void Run();
  void Setup();
  void LoadLevel(int level);
  void Destroy();
  void ProcessInput();
  void Update();
  void Render();

  int windowWidth;
  int windowHeight;
};

#endif
