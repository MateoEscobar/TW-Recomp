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

// Function: sub_001E1CB8
// Address: 0x1e1cb8 - 0x1e1d70
void sub_001E1CB8_0x1e1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1CB8_0x1e1cb8");
#endif

    switch (ctx->pc) {
        case 0x1e1cb8u: goto label_1e1cb8;
        case 0x1e1cbcu: goto label_1e1cbc;
        case 0x1e1cc0u: goto label_1e1cc0;
        case 0x1e1cc4u: goto label_1e1cc4;
        case 0x1e1cc8u: goto label_1e1cc8;
        case 0x1e1cccu: goto label_1e1ccc;
        case 0x1e1cd0u: goto label_1e1cd0;
        case 0x1e1cd4u: goto label_1e1cd4;
        case 0x1e1cd8u: goto label_1e1cd8;
        case 0x1e1cdcu: goto label_1e1cdc;
        case 0x1e1ce0u: goto label_1e1ce0;
        case 0x1e1ce4u: goto label_1e1ce4;
        case 0x1e1ce8u: goto label_1e1ce8;
        case 0x1e1cecu: goto label_1e1cec;
        case 0x1e1cf0u: goto label_1e1cf0;
        case 0x1e1cf4u: goto label_1e1cf4;
        case 0x1e1cf8u: goto label_1e1cf8;
        case 0x1e1cfcu: goto label_1e1cfc;
        case 0x1e1d00u: goto label_1e1d00;
        case 0x1e1d04u: goto label_1e1d04;
        case 0x1e1d08u: goto label_1e1d08;
        case 0x1e1d0cu: goto label_1e1d0c;
        case 0x1e1d10u: goto label_1e1d10;
        case 0x1e1d14u: goto label_1e1d14;
        case 0x1e1d18u: goto label_1e1d18;
        case 0x1e1d1cu: goto label_1e1d1c;
        case 0x1e1d20u: goto label_1e1d20;
        case 0x1e1d24u: goto label_1e1d24;
        case 0x1e1d28u: goto label_1e1d28;
        case 0x1e1d2cu: goto label_1e1d2c;
        case 0x1e1d30u: goto label_1e1d30;
        case 0x1e1d34u: goto label_1e1d34;
        case 0x1e1d38u: goto label_1e1d38;
        case 0x1e1d3cu: goto label_1e1d3c;
        case 0x1e1d40u: goto label_1e1d40;
        case 0x1e1d44u: goto label_1e1d44;
        case 0x1e1d48u: goto label_1e1d48;
        case 0x1e1d4cu: goto label_1e1d4c;
        case 0x1e1d50u: goto label_1e1d50;
        case 0x1e1d54u: goto label_1e1d54;
        case 0x1e1d58u: goto label_1e1d58;
        case 0x1e1d5cu: goto label_1e1d5c;
        case 0x1e1d60u: goto label_1e1d60;
        case 0x1e1d64u: goto label_1e1d64;
        case 0x1e1d68u: goto label_1e1d68;
        case 0x1e1d6cu: goto label_1e1d6c;
        default: break;
    }

    ctx->pc = 0x1e1cb8u;

label_1e1cb8:
    // 0x1e1cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e1cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e1cbc:
    // 0x1e1cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e1cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e1cc0:
    // 0x1e1cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e1cc4:
    // 0x1e1cc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e1cc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e1cc8:
    // 0x1e1cc8: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x1e1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e1ccc:
    // 0x1e1ccc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_1e1cd0:
    if (ctx->pc == 0x1E1CD0u) {
        ctx->pc = 0x1E1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CCCu;
        // 0x1e1cd0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CD4u;
        goto label_1e1cd4;
    }
    ctx->pc = 0x1E1CCCu;
    {
        const bool branch_taken_0x1e1ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CCCu;
        // 0x1e1cd0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1ccc) {
            ctx->pc = 0x1E1D48u;
            goto label_1e1d48;
        }
    }
    ctx->pc = 0x1E1CD4u;
label_1e1cd4:
    // 0x1e1cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e1cd8:
    // 0x1e1cd8: 0x844401b8  lh          $a0, 0x1B8($v0)
    ctx->pc = 0x1e1cd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 440)));
label_1e1cdc:
    // 0x1e1cdc: 0x8c4301bc  lw          $v1, 0x1BC($v0)
    ctx->pc = 0x1e1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 444)));
label_1e1ce0:
    // 0x1e1ce0: 0x60f809  jalr        $v1
label_1e1ce4:
    if (ctx->pc == 0x1E1CE4u) {
        ctx->pc = 0x1E1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CE0u;
        // 0x1e1ce4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CE8u;
        goto label_1e1ce8;
    }
    ctx->pc = 0x1E1CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E1CE8u);
        ctx->pc = 0x1E1CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CE0u;
        // 0x1e1ce4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1CE0u, 0x1E1CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E1CE8u;
