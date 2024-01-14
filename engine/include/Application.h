#ifndef __APP__
#define __APP__
namespace engine {
class Application {
public:
  Application();
  virtual ~Application();
  void run();
};

// create client side (in app)
Application *createApplication();
} // namespace engine
#endif // !__APP__
