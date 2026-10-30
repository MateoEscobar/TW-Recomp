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

// Function: sub_00473C88
// Address: 0x473c88 - 0x473d88
void sub_00473C88_0x473c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473C88_0x473c88");
#endif

    switch (ctx->pc) {
        case 0x473c88u: goto label_473c88;
        case 0x473c8cu: goto label_473c8c;
        case 0x473c90u: goto label_473c90;
        case 0x473c94u: goto label_473c94;
        case 0x473c98u: goto label_473c98;
        case 0x473c9cu: goto label_473c9c;
        case 0x473ca0u: goto label_473ca0;
        case 0x473ca4u: goto label_473ca4;
        case 0x473ca8u: goto label_473ca8;
        case 0x473cacu: goto label_473cac;
        case 0x473cb0u: goto label_473cb0;
        case 0x473cb4u: goto label_473cb4;
        case 0x473cb8u: goto label_473cb8;
        case 0x473cbcu: goto label_473cbc;
        case 0x473cc0u: goto label_473cc0;
        case 0x473cc4u: goto label_473cc4;
        case 0x473cc8u: goto label_473cc8;
        case 0x473cccu: goto label_473ccc;
        case 0x473cd0u: goto label_473cd0;
        case 0x473cd4u: goto label_473cd4;
        case 0x473cd8u: goto label_473cd8;
        case 0x473cdcu: goto label_473cdc;
        case 0x473ce0u: goto label_473ce0;
        case 0x473ce4u: goto label_473ce4;
        case 0x473ce8u: goto label_473ce8;
        case 0x473cecu: goto label_473cec;
        case 0x473cf0u: goto label_473cf0;
        case 0x473cf4u: goto label_473cf4;
        case 0x473cf8u: goto label_473cf8;
        case 0x473cfcu: goto label_473cfc;
        case 0x473d00u: goto label_473d00;
        case 0x473d04u: goto label_473d04;
        case 0x473d08u: goto label_473d08;
        case 0x473d0cu: goto label_473d0c;
        case 0x473d10u: goto label_473d10;
        case 0x473d14u: goto label_473d14;
        case 0x473d18u: goto label_473d18;
        case 0x473d1cu: goto label_473d1c;
        case 0x473d20u: goto label_473d20;
        case 0x473d24u: goto label_473d24;
        case 0x473d28u: goto label_473d28;
        case 0x473d2cu: goto label_473d2c;
        case 0x473d30u: goto label_473d30;
        case 0x473d34u: goto label_473d34;
        case 0x473d38u: goto label_473d38;
        case 0x473d3cu: goto label_473d3c;
        case 0x473d40u: goto label_473d40;
        case 0x473d44u: goto label_473d44;
        case 0x473d48u: goto label_473d48;
        case 0x473d4cu: goto label_473d4c;
        case 0x473d50u: goto label_473d50;
        case 0x473d54u: goto label_473d54;
        case 0x473d58u: goto label_473d58;
        case 0x473d5cu: goto label_473d5c;
        case 0x473d60u: goto label_473d60;
        case 0x473d64u: goto label_473d64;
        case 0x473d68u: goto label_473d68;
        case 0x473d6cu: goto label_473d6c;
        case 0x473d70u: goto label_473d70;
        case 0x473d74u: goto label_473d74;
        case 0x473d78u: goto label_473d78;
        case 0x473d7cu: goto label_473d7c;
        case 0x473d80u: goto label_473d80;
        case 0x473d84u: goto label_473d84;
        default: break;
    }

    ctx->pc = 0x473c88u;

label_473c88:
    // 0x473c88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x473c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_473c8c:
    // 0x473c8c: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x473c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
label_473c90:
    // 0x473c90: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x473c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_473c94:
    // 0x473c94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x473c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_473c98:
    // 0x473c98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x473c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_473c9c:
    // 0x473c9c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x473c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_473ca0:
    // 0x473ca0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x473ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_473ca4:
    // 0x473ca4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x473ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_473ca8:
    // 0x473ca8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x473ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_473cac:
    // 0x473cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_473cb0:
    // 0x473cb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x473cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_473cb4:
    // 0x473cb4: 0x40f809  jalr        $v0
label_473cb8:
    if (ctx->pc == 0x473CB8u) {
        ctx->pc = 0x473CBCu;
        goto label_473cbc;
    }
    ctx->pc = 0x473CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473CBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473CB4u, 0x473CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473CBCu;
label_473cbc:
    // 0x473cbc: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_473cc0:
    if (ctx->pc == 0x473CC0u) {
        ctx->pc = 0x473CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CBCu;
        // 0x473cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473CC4u;
        goto label_473cc4;
    }
    ctx->pc = 0x473CBCu;
    {
        const bool branch_taken_0x473cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473cbc) {
            ctx->pc = 0x473CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x473CBCu;
            // 0x473cc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x473D5Cu;
            goto label_473d5c;
        }
    }
    ctx->pc = 0x473CC4u;
label_473cc4:
    // 0x473cc4: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x473cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_473cc8:
    // 0x473cc8: 0x12800023  beqz        $s4, . + 4 + (0x23 << 2)
label_473ccc:
    if (ctx->pc == 0x473CCCu) {
        ctx->pc = 0x473CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CC8u;
        // 0x473ccc: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473CD0u;
        goto label_473cd0;
    }
    ctx->pc = 0x473CC8u;
    {
        const bool branch_taken_0x473cc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x473CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CC8u;
        // 0x473ccc: 0x26320064  addiu       $s2, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473cc8) {
            ctx->pc = 0x473D58u;
            goto label_473d58;
        }
    }
    ctx->pc = 0x473CD0u;
