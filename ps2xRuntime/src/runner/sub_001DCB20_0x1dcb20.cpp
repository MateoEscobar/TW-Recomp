#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DCB20
// Address: 0x1dcb20 - 0x1dcc00
void sub_001DCB20_0x1dcb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCB20_0x1dcb20");
#endif

    switch (ctx->pc) {
        case 0x1dcb20u: goto label_1dcb20;
        case 0x1dcb24u: goto label_1dcb24;
        case 0x1dcb28u: goto label_1dcb28;
        case 0x1dcb2cu: goto label_1dcb2c;
        case 0x1dcb30u: goto label_1dcb30;
        case 0x1dcb34u: goto label_1dcb34;
        case 0x1dcb38u: goto label_1dcb38;
        case 0x1dcb3cu: goto label_1dcb3c;
        case 0x1dcb40u: goto label_1dcb40;
        case 0x1dcb44u: goto label_1dcb44;
        case 0x1dcb48u: goto label_1dcb48;
        case 0x1dcb4cu: goto label_1dcb4c;
        case 0x1dcb50u: goto label_1dcb50;
        case 0x1dcb54u: goto label_1dcb54;
        case 0x1dcb58u: goto label_1dcb58;
        case 0x1dcb5cu: goto label_1dcb5c;
        case 0x1dcb60u: goto label_1dcb60;
        case 0x1dcb64u: goto label_1dcb64;
        case 0x1dcb68u: goto label_1dcb68;
        case 0x1dcb6cu: goto label_1dcb6c;
        case 0x1dcb70u: goto label_1dcb70;
        case 0x1dcb74u: goto label_1dcb74;
        case 0x1dcb78u: goto label_1dcb78;
        case 0x1dcb7cu: goto label_1dcb7c;
        case 0x1dcb80u: goto label_1dcb80;
        case 0x1dcb84u: goto label_1dcb84;
        case 0x1dcb88u: goto label_1dcb88;
        case 0x1dcb8cu: goto label_1dcb8c;
        case 0x1dcb90u: goto label_1dcb90;
        case 0x1dcb94u: goto label_1dcb94;
        case 0x1dcb98u: goto label_1dcb98;
        case 0x1dcb9cu: goto label_1dcb9c;
        case 0x1dcba0u: goto label_1dcba0;
        case 0x1dcba4u: goto label_1dcba4;
        case 0x1dcba8u: goto label_1dcba8;
        case 0x1dcbacu: goto label_1dcbac;
        case 0x1dcbb0u: goto label_1dcbb0;
        case 0x1dcbb4u: goto label_1dcbb4;
        case 0x1dcbb8u: goto label_1dcbb8;
        case 0x1dcbbcu: goto label_1dcbbc;
        case 0x1dcbc0u: goto label_1dcbc0;
        case 0x1dcbc4u: goto label_1dcbc4;
        case 0x1dcbc8u: goto label_1dcbc8;
        case 0x1dcbccu: goto label_1dcbcc;
        case 0x1dcbd0u: goto label_1dcbd0;
        case 0x1dcbd4u: goto label_1dcbd4;
        case 0x1dcbd8u: goto label_1dcbd8;
        case 0x1dcbdcu: goto label_1dcbdc;
        case 0x1dcbe0u: goto label_1dcbe0;
        case 0x1dcbe4u: goto label_1dcbe4;
        case 0x1dcbe8u: goto label_1dcbe8;
        case 0x1dcbecu: goto label_1dcbec;
        case 0x1dcbf0u: goto label_1dcbf0;
        case 0x1dcbf4u: goto label_1dcbf4;
        case 0x1dcbf8u: goto label_1dcbf8;
        case 0x1dcbfcu: goto label_1dcbfc;
        default: break;
    }

    ctx->pc = 0x1dcb20u;

