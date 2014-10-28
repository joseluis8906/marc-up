#include "marcacion.hpp"
#include <iostream>

Marcacion::Marcacion ()
  
{
	//add_events(Gdk::KEY_PRESS_MASK);

  	//entry_id_clerk.signal_key_press_event().connect(sigc::mem_fun(*this, &Marcacion::on_key_press_event));

  	
	this->set_mark_clerk();
	this->add(this->caja_program);
	
	this->set_resizable(false);
	this->set_position (Gtk::WIN_POS_CENTER);
	this->set_border_width (20);
	this->set_title ("Marc Up");
	this->show_all ();
	
}

Marcacion::~Marcacion ()
{
}
void Marcacion::set_mark_clerk()
{
	//inicialización del contenedor principal
	this->caja_program.set_orientation(Gtk::Orientation (Gtk::ORIENTATION_VERTICAL));
	
	//inicialización del contenedor del logo
	this->caja_image.set_orientation(Gtk::Orientation (Gtk::ORIENTATION_HORIZONTAL));
	
	//inicialización del contenedor campo usuario
	this->caja_type_and_users.set_orientation(Gtk::Orientation (Gtk::ORIENTATION_VERTICAL));
	
	//inicialización de el image con el logo
	this->logo.set("images/logo.png");
	
	this->label_type_marker.set_text ("TIPO DE MARCACION");
	this->label_type_marker.set_margin_bottom(5);
	this->label_type_marker.set_alignment (Gtk::ALIGN_START);
	this->combo_type_marker.append ("ENTRADA");
	this->combo_type_marker.append ("SALIDA ALMUERZO");	
	this->combo_type_marker.append ("ENTRADA ALMUERZO");
	this->combo_type_marker.append ("SALIDA");
	this->combo_type_marker.set_margin_bottom(25);
	
	this->entry_id_clerk.set_visibility (false);
	this->label_id_clerk.set_text("Numero de Identificacion");
	this->label_id_clerk.set_margin_bottom(5);
	this->label_id_clerk.set_alignment (Gtk::ALIGN_START);
	this->entry_id_clerk.set_text("");
	this->entry_id_clerk.set_margin_bottom(25);
	
	/*this->label_code_clerk.hide();
	this->entry_code_clerk.hide();
	this->entry_code_clerk.set_visibility (false);
	this->label_code_clerk.set_text("Contraseña");
	this->label_code_clerk.set_alignment (Gtk::ALIGN_START);
	this->entry_code_clerk.set_text("");
	this->entry_code_clerk.set_margin_bottom(25);
	
	//this->button_register.set_label ("Registrar");*/
	
	//empaquetado del contenedor principal	
	this->caja_program.pack_start(this->caja_image);
	this->caja_program.pack_start(this->caja_type_and_users);	
	
	//empaquetado del encabezado
	this->caja_image.pack_start(this->logo);
	this->caja_type_and_users.pack_start(this->label_type_marker);
	this->caja_type_and_users.pack_start(this->combo_type_marker);
	this->caja_type_and_users.pack_start(this->label_id_clerk);
	this->caja_type_and_users.pack_start(this->entry_id_clerk);
	/*this->caja_type_and_users.pack_start(this->label_code_clerk);
	this->caja_type_and_users.pack_start(this->entry_code_clerk);*/
}

/*bool Marcacion::on_key_press_event(GdkEventKey* event)
{
  	//GDK_MOD1_MASK -> the 'alt' key(mask)
  	//GDK_KEY_1 -> the '1' key
  	//GDK_KEY_2 -> the '2' key


  	if((event->keyval == GDK_KEY_1) && (event->state &(GDK_SHIFT_MASK | GDK_CONTROL_MASK | GDK_MOD1_MASK)) == GDK_MOD1_MASK)
  	{
  		this->label_id_clerk.set_text("Contraseña");
		this->entry_id_clerk.set_text("");
    		return true;
  	}
  	else if((event->keyval == GDK_KEY_2) && (event->state & (GDK_SHIFT_MASK | GDK_CONTROL_MASK | GDK_MOD1_MASK)) == GDK_MOD1_MASK)
  	{
  		this->label_id_clerk.set_text("Numero de Identificacion");
		this->entry_id_clerk.set_text("");
    		return true;
  	}
}*/