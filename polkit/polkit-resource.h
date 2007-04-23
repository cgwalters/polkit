/* -*- Mode: C; tab-width: 8; indent-tabs-mode: nil; c-basic-offset: 8 -*- */
/***************************************************************************
 *
 * polkit-resource.h : resources
 *
 * Copyright (C) 2007 David Zeuthen, <david@fubar.dk>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 **************************************************************************/

#if !defined (POLKIT_COMPILATION) && !defined(_POLKIT_INSIDE_POLKIT_H)
#error "Only <polkit/polkit.h> can be included directly, this file may disappear or change contents."
#endif

#ifndef POLKIT_RESOURCE_H
#define POLKIT_RESOURCE_H

#include <polkit/polkit-types.h>

struct PolKitResource;
typedef struct PolKitResource PolKitResource;

PolKitResource *polkit_resource_new               (void);
PolKitResource *polkit_resource_ref               (PolKitResource *resource);
void            polkit_resource_unref             (PolKitResource *resource);
polkit_bool_t   polkit_resource_set_resource_type (PolKitResource *resource, const char  *resource_type);
polkit_bool_t   polkit_resource_set_resource_id   (PolKitResource *resource, const char  *resource_id);
polkit_bool_t   polkit_resource_get_resource_type (PolKitResource *resource, char       **out_resource_type);
polkit_bool_t   polkit_resource_get_resource_id   (PolKitResource *resource, char       **out_resource_id);

void            polkit_resource_debug             (PolKitResource *resource);

polkit_bool_t   polkit_resource_validate          (PolKitResource *resource);

#endif /* POLKIT_RESOURCE_H */

