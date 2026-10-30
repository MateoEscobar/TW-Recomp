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

// Function: sub_00238430
// Address: 0x238430 - 0x238478
void sub_00238430_0x238430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238430_0x238430");
#endif

    switch (ctx->pc) {
        case 0x23844cu: goto label_23844c;
        case 0x238454u: goto label_238454;
        case 0x238464u: goto label_238464;
        default: break;
    }

    ctx->pc = 0x238430u;

    // 0x238430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x238434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x238438: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x238438u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x23843c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x238440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x238444: 0xc0e4060  jal         func_390180
    ctx->pc = 0x238444u;
    SET_GPR_U32(ctx, 31, 0x23844Cu);
    ctx->pc = 0x238448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238444u;
    // 0x238448: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x238444u, 0x23844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23844Cu;
label_23844c:
    // 0x23844c: 0xc08a61a  jal         func_229868
    ctx->pc = 0x23844Cu;
    SET_GPR_U32(ctx, 31, 0x238454u);
    ctx->pc = 0x238450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23844Cu;
    // 0x238450: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x23844Cu, 0x238454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238454u;
label_238454:
    // 0x238454: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x238454u;
    {
        const bool branch_taken_0x238454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238454u;
        // 0x238458: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238454) {
            ctx->pc = 0x23846Cu;
            goto label_23846c;
        }
    }
    ctx->pc = 0x23845Cu;
    // 0x23845c: 0xc087502  jal         func_21D408
    ctx->pc = 0x23845Cu;
    SET_GPR_U32(ctx, 31, 0x238464u);
    ctx->pc = 0x238460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23845Cu;
    // 0x238460: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x23845Cu, 0x238464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238464u;
label_238464:
    // 0x238464: 0xe4540138  swc1        $f20, 0x138($v0)
    ctx->pc = 0x238464u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
    // 0x238468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23846c:
    // 0x23846c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x23846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238470: 0x3e00008  jr          $ra
    ctx->pc = 0x238470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238470u;
        // 0x238474: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238478u;
}
