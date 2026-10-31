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

// Function: sub_0030B790
// Address: 0x30b790 - 0x30b810
void sub_0030B790_0x30b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B790_0x30b790");
#endif

    switch (ctx->pc) {
        case 0x30b7d8u: goto label_30b7d8;
        default: break;
    }

    ctx->pc = 0x30b790u;

    // 0x30b790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b794: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x30b794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x30b798: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30b79c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x30b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x30b7a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30b7ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x30b7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7b0: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x30b7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x30b7b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30b7b8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x30b7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7bc: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x30b7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x30b7c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x30b7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x30b7c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x30b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x30b7c8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x30b7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b7cc: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x30b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x30b7d0: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x30B7D0u;
    SET_GPR_U32(ctx, 31, 0x30B7D8u);
    ctx->pc = 0x30B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B7D0u;
    // 0x30b7d4: 0xae080008  sw          $t0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x30B7D0u, 0x30B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B7D8u;
label_30b7d8:
    // 0x30b7d8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x30b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x30b7dc: 0xa2110024  sb          $s1, 0x24($s0)
    ctx->pc = 0x30b7dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 36), (uint8_t)GPR_U32(ctx, 17));
    // 0x30b7e0: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x30b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
    // 0x30b7e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30b7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b7e8: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x30b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x30b7ec: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x30b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x30b7f0: 0xa2000025  sb          $zero, 0x25($s0)
    ctx->pc = 0x30b7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 37), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b7f4: 0xa2000026  sb          $zero, 0x26($s0)
    ctx->pc = 0x30b7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x30b7f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30b7f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b804: 0x3e00008  jr          $ra
    ctx->pc = 0x30B804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B804u;
        // 0x30b808: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B80Cu;
    // 0x30b80c: 0x0  nop
    ctx->pc = 0x30b80cu;
    // NOP
    ctx->pc = 0x30b810u;
}
