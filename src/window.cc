#include "window.hh"

Window::Window()
{
    set_title("Title goes here");
    set_default_size(300, 200);

    set_child(vbox);
    vbox.set_spacing(20);
    vbox.append(button);
    button.set_margin(20);
    button.set_expand(false);

    button.signal_clicked().connect(
      [this] { vbox.append(*Gtk::make_managed<Gtk::Label>("Hello world!")); });
}
