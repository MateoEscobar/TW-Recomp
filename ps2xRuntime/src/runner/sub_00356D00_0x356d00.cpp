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

// Function: sub_00356D00
// Address: 0x356d00 - 0x356e08
void sub_00356D00_0x356d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356D00_0x356d00");
#endif

    switch (ctx->pc) {
        case 0x356d00u: goto label_356d00;
        case 0x356d04u: goto label_356d04;
        case 0x356d08u: goto label_356d08;
        case 0x356d0cu: goto label_356d0c;
        case 0x356d10u: goto label_356d10;
        case 0x356d14u: goto label_356d14;
        case 0x356d18u: goto label_356d18;
        case 0x356d1cu: goto label_356d1c;
        case 0x356d20u: goto label_356d20;
        case 0x356d24u: goto label_356d24;
        case 0x356d28u: goto label_356d28;
        case 0x356d2cu: goto label_356d2c;
        case 0x356d30u: goto label_356d30;
        case 0x356d34u: goto label_356d34;
        case 0x356d38u: goto label_356d38;
        case 0x356d3cu: goto label_356d3c;
        case 0x356d40u: goto label_356d40;
        case 0x356d44u: goto label_356d44;
        case 0x356d48u: goto label_356d48;
        case 0x356d4cu: goto label_356d4c;
        case 0x356d50u: goto label_356d50;
        case 0x356d54u: goto label_356d54;
        case 0x356d58u: goto label_356d58;
        case 0x356d5cu: goto label_356d5c;
        case 0x356d60u: goto label_356d60;
        case 0x356d64u: goto label_356d64;
        case 0x356d68u: goto label_356d68;
        case 0x356d6cu: goto label_356d6c;
        case 0x356d70u: goto label_356d70;
        case 0x356d74u: goto label_356d74;
        case 0x356d78u: goto label_356d78;
        case 0x356d7cu: goto label_356d7c;
        case 0x356d80u: goto label_356d80;
        case 0x356d84u: goto label_356d84;
        case 0x356d88u: goto label_356d88;
        case 0x356d8cu: goto label_356d8c;
        case 0x356d90u: goto label_356d90;
        case 0x356d94u: goto label_356d94;
        case 0x356d98u: goto label_356d98;
        case 0x356d9cu: goto label_356d9c;
        case 0x356da0u: goto label_356da0;
        case 0x356da4u: goto label_356da4;
        case 0x356da8u: goto label_356da8;
        case 0x356dacu: goto label_356dac;
        case 0x356db0u: goto label_356db0;
        case 0x356db4u: goto label_356db4;
        case 0x356db8u: goto label_356db8;
        case 0x356dbcu: goto label_356dbc;
        case 0x356dc0u: goto label_356dc0;
        case 0x356dc4u: goto label_356dc4;
        case 0x356dc8u: goto label_356dc8;
        case 0x356dccu: goto label_356dcc;
        case 0x356dd0u: goto label_356dd0;
        case 0x356dd4u: goto label_356dd4;
        case 0x356dd8u: goto label_356dd8;
        case 0x356ddcu: goto label_356ddc;
        case 0x356de0u: goto label_356de0;
        case 0x356de4u: goto label_356de4;
        case 0x356de8u: goto label_356de8;
        case 0x356decu: goto label_356dec;
        case 0x356df0u: goto label_356df0;
        case 0x356df4u: goto label_356df4;
        case 0x356df8u: goto label_356df8;
        case 0x356dfcu: goto label_356dfc;
        case 0x356e00u: goto label_356e00;
        case 0x356e04u: goto label_356e04;
        default: break;
    }

    ctx->pc = 0x356d00u;

label_356d00:
    // 0x356d00: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x356d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_356d04:
    // 0x356d04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x356d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_356d08:
    // 0x356d08: 0x7fb20220  sq          $s2, 0x220($sp)
    ctx->pc = 0x356d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 18));
label_356d0c:
    // 0x356d0c: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x356d0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_356d10:
    // 0x356d10: 0x7fb30210  sq          $s3, 0x210($sp)
    ctx->pc = 0x356d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 19));
label_356d14:
    // 0x356d14: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x356d14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
label_356d18:
    // 0x356d18: 0x7fb00240  sq          $s0, 0x240($sp)
    ctx->pc = 0x356d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 16));
