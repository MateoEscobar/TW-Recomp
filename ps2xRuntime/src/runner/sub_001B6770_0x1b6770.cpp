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

// Function: sub_001B6770
// Address: 0x1b6770 - 0x1b67b8
void sub_001B6770_0x1b6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6770_0x1b6770");
#endif

    switch (ctx->pc) {
        case 0x1b6794u: goto label_1b6794;
        case 0x1b67a0u: goto label_1b67a0;
        default: break;
    }

    ctx->pc = 0x1b6770u;

    // 0x1b6770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b6770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b6774: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b6778: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b6778u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b677c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b6780: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x1b6780u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1b6784: 0xae060c60  sw          $a2, 0xC60($s0)
    ctx->pc = 0x1b6784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3168), GPR_U32(ctx, 6));
    // 0x1b6788: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1b6788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1b678c: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x1B678Cu;
    SET_GPR_U32(ctx, 31, 0x1B6794u);
    ctx->pc = 0x1B6790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B678Cu;
    // 0x1b6790: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x1B678Cu, 0x1B6794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6794u;
label_1b6794:
    // 0x1b6794: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6798: 0xc059856  jal         func_166158
    ctx->pc = 0x1B6798u;
    SET_GPR_U32(ctx, 31, 0x1B67A0u);
    ctx->pc = 0x1B679Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6798u;
    // 0x1b679c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x1B6798u, 0x1B67A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B67A0u;
label_1b67a0:
    // 0x1b67a0: 0xae020c40  sw          $v0, 0xC40($s0)
    ctx->pc = 0x1b67a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3136), GPR_U32(ctx, 2));
    // 0x1b67a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b67a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b67a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b67a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b67ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67ACu;
        // 0x1b67b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B67ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B67B4u;
    // 0x1b67b4: 0x0  nop
    ctx->pc = 0x1b67b4u;
    // NOP
    ctx->pc = 0x1b67b8u;
}
