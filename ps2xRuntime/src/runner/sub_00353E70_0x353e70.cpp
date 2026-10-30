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

// Function: sub_00353E70
// Address: 0x353e70 - 0x353f40
void sub_00353E70_0x353e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353E70_0x353e70");
#endif

    switch (ctx->pc) {
        case 0x353eb8u: goto label_353eb8;
        case 0x353f14u: goto label_353f14;
        default: break;
    }

    ctx->pc = 0x353e70u;

    // 0x353e70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x353e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x353e74: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x353e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x353e78: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x353e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x353e7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x353e7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e80: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x353e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x353e84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x353e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x353e88: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x353e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x353e8c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x353e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e90: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x353e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x353e94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x353e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353e98: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x353e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x353e9c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x353e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ea0: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x353ea0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x353ea4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x353ea4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ea8: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x353ea8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x353eac: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x353eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x353eb0: 0xc0cd7a8  jal         func_335EA0
    ctx->pc = 0x353EB0u;
    SET_GPR_U32(ctx, 31, 0x353EB8u);
    ctx->pc = 0x353EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353EB0u;
    // 0x353eb4: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335EA0u, 0x353EB0u, 0x353EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353EB8u;
label_353eb8:
    // 0x353eb8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x353eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x353ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ec0: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x353ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x353ec4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x353ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ec8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x353ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x353ecc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x353eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ed0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x353ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ed4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x353ed4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ed8: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x353ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x353edc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x353edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x353ee0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x353ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353ee4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x353ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353ee8: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x353ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353eec: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x353eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ef0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x353ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353ef4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x353ef4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ef8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x353ef8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x353efc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x353efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x353f00: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x353f00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x353f04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x353f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x353f08: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x353f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x353f0c: 0xc0d4e06  jal         func_353818
    ctx->pc = 0x353F0Cu;
    SET_GPR_U32(ctx, 31, 0x353F14u);
    ctx->pc = 0x353F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353F0Cu;
    // 0x353f10: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353818u, 0x353F0Cu, 0x353F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353F14u;
label_353f14:
    // 0x353f14: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x353f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x353f18: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x353f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x353f1c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x353f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x353f20: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x353f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x353f24: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x353f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x353f28: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x353f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x353f2c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x353f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x353f30: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x353f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x353f34: 0x3e00008  jr          $ra
    ctx->pc = 0x353F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353F34u;
        // 0x353f38: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353F3Cu;
    // 0x353f3c: 0x0  nop
    ctx->pc = 0x353f3cu;
    // NOP
    ctx->pc = 0x353f40u;
}
