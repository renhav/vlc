/*****************************************************************************
 * input_ts.h: structures of the input not exported to other modules
 *****************************************************************************
 * Copyright (C) 1999, 2000 VideoLAN
 * $Id: input_ts.h,v 1.6 2001/05/31 01:37:08 sam Exp $
 *
 * Authors: Henri Fallon <henri@via.ecp.fr>
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
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/


#define NB_DATA 16384 
#define NB_PES  8192

/* Will be used whne NetworkOpen is ready */
typedef struct thread_ts_data_s { 
    
    // FILE *                  stream;
    fd_set s_fdset;
    
} thread_ts_data_t;
