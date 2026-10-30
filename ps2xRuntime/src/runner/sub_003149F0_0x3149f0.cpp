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

// Function: sub_003149F0
// Address: 0x3149f0 - 0x314aa8
void sub_003149F0_0x3149f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003149F0_0x3149f0");
#endif

    switch (ctx->pc) {
        case 0x314a50u: goto label_314a50;
        default: break;
    }

    ctx->pc = 0x3149f0u;

    // 0x3149f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3149f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3149f4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3149f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3149f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3149f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3149fc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x3149fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x314a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x314a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x314a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x314a08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x314a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x314a0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x314a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x314a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x314a14: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x314a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x314a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x314a1c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x314a1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314a24: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x314a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a28: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x314a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x314a2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x314a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x314a30: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x314a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a34: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x314a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x314a38: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x314a38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x314a3c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x314a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x314a40: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x314a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x314a44: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x314a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x314a48: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x314A48u;
    SET_GPR_U32(ctx, 31, 0x314A50u);
    ctx->pc = 0x314A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314A48u;
    // 0x314a4c: 0xae0a0008  sw          $t2, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x314A48u, 0x314A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314A50u;
label_314a50:
    // 0x314a50: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x314a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x314a54: 0xa2110030  sb          $s1, 0x30($s0)
    ctx->pc = 0x314a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 17));
    // 0x314a58: 0x24423aa0  addiu       $v0, $v0, 0x3AA0
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15008));
    // 0x314a5c: 0xa2120031  sb          $s2, 0x31($s0)
    ctx->pc = 0x314a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 18));
    // 0x314a60: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x314a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x314a64: 0xa2140032  sb          $s4, 0x32($s0)
    ctx->pc = 0x314a64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 20));
    // 0x314a68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x314a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314a6c: 0xa2130033  sb          $s3, 0x33($s0)
    ctx->pc = 0x314a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 51), (uint8_t)GPR_U32(ctx, 19));
    // 0x314a70: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x314a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x314a74: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x314a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x314a78: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x314a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x314a7c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x314a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x314a80: 0xa2000034  sb          $zero, 0x34($s0)
    ctx->pc = 0x314a80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 0));
    // 0x314a84: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x314a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x314a88: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x314a88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x314a8c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x314a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314a90: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x314a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x314a94: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x314a94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314a98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x314A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A9Cu;
        // 0x314aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314AA4u;
    // 0x314aa4: 0x0  nop
    ctx->pc = 0x314aa4u;
    // NOP
    ctx->pc = 0x314aa8u;
}
