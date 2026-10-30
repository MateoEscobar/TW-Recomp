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

// Function: sub_002383A0
// Address: 0x2383a0 - 0x2383e8
void sub_002383A0_0x2383a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002383A0_0x2383a0");
#endif

    switch (ctx->pc) {
        case 0x2383bcu: goto label_2383bc;
        case 0x2383c4u: goto label_2383c4;
        case 0x2383d4u: goto label_2383d4;
        default: break;
    }

    ctx->pc = 0x2383a0u;

    // 0x2383a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2383a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2383a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2383a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2383a8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2383a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2383ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2383acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2383b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2383b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2383b4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2383B4u;
    SET_GPR_U32(ctx, 31, 0x2383BCu);
    ctx->pc = 0x2383B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383B4u;
    // 0x2383b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2383B4u, 0x2383BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383BCu;
label_2383bc:
    // 0x2383bc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2383BCu;
    SET_GPR_U32(ctx, 31, 0x2383C4u);
    ctx->pc = 0x2383C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383BCu;
    // 0x2383c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2383BCu, 0x2383C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383C4u;
label_2383c4:
    // 0x2383c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2383C4u;
    {
        const bool branch_taken_0x2383c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2383C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383C4u;
        // 0x2383c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2383c4) {
            ctx->pc = 0x2383DCu;
            goto label_2383dc;
        }
    }
    ctx->pc = 0x2383CCu;
    // 0x2383cc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2383CCu;
    SET_GPR_U32(ctx, 31, 0x2383D4u);
    ctx->pc = 0x2383D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2383CCu;
    // 0x2383d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2383CCu, 0x2383D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2383D4u;
label_2383d4:
    // 0x2383d4: 0xe4540130  swc1        $f20, 0x130($v0)
    ctx->pc = 0x2383d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
    // 0x2383d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2383d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2383dc:
    // 0x2383dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2383dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2383e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2383E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2383E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2383E0u;
        // 0x2383e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2383E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2383E8u;
}