label_1dcb20:
    // 0x1dcb20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dcb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1dcb24:
    // 0x1dcb24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1dcb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1dcb28:
    // 0x1dcb28: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dcb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1dcb2c:
    // 0x1dcb2c: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1dcb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1dcb30:
    // 0x1dcb30: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dcb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1dcb34:
    // 0x1dcb34: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x1dcb34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1dcb38:
    // 0x1dcb38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dcb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dcb3c:
    // 0x1dcb3c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dcb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb40:
    // 0x1dcb40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dcb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1dcb44:
    // 0x1dcb44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1dcb44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dcb48:
    // 0x1dcb48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dcb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dcb4c:
    // 0x1dcb4c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1dcb4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1dcb50:
    // 0x1dcb50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1dcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dcb54:
    // 0x1dcb54: 0x24441ef0  addiu       $a0, $v0, 0x1EF0
    ctx->pc = 0x1dcb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_1dcb58:
    // 0x1dcb58: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1dcb58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1dcb5c:
    // 0x1dcb5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1dcb60:
    if (ctx->pc == 0x1DCB60u) {
        ctx->pc = 0x1DCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB5Cu;
        // 0x1dcb60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB64u;
        goto label_1dcb64;
    }
    ctx->pc = 0x1DCB5Cu;
    {
        const bool branch_taken_0x1dcb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB5Cu;
        // 0x1dcb60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb5c) {
            ctx->pc = 0x1DCB6Cu;
            goto label_1dcb6c;
        }
    }
    ctx->pc = 0x1DCB64u;
label_1dcb64:
    // 0x1dcb64: 0xc069b16  jal         func_1A6C58
label_1dcb68:
    if (ctx->pc == 0x1DCB68u) {
        ctx->pc = 0x1DCB6Cu;
        goto label_1dcb6c;
    }
    ctx->pc = 0x1DCB64u;
    SET_GPR_U32(ctx, 31, 0x1DCB6Cu);
    ctx->pc = 0x1A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C58u, 0x1DCB64u, 0x1DCB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB6Cu;
label_1dcb6c:
    // 0x1dcb6c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x1dcb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1dcb70:
    // 0x1dcb70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1dcb74:
    if (ctx->pc == 0x1DCB74u) {
        ctx->pc = 0x1DCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB70u;
        // 0x1dcb74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB78u;
        goto label_1dcb78;
    }
    ctx->pc = 0x1DCB70u;
    {
        const bool branch_taken_0x1dcb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB70u;
        // 0x1dcb74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb70) {
            ctx->pc = 0x1DCB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dcb50;
        }
    }
    ctx->pc = 0x1DCB78u;
label_1dcb78:
    // 0x1dcb78: 0xc075000  jal         func_1D4000
label_1dcb7c:
    if (ctx->pc == 0x1DCB7Cu) {
        ctx->pc = 0x1DCB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB78u;
        // 0x1dcb7c: 0x26442b00  addiu       $a0, $s2, 0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB80u;
        goto label_1dcb80;
    }
    ctx->pc = 0x1DCB78u;
    SET_GPR_U32(ctx, 31, 0x1DCB80u);
    ctx->pc = 0x1DCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB78u;
    // 0x1dcb7c: 0x26442b00  addiu       $a0, $s2, 0x2B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 11008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4000u, 0x1DCB78u, 0x1DCB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB80u;
label_1dcb80:
    // 0x1dcb80: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1dcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1dcb84:
    // 0x1dcb84: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1dcb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1dcb88:
    // 0x1dcb88: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1dcb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1dcb8c:
    // 0x1dcb8c: 0x60f809  jalr        $v1
label_1dcb90:
    if (ctx->pc == 0x1DCB90u) {
        ctx->pc = 0x1DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB8Cu;
        // 0x1dcb90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB94u;
        goto label_1dcb94;
    }
    ctx->pc = 0x1DCB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1DCB94u);
        ctx->pc = 0x1DCB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB8Cu;
        // 0x1dcb90: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCB8Cu, 0x1DCB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCB94u;
label_1dcb94:
    // 0x1dcb94: 0xc07994c  jal         func_1E6530
label_1dcb98:
    if (ctx->pc == 0x1DCB98u) {
        ctx->pc = 0x1DCB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB94u;
        // 0x1dcb98: 0x26443bb0  addiu       $a0, $s2, 0x3BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCB9Cu;
        goto label_1dcb9c;
    }
    ctx->pc = 0x1DCB94u;
    SET_GPR_U32(ctx, 31, 0x1DCB9Cu);
    ctx->pc = 0x1DCB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB94u;
    // 0x1dcb98: 0x26443bb0  addiu       $a0, $s2, 0x3BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 15280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6530u, 0x1DCB94u, 0x1DCB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCB9Cu;
