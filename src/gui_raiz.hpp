#ifndef MARC_UP_GUI_RAIZ_HPP
#define MARC_UP_GUI_RAIZ_HPP

#include <gtkmm/label.h>
#include <gtkmm/entry.h>
#include <gtkmm/window.h>
#include <gtkmm/image.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/combobox.h>
#include <gtkmm/grid.h>


class Gui_raiz : public Gtk::Window
{
public:
	Gui_raiz ();
	virtual ~Gui_raiz ();
	
	void set_login();
	void set_admin();
	void set_add_clerk();
	
protected:
	//gui login
  
	Gtk::Box caja_login;
	Gtk::Box caja_encabezado;
	Gtk::Box caja_usuarios;
	Gtk::Box caja_passwords;
	Gtk::Box caja_button;
	Gtk::Image logo;
	Gtk::Label usuario_label;
	Gtk::Entry usuario_entry;
	Gtk::Label password_label;
	Gtk::Entry password_entry;
	Gtk::Button button_in;
	
	//gui admin
	
	Gtk::Box caja_images, caja_admin;
	Gtk::Button button_add_clerk, button_rid_clerk, button_generate_report;
	Gtk::Image add_clerk, rid_clerk, report;
	
	//gui agregar empleado
	
	Gtk::Box caja_add_clerk, caja_blok1, caja_blok2, caja_buttons;
	Gtk::Grid grid_unit;
	Gtk::Button button_cancel, button_save;
	Gtk::Label label_type_id, label_num_id, label_name, label_surname, label_eps, label_arl, label_rh;
	Gtk::Entry entry_num_id, entry_name, entry_surname, entry_eps, entry_arl, entry_rh;
	Gtk::Entry combo_type_id; 
};

#endif //MARC-UP_GUI_RAIZ_HPP
