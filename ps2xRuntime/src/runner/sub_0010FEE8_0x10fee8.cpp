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

// Function: sub_0010FEE8
// Address: 0x10fee8 - 0x10ff28
void sub_0010FEE8_0x10fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FEE8_0x10fee8");
#endif

    switch (ctx->pc) {
        case 0x10ff04u: goto label_10ff04;
        case 0x10ff14u: goto label_10ff14;
        default: break;
    }

    ctx->pc = 0x10fee8u;

    // 0x10fee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10feec: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10feecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10fef0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x10fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10fef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10fef8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10fef8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x10fefc: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10FEFCu;
    SET_GPR_U32(ctx, 31, 0x10FF04u);
    ctx->pc = 0x10FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FEFCu;
    // 0x10ff00: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10FEFCu, 0x10FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF04u;
label_10ff04:
    // 0x10ff04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10FF04u;
    {
        const bool branch_taken_0x10ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF04u;
        // 0x10ff08: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff04) {
            ctx->pc = 0x10FF1Cu;
            goto label_10ff1c;
        }
    }
    ctx->pc = 0x10FF0Cu;
    // 0x10ff0c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10FF0Cu;
    SET_GPR_U32(ctx, 31, 0x10FF14u);
    ctx->pc = 0x10FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF0Cu;
    // 0x10ff10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10FF0Cu, 0x10FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF14u;
label_10ff14:
    // 0x10ff14: 0xe4540078  swc1        $f20, 0x78($v0)
    ctx->pc = 0x10ff14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x10ff18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ff18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10ff1c:
    // 0x10ff1c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10ff20: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF20u;
        // 0x10ff24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FF28u;
}
