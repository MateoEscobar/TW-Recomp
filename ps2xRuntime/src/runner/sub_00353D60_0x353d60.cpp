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

// Function: sub_00353D60
// Address: 0x353d60 - 0x353e38
void sub_00353D60_0x353d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353D60_0x353d60");
#endif

    switch (ctx->pc) {
        case 0x353db4u: goto label_353db4;
        case 0x353dc8u: goto label_353dc8;
        case 0x353e08u: goto label_353e08;
        default: break;
    }

    ctx->pc = 0x353d60u;

    // 0x353d60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x353d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x353d64: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x353d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x353d68: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x353d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x353d6c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x353d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353d70: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x353d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x353d74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x353d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d78: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x353d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x353d7c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x353d7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d80: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x353d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x353d84: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x353d84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d88: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x353d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x353d8c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x353d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d90: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x353d90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x353d94: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x353d94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353d98: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x353d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x353d9c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x353d9cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x353da0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x353da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x353da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x353da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dac: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x353DACu;
    SET_GPR_U32(ctx, 31, 0x353DB4u);
    ctx->pc = 0x353DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DACu;
    // 0x353db0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x353DACu, 0x353DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DB4u;
label_353db4:
    // 0x353db4: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x353db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x353db8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x353db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x353dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dc0: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x353DC0u;
    SET_GPR_U32(ctx, 31, 0x353DC8u);
    ctx->pc = 0x353DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353DC0u;
    // 0x353dc4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x353DC0u, 0x353DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353DC8u;
label_353dc8:
    // 0x353dc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x353dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x353dcc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x353dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x353dd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x353dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dd4: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x353dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x353dd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x353dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ddc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x353ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353de0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x353de0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353de4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x353de4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353de8: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x353de8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x353decu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x353df0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x353df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x353df4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x353df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x353df8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353df8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353dfc: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x353dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x353e00: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x353E00u;
    SET_GPR_U32(ctx, 31, 0x353E08u);
    ctx->pc = 0x353E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353E00u;
    // 0x353e04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x353E00u, 0x353E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353E08u;
label_353e08:
    // 0x353e08: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x353e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x353e0c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x353e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x353e10: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x353e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x353e14: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x353e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353e18: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x353e18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353e1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x353e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353e20: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x353e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353e24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x353e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353e28: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x353e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x353e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x353E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353E2Cu;
        // 0x353e30: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353E34u;
    // 0x353e34: 0x0  nop
    ctx->pc = 0x353e34u;
    // NOP
    ctx->pc = 0x353e38u;
}
