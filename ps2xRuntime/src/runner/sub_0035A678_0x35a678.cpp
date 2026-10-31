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

// Function: sub_0035A678
// Address: 0x35a678 - 0x35a6b0
void sub_0035A678_0x35a678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035A678_0x35a678");
#endif

    switch (ctx->pc) {
        case 0x35a68cu: goto label_35a68c;
        case 0x35a694u: goto label_35a694;
        case 0x35a69cu: goto label_35a69c;
        default: break;
    }

    ctx->pc = 0x35a678u;

    // 0x35a678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a67c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35a680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35a680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35a684: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35A684u;
    SET_GPR_U32(ctx, 31, 0x35A68Cu);
    ctx->pc = 0x35A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A684u;
    // 0x35a688: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35A684u, 0x35A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A68Cu;
label_35a68c:
    // 0x35a68c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35A68Cu;
    SET_GPR_U32(ctx, 31, 0x35A694u);
    ctx->pc = 0x35A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A68Cu;
    // 0x35a690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35A68Cu, 0x35A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A694u;
label_35a694:
    // 0x35a694: 0xc08d93e  jal         func_2364F8
    ctx->pc = 0x35A694u;
    SET_GPR_U32(ctx, 31, 0x35A69Cu);
    ctx->pc = 0x35A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A694u;
    // 0x35a698: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2364F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2364F8u, 0x35A694u, 0x35A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A69Cu;
label_35a69c:
    // 0x35a69c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35a69cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35a6a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35a6a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35A6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A6A4u;
        // 0x35a6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A6ACu;
    // 0x35a6ac: 0x0  nop
    ctx->pc = 0x35a6acu;
    // NOP
    ctx->pc = 0x35a6b0u;
}
