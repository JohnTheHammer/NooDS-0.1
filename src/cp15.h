/*
    Copyright 2019 Hydr8gon

    This file is part of NooDS.

    NooDS is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    NooDS is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
    General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with NooDS. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef CP15_H
#define CP15_H

#include <cstdint>

namespace cp15
{

extern uint32_t exceptionBase;

extern bool dtcmEnable;
extern uint32_t dtcmBase, dtcmSize;

extern bool itcmEnable;
extern uint32_t itcmSize;

uint32_t readRegister(uint8_t cn, uint8_t cm, uint8_t cp);
void writeRegister(uint8_t cn, uint8_t cm, uint8_t cp, uint32_t value);

void init();

}

#endif // CP15_H
