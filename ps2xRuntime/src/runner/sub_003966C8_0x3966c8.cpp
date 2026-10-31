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

// Function: sub_003966C8
// Address: 0x3966c8 - 0x396710
void sub_003966C8_0x3966c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003966C8_0x3966c8");
#endif

    switch (ctx->pc) {
        case 0x3966e4u: goto label_3966e4;
        case 0x3966f4u: goto label_3966f4;
        case 0x396700u: goto label_396700;
        default: break;
    }

    ctx->pc = 0x3966c8u;

    // 0x3966c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3966c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3966cc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3966ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3966d0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3966d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3966d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3966d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3966d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3966d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3966dc: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3966DCu;
    SET_GPR_U32(ctx, 31, 0x3966E4u);
    ctx->pc = 0x3966E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966DCu;
    // 0x3966e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3966DCu, 0x3966E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966E4u;
label_3966e4:
    // 0x3966e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3966E4u;
    {
        const bool branch_taken_0x3966e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3966E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3966E4u;
        // 0x3966e8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3966e4) {
            ctx->pc = 0x396704u;
            goto label_396704;
        }
    }
    ctx->pc = 0x3966ECu;
    // 0x3966ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3966ECu;
    SET_GPR_U32(ctx, 31, 0x3966F4u);
    ctx->pc = 0x3966F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966ECu;
    // 0x3966f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3966ECu, 0x3966F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966F4u;
label_3966f4:
    // 0x3966f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3966f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966f8: 0xc0e58ee  jal         func_3963B8
    ctx->pc = 0x3966F8u;
    SET_GPR_U32(ctx, 31, 0x396700u);
    ctx->pc = 0x3966FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966F8u;
    // 0x3966fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3963B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3963B8u, 0x3966F8u, 0x396700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396700u;
label_396700:
    // 0x396700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x396700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_396704:
    // 0x396704: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x396704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x396708: 0x3e00008  jr          $ra
    ctx->pc = 0x396708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396708u;
        // 0x39670c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396710u;
}
