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

// Function: sub_002383E8
// Address: 0x2383e8 - 0x238430
void sub_002383E8_0x2383e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002383E8_0x2383e8");
#endif

    switch (ctx->pc) {
        case 0x238404u: goto label_238404;
        case 0x23840cu: goto label_23840c;
        case 0x23841cu: goto label_23841c;
        default: break;
    }

    ctx->pc = 0x2383e8u;

    // 0x2383e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2383e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2383ec: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2383f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2383f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2383f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2383f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2383f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2383fc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2383FCu;
    SET_GPR_U32(ctx, 31, 0x238404u);
    ctx->pc = 0x238400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383FCu;
    // 0x238400: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2383FCu, 0x238404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238404u;
label_238404:
    // 0x238404: 0xc08a61a  jal         func_229868
    ctx->pc = 0x238404u;
    SET_GPR_U32(ctx, 31, 0x23840Cu);
    ctx->pc = 0x238408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238404u;
    // 0x238408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x238404u, 0x23840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23840Cu;
label_23840c:
    // 0x23840c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23840Cu;
    {
        const bool branch_taken_0x23840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23840Cu;
        // 0x238410: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23840c) {
            ctx->pc = 0x238424u;
            goto label_238424;
        }
    }
    ctx->pc = 0x238414u;
    // 0x238414: 0xc087502  jal         func_21D408
    ctx->pc = 0x238414u;
    SET_GPR_U32(ctx, 31, 0x23841Cu);
    ctx->pc = 0x238418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x238414u;
    // 0x238418: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x238414u, 0x23841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23841Cu;
label_23841c:
    // 0x23841c: 0xe4540134  swc1        $f20, 0x134($v0)
    ctx->pc = 0x23841cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 308), bits); }
    // 0x238420: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x238420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_238424:
    // 0x238424: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x238424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x238428: 0x3e00008  jr          $ra
    ctx->pc = 0x238428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238428u;
        // 0x23842c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238430u;
}
