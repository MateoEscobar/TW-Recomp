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

// Function: sub_0011B400
// Address: 0x11b400 - 0x11b450
void sub_0011B400_0x11b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B400_0x11b400");
#endif

    switch (ctx->pc) {
        case 0x11b428u: goto label_11b428;
        case 0x11b438u: goto label_11b438;
        default: break;
    }

    ctx->pc = 0x11b400u;

    // 0x11b400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11b404: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11b408: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x11b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x11b40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11b40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11b410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b418: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x11b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x11b41c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11b41cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b420: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B420u;
    SET_GPR_U32(ctx, 31, 0x11B428u);
    ctx->pc = 0x11B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B420u;
    // 0x11b424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B420u, 0x11B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B428u;
label_11b428:
    // 0x11b428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b42c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b430: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x11B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B430u;
    // 0x11b434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B430u, 0x11B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b43c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11b43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11b440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11b440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b448: 0x3e00008  jr          $ra
    ctx->pc = 0x11B448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B448u;
        // 0x11b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B450u;
}
