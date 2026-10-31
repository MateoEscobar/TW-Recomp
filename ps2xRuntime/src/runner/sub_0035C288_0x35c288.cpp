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

// Function: sub_0035C288
// Address: 0x35c288 - 0x35c2f0
void sub_0035C288_0x35c288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C288_0x35c288");
#endif

    switch (ctx->pc) {
        case 0x35c2a0u: goto label_35c2a0;
        case 0x35c2a8u: goto label_35c2a8;
        case 0x35c2bcu: goto label_35c2bc;
        case 0x35c2c4u: goto label_35c2c4;
        case 0x35c2d0u: goto label_35c2d0;
        default: break;
    }

    ctx->pc = 0x35c288u;

    // 0x35c288: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35c288u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c28c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35c28cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35c290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35c294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35c294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35c298: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C298u;
    SET_GPR_U32(ctx, 31, 0x35C2A0u);
    ctx->pc = 0x35C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C298u;
    // 0x35c29c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C298u, 0x35C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2A0u;
label_35c2a0:
    // 0x35c2a0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35C2A0u;
    SET_GPR_U32(ctx, 31, 0x35C2A8u);
    ctx->pc = 0x35C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C2A0u;
    // 0x35c2a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35C2A0u, 0x35C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2A8u;
label_35c2a8:
    // 0x35c2a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c2ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35c2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c2b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c2b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c2b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35C2B4u;
    SET_GPR_U32(ctx, 31, 0x35C2BCu);
    ctx->pc = 0x35C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C2B4u;
    // 0x35c2b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35C2B4u, 0x35C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2BCu;
label_35c2bc:
    // 0x35c2bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35C2BCu;
    SET_GPR_U32(ctx, 31, 0x35C2C4u);
    ctx->pc = 0x35C2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C2BCu;
    // 0x35c2c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35C2BCu, 0x35C2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2C4u;
label_35c2c4:
    // 0x35c2c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35c2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c2c8: 0xc08e0fa  jal         func_2383E8
    ctx->pc = 0x35C2C8u;
    SET_GPR_U32(ctx, 31, 0x35C2D0u);
    ctx->pc = 0x35C2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C2C8u;
    // 0x35c2cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2383E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2383E8u, 0x35C2C8u, 0x35C2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C2D0u;
label_35c2d0:
    // 0x35c2d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35c2d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35c2d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c2d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c2d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35c2d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c2dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35c2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C2E4u;
        // 0x35c2e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C2ECu;
    // 0x35c2ec: 0x0  nop
    ctx->pc = 0x35c2ecu;
    // NOP
    ctx->pc = 0x35c2f0u;
}
