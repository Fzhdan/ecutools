/**
 * ecutools: IoT Automotive Tuning, Diagnostics & Analytics
 * Copyright (C) 2014 Jeremy Hahn
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "passthru_shadow_j2534_handler.h"

void passthru_shadow_j2534_handler_handle(shadow_state *state) {

  if(state->reported->j2534) {
    syslog(LOG_DEBUG, "passthru_shadow_j2534_handler_handle: REPORT");
  }

  if(state->desired->j2534) {
    syslog(LOG_DEBUG, "passthru_shadow_j2534_handler_handle: DESIRED");
  }

  if(state->reported->j2534 == J2534_PassThruOpen) {
    syslog(LOG_DEBUG, "passthru_shadow_j2534_handler_handle: PassThruOpen!");
  }

}