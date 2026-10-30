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

// Function: sub_003535A0
// Address: 0x3535a0 - 0x3535e8
void sub_003535A0_0x3535a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003535A0_0x3535a0");
#endif

    switch (ctx->pc) {
        case 0x3535c4u: goto label_3535c4;
        case 0x3535ccu: goto label_3535cc;
        case 0x3535d8u: goto label_3535d8;
        default: break;
    }

    ctx->pc = 0x3535a0u;

    // 0x3535a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3535a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3535a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3535a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3535a8: 0x8c46bd18  lw          $a2, -0x42E8($v0)
    ctx->pc = 0x3535a8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD18u));
    // 0x3535ac: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3535acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3535b0: 0x8c65bd1c  lw          $a1, -0x42E4($v1)
    ctx->pc = 0x3535b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD1Cu));
    // 0x3535b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3535b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3535b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3535bc: 0xc05509a  jal         func_154268
    ctx->pc = 0x3535BCu;
    SET_GPR_U32(ctx, 31, 0x3535C4u);
    ctx->pc = 0x3535C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535BCu;
    // 0x3535c0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154268u, 0x3535BCu, 0x3535C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535C4u;
label_3535c4:
    // 0x3535c4: 0xc051060  jal         func_144180
    ctx->pc = 0x3535C4u;
    SET_GPR_U32(ctx, 31, 0x3535CCu);
    ctx->pc = 0x3535C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535C4u;
    // 0x3535c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144180u, 0x3535C4u, 0x3535CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535CCu;
label_3535cc:
    // 0x3535cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3535ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3535d0: 0xc0550a4  jal         func_154290
    ctx->pc = 0x3535D0u;
    SET_GPR_U32(ctx, 31, 0x3535D8u);
    ctx->pc = 0x3535D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3535D0u;
    // 0x3535d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154290u, 0x3535D0u, 0x3535D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3535D8u;
label_3535d8:
    // 0x3535d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3535d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3535dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3535DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3535E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3535DCu;
        // 0x3535e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3535DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3535E4u;
    // 0x3535e4: 0x0  nop
    ctx->pc = 0x3535e4u;
    // NOP
    ctx->pc = 0x3535e8u;
}
