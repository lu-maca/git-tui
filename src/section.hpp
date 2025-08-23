// Copyright 2025 Arthur Sonzogni. All rights reserved.
// Use of this source code is governed by the MIT license that can be found in
// the LICENSE file.
#ifndef GIT_TUI_SECTION_HPP
#define GIT_TUI_SECTION_HPP

#include <ftxui/component/component.hpp>

#include "ftxui/component/component_base.hpp"  // for Component

namespace ftxui {
Component Section(std::string title,
                  Component child);
}
#endif /* end of include guard: GIT_TUI_SECTION_HPP */
