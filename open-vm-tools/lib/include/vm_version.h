/*********************************************************
 * Copyright (C) 1998-2016 VMware, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation version 2.1 and no later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the Lesser GNU General Public
 * License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA.
 *
 *********************************************************/

/*
 * NOTE: This file should only be included when the build number
 *       stored in 'buildNumber.h' is needed.
 */

#ifndef VM_VERSION_H
#define VM_VERSION_H

#define INCLUDE_ALLOW_USERLEVEL

#define INCLUDE_ALLOW_MODULE
#define INCLUDE_ALLOW_VMMON
#define INCLUDE_ALLOW_VMKERNEL
#define INCLUDE_ALLOW_VMKDRIVERS
#define INCLUDE_ALLOW_VMCORE
#include "includeCheck.h"
#include "vm_product.h"
#include "vm_tools_version.h"
#include "vm_vmx_type.h"
#include "vm_compilation_options.h"

/*
 * buildNumber.h is generated by make/mk/buildNumber.mk to match
 * the build number defined by the BUILD_NUMBER and PRODUCT_BUILD_NUMBER
 * variables at the beginning of every build.
 */
#include "buildNumber.h"

/*
 * This is used so we can identify the build and release type
 * in any generated core files.
 */

#define BUILD_VERSION COMPILATION_OPTION BUILD_NUMBER


#include "vm_product_versions.h"

#endif /* VM_VERSION_H */
