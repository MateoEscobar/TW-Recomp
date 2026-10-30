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

// Function: sub_00313E30
// Address: 0x313e30 - 0x313f38
void sub_00313E30_0x313e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313E30_0x313e30");
#endif

    switch (ctx->pc) {
        case 0x313e7cu: goto label_313e7c;
        case 0x313e88u: goto label_313e88;
        case 0x313e94u: goto label_313e94;
        case 0x313ea0u: goto label_313ea0;
        case 0x313ec8u: goto label_313ec8;
        case 0x313f00u: goto label_313f00;
        case 0x313f0cu: goto label_313f0c;
        default: break;
    }

    ctx->pc = 0x313e30u;

    // 0x313e30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x313e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x313e34: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x313e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x313e38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x313e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x313e3c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x313e3cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x313e40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x313e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x313e44: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x313e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x313e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x313e4c: 0x311400ff  andi        $s4, $t0, 0xFF
    ctx->pc = 0x313e4cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x313e50: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x313e50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x313e54: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x313e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x313e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x313e5c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x313e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x313e60: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x313e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x313e64: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x313e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x313e68: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x313e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x313e6c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x313e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x313e70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x313e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x313e74: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x313E74u;
    SET_GPR_U32(ctx, 31, 0x313E7Cu);
    ctx->pc = 0x313E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E74u;
    // 0x313e78: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x313E74u, 0x313E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E7Cu;
label_313e7c:
    // 0x313e7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x313e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x313e80: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x313E80u;
    SET_GPR_U32(ctx, 31, 0x313E88u);
    ctx->pc = 0x313E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E80u;
    // 0x313e84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x313E80u, 0x313E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E88u;
label_313e88:
    // 0x313e88: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x313e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x313e8c: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x313E8Cu;
    SET_GPR_U32(ctx, 31, 0x313E94u);
    ctx->pc = 0x313E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E8Cu;
    // 0x313e90: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x313E8Cu, 0x313E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E94u;
label_313e94:
    // 0x313e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e98: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x313E98u;
    SET_GPR_U32(ctx, 31, 0x313EA0u);
    ctx->pc = 0x313E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E98u;
    // 0x313e9c: 0x27a40018  addiu       $a0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x313E98u, 0x313EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EA0u;
label_313ea0:
    // 0x313ea0: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x313EA0u;
    {
        const bool branch_taken_0x313ea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ea0) {
            ctx->pc = 0x313EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313EA0u;
            // 0x313ea4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313F10u;
            goto label_313f10;
        }
    }
    ctx->pc = 0x313EA8u;
    // 0x313ea8: 0x52400019  beql        $s2, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x313EA8u;
    {
        const bool branch_taken_0x313ea8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x313ea8) {
            ctx->pc = 0x313EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313EA8u;
            // 0x313eac: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313F10u;
            goto label_313f10;
        }
    }
    ctx->pc = 0x313EB0u;
    // 0x313eb0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x313EB0u;
    {
        const bool branch_taken_0x313eb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313EB0u;
        // 0x313eb4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313eb0) {
            ctx->pc = 0x313F10u;
            goto label_313f10;
        }
    }
    ctx->pc = 0x313EB8u;
    // 0x313eb8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x313EB8u;
    {
        const bool branch_taken_0x313eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x313eb8) {
            ctx->pc = 0x313EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313EB8u;
            // 0x313ebc: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313F14u;
            goto label_313f14;
        }
    }
    ctx->pc = 0x313EC0u;
    // 0x313ec0: 0xc0c1956  jal         func_306558
    ctx->pc = 0x313EC0u;
    SET_GPR_U32(ctx, 31, 0x313EC8u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x313EC0u, 0x313EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313EC8u;
label_313ec8:
    // 0x313ec8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ecc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x313ECCu;
    {
        const bool branch_taken_0x313ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313ECCu;
        // 0x313ed0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ecc) {
            ctx->pc = 0x313F00u;
            goto label_313f00;
        }
    }
    ctx->pc = 0x313ED4u;
    // 0x313ed4: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x313ed4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x313ed8: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x313ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x313edc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x313edcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x313ee0: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x313ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x313ee4: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x313ee4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ee8: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x313ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x313eec: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x313eecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ef4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313ef8: 0xc0c4fce  jal         func_313F38
    ctx->pc = 0x313EF8u;
    SET_GPR_U32(ctx, 31, 0x313F00u);
    ctx->pc = 0x313EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313EF8u;
    // 0x313efc: 0x356bffff  ori         $t3, $t3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313F38u, 0x313EF8u, 0x313F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F00u;
label_313f00:
    // 0x313f00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313f04: 0xc059590  jal         func_165640
    ctx->pc = 0x313F04u;
    SET_GPR_U32(ctx, 31, 0x313F0Cu);
    ctx->pc = 0x313F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313F04u;
    // 0x313f08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x313F04u, 0x313F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313F0Cu;
label_313f0c:
    // 0x313f0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x313f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_313f10:
    // 0x313f10: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x313f10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_313f14:
    // 0x313f14: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x313f14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x313f18: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x313f18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x313f1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x313f1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x313f20: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x313f20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x313f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x313f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313f28: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x313f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x313F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313F2Cu;
        // 0x313f30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313F34u;
    // 0x313f34: 0x0  nop
    ctx->pc = 0x313f34u;
    // NOP
    ctx->pc = 0x313f38u;
}