label_1e1ce8:
    // 0x1e1ce8: 0x8e0500ac  lw          $a1, 0xAC($s0)
    ctx->pc = 0x1e1ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1e1cec:
    // 0x1e1cec: 0x8e030100  lw          $v1, 0x100($s0)
    ctx->pc = 0x1e1cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_1e1cf0:
    // 0x1e1cf0: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1e1cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1e1cf4:
    // 0x1e1cf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1e1cf8:
    if (ctx->pc == 0x1E1CF8u) {
        ctx->pc = 0x1E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF4u;
        // 0x1e1cf8: 0x23042  srl         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1CFCu;
        goto label_1e1cfc;
    }
    ctx->pc = 0x1E1CF4u;
    {
        const bool branch_taken_0x1e1cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1CF4u;
        // 0x1e1cf8: 0x23042  srl         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1cf4) {
            ctx->pc = 0x1E1D04u;
            goto label_1e1d04;
        }
    }
    ctx->pc = 0x1E1CFCu;
label_1e1cfc:
    // 0x1e1cfc: 0x51042  srl         $v0, $a1, 1
    ctx->pc = 0x1e1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_1e1d00:
    // 0x1e1d00: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x1e1d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1e1d04:
    // 0x1e1d04: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x1e1d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_1e1d08:
    // 0x1e1d08: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1e1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_1e1d0c:
    // 0x1e1d0c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1e1d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e1d10:
    // 0x1e1d10: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1e1d14:
    if (ctx->pc == 0x1E1D14u) {
        ctx->pc = 0x1E1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D10u;
        // 0x1e1d14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D18u;
        goto label_1e1d18;
    }
    ctx->pc = 0x1E1D10u;
    {
        const bool branch_taken_0x1e1d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D10u;
        // 0x1e1d14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d10) {
            ctx->pc = 0x1E1D30u;
            goto label_1e1d30;
        }
    }
    ctx->pc = 0x1E1D18u;
label_1e1d18:
    // 0x1e1d18: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x1e1d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1e1d1c:
    // 0x1e1d1c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1e1d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1e1d20:
    // 0x1e1d20: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_1e1d24:
    if (ctx->pc == 0x1E1D24u) {
        ctx->pc = 0x1E1D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D20u;
        // 0x1e1d24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D28u;
        goto label_1e1d28;
    }
    ctx->pc = 0x1E1D20u;
    {
        const bool branch_taken_0x1e1d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1d20) {
            ctx->pc = 0x1E1D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E1D20u;
            // 0x1e1d24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E1D64u;
            goto label_1e1d64;
        }
    }
    ctx->pc = 0x1E1D28u;
label_1e1d28:
    // 0x1e1d28: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1e1d2c:
    if (ctx->pc == 0x1E1D2Cu) {
        ctx->pc = 0x1E1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D28u;
        // 0x1e1d2c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D30u;
        goto label_1e1d30;
    }
    ctx->pc = 0x1E1D28u;
    {
        const bool branch_taken_0x1e1d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D28u;
        // 0x1e1d2c: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d28) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D30u;
label_1e1d30:
    // 0x1e1d30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1e1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d34:
    // 0x1e1d34: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1e1d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1e1d38:
    // 0x1e1d38: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x1e1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_1e1d3c:
    // 0x1e1d3c: 0xae0300ac  sw          $v1, 0xAC($s0)
    ctx->pc = 0x1e1d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 3));
label_1e1d40:
    // 0x1e1d40: 0x10000007  b           . + 4 + (0x7 << 2)
label_1e1d44:
    if (ctx->pc == 0x1E1D44u) {
        ctx->pc = 0x1E1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D40u;
        // 0x1e1d44: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D48u;
        goto label_1e1d48;
    }
    ctx->pc = 0x1E1D40u;
    {
        const bool branch_taken_0x1e1d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D40u;
        // 0x1e1d44: 0xae0200a4  sw          $v0, 0xA4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1d40) {
            ctx->pc = 0x1E1D60u;
            goto label_1e1d60;
        }
    }
    ctx->pc = 0x1E1D48u;
label_1e1d48:
    // 0x1e1d48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1e1d4c:
    // 0x1e1d4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e1d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e1d50:
    // 0x1e1d50: 0xc043f0c  jal         func_10FC30
label_1e1d54:
    if (ctx->pc == 0x1E1D54u) {
        ctx->pc = 0x1E1D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D50u;
        // 0x1e1d54: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D58u;
        goto label_1e1d58;
    }
    ctx->pc = 0x1E1D50u;
    SET_GPR_U32(ctx, 31, 0x1E1D58u);
    ctx->pc = 0x1E1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1D50u;
    // 0x1e1d54: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1E1D50u, 0x1E1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1D58u;
label_1e1d58:
    // 0x1e1d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e1d5c:
    // 0x1e1d5c: 0xae030104  sw          $v1, 0x104($s0)
    ctx->pc = 0x1e1d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 3));
label_1e1d60:
    // 0x1e1d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1d64:
    // 0x1e1d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e1d68:
    // 0x1e1d68: 0x3e00008  jr          $ra
label_1e1d6c:
    if (ctx->pc == 0x1E1D6Cu) {
        ctx->pc = 0x1E1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D68u;
        // 0x1e1d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E1D70u;
        goto label_fallthrough_0x1e1d68;
    }
    ctx->pc = 0x1E1D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1D68u;
        // 0x1e1d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e1d68:
    ctx->pc = 0x1E1D70u;
}
