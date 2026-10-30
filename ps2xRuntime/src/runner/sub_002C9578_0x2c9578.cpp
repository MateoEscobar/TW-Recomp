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

// Function: sub_002C9578
// Address: 0x2c9578 - 0x2c95d8
void sub_002C9578_0x2c9578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9578_0x2c9578");
#endif

    switch (ctx->pc) {
        case 0x2c95a0u: goto label_2c95a0;
        default: break;
    }

    ctx->pc = 0x2c9578u;

    // 0x2c9578: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c957c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c957cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9580: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9584: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2c9584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2c9588: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c9588u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c958c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c958cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9590: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c9590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c9598: 0xc0acb08  jal         func_2B2C20
    ctx->pc = 0x2C9598u;
    SET_GPR_U32(ctx, 31, 0x2C95A0u);
    ctx->pc = 0x2C959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C9598u;
    // 0x2c959c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2C9598u, 0x2C95A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C95A0u;
label_2c95a0:
    // 0x2c95a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c95a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2c95a4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2c95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2c95a8: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2c95a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2c95ac: 0x24630e10  addiu       $v1, $v1, 0xE10
    ctx->pc = 0x2c95acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3600));
    // 0x2c95b0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c95b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c95b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c95b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c95b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c95b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c95bc: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2c95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2c95c0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2c95c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2c95c4: 0xae11002c  sw          $s1, 0x2C($s0)
    ctx->pc = 0x2c95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x2c95c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2c95c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c95cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c95ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c95d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C95D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C95D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C95D0u;
        // 0x2c95d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C95D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C95D8u;
}
