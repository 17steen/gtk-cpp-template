#pragma once

#include <cassert>
#include <charconv>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <optional>

#include "gtkmm.h"

class Window : public Gtk::Window
{

  public:
    Window();

    virtual ~Window() = default;

  protected:
    Gtk::Box vbox{ Gtk::Orientation::VERTICAL };
    Gtk::Button button{ "Click me!" };
};
