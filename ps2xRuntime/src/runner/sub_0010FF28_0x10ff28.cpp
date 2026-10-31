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

// Function: sub_0010FF28
// Address: 0x10ff28 - 0x10ff68
void sub_0010FF28_0x10ff28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FF28_0x10ff28");
#endif

    switch (ctx->pc) {
        case 0x10ff44u: goto label_10ff44;
        case 0x10ff54u: goto label_10ff54;
        default: break;
    }

    ctx->pc = 0x10ff28u;

    // 0x10ff28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ff28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ff2c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10ff2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10ff30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ff38: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10ff38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10ff3c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10FF3Cu;
    SET_GPR_U32(ctx, 31, 0x10FF44u);
    ctx->pc = 0x10FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF3Cu;
    // 0x10ff40: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10FF3Cu, 0x10FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF44u;
label_10ff44:
    // 0x10ff44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FF44u;
    {
        const bool branch_taken_0x10ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF44u;
        // 0x10ff48: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff44) {
            ctx->pc = 0x10FF5Cu;
            goto label_10ff5c;
        }
    }
    ctx->pc = 0x10FF4Cu;
    // 0x10ff4c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10FF4Cu;
    SET_GPR_U32(ctx, 31, 0x10FF54u);
    ctx->pc = 0x10FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF4Cu;
    // 0x10ff50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10FF4Cu, 0x10FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF54u;
label_10ff54:
    // 0x10ff54: 0xe4540074  swc1        $f20, 0x74($v0)
    ctx->pc = 0x10ff54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x10ff58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ff5c:
    // 0x10ff5c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10ff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10ff60: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF60u;
        // 0x10ff64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FF68u;
}
