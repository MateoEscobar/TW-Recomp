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

// Function: sub_001B8F98
// Address: 0x1b8f98 - 0x1b9040
void sub_001B8F98_0x1b8f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8F98_0x1b8f98");
#endif

    switch (ctx->pc) {
        case 0x1b8fb8u: goto label_1b8fb8;
        case 0x1b8fe0u: goto label_1b8fe0;
        default: break;
    }

    ctx->pc = 0x1b8f98u;

    // 0x1b8f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b8f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b8f9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b8f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b8fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b8fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b8fa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8fac: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1b8facu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1b8fb0: 0xc06a38c  jal         func_1A8E30
    ctx->pc = 0x1B8FB0u;
    SET_GPR_U32(ctx, 31, 0x1B8FB8u);
    ctx->pc = 0x1B8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FB0u;
    // 0x1b8fb4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x1B8FB0u, 0x1B8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FB8u;
label_1b8fb8:
    // 0x1b8fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b8fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b8fbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b8fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b8fc0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1b8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x1b8fc4: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1b8fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1b8fc8: 0x2463a248  addiu       $v1, $v1, -0x5DB8
    ctx->pc = 0x1b8fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943304));
    // 0x1b8fcc: 0xe6140050  swc1        $f20, 0x50($s0)
    ctx->pc = 0x1b8fccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1b8fd0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1b8fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x1b8fd4: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1b8fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1b8fd8: 0xc0686fe  jal         func_1A1BF8
    ctx->pc = 0x1B8FD8u;
    SET_GPR_U32(ctx, 31, 0x1B8FE0u);
    ctx->pc = 0x1B8FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FD8u;
    // 0x1b8fdc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x1B8FD8u, 0x1B8FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FE0u;
label_1b8fe0:
    // 0x1b8fe0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1b8fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1b8fe4: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x1b8fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1b8fe8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1b8fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1b8fec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8ff0: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1b8ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1b8ff4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b8ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ff8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1b8ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1b8ffc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b8ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1b9000: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x1b9000u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1b9004: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b9004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b9008: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1b9008u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1b900c: 0xae110180  sw          $s1, 0x180($s0)
    ctx->pc = 0x1b900cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 17));
    // 0x1b9010: 0xae04019c  sw          $a0, 0x19C($s0)
    ctx->pc = 0x1b9010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 4));
    // 0x1b9014: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1b9014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1b9018: 0xae000174  sw          $zero, 0x174($s0)
    ctx->pc = 0x1b9018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 0));
    // 0x1b901c: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1b901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1b9020: 0xa200017c  sb          $zero, 0x17C($s0)
    ctx->pc = 0x1b9020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 380), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b9024: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b9024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b9028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b902c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b902cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9030: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1b9030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b9034: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9034u;
        // 0x1b9038: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B903Cu;
    // 0x1b903c: 0x0  nop
    ctx->pc = 0x1b903cu;
    // NOP
    ctx->pc = 0x1b9040u;
}
