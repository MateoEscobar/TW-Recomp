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

// Function: sub_00237848
// Address: 0x237848 - 0x2378a8
void sub_00237848_0x237848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237848_0x237848");
#endif

    switch (ctx->pc) {
        case 0x237868u: goto label_237868;
        case 0x237870u: goto label_237870;
        default: break;
    }

    ctx->pc = 0x237848u;

    // 0x237848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23784c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x23784cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x237850: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237854: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x237854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237858: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x237858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23785c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x237860: 0xc0e4060  jal         func_390180
    ctx->pc = 0x237860u;
    SET_GPR_U32(ctx, 31, 0x237868u);
    ctx->pc = 0x237864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237860u;
    // 0x237864: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x237860u, 0x237868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237868u;
label_237868:
    // 0x237868: 0xc08a61a  jal         func_229868
    ctx->pc = 0x237868u;
    SET_GPR_U32(ctx, 31, 0x237870u);
    ctx->pc = 0x23786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237868u;
    // 0x23786c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x237868u, 0x237870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237870u;
label_237870:
    // 0x237870: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x237870u;
    {
        const bool branch_taken_0x237870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237870) {
            ctx->pc = 0x237874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237870u;
            // 0x237874: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23789Cu;
            goto label_23789c;
        }
    }
    ctx->pc = 0x237878u;
    // 0x237878: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x237878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
    // 0x23787c: 0x84620146  lh          $v0, 0x146($v1)
    ctx->pc = 0x23787cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
    // 0x237880: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x237880u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x237884: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x237884u;
    {
        const bool branch_taken_0x237884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237884u;
        // 0x237888: 0x94640146  lhu         $a0, 0x146($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237884) {
            ctx->pc = 0x237894u;
            goto label_237894;
        }
    }
    ctx->pc = 0x23788Cu;
    // 0x23788c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23788Cu;
    {
        const bool branch_taken_0x23788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23788Cu;
        // 0x237890: 0xa4700144  sh          $s0, 0x144($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23788c) {
            ctx->pc = 0x237898u;
            goto label_237898;
        }
    }
    ctx->pc = 0x237894u;
label_237894:
    // 0x237894: 0xa4640144  sh          $a0, 0x144($v1)
    ctx->pc = 0x237894u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 4));
label_237898:
    // 0x237898: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23789c:
    // 0x23789c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23789cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2378a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2378A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2378A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2378A0u;
        // 0x2378a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2378A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2378A8u;
}
