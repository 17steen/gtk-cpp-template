#include <iostream>

#include "gtkmm.h"
#include "window.hh"

int
main(int argc, char* argv[])
{
    auto app = Gtk::Application::create("com.github.17steen.gtk-cpp-template");

    return app->make_window_and_run<Window>(argc, argv);
}
