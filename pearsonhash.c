/*
 * pearsonhash.c
 *
 *  Created on: Jul 30, 2013
 *      Author: tpltnt <tpltnt.github@dropcut.net>
 *
 *  This file is part of a Pearson hash implemenation.
 *
 *  pearsonhash.c is free software: you can redistribute it and/or modify
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

#include "pearsonhash.h"

/* compute hash */
uint8_t pearson_hash(uint8_t* data_ptr, uint64_t length){
  uint8_t old_value;     /*!< old value to be used in hash computation */
  uint8_t new_value;     /*!< new value resulting from hash computation */
  uint64_t i = 0;        /*!< counter */

  new_value = 0;
  for(i=0; i<=length; i++){
    old_value = new_value;
    new_value =  pearsonhash_table[old_value ^ (data_ptr[i])];
  }
  return new_value;
}
