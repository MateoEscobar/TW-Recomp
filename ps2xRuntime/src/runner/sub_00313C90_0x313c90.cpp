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

// Function: sub_00313C90
// Address: 0x313c90 - 0x313d18
void sub_00313C90_0x313c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313C90_0x313c90");
#endif

    switch (ctx->pc) {
        case 0x313cacu: goto label_313cac;
        case 0x313ce0u: goto label_313ce0;
        case 0x313cf8u: goto label_313cf8;
        default: break;
    }

    ctx->pc = 0x313c90u;

    // 0x313c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x313c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x313c94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x313c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x313c98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x313c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x313c9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313c9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ca0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x313ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x313ca4: 0xc05959e  jal         func_165678
    ctx->pc = 0x313CA4u;
    SET_GPR_U32(ctx, 31, 0x313CACu);
    ctx->pc = 0x313CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CA4u;
    // 0x313ca8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x313CA4u, 0x313CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CACu;
label_313cac:
    // 0x313cac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x313cacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cb0: 0x92020025  lbu         $v0, 0x25($s0)
    ctx->pc = 0x313cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 37)));
    // 0x313cb4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x313CB4u;
    {
        const bool branch_taken_0x313cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x313CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CB4u;
        // 0x313cb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cb4) {
            ctx->pc = 0x313D04u;
            goto label_313d04;
        }
    }
    ctx->pc = 0x313CBCu;
    // 0x313cbc: 0x92110024  lbu         $s1, 0x24($s0)
    ctx->pc = 0x313cbcu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x313cc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313cc4: 0x1622000d  bne         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x313CC4u;
    {
        const bool branch_taken_0x313cc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x313CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CC4u;
        // 0x313cc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313cc4) {
            ctx->pc = 0x313CFCu;
            goto label_313cfc;
        }
    }
    ctx->pc = 0x313CCCu;
    // 0x313ccc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x313CCCu;
    {
        const bool branch_taken_0x313ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x313CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CCCu;
        // 0x313cd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ccc) {
            ctx->pc = 0x313CECu;
            goto label_313cec;
        }
    }
    ctx->pc = 0x313CD4u;
    // 0x313cd4: 0x8c620178  lw          $v0, 0x178($v1)
    ctx->pc = 0x313cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 376)));
    // 0x313cd8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x313CD8u;
    SET_GPR_U32(ctx, 31, 0x313CE0u);
    ctx->pc = 0x313CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CD8u;
    // 0x313cdc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x313CD8u, 0x313CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CE0u;
label_313ce0:
    // 0x313ce0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x313ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x313ce4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x313CE4u;
    {
        const bool branch_taken_0x313ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x313CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313CE4u;
        // 0x313ce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ce4) {
            ctx->pc = 0x313D04u;
            goto label_313d04;
        }
    }
    ctx->pc = 0x313CECu;
label_313cec:
    // 0x313cec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313cf0: 0xc0c1a7c  jal         func_3069F0
    ctx->pc = 0x313CF0u;
    SET_GPR_U32(ctx, 31, 0x313CF8u);
    ctx->pc = 0x313CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313CF0u;
    // 0x313cf4: 0x24050085  addiu       $a1, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3069F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069F0u, 0x313CF0u, 0x313CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313CF8u;
label_313cf8:
    // 0x313cf8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_313cfc:
    // 0x313cfc: 0xa2020025  sb          $v0, 0x25($s0)
    ctx->pc = 0x313cfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x313d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313d04:
    // 0x313d04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x313d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313d08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313d0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x313d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x313d10: 0x3e00008  jr          $ra
    ctx->pc = 0x313D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313D10u;
        // 0x313d14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313D18u;
}
