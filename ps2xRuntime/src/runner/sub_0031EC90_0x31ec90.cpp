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

// Function: sub_0031EC90
// Address: 0x31ec90 - 0x31ed40
void sub_0031EC90_0x31ec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EC90_0x31ec90");
#endif

    switch (ctx->pc) {
        case 0x31ece0u: goto label_31ece0;
        default: break;
    }

    ctx->pc = 0x31ec90u;

    // 0x31ec90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31ec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31ec94: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x31ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x31ec98: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31ec98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31ec9c: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x31ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x31eca0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eca4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31eca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31eca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ecac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31ecacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecb0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x31ecb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x31ecb4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x31ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x31ecb8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31ecb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31ecbc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x31ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x31ecc0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x31ecc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ecc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x31ecc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x31ecc8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x31ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x31eccc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x31ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x31ecd0: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x31ecd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x31ecd4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x31ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x31ecd8: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x31ECD8u;
    SET_GPR_U32(ctx, 31, 0x31ECE0u);
    ctx->pc = 0x31ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31ECD8u;
    // 0x31ecdc: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x31ECD8u, 0x31ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31ECE0u;
label_31ece0:
    // 0x31ece0: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x31ece0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x31ece4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31ece8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31ece8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x31ecec: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x31ececu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x31ecf0: 0x246340a0  addiu       $v1, $v1, 0x40A0
    ctx->pc = 0x31ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16544));
    // 0x31ecf4: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x31ecf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x31ecf8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x31ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x31ecfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ecfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ed00: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x31ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x31ed04: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x31ed04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x31ed08: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x31ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x31ed0c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x31ed0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x31ed10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31ed10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ed14: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x31ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x31ed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ed1c: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x31ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x31ed20: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x31ed20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31ed24: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x31ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x31ed28: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x31ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x31ed2c: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x31ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
    // 0x31ed30: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x31ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x31ed34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31ed34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ed38: 0x3e00008  jr          $ra
    ctx->pc = 0x31ED38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31ED38u;
        // 0x31ed3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31ED38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31ED40u;
}
