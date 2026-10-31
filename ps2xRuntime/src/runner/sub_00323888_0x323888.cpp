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

// Function: sub_00323888
// Address: 0x323888 - 0x3238e0
void sub_00323888_0x323888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323888_0x323888");
#endif

    switch (ctx->pc) {
        case 0x3238c0u: goto label_3238c0;
        default: break;
    }

    ctx->pc = 0x323888u;

    // 0x323888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32388c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323890: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323898: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32389c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x32389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3238a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3238a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3238a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3238a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3238a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3238a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3238ac: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3238ACu;
    {
        const bool branch_taken_0x3238ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3238ac) {
            ctx->pc = 0x3238B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3238ACu;
            // 0x3238b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3238C4u;
            goto label_3238c4;
        }
    }
    ctx->pc = 0x3238B4u;
    // 0x3238b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3238b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238b8: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x3238B8u;
    SET_GPR_U32(ctx, 31, 0x3238C0u);
    ctx->pc = 0x3238BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238B8u;
    // 0x3238bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x3238B8u, 0x3238C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238C0u;
label_3238c0:
    // 0x3238c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3238c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3238c4:
    // 0x3238c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3238c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3238c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3238c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3238cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3238ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3238d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3238d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3238d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3238D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3238D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D4u;
        // 0x3238d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3238DCu;
    // 0x3238dc: 0x0  nop
    ctx->pc = 0x3238dcu;
    // NOP
    ctx->pc = 0x3238e0u;
}