label_1dcb9c:
    // 0x1dcb9c: 0xc07938a  jal         func_1E4E28
label_1dcba0:
    if (ctx->pc == 0x1DCBA0u) {
        ctx->pc = 0x1DCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCB9Cu;
        // 0x1dcba0: 0x264430a0  addiu       $a0, $s2, 0x30A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBA4u;
        goto label_1dcba4;
    }
    ctx->pc = 0x1DCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCBA4u);
    ctx->pc = 0x1DCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCB9Cu;
    // 0x1dcba0: 0x264430a0  addiu       $a0, $s2, 0x30A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4E28u, 0x1DCB9Cu, 0x1DCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCBA4u;
label_1dcba4:
    // 0x1dcba4: 0x8e63deb8  lw          $v1, -0x2148($s3)
    ctx->pc = 0x1dcba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958776)));
label_1dcba8:
    // 0x1dcba8: 0x2664deb8  addiu       $a0, $s3, -0x2148
    ctx->pc = 0x1dcba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958776));
label_1dcbac:
    // 0x1dcbac: 0xa0600214  sb          $zero, 0x214($v1)
    ctx->pc = 0x1dcbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 532), (uint8_t)GPR_U32(ctx, 0));
label_1dcbb0:
    // 0x1dcbb0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1dcbb4:
    // 0x1dcbb4: 0xa0400214  sb          $zero, 0x214($v0)
    ctx->pc = 0x1dcbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 532), (uint8_t)GPR_U32(ctx, 0));
label_1dcbb8:
    // 0x1dcbb8: 0x8e433a78  lw          $v1, 0x3A78($s2)
    ctx->pc = 0x1dcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14968)));
label_1dcbbc:
    // 0x1dcbbc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1dcbc0:
    if (ctx->pc == 0x1DCBC0u) {
        ctx->pc = 0x1DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBBCu;
        // 0x1dcbc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBC4u;
        goto label_1dcbc4;
    }
    ctx->pc = 0x1DCBBCu;
    {
        const bool branch_taken_0x1dcbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBBCu;
        // 0x1dcbc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcbbc) {
            ctx->pc = 0x1DCBDCu;
            goto label_1dcbdc;
        }
    }
    ctx->pc = 0x1DCBC4u;
label_1dcbc4:
    // 0x1dcbc4: 0x8c45ecec  lw          $a1, -0x1314($v0)
    ctx->pc = 0x1dcbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962412)));
label_1dcbc8:
    // 0x1dcbc8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dcbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1dcbcc:
    // 0x1dcbcc: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x1dcbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_1dcbd0:
    // 0x1dcbd0: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x1dcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_1dcbd4:
    // 0x1dcbd4: 0x40f809  jalr        $v0
label_1dcbd8:
    if (ctx->pc == 0x1DCBD8u) {
        ctx->pc = 0x1DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD4u;
        // 0x1dcbd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBDCu;
        goto label_1dcbdc;
    }
    ctx->pc = 0x1DCBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DCBDCu);
        ctx->pc = 0x1DCBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBD4u;
        // 0x1dcbd8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBD4u, 0x1DCBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DCBDCu;
label_1dcbdc:
    // 0x1dcbdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dcbdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcbe0:
    // 0x1dcbe0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dcbe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcbe4:
    // 0x1dcbe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcbe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcbe8:
    // 0x1dcbe8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dcbe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcbec:
    // 0x1dcbec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcbecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcbf0:
    // 0x1dcbf0: 0x3e00008  jr          $ra
label_1dcbf4:
    if (ctx->pc == 0x1DCBF4u) {
        ctx->pc = 0x1DCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF0u;
        // 0x1dcbf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DCBF8u;
        goto label_1dcbf8;
    }
    ctx->pc = 0x1DCBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF0u;
        // 0x1dcbf4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF8u;
label_1dcbf8:
    // 0x1dcbf8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1dcbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1dcbfc:
    // 0x1dcbfc: 0x0  nop
    ctx->pc = 0x1dcbfcu;
    // NOP
    ctx->pc = 0x1dcc00u;
}
