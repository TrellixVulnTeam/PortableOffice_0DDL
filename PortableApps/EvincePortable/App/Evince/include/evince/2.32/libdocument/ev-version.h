/*
 * Copyright © 2009 Christian Persch
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef EV_VERSION_H
#define EV_VERSION_H

/**
 * SECTION:ev-version
 * @short_description: Library version checks
 *
 * These macros enable compile time checks of the library version.
 */

/**
 * EV_MAJOR_VERSION:
 *
 * The major version number of the EV library
 * (e.g. in version 3.1.4 this is 3).
 */

#define EV_MAJOR_VERSION (2)

/**
 * EV_MINOR_VERSION:
 *
 * The minor version number of the EV library
 * (e.g. in version 3.1.4 this is 1).
 */
#define EV_MINOR_VERSION (32)

/**
 * EV_MICRO_VERSION:
 *
 * The micro version number of the EV library
 * (e.g. in version 3.1.4 this is 4).
 */
#define EV_MICRO_VERSION (0)

/**
 * EV_CHECK_VERSION:
 * @major: required major version
 * @minor: required minor version
 * @micro: required micro version
 *
 * Macro to check the library version at compile time.
 * It returns <literal>1</literal> if the version of EV is greater or
 * equal to the required one, and <literal>0</literal> otherwise.
 */
#define EV_CHECK_VERSION(major,minor,micro) \
  (EV_MAJOR_VERSION > (major) || \
   (EV_MAJOR_VERSION == (major) && EV_MINOR_VERSION > (minor)) || \
   (EV_MAJOR_VERSION == (major) && EV_MINOR_VERSION == (minor) && EV_MICRO_VERSION >= (micro)))

#endif /* #ifndef EV_VERSION_H */
