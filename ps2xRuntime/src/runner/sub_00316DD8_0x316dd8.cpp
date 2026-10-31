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

// Function: sub_00316DD8
// Address: 0x316dd8 - 0x316ee8
void sub_00316DD8_0x316dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316DD8_0x316dd8");
#endif

    switch (ctx->pc) {
        case 0x316e40u: goto label_316e40;
        case 0x316e48u: goto label_316e48;
        case 0x316ea4u: goto label_316ea4;
        case 0x316eb0u: goto label_316eb0;
        default: break;
    }

    ctx->pc = 0x316dd8u;

    // 0x316dd8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x316dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x316ddc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x316ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x316de0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x316de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x316de4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x316de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316de8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x316de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x316dec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x316decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316df0: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x316df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x316df4: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x316df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316df8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x316df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x316dfc: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x316dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e00: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x316e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x316e04: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x316e04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e08: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x316e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x316e0c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x316e0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e10: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x316e10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x316e14: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x316e14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e18: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x316e18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x316e1c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x316e1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x316e20: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x316e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x316e24: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x316e24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x316e28: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x316e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x316e2c: 0x4800020  bltz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x316E2Cu;
    {
        const bool branch_taken_0x316e2c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x316E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E2Cu;
        // 0x316e30: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e2c) {
            ctx->pc = 0x316EB0u;
            goto label_316eb0;
        }
    }
    ctx->pc = 0x316E34u;
    // 0x316e34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316e38: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316E38u;
    SET_GPR_U32(ctx, 31, 0x316E40u);
    ctx->pc = 0x316E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E38u;
    // 0x316e3c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316E38u, 0x316E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E40u;
label_316e40:
    // 0x316e40: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316E40u;
    SET_GPR_U32(ctx, 31, 0x316E48u);
    ctx->pc = 0x316E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E40u;
    // 0x316e44: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316E40u, 0x316E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316E48u;
label_316e48:
    // 0x316e48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316e48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e4c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x316E4Cu;
    {
        const bool branch_taken_0x316e4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316E4Cu;
        // 0x316e50: 0x8fa200e0  lw          $v0, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316e4c) {
            ctx->pc = 0x316EA4u;
            goto label_316ea4;
        }
    }
    ctx->pc = 0x316E54u;
    // 0x316e54: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x316e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x316e58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x316e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x316e5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x316e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x316e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x316e64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316e64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316e68: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x316e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x316e6c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x316e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x316e70: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x316e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x316e74: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x316e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e78: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x316e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x316e7c: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x316e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e80: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x316e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x316e84: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x316e84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e88: 0xafb20018  sw          $s2, 0x18($sp)
    ctx->pc = 0x316e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 18));
    // 0x316e8c: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x316e8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e90: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x316e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x316e94: 0x2c0582d  daddu       $t3, $s6, $zero
    ctx->pc = 0x316e94u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e9c: 0xc0c399c  jal         func_30E670
    ctx->pc = 0x316E9Cu;
    SET_GPR_U32(ctx, 31, 0x316EA4u);
    ctx->pc = 0x316EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316E9Cu;
    // 0x316ea0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E670u, 0x316E9Cu, 0x316EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EA4u;
label_316ea4:
    // 0x316ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ea8: 0xc059590  jal         func_165640
    ctx->pc = 0x316EA8u;
    SET_GPR_U32(ctx, 31, 0x316EB0u);
    ctx->pc = 0x316EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316EA8u;
    // 0x316eac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316EA8u, 0x316EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316EB0u;
label_316eb0:
    // 0x316eb0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x316eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x316eb4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x316eb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x316eb8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x316eb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x316ebc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x316ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x316ec0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x316ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x316ec4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x316ec4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x316ec8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x316ec8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x316ecc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x316eccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x316ed0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x316ed0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316ed4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x316ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316ed8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x316ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316edc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x316edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x316EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316EE0u;
        // 0x316ee4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316EE8u;
}