label_356d1c:
    // 0x356d1c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x356d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_356d20:
    // 0x356d20: 0xffbf0200  sd          $ra, 0x200($sp)
    ctx->pc = 0x356d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
label_356d24:
    // 0x356d24: 0x24c69098  addiu       $a2, $a2, -0x6F68
    ctx->pc = 0x356d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938776));
label_356d28:
    // 0x356d28: 0x7fb10230  sq          $s1, 0x230($sp)
    ctx->pc = 0x356d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 17));
label_356d2c:
    // 0x356d2c: 0x240501ff  addiu       $a1, $zero, 0x1FF
    ctx->pc = 0x356d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_356d30:
    // 0x356d30: 0x8c435340  lw          $v1, 0x5340($v0)
    ctx->pc = 0x356d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
label_356d34:
    // 0x356d34: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x356d34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_356d38:
    // 0x356d38: 0x8c910048  lw          $s1, 0x48($a0)
    ctx->pc = 0x356d38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_356d3c:
    // 0x356d3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356d3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356d40:
    // 0x356d40: 0xc10ca04  jal         func_432810
label_356d44:
    if (ctx->pc == 0x356D44u) {
        ctx->pc = 0x356D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D40u;
        // 0x356d44: 0x8c70003c  lw          $s0, 0x3C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D48u;
        goto label_356d48;
    }
    ctx->pc = 0x356D40u;
    SET_GPR_U32(ctx, 31, 0x356D48u);
    ctx->pc = 0x356D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356D40u;
    // 0x356d44: 0x8c70003c  lw          $s0, 0x3C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x356D40u, 0x356D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D48u;
label_356d48:
    // 0x356d48: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x356d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_356d4c:
    // 0x356d4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x356d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_356d50:
    // 0x356d50: 0xc10c3ac  jal         func_430EB0
label_356d54:
    if (ctx->pc == 0x356D54u) {
        ctx->pc = 0x356D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D50u;
        // 0x356d54: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D58u;
        goto label_356d58;
    }
    ctx->pc = 0x356D50u;
    SET_GPR_U32(ctx, 31, 0x356D58u);
    ctx->pc = 0x356D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356D50u;
    // 0x356d54: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x356D50u, 0x356D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356D58u;
label_356d58:
    // 0x356d58: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x356d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_356d5c:
    // 0x356d5c: 0x0  nop
    ctx->pc = 0x356d5cu;
    // NOP
label_356d60:
    // 0x356d60: 0x18e00007  blez        $a3, . + 4 + (0x7 << 2)
label_356d64:
    if (ctx->pc == 0x356D64u) {
        ctx->pc = 0x356D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D60u;
        // 0x356d64: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D68u;
        goto label_356d68;
    }
    ctx->pc = 0x356D60u;
    {
        const bool branch_taken_0x356d60 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x356D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D60u;
        // 0x356d64: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356d60) {
            ctx->pc = 0x356D80u;
            goto label_356d80;
        }
    }
    ctx->pc = 0x356D68u;
label_356d68:
    // 0x356d68: 0x3a72021  addu        $a0, $sp, $a3
    ctx->pc = 0x356d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_356d6c:
    // 0x356d6c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x356d6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_356d70:
    // 0x356d70: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
label_356d74:
    if (ctx->pc == 0x356D74u) {
        ctx->pc = 0x356D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D70u;
        // 0x356d74: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356D78u;
        goto label_356d78;
    }
    ctx->pc = 0x356D70u;
    {
        const bool branch_taken_0x356d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x356d70) {
            ctx->pc = 0x356D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x356D70u;
            // 0x356d74: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x356D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356d60;
        }
    }
    ctx->pc = 0x356D78u;
label_356d78:
    // 0x356d78: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x356d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_356d7c:
    // 0x356d7c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x356d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_356d80:
    // 0x356d80: 0x8e482b04  lw          $t0, 0x2B04($s2)
    ctx->pc = 0x356d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_356d84:
    // 0x356d84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x356d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_356d88:
    // 0x356d88: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x356d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_356d8c:
    // 0x356d8c: 0x3a73821  addu        $a3, $sp, $a3
    ctx->pc = 0x356d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 7)));
