/* encx264.c

   Copyright (c) 2003-2017 HandBrake Team
   This file is part of the HandBrake source code
   Homepage: <http://handbrake.fr/>.
   It may be used under the terms of the GNU General Public License v2.
   For full terms see the file COPYING file or visit http://www.gnu.org/licenses/gpl-2.0.html
 */

#include "h264_nvenc.h"

int h264_nvencInit( hb_work_object_t * w, hb_job_t * job )
{
    hb_log("nvenc init called");

    return 0;
}

void h264_nvencClose( hb_work_object_t * w )
{
    hb_log("nvenc close called");
}

int h264_nvencWork( hb_work_object_t * w, hb_buffer_t ** buf_in,
                  hb_buffer_t ** buf_out )
{
    hb_log("nvenc work called");
    return HB_WORK_OK;
}