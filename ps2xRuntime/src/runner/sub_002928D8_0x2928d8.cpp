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

// Function: sub_002928D8
// Address: 0x2928d8 - 0x292938
void sub_002928D8_0x2928d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002928D8_0x2928d8");
#endif

    switch (ctx->pc) {
        case 0x2928f4u: goto label_2928f4;
        case 0x2928fcu: goto label_2928fc;
        case 0x29290cu: goto label_29290c;
        default: break;
    }

    ctx->pc = 0x2928d8u;

    // 0x2928d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2928d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2928dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2928dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2928e0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2928e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2928e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2928e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2928e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2928e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2928ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2928ECu;
    SET_GPR_U32(ctx, 31, 0x2928F4u);
    ctx->pc = 0x2928F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928ECu;
    // 0x2928f0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2928ECu, 0x2928F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928F4u;
label_2928f4:
    // 0x2928f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2928F4u;
    SET_GPR_U32(ctx, 31, 0x2928FCu);
    ctx->pc = 0x2928F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2928F4u;
    // 0x2928f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2928F4u, 0x2928FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2928FCu;
label_2928fc:
    // 0x2928fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2928FCu;
    {
        const bool branch_taken_0x2928fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2928FCu;
        // 0x292900: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2928fc) {
            ctx->pc = 0x292928u;
            goto label_292928;
        }
    }
    ctx->pc = 0x292904u;
    // 0x292904: 0xc087502  jal         func_21D408
    ctx->pc = 0x292904u;
    SET_GPR_U32(ctx, 31, 0x29290Cu);
    ctx->pc = 0x292908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292904u;
    // 0x292908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292904u, 0x29290Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29290Cu;
label_29290c:
    // 0x29290c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x29290cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x292910: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x292910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x292914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x292914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292918: 0x0  nop
    ctx->pc = 0x292918u;
    // NOP
    // 0x29291c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29291cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x292920: 0xe440012c  swc1        $f0, 0x12C($v0)
    ctx->pc = 0x292920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 300), bits); }
    // 0x292924: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292928:
    // 0x292928: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x292928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29292c: 0x3e00008  jr          $ra
    ctx->pc = 0x29292Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29292Cu;
        // 0x292930: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29292Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292934u;
    // 0x292934: 0x0  nop
    ctx->pc = 0x292934u;
    // NOP
    ctx->pc = 0x292938u;
}
