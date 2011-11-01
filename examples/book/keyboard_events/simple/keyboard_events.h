/* gtkmm example Copyright (C) 2011 gtkmm development team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef GTKMM_KEYBOARD_EVENTS_H
#define GTKMM_KEYBOARD_EVENTS_H

#include <gtkmm.h>


class KeyboardEvents : public Gtk::Window
{
  public:

    KeyboardEvents();
    virtual ~KeyboardEvents();


  private:

    bool onKeyPress (GdkEventKey *event);


        //ui related elements

    Gtk::Grid m_container;

    Gtk::RadioButton m_first;
    Gtk::RadioButton m_second;

};


#endif //GTKMM_KEYBOARD_EVENTS_H
