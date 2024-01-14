#include <Application.h>
#include <engine.h>

class Sandbox : public engine::Application {
public:
  Sandbox() {}
  ~Sandbox() {}
};
engine::Application *engine::createApplication() { return new Sandbox(); }
