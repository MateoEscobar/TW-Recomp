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

// Function: sub_001C2E38
// Address: 0x1c2e38 - 0x1c2f30
void sub_001C2E38_0x1c2e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2E38_0x1c2e38");
#endif

    switch (ctx->pc) {
        case 0x1c2ea0u: goto label_1c2ea0;
        case 0x1c2eccu: goto label_1c2ecc;
        case 0x1c2ed8u: goto label_1c2ed8;
        default: break;
    }

    ctx->pc = 0x1c2e38u;

    // 0x1c2e38: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1c2e3c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1c2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1c2e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c2e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e44: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1c2e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1c2e48: 0x26223390  addiu       $v0, $s1, 0x3390
    ctx->pc = 0x1c2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 13200));
    // 0x1c2e4c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1c2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1c2e50: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1c2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1c2e54: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1c2e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e58: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1c2e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1c2e5c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1c2e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1c2e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1c2e64: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x1c2e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e68: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1c2e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1c2e6c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1c2e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e70: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1c2e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1c2e74: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1c2e74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e78: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1c2e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1c2e7c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c2e7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e80: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1c2e80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1c2e84: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1c2e84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e88: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c2e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c2e8c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c2e8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c2e90: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1c2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1c2e94: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c2e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2e98: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1c2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c2e9c: 0x0  nop
    ctx->pc = 0x1c2e9cu;
    // NOP
label_1c2ea0:
    // 0x1c2ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1c2ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ea8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1c2ea8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1c2eac: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1c2eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1c2eb0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1c2eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2eb4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1c2eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2eb8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x1c2eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ebc: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x1c2ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ec0: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x1c2ec0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ec4: 0xc070ad2  jal         func_1C2B48
    ctx->pc = 0x1C2EC4u;
    SET_GPR_U32(ctx, 31, 0x1C2ECCu);
    ctx->pc = 0x1C2EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2EC4u;
    // 0x1c2ec8: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2B48u, 0x1C2EC4u, 0x1C2ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ECCu;
label_1c2ecc:
    // 0x1c2ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ed0: 0xc06e51e  jal         func_1B9478
    ctx->pc = 0x1C2ED0u;
    SET_GPR_U32(ctx, 31, 0x1C2ED8u);
    ctx->pc = 0x1C2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2ED0u;
    // 0x1c2ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1C2ED0u, 0x1C2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2ED8u;
label_1c2ed8:
    // 0x1c2ed8: 0x26100a50  addiu       $s0, $s0, 0xA50
    ctx->pc = 0x1c2ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x1c2edc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1c2edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2ee0: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1c2ee0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c2ee4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C2EE4u;
    {
        const bool branch_taken_0x1c2ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ee4) {
            ctx->pc = 0x1C2EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2EE4u;
            // 0x1c2ee8: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2ea0;
        }
    }
    ctx->pc = 0x1C2EECu;
    // 0x1c2eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c2eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2ef0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1c2ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2ef4: 0xe6203390  swc1        $f0, 0x3390($s1)
    ctx->pc = 0x1c2ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 13200), bits); }
    // 0x1c2ef8: 0xe6203394  swc1        $f0, 0x3394($s1)
    ctx->pc = 0x1c2ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 13204), bits); }
    // 0x1c2efc: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1c2efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c2f00: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1c2f00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2f04: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1c2f04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2f08: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1c2f08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2f0c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1c2f0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2f10: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1c2f10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2f14: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1c2f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2f18: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1c2f18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2f1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c2f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2f20: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1c2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c2f24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F24u;
        // 0x1c2f28: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2F2Cu;
    // 0x1c2f2c: 0x0  nop
    ctx->pc = 0x1c2f2cu;
    // NOP
    ctx->pc = 0x1c2f30u;
}
