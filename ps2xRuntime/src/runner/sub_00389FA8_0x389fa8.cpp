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

// Function: sub_00389FA8
// Address: 0x389fa8 - 0x38a010
void sub_00389FA8_0x389fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389FA8_0x389fa8");
#endif

    switch (ctx->pc) {
        case 0x389fd0u: goto label_389fd0;
        case 0x389fe0u: goto label_389fe0;
        default: break;
    }

    ctx->pc = 0x389fa8u;

    // 0x389fa8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x389FA8u;
    {
        const bool branch_taken_0x389fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x389fa8) {
            ctx->pc = 0x389FD8u;
            goto label_389fd8;
        }
    }
    ctx->pc = 0x389FB0u;
    // 0x389fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x389fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x389fb4: 0x0  nop
    ctx->pc = 0x389fb4u;
    // NOP
    // 0x389fb8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x389fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389fbc: 0x0  nop
    ctx->pc = 0x389fbcu;
    // NOP
    // 0x389fc0: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x389FC0u;
    {
        const bool branch_taken_0x389fc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x389FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FC0u;
        // 0x389fc4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fc0) {
            ctx->pc = 0x38A008u;
            goto label_38a008;
        }
    }
    ctx->pc = 0x389FC8u;
    // 0x389fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x389FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FC8u;
        // 0x389fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389FC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389FD0u;
label_389fd0:
    // 0x389fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x389FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FD0u;
        // 0x389fd4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389FD8u;
label_389fd8:
    // 0x389fd8: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x389FD8u;
    {
        const bool branch_taken_0x389fd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x389FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FD8u;
        // 0x389fdc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389fd8) {
            ctx->pc = 0x38A004u;
            goto label_38a004;
        }
    }
    ctx->pc = 0x389FE0u;
label_389fe0:
    // 0x389fe0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x389fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x389fe4: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x389fe4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x389fe8: 0x0  nop
    ctx->pc = 0x389fe8u;
    // NOP
    // 0x389fec: 0x4501fff8  bc1t        . + 4 + (-0x8 << 2)
    ctx->pc = 0x389FECu;
    {
        const bool branch_taken_0x389fec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x389fec) {
            ctx->pc = 0x389FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389fd0;
        }
    }
    ctx->pc = 0x389FF4u;
    // 0x389ff4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x389ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x389ff8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x389ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x389ffc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x389FFCu;
    {
        const bool branch_taken_0x389ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FFCu;
        // 0x38a000: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ffc) {
            ctx->pc = 0x389FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389fe0;
        }
    }
    ctx->pc = 0x38A004u;
label_38a004:
    // 0x38a004: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x38a004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38a008:
    // 0x38a008: 0x3e00008  jr          $ra
    ctx->pc = 0x38A008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A010u;
}
