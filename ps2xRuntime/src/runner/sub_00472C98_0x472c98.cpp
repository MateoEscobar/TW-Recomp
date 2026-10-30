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

// Function: sub_00472C98
// Address: 0x472c98 - 0x472d80
void sub_00472C98_0x472c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472C98_0x472c98");
#endif

    switch (ctx->pc) {
        case 0x472c98u: goto label_472c98;
        case 0x472c9cu: goto label_472c9c;
        case 0x472ca0u: goto label_472ca0;
        case 0x472ca4u: goto label_472ca4;
        case 0x472ca8u: goto label_472ca8;
        case 0x472cacu: goto label_472cac;
        case 0x472cb0u: goto label_472cb0;
        case 0x472cb4u: goto label_472cb4;
        case 0x472cb8u: goto label_472cb8;
        case 0x472cbcu: goto label_472cbc;
        case 0x472cc0u: goto label_472cc0;
        case 0x472cc4u: goto label_472cc4;
        case 0x472cc8u: goto label_472cc8;
        case 0x472cccu: goto label_472ccc;
        case 0x472cd0u: goto label_472cd0;
        case 0x472cd4u: goto label_472cd4;
        case 0x472cd8u: goto label_472cd8;
        case 0x472cdcu: goto label_472cdc;
        case 0x472ce0u: goto label_472ce0;
        case 0x472ce4u: goto label_472ce4;
        case 0x472ce8u: goto label_472ce8;
        case 0x472cecu: goto label_472cec;
        case 0x472cf0u: goto label_472cf0;
        case 0x472cf4u: goto label_472cf4;
        case 0x472cf8u: goto label_472cf8;
        case 0x472cfcu: goto label_472cfc;
        case 0x472d00u: goto label_472d00;
        case 0x472d04u: goto label_472d04;
        case 0x472d08u: goto label_472d08;
        case 0x472d0cu: goto label_472d0c;
        case 0x472d10u: goto label_472d10;
        case 0x472d14u: goto label_472d14;
        case 0x472d18u: goto label_472d18;
        case 0x472d1cu: goto label_472d1c;
        case 0x472d20u: goto label_472d20;
        case 0x472d24u: goto label_472d24;
        case 0x472d28u: goto label_472d28;
        case 0x472d2cu: goto label_472d2c;
        case 0x472d30u: goto label_472d30;
        case 0x472d34u: goto label_472d34;
        case 0x472d38u: goto label_472d38;
        case 0x472d3cu: goto label_472d3c;
        case 0x472d40u: goto label_472d40;
        case 0x472d44u: goto label_472d44;
        case 0x472d48u: goto label_472d48;
        case 0x472d4cu: goto label_472d4c;
        case 0x472d50u: goto label_472d50;
        case 0x472d54u: goto label_472d54;
        case 0x472d58u: goto label_472d58;
        case 0x472d5cu: goto label_472d5c;
        case 0x472d60u: goto label_472d60;
        case 0x472d64u: goto label_472d64;
        case 0x472d68u: goto label_472d68;
        case 0x472d6cu: goto label_472d6c;
        case 0x472d70u: goto label_472d70;
        case 0x472d74u: goto label_472d74;
        case 0x472d78u: goto label_472d78;
        case 0x472d7cu: goto label_472d7c;
        default: break;
    }

    ctx->pc = 0x472c98u;

label_472c98:
    // 0x472c98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x472c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_472c9c:
    // 0x472c9c: 0x8f82851c  lw          $v0, -0x7AE4($gp)
    ctx->pc = 0x472c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935836)));
label_472ca0:
    // 0x472ca0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x472ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_472ca4:
    // 0x472ca4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x472ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_472ca8:
    // 0x472ca8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x472ca8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_472cac:
    // 0x472cac: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x472cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_472cb0:
    // 0x472cb0: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x472cb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_472cb4:
    // 0x472cb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x472cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_472cb8:
    // 0x472cb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x472cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_472cbc:
    // 0x472cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_472cc0:
    // 0x472cc0: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x472cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_472cc4:
    // 0x472cc4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_472cc8:
    if (ctx->pc == 0x472CC8u) {
        ctx->pc = 0x472CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CC4u;
        // 0x472cc8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472CCCu;
        goto label_472ccc;
    }
    ctx->pc = 0x472CC4u;
    {
        const bool branch_taken_0x472cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x472CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CC4u;
        // 0x472cc8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472cc4) {
            ctx->pc = 0x472CD4u;
            goto label_472cd4;
        }
    }
    ctx->pc = 0x472CCCu;
label_472ccc:
    // 0x472ccc: 0xc11fa54  jal         func_47E950
label_472cd0:
    if (ctx->pc == 0x472CD0u) {
        ctx->pc = 0x472CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CCCu;
        // 0x472cd0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472CD4u;
        goto label_472cd4;
    }
    ctx->pc = 0x472CCCu;
    SET_GPR_U32(ctx, 31, 0x472CD4u);
    ctx->pc = 0x472CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472CCCu;
    // 0x472cd0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E950u, 0x472CCCu, 0x472CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472CD4u;
