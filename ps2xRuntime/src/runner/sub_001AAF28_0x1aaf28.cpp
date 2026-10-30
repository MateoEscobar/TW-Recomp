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

// Function: sub_001AAF28
// Address: 0x1aaf28 - 0x1aaf88
void sub_001AAF28_0x1aaf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AAF28_0x1aaf28");
#endif

    switch (ctx->pc) {
        case 0x1aaf78u: goto label_1aaf78;
        default: break;
    }

    ctx->pc = 0x1aaf28u;

    // 0x1aaf28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1aaf2c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1aaf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaf30: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1aaf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1aaf34: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1aaf34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1aaf38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1aaf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf3c: 0xc44c000c  lwc1        $f12, 0xC($v0)
    ctx->pc = 0x1aaf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aaf40: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1aaf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1aaf44: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x1aaf44u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1aaf48: 0xafaa0018  sw          $t2, 0x18($sp)
    ctx->pc = 0x1aaf48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 10));
    // 0x1aaf4c: 0xafab0020  sw          $t3, 0x20($sp)
    ctx->pc = 0x1aaf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 11));
    // 0x1aaf50: 0x240a0043  addiu       $t2, $zero, 0x43
    ctx->pc = 0x1aaf50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1aaf54: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1aaf54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
    // 0x1aaf58: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1aaf58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
    // 0x1aaf5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aaf5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aaf60: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1aaf60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aaf64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1aaf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1aaf68: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1aaf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1aaf6c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1aaf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1aaf70: 0xc06db14  jal         func_1B6C50
    ctx->pc = 0x1AAF70u;
    SET_GPR_U32(ctx, 31, 0x1AAF78u);
    ctx->pc = 0x1AAF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAF70u;
    // 0x1aaf74: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6C50u, 0x1AAF70u, 0x1AAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAF78u;
label_1aaf78:
    // 0x1aaf78: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1aaf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaf7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF7Cu;
        // 0x1aaf80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAF84u;
    // 0x1aaf84: 0x0  nop
    ctx->pc = 0x1aaf84u;
    // NOP
    ctx->pc = 0x1aaf88u;
}
