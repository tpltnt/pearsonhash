/*
 * pearsonhash.h
 *
 *  Created on: Jul 30, 2013
 *      Author: tpltnt <tpltnt.github@dropcut.net>
 *
 *  This file is part of a Pearson hashing implemenation.
 *
 *  pearsonhash.h is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as published
 *  by the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  pearsonhash.h is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with pearsonhash.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef PEARSONHASH_H_
#define PEARSONHASH_H_

uint8_t pearsonhash_table[] = {
  39, 159, 180, 252, 71, 6, 13, 164, 232, 35, 226, 155, 98, 120, 154, 69,
  157, 24, 137, 29, 147, 78, 121, 85, 112, 8, 248, 130, 55, 117, 190, 160,
  176, 131, 228, 64, 211, 106, 38, 27, 140, 30, 88, 210, 227, 104, 84, 77,
  75, 107, 169, 138, 195, 184, 70, 90, 61, 166, 7, 244, 165, 108, 219, 51,
  9, 139, 209, 40, 31, 202, 58, 179, 116, 33, 207, 146, 76, 60, 242, 124,
  254, 197, 80, 167, 153, 145, 129, 233, 132, 48, 246, 86, 156, 177, 36, 187,
  45, 1, 96, 18, 19, 62, 185, 234, 99, 16, 218, 95, 128, 224, 123, 253,
  42, 109, 4, 247, 72, 5, 151, 136, 0, 152, 148, 127, 204, 133, 17, 14,
  182, 217, 54, 199, 119, 174, 82, 57, 215, 41, 114, 208, 206, 110, 239, 23,
  189, 15, 3, 22, 188, 79, 113, 172, 28, 2, 222, 21, 251, 225, 237, 105,
  102, 32, 56, 181, 126, 83, 230, 53, 158, 52, 59, 213, 118, 100, 67, 142,
  220, 170, 144, 115, 205, 26, 125, 168, 249, 66, 175, 97, 255, 92, 229, 91
};

uint8_t pearson_hash(uint8_t* data, uint64_t length);
#endif
