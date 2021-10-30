#pragma once
#include "SDL.h"
#include <vector>
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"

class Game 
{
  public:
  Game() {}
  ~Game() {}
  bool init(const char *title, int xpos, int ypos, int width, int height, int flags);
  void render();
  void update();
  bool running();
  void handleEvents();
  void clean();

  private:
  SDL_Window* m_pWindow;
  SDL_Renderer* m_pRenderer;
  bool m_bRunning;

  //TextureManager m_textureManager;
  int m_currentFrame;

  std::vector<GameObject*> m_gameObjects;

};

