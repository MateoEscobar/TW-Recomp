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

// Function: sub_00310BE0
// Address: 0x310be0 - 0x310c68
void sub_00310BE0_0x310be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310BE0_0x310be0");
#endif

    switch (ctx->pc) {
        case 0x310c38u: goto label_310c38;
        default: break;
    }

    ctx->pc = 0x310be0u;

    // 0x310be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x310be4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x310be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x310be8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x310be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x310bec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x310bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310bf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x310bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x310bf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x310bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x310bfc: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x310bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x310c00: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x310c00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310c04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x310c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x310c08: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x310c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x310c0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x310c0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x310c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x310c14: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x310c14u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x310c18: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x310c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x310c1c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x310c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x310c20: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x310c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c24: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x310c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x310c28: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x310c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x310c2c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x310c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x310c30: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x310C30u;
    SET_GPR_U32(ctx, 31, 0x310C38u);
    ctx->pc = 0x310C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C30u;
    // 0x310c34: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x310C30u, 0x310C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C38u;
label_310c38:
    // 0x310c38: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x310c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x310c3c: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x310c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x310c40: 0x24423860  addiu       $v0, $v0, 0x3860
    ctx->pc = 0x310c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14432));
    // 0x310c44: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x310c44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x310c48: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x310c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x310c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x310c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x310c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310c54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x310c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310c58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310c5c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x310c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310c60: 0x3e00008  jr          $ra
    ctx->pc = 0x310C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C60u;
        // 0x310c64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310C68u;
}
