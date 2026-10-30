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

// Function: sub_0035E560
// Address: 0x35e560 - 0x35e598
void sub_0035E560_0x35e560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E560_0x35e560");
#endif

    switch (ctx->pc) {
        case 0x35e574u: goto label_35e574;
        case 0x35e57cu: goto label_35e57c;
        case 0x35e584u: goto label_35e584;
        default: break;
    }

    ctx->pc = 0x35e560u;

    // 0x35e560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e564: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e56c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E56Cu;
    SET_GPR_U32(ctx, 31, 0x35E574u);
    ctx->pc = 0x35E570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E56Cu;
    // 0x35e570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E56Cu, 0x35E574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E574u;
label_35e574:
    // 0x35e574: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E574u;
    SET_GPR_U32(ctx, 31, 0x35E57Cu);
    ctx->pc = 0x35E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E574u;
    // 0x35e578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E574u, 0x35E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E57Cu;
label_35e57c:
    // 0x35e57c: 0xc10765a  jal         func_41D968
    ctx->pc = 0x35E57Cu;
    SET_GPR_U32(ctx, 31, 0x35E584u);
    ctx->pc = 0x35E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E57Cu;
    // 0x35e580: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D968u, 0x35E57Cu, 0x35E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E584u;
label_35e584:
    // 0x35e584: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e58c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E58Cu;
        // 0x35e590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E594u;
    // 0x35e594: 0x0  nop
    ctx->pc = 0x35e594u;
    // NOP
    ctx->pc = 0x35e598u;
}
