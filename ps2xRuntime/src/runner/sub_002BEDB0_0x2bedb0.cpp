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

// Function: sub_002BEDB0
// Address: 0x2bedb0 - 0x2bee08
void sub_002BEDB0_0x2bedb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEDB0_0x2bedb0");
#endif

    switch (ctx->pc) {
        case 0x2bedccu: goto label_2bedcc;
        case 0x2beddcu: goto label_2beddc;
        case 0x2bedecu: goto label_2bedec;
        default: break;
    }

    ctx->pc = 0x2bedb0u;

    // 0x2bedb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bedb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bedb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bedb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bedb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bedb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bedbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bedbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bedc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bedc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bedc4: 0xc05959e  jal         func_165678
    ctx->pc = 0x2BEDC4u;
    SET_GPR_U32(ctx, 31, 0x2BEDCCu);
    ctx->pc = 0x2BEDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDC4u;
    // 0x2bedc8: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2BEDC4u, 0x2BEDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDCCu;
label_2bedcc:
    // 0x2bedcc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEDCCu;
    {
        const bool branch_taken_0x2bedcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bedcc) {
            ctx->pc = 0x2BEDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BEDCCu;
            // 0x2bedd0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BEDE4u;
            goto label_2bede4;
        }
    }
    ctx->pc = 0x2BEDD4u;
    // 0x2bedd4: 0xc088e88  jal         func_223A20
    ctx->pc = 0x2BEDD4u;
    SET_GPR_U32(ctx, 31, 0x2BEDDCu);
    ctx->pc = 0x2BEDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDD4u;
    // 0x2bedd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223A20u, 0x2BEDD4u, 0x2BEDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDDCu;
label_2beddc:
    // 0x2beddc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BEDDCu;
    {
        const bool branch_taken_0x2beddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEDDCu;
        // 0x2bede0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2beddc) {
            ctx->pc = 0x2BEDF0u;
            goto label_2bedf0;
        }
    }
    ctx->pc = 0x2BEDE4u;
label_2bede4:
    // 0x2bede4: 0xc08c6d8  jal         func_231B60
    ctx->pc = 0x2BEDE4u;
    SET_GPR_U32(ctx, 31, 0x2BEDECu);
    ctx->pc = 0x2BEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDE4u;
    // 0x2bede8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B60u, 0x2BEDE4u, 0x2BEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDECu;
label_2bedec:
    // 0x2bedec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2bedecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2bedf0:
    // 0x2bedf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bedf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bedf4: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2bedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
    // 0x2bedf8: 0xa2000028  sb          $zero, 0x28($s0)
    ctx->pc = 0x2bedf8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bedfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bedfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bee00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE00u;
        // 0x2bee04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEE08u;
}
