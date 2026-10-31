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

// Function: sub_002B2C20
// Address: 0x2b2c20 - 0x2b2cd8
void sub_002B2C20_0x2b2c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2C20_0x2b2c20");
#endif

    switch (ctx->pc) {
        case 0x2b2c9cu: goto label_2b2c9c;
        default: break;
    }

    ctx->pc = 0x2b2c20u;

    // 0x2b2c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b2c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b2c24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2b2c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2b2c28: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b2c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b2c2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2b2c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2b2c30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b2c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b2c38: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b2c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b2c3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2b2c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2b2c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2c44: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x2b2c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x2b2c48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b2c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b2c4c: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2b2c4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2b2c50: 0xa2270029  sb          $a3, 0x29($s1)
    ctx->pc = 0x2b2c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 7));
    // 0x2b2c54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b2c54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2c58: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2b2c58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2c5c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b2c60: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2b2c60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2c64: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b2c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b2c68: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2b2c68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b2c6c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2b2c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b2c70: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b2c70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2b2c74: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2b2c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2b2c78: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2b2c78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2b2c7c: 0x240502ee  addiu       $a1, $zero, 0x2EE
    ctx->pc = 0x2b2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
    // 0x2b2c80: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2b2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x2b2c84: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2b2c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x2b2c88: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2b2c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2b2c8c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x2b2c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x2b2c90: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x2b2c90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2b2c94: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B2C94u;
    SET_GPR_U32(ctx, 31, 0x2B2C9Cu);
    ctx->pc = 0x2B2C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2C94u;
    // 0x2b2c98: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B2C94u, 0x2B2C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2C9Cu;
label_2b2c9c:
    // 0x2b2c9c: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x2b2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x2b2ca0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b2ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b2ca4: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x2b2ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x2b2ca8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b2ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2cac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b2cacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2cb0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2b2cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2b2cb4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b2cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2cb8: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2b2cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b2cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2cc0: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x2b2cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
    // 0x2b2cc4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b2cc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2cc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b2cc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2CCCu;
        // 0x2b2cd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2CD4u;
    // 0x2b2cd4: 0x0  nop
    ctx->pc = 0x2b2cd4u;
    // NOP
    ctx->pc = 0x2b2cd8u;
}