label_473cd0:
    // 0x473cd0: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x473cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_473cd4:
    // 0x473cd4: 0x1212001d  beq         $s0, $s2, . + 4 + (0x1D << 2)
label_473cd8:
    if (ctx->pc == 0x473CD8u) {
        ctx->pc = 0x473CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CD4u;
        // 0x473cd8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473CDCu;
        goto label_473cdc;
    }
    ctx->pc = 0x473CD4u;
    {
        const bool branch_taken_0x473cd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x473CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CD4u;
        // 0x473cd8: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473cd4) {
            ctx->pc = 0x473D4Cu;
            goto label_473d4c;
        }
    }
    ctx->pc = 0x473CDCu;
label_473cdc:
    // 0x473cdc: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x473cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_473ce0:
    // 0x473ce0: 0x2607fff4  addiu       $a3, $s0, -0xC
    ctx->pc = 0x473ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_473ce4:
    // 0x473ce4: 0x0  nop
    ctx->pc = 0x473ce4u;
    // NOP
label_473ce8:
    // 0x473ce8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x473ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_473cec:
    // 0x473cec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_473cf0:
    if (ctx->pc == 0x473CF0u) {
        ctx->pc = 0x473CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CECu;
        // 0x473cf0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473CF4u;
        goto label_473cf4;
    }
    ctx->pc = 0x473CECu;
    {
        const bool branch_taken_0x473cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CECu;
        // 0x473cf0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473cec) {
            ctx->pc = 0x473D44u;
            goto label_473d44;
        }
    }
    ctx->pc = 0x473CF4u;
label_473cf4:
    // 0x473cf4: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x473cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_473cf8:
    // 0x473cf8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_473cfc:
    if (ctx->pc == 0x473CFCu) {
        ctx->pc = 0x473CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CF8u;
        // 0x473cfc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473D00u;
        goto label_473d00;
    }
    ctx->pc = 0x473CF8u;
    {
        const bool branch_taken_0x473cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473CF8u;
        // 0x473cfc: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473cf8) {
            ctx->pc = 0x473D44u;
            goto label_473d44;
        }
    }
    ctx->pc = 0x473D00u;
label_473d00:
    // 0x473d00: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x473d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_473d04:
    // 0x473d04: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x473d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_473d08:
    // 0x473d08: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x473d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_473d0c:
    // 0x473d0c: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x473d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_473d10:
    // 0x473d10: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x473d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_473d14:
    // 0x473d14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x473d14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_473d18:
    // 0x473d18: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x473d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_473d1c:
    // 0x473d1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x473d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_473d20:
    // 0x473d20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x473d20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_473d24:
    // 0x473d24: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x473d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_473d28:
    // 0x473d28: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x473d28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_473d2c:
    // 0x473d2c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x473d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_473d30:
    // 0x473d30: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x473d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_473d34:
    // 0x473d34: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x473d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_473d38:
    // 0x473d38: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x473d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_473d3c:
    // 0x473d3c: 0x40f809  jalr        $v0
label_473d40:
    if (ctx->pc == 0x473D40u) {
        ctx->pc = 0x473D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D3Cu;
        // 0x473d40: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473D44u;
        goto label_473d44;
    }
    ctx->pc = 0x473D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x473D44u);
        ctx->pc = 0x473D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D3Cu;
        // 0x473d40: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473D3Cu, 0x473D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x473D44u;
label_473d44:
    // 0x473d44: 0x1612ffe8  bne         $s0, $s2, . + 4 + (-0x18 << 2)
label_473d48:
    if (ctx->pc == 0x473D48u) {
        ctx->pc = 0x473D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D44u;
        // 0x473d48: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473D4Cu;
        goto label_473d4c;
    }
    ctx->pc = 0x473D44u;
    {
        const bool branch_taken_0x473d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x473D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D44u;
        // 0x473d48: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473d44) {
            ctx->pc = 0x473CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_473ce8;
        }
    }
    ctx->pc = 0x473D4Cu;
label_473d4c:
    // 0x473d4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x473d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_473d50:
    // 0x473d50: 0xc11c840  jal         func_472100
label_473d54:
    if (ctx->pc == 0x473D54u) {
        ctx->pc = 0x473D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D50u;
        // 0x473d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473D58u;
        goto label_473d58;
    }
    ctx->pc = 0x473D50u;
    SET_GPR_U32(ctx, 31, 0x473D58u);
    ctx->pc = 0x473D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473D50u;
    // 0x473d54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472100u, 0x473D50u, 0x473D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473D58u;
label_473d58:
    // 0x473d58: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x473d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473d5c:
    // 0x473d5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x473d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_473d60:
    // 0x473d60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x473d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_473d64:
    // 0x473d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x473d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_473d68:
    // 0x473d68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x473d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473d6c:
    // 0x473d6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x473d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473d70:
    // 0x473d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473d74:
    // 0x473d74: 0x3e00008  jr          $ra
label_473d78:
    if (ctx->pc == 0x473D78u) {
        ctx->pc = 0x473D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D74u;
        // 0x473d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473D7Cu;
        goto label_473d7c;
    }
    ctx->pc = 0x473D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473D74u;
        // 0x473d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x473D7Cu;
label_473d7c:
    // 0x473d7c: 0x0  nop
    ctx->pc = 0x473d7cu;
    // NOP
label_473d80:
    // 0x473d80: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x473d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_473d84:
    // 0x473d84: 0x0  nop
    ctx->pc = 0x473d84u;
    // NOP
    ctx->pc = 0x473d88u;
}