label_472cd4:
    // 0x472cd4: 0x8e300064  lw          $s0, 0x64($s1)
    ctx->pc = 0x472cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_472cd8:
    // 0x472cd8: 0x26310064  addiu       $s1, $s1, 0x64
    ctx->pc = 0x472cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_472cdc:
    // 0x472cdc: 0x1211001d  beq         $s0, $s1, . + 4 + (0x1D << 2)
label_472ce0:
    if (ctx->pc == 0x472CE0u) {
        ctx->pc = 0x472CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CDCu;
        // 0x472ce0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472CE4u;
        goto label_472ce4;
    }
    ctx->pc = 0x472CDCu;
    {
        const bool branch_taken_0x472cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x472CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CDCu;
        // 0x472ce0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472cdc) {
            ctx->pc = 0x472D54u;
            goto label_472d54;
        }
    }
    ctx->pc = 0x472CE4u;
label_472ce4:
    // 0x472ce4: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x472ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_472ce8:
    // 0x472ce8: 0x2607fff4  addiu       $a3, $s0, -0xC
    ctx->pc = 0x472ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
label_472cec:
    // 0x472cec: 0x0  nop
    ctx->pc = 0x472cecu;
    // NOP
label_472cf0:
    // 0x472cf0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x472cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_472cf4:
    // 0x472cf4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_472cf8:
    if (ctx->pc == 0x472CF8u) {
        ctx->pc = 0x472CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CF4u;
        // 0x472cf8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472CFCu;
        goto label_472cfc;
    }
    ctx->pc = 0x472CF4u;
    {
        const bool branch_taken_0x472cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x472CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472CF4u;
        // 0x472cf8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472cf4) {
            ctx->pc = 0x472D4Cu;
            goto label_472d4c;
        }
    }
    ctx->pc = 0x472CFCu;
label_472cfc:
    // 0x472cfc: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x472cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_472d00:
    // 0x472d00: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_472d04:
    if (ctx->pc == 0x472D04u) {
        ctx->pc = 0x472D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D00u;
        // 0x472d04: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472D08u;
        goto label_472d08;
    }
    ctx->pc = 0x472D00u;
    {
        const bool branch_taken_0x472d00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x472D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D00u;
        // 0x472d04: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472d00) {
            ctx->pc = 0x472D4Cu;
            goto label_472d4c;
        }
    }
    ctx->pc = 0x472D08u;
label_472d08:
    // 0x472d08: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x472d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_472d0c:
    // 0x472d0c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x472d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_472d10:
    // 0x472d10: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x472d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_472d14:
    // 0x472d14: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x472d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_472d18:
    // 0x472d18: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x472d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_472d1c:
    // 0x472d1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x472d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_472d20:
    // 0x472d20: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x472d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_472d24:
    // 0x472d24: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x472d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_472d28:
    // 0x472d28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x472d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_472d2c:
    // 0x472d2c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x472d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_472d30:
    // 0x472d30: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x472d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_472d34:
    // 0x472d34: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x472d34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_472d38:
    // 0x472d38: 0x8f838900  lw          $v1, -0x7700($gp)
    ctx->pc = 0x472d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936832)));
label_472d3c:
    // 0x472d3c: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x472d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_472d40:
    // 0x472d40: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x472d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_472d44:
    // 0x472d44: 0x40f809  jalr        $v0
label_472d48:
    if (ctx->pc == 0x472D48u) {
        ctx->pc = 0x472D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D44u;
        // 0x472d48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472D4Cu;
        goto label_472d4c;
    }
    ctx->pc = 0x472D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472D4Cu);
        ctx->pc = 0x472D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D44u;
        // 0x472d48: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472D44u, 0x472D4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472D4Cu;
label_472d4c:
    // 0x472d4c: 0x1611ffe8  bne         $s0, $s1, . + 4 + (-0x18 << 2)
label_472d50:
    if (ctx->pc == 0x472D50u) {
        ctx->pc = 0x472D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D4Cu;
        // 0x472d50: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472D54u;
        goto label_472d54;
    }
    ctx->pc = 0x472D4Cu;
    {
        const bool branch_taken_0x472d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x472D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D4Cu;
        // 0x472d50: 0x2607fff4  addiu       $a3, $s0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472d4c) {
            ctx->pc = 0x472CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_472cf0;
        }
    }
    ctx->pc = 0x472D54u;
label_472d54:
    // 0x472d54: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x472d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_472d58:
    // 0x472d58: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x472d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472d5c:
    // 0x472d5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x472d5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_472d60:
    // 0x472d60: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x472d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_472d64:
    // 0x472d64: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x472d64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_472d68:
    // 0x472d68: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x472d68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_472d6c:
    // 0x472d6c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x472d6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_472d70:
    // 0x472d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_472d74:
    // 0x472d74: 0x3e00008  jr          $ra
label_472d78:
    if (ctx->pc == 0x472D78u) {
        ctx->pc = 0x472D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D74u;
        // 0x472d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x472D7Cu;
        goto label_472d7c;
    }
    ctx->pc = 0x472D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472D74u;
        // 0x472d78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472D7Cu;
label_472d7c:
    // 0x472d7c: 0x0  nop
    ctx->pc = 0x472d7cu;
    // NOP
    ctx->pc = 0x472d80u;
}
