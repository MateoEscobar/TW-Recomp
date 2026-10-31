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

// Function: sub_001AAD90
// Address: 0x1aad90 - 0x1aadf0
void sub_001AAD90_0x1aad90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAD90_0x1aad90");
#endif

    switch (ctx->pc) {
        case 0x1aade0u: goto label_1aade0;
        default: break;
    }

    ctx->pc = 0x1aad90u;

    // 0x1aad90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aad90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aad94: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1aad94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aad98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1aad98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1aad9c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1aad9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aada0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aada0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aada4: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1aada4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aada8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1aada8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aadac: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1aadacu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1aadb0: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x1aadb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x1aadb4: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x1aadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
    // 0x1aadb8: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x1aadb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x1aadbc: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1aadbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1aadc0: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1aadc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1aadc4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aadc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aadc8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1aadc8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aadcc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1aadccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1aadd0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1aadd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1aadd4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1aadd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1aadd8: 0xc06db14  jal         func_1B6C50
    ctx->pc = 0x1AADD8u;
    SET_GPR_U32(ctx, 31, 0x1AADE0u);
    ctx->pc = 0x1AADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AADD8u;
    // 0x1aaddc: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C50u, 0x1AADD8u, 0x1AADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AADE0u;
label_1aade0:
    // 0x1aade0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aade0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aade4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AADE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AADE4u;
        // 0x1aade8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AADE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AADECu;
    // 0x1aadec: 0x0  nop
    ctx->pc = 0x1aadecu;
    // NOP
    ctx->pc = 0x1aadf0u;
}
