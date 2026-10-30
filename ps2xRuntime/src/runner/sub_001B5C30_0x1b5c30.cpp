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

// Function: sub_001B5C30
// Address: 0x1b5c30 - 0x1b5cc8
void sub_001B5C30_0x1b5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5C30_0x1b5c30");
#endif

    switch (ctx->pc) {
        case 0x1b5c70u: goto label_1b5c70;
        case 0x1b5c80u: goto label_1b5c80;
        case 0x1b5ca4u: goto label_1b5ca4;
        default: break;
    }

    ctx->pc = 0x1b5c30u;

    // 0x1b5c30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b5c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b5c34: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b5c38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b5c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b5c3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b5c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b5c40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b5c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c44: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x1b5c44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1b5c48: 0x24510840  addiu       $s1, $v0, 0x840
    ctx->pc = 0x1b5c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x1b5c4c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1b5c4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b5c50: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x1b5c50u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x1b5c54: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b5c54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b5c58: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1b5c58u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1b5c5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b5c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b5c60: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1b5c60u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1b5c64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c68: 0xc06cf44  jal         func_1B3D10
    ctx->pc = 0x1B5C68u;
    SET_GPR_U32(ctx, 31, 0x1B5C70u);
    ctx->pc = 0x1B5C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C68u;
    // 0x1b5c6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D10u, 0x1B5C68u, 0x1B5C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C70u;
label_1b5c70:
    // 0x1b5c70: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5C70u;
    {
        const bool branch_taken_0x1b5c70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5C70u;
        // 0x1b5c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5c70) {
            ctx->pc = 0x1B5CA4u;
            goto label_1b5ca4;
        }
    }
    ctx->pc = 0x1B5C78u;
    // 0x1b5c78: 0xc06cf60  jal         func_1B3D80
    ctx->pc = 0x1B5C78u;
    SET_GPR_U32(ctx, 31, 0x1B5C80u);
    ctx->pc = 0x1B5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C78u;
    // 0x1b5c7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D80u, 0x1B5C78u, 0x1B5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5C80u;
label_1b5c80:
    // 0x1b5c80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b5c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b5c84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b5c84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5c88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b5c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c8c: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x1b5c8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5c90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b5c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5c94: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1b5c94u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b5c98: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1b5c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b5c9c: 0xc06cf4a  jal         func_1B3D28
    ctx->pc = 0x1B5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1B5CA4u);
    ctx->pc = 0x1B5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5C9Cu;
    // 0x1b5ca0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3D28u, 0x1B5C9Cu, 0x1B5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5CA4u;
label_1b5ca4:
    // 0x1b5ca4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b5ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b5ca8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b5ca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5cac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b5cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5cb0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x1b5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b5cb4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1b5cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b5cb8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b5cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5CBCu;
        // 0x1b5cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5CC4u;
    // 0x1b5cc4: 0x0  nop
    ctx->pc = 0x1b5cc4u;
    // NOP
    ctx->pc = 0x1b5cc8u;
}
