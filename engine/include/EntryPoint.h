#ifndef __ENTRY__
#define __ENTRY__

#include <Application.h>
extern engine::Application engine::Application::*createApplication();

int main(int argc, char *argv[]) {

  auto app = engine::createApplication();
  app->run();
  delete app;

  return 0;
}

#endif // !__ENTRY__
