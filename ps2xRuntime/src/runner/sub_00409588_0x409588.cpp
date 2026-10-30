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

// Function: sub_00409588
// Address: 0x409588 - 0x4095d8
void sub_00409588_0x409588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409588_0x409588");
#endif

    switch (ctx->pc) {
        case 0x4095a8u: goto label_4095a8;
        case 0x4095b4u: goto label_4095b4;
        case 0x4095c4u: goto label_4095c4;
        default: break;
    }

    ctx->pc = 0x409588u;

    // 0x409588: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x409588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40958c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x409590: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x409590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409594: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x409594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409598: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x409598u;
    {
        const bool branch_taken_0x409598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40959Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409598u;
        // 0x40959c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409598) {
            ctx->pc = 0x4095BCu;
            goto label_4095bc;
        }
    }
    ctx->pc = 0x4095A0u;
    // 0x4095a0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4095A0u;
    SET_GPR_U32(ctx, 31, 0x4095A8u);
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4095A0u, 0x4095A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4095A8u;
label_4095a8:
    // 0x4095a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4095a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4095ac: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x4095ACu;
    SET_GPR_U32(ctx, 31, 0x4095B4u);
    ctx->pc = 0x4095B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4095ACu;
    // 0x4095b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x4095ACu, 0x4095B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4095B4u;
label_4095b4:
    // 0x4095b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4095B4u;
    {
        const bool branch_taken_0x4095b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4095B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4095B4u;
        // 0x4095b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4095b4) {
            ctx->pc = 0x4095C8u;
            goto label_4095c8;
        }
    }
    ctx->pc = 0x4095BCu;
label_4095bc:
    // 0x4095bc: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x4095BCu;
    SET_GPR_U32(ctx, 31, 0x4095C4u);
    ctx->pc = 0x4095C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4095BCu;
    // 0x4095c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x4095BCu, 0x4095C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4095C4u;
label_4095c4:
    // 0x4095c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4095c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4095c8:
    // 0x4095c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4095c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4095cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4095CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4095D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4095CCu;
        // 0x4095d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4095CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4095D4u;
    // 0x4095d4: 0x0  nop
    ctx->pc = 0x4095d4u;
    // NOP
    ctx->pc = 0x4095d8u;
}
