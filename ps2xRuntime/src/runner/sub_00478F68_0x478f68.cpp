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

// Function: sub_00478F68
// Address: 0x478f68 - 0x478fb0
void sub_00478F68_0x478f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00478F68_0x478f68");
#endif

    switch (ctx->pc) {
        case 0x478f90u: goto label_478f90;
        case 0x478fa0u: goto label_478fa0;
        default: break;
    }

    ctx->pc = 0x478f68u;

    // 0x478f68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x478f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x478f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x478f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x478f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x478f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x478f74: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x478f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x478f78: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x478f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x478f7c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x478f7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x478f80: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x478F80u;
    {
        const bool branch_taken_0x478f80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x478f80) {
            ctx->pc = 0x478F98u;
            goto label_478f98;
        }
    }
    ctx->pc = 0x478F88u;
    // 0x478f88: 0xc11dfbe  jal         func_477EF8
    ctx->pc = 0x478F88u;
    SET_GPR_U32(ctx, 31, 0x478F90u);
    ctx->pc = 0x478F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x478F88u;
    // 0x478f8c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x477EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x477EF8u, 0x478F88u, 0x478F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478F90u;
label_478f90:
    // 0x478f90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x478F90u;
    {
        const bool branch_taken_0x478f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x478F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478F90u;
        // 0x478f94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x478f90) {
            ctx->pc = 0x478FA4u;
            goto label_478fa4;
        }
    }
    ctx->pc = 0x478F98u;
label_478f98:
    // 0x478f98: 0xc11ea8c  jal         func_47AA30
    ctx->pc = 0x478F98u;
    SET_GPR_U32(ctx, 31, 0x478FA0u);
    ctx->pc = 0x478F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x478F98u;
    // 0x478f9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AA30u, 0x478F98u, 0x478FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478FA0u;
label_478fa0:
    // 0x478fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x478fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_478fa4:
    // 0x478fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x478FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x478FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x478FA4u;
        // 0x478fa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478FACu;
    // 0x478fac: 0x0  nop
    ctx->pc = 0x478facu;
    // NOP
    ctx->pc = 0x478fb0u;
}
