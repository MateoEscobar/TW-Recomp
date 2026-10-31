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

// Function: sub_002BCA20
// Address: 0x2bca20 - 0x2bcab8
void sub_002BCA20_0x2bca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BCA20_0x2bca20");
#endif

    switch (ctx->pc) {
        case 0x2bcaa0u: goto label_2bcaa0;
        default: break;
    }

    ctx->pc = 0x2bca20u;

    // 0x2bca20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bca24: 0x460c6302  mul.s       $f12, $f12, $f12
    ctx->pc = 0x2bca24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2bca28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2bca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2bca2c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2bca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2bca30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bca38: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2bca38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2bca3c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2bca3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2bca40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2bca40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bca44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2bca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2bca48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2bca48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2bca4c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2bca4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2bca50: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x2bca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x2bca54: 0x24420570  addiu       $v0, $v0, 0x570
    ctx->pc = 0x2bca54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x2bca58: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2bca58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bca5c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2bca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2bca60: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2bca60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bca64: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2bca64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2bca68: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2bca68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2bca6c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x2bca6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2bca70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2bca70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x2bca74: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x2bca74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x2bca78: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2bca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x2bca7c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2bca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2bca80: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x2bca80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bca84: 0xa2000031  sb          $zero, 0x31($s0)
    ctx->pc = 0x2bca84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bca88: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2bca88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2bca8c: 0xe60c0018  swc1        $f12, 0x18($s0)
    ctx->pc = 0x2bca8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2bca90: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2bca90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2bca94: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2bca94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2bca98: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2BCA98u;
    SET_GPR_U32(ctx, 31, 0x2BCAA0u);
    ctx->pc = 0x2BCA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA98u;
    // 0x2bca9c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2BCA98u, 0x2BCAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAA0u;
label_2bcaa0:
    // 0x2bcaa0: 0xa2020032  sb          $v0, 0x32($s0)
    ctx->pc = 0x2bcaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bcaa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bcaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bcaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bcaac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2bcaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bcab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCAB0u;
        // 0x2bcab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCAB8u;
}
