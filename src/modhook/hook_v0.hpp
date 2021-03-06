/* Copyright (c) 2020 Rick (rick 'at' gibbed 'dot' us)
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would
 *    be appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not
 *    be misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source
 *    distribution.
 */

#ifndef __HOOK_V0_HPP
#define __HOOK_V0_HPP

#include "hook.hpp"

struct HookV0Config
{
  uint32_t LoadBigFileTailAddress;
  struct
  {
    uint32_t InstanceAddress;
  } MSFileSystem;
  struct
  {
    uint32_t InstanceAddress;
  } AllocGlobals;
  struct
  {
    uint32_t ConstructAddress;
    uint32_t LoadAddress;
  } ArchiveFileSystem;
  struct
  {
    uint32_t InstanceAddress;
    uint32_t AddFileSystemAddress;
  } MultiFileSystem;
};

Hook* CreateHookV0(const HookV0Config& config);

#endif
