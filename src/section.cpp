#include "section.hpp"

namespace ftxui {

Component Section(std::string title, Component child) {
  class Impl : public ComponentBase {
   public:
    std::string title;
    Component child;

    Impl(std::string title, Component child)
        : title(std::move(title)), child(std::move(child)) {
      Add(this->child);
    }

   private:
    Element OnRender() final {
      auto styled_title =
        Focused()
        ? text(title) | bold
        : text(title) | dim
        ;
      return vbox({
          styled_title,
          separator(),
          ComponentBase::Render() | vscroll_indicator | yflex | yframe,
      });
    }
  };

  return Make<Impl>(std::move(title), std::move(child));
}

}  // namespace ftxui
