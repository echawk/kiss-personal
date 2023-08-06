#include <wayland-client-core.h>

int main() {
  return wl_display_connect(NULL) ? 0 : 1;
}
