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

// Function: sub_004E9350
// Address: 0x4e9350 - 0x4e93b0
void sub_004E9350_0x4e9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9350_0x4e9350");
#endif

    switch (ctx->pc) {
        case 0x4e938cu: goto label_4e938c;
        case 0x4e9398u: goto label_4e9398;
        default: break;
    }

    ctx->pc = 0x4e9350u;

    // 0x4e9350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e9354: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e9354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e9358: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e935c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4e935cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4e9360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e9364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e936c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e936cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9370: 0x2442c968  addiu       $v0, $v0, -0x3698
    ctx->pc = 0x4e9370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953320));
    // 0x4e9374: 0x2463c8e8  addiu       $v1, $v1, -0x3718
    ctx->pc = 0x4e9374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953192));
    // 0x4e9378: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x4e9378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x4e937c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x4e937cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x4e9380: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e9380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4e9384: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E9384u;
    SET_GPR_U32(ctx, 31, 0x4E938Cu);
    ctx->pc = 0x4E9388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9384u;
    // 0x4e9388: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E9384u, 0x4E938Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E938Cu;
label_4e938c:
    // 0x4e938c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e9390: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E9390u;
    SET_GPR_U32(ctx, 31, 0x4E9398u);
    ctx->pc = 0x4E9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9390u;
    // 0x4e9394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E9390u, 0x4E9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9398u;
label_4e9398:
    // 0x4e9398: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e9398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e939c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e939cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e93a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e93a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e93a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4E93A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E93A4u;
        // 0x4e93a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E93A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E93ACu;
    // 0x4e93ac: 0x0  nop
    ctx->pc = 0x4e93acu;
    // NOP
    ctx->pc = 0x4e93b0u;
}
