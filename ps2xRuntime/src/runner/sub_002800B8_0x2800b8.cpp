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

// Function: sub_002800B8
// Address: 0x2800b8 - 0x280118
void sub_002800B8_0x2800b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002800B8_0x2800b8");
#endif

    switch (ctx->pc) {
        case 0x2800fcu: goto label_2800fc;
        default: break;
    }

    ctx->pc = 0x2800b8u;

    // 0x2800b8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2800b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2800bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2800bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2800c0: 0xc4410994  lwc1        $f1, 0x994($v0)
    ctx->pc = 0x2800c0u;
    { uint32_t bits = FAST_READ32(0x510994u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2800c4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2800c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2800c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2800c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2800cc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2800ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2800d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2800d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2800d4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x2800D4u;
    {
        const bool branch_taken_0x2800d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2800D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2800D4u;
        // 0x2800d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2800d4) {
            ctx->pc = 0x280104u;
            goto label_280104;
        }
    }
    ctx->pc = 0x2800DCu;
    // 0x2800dc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2800dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2800e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2800e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2800e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2800e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2800e8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2800e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2800ec: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x2800ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2800f0: 0x8c9100d4  lw          $s1, 0xD4($a0)
    ctx->pc = 0x2800f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x2800f4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2800F4u;
    SET_GPR_U32(ctx, 31, 0x2800FCu);
    ctx->pc = 0x2800F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2800F4u;
    // 0x2800f8: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2800F4u, 0x2800FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2800FCu;
label_2800fc:
    // 0x2800fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2800fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x280100: 0xae3000fc  sw          $s0, 0xFC($s1)
    ctx->pc = 0x280100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 16));
label_280104:
    // 0x280104: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28010c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28010cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280110: 0x3e00008  jr          $ra
    ctx->pc = 0x280110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280110u;
        // 0x280114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280118u;
}
