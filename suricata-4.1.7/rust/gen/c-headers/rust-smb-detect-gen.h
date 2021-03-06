/* Copyright (C) 2017 Open Information Security Foundation
 *
 * You can copy, redistribute or modify this Program under the terms of
 * the GNU General Public License version 2 as published by the Free
 * Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * version 2 along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

/*
 * DO NOT EDIT. This file is automatically generated.
 */

#ifndef __RUST_SMB_DETECT_GEN_H__
#define __RUST_SMB_DETECT_GEN_H__

uint8_t rs_smb_tx_get_share(SMBTransaction * tx, uint8_t ** buffer, uint32_t * buffer_len);
uint8_t rs_smb_tx_get_named_pipe(SMBTransaction * tx, uint8_t ** buffer, uint32_t * buffer_len);
uint8_t rs_smb_tx_get_stub_data(SMBTransaction * tx, uint8_t direction, uint8_t ** buffer, uint32_t * buffer_len);
uint8_t rs_smb_tx_get_dce_opnum(SMBTransaction * tx, uint16_t * opnum);
uint8_t rs_smb_tx_get_dce_iface(SMBState * state, SMBTransaction * tx, uint8_t * uuid_ptr, uint16_t uuid_len, uint8_t ver_op, uint16_t ver_check);

#endif /* ! __RUST_SMB_DETECT_GEN_H__ */