label_356d90:
    // 0x356d90: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x356d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_356d94:
    // 0x356d94: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x356d94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_356d98:
    // 0x356d98: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x356d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_356d9c:
    // 0x356d9c: 0x60f809  jalr        $v1
label_356da0:
    if (ctx->pc == 0x356DA0u) {
        ctx->pc = 0x356DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D9Cu;
        // 0x356da0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DA4u;
        goto label_356da4;
    }
    ctx->pc = 0x356D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356DA4u);
        ctx->pc = 0x356DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356D9Cu;
        // 0x356da0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356D9Cu, 0x356DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356DA4u;
label_356da4:
    // 0x356da4: 0x12600010  beqz        $s3, . + 4 + (0x10 << 2)
label_356da8:
    if (ctx->pc == 0x356DA8u) {
        ctx->pc = 0x356DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DA4u;
        // 0x356da8: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DACu;
        goto label_356dac;
    }
    ctx->pc = 0x356DA4u;
    {
        const bool branch_taken_0x356da4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x356DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DA4u;
        // 0x356da8: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356da4) {
            ctx->pc = 0x356DE8u;
            goto label_356de8;
        }
    }
    ctx->pc = 0x356DACu;
label_356dac:
    // 0x356dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x356dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_356db0:
    // 0x356db0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x356db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_356db4:
    // 0x356db4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x356db4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_356db8:
    // 0x356db8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x356db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_356dbc:
    // 0x356dbc: 0x40f809  jalr        $v0
label_356dc0:
    if (ctx->pc == 0x356DC0u) {
        ctx->pc = 0x356DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DBCu;
        // 0x356dc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DC4u;
        goto label_356dc4;
    }
    ctx->pc = 0x356DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x356DC4u);
        ctx->pc = 0x356DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DBCu;
        // 0x356dc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356DBCu, 0x356DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356DC4u;
label_356dc4:
    // 0x356dc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_356dc8:
    if (ctx->pc == 0x356DC8u) {
        ctx->pc = 0x356DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DC4u;
        // 0x356dc8: 0x8e472b04  lw          $a3, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DCCu;
        goto label_356dcc;
    }
    ctx->pc = 0x356DC4u;
    {
        const bool branch_taken_0x356dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DC4u;
        // 0x356dc8: 0x8e472b04  lw          $a3, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356dc4) {
            ctx->pc = 0x356DE8u;
            goto label_356de8;
        }
    }
    ctx->pc = 0x356DCCu;
label_356dcc:
    // 0x356dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356dd0:
    // 0x356dd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x356dd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_356dd4:
    // 0x356dd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x356dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_356dd8:
    // 0x356dd8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x356dd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_356ddc:
    // 0x356ddc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x356ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_356de0:
    // 0x356de0: 0x60f809  jalr        $v1
label_356de4:
    if (ctx->pc == 0x356DE4u) {
        ctx->pc = 0x356DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DE0u;
        // 0x356de4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356DE8u;
        goto label_356de8;
    }
    ctx->pc = 0x356DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x356DE8u);
        ctx->pc = 0x356DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DE0u;
        // 0x356de4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356DE0u, 0x356DE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x356DE8u;
label_356de8:
    // 0x356de8: 0x7bb00240  lq          $s0, 0x240($sp)
    ctx->pc = 0x356de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_356dec:
    // 0x356dec: 0x7bb10230  lq          $s1, 0x230($sp)
    ctx->pc = 0x356decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_356df0:
    // 0x356df0: 0x7bb20220  lq          $s2, 0x220($sp)
    ctx->pc = 0x356df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_356df4:
    // 0x356df4: 0x7bb30210  lq          $s3, 0x210($sp)
    ctx->pc = 0x356df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_356df8:
    // 0x356df8: 0xdfbf0200  ld          $ra, 0x200($sp)
    ctx->pc = 0x356df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
label_356dfc:
    // 0x356dfc: 0x3e00008  jr          $ra
label_356e00:
    if (ctx->pc == 0x356E00u) {
        ctx->pc = 0x356E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DFCu;
        // 0x356e00: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x356E04u;
        goto label_356e04;
    }
    ctx->pc = 0x356DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356DFCu;
        // 0x356e00: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356E04u;
label_356e04:
    // 0x356e04: 0x0  nop
    ctx->pc = 0x356e04u;
    // NOP
    ctx->pc = 0x356e08u;
}
