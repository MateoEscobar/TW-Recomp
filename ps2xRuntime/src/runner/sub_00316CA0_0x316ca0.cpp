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

// Function: sub_00316CA0
// Address: 0x316ca0 - 0x316d58
void sub_00316CA0_0x316ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316CA0_0x316ca0");
#endif

    switch (ctx->pc) {
        case 0x316ce4u: goto label_316ce4;
        case 0x316cf8u: goto label_316cf8;
        case 0x316d20u: goto label_316d20;
        case 0x316d2cu: goto label_316d2c;
        default: break;
    }

    ctx->pc = 0x316ca0u;

    // 0x316ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x316ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x316ca4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x316ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x316ca8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x316cac: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x316cb0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x316cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x316cb4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x316cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cb8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x316cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x316cbc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x316cbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cc0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x316cc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x316cc4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x316cc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cc8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x316cc8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x316ccc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x316cccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x316cd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x316cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x316cd4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x316cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x316cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316cdc: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316CDCu;
    SET_GPR_U32(ctx, 31, 0x316CE4u);
    ctx->pc = 0x316CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316CDCu;
    // 0x316ce0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316CDCu, 0x316CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CE4u;
label_316ce4:
    // 0x316ce4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x316ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316ce8: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x316CE8u;
    {
        const bool branch_taken_0x316ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CE8u;
        // 0x316cec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ce8) {
            ctx->pc = 0x316D30u;
            goto label_316d30;
        }
    }
    ctx->pc = 0x316CF0u;
    // 0x316cf0: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316CF0u;
    SET_GPR_U32(ctx, 31, 0x316CF8u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316CF0u, 0x316CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316CF8u;
label_316cf8:
    // 0x316cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316cfc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316CFCu;
    {
        const bool branch_taken_0x316cfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316CFCu;
        // 0x316d00: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316cfc) {
            ctx->pc = 0x316D20u;
            goto label_316d20;
        }
    }
    ctx->pc = 0x316D04u;
    // 0x316d04: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316d04u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316d08: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x316d08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x316d0c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x316d0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d10: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x316d10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x316d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d18: 0xc0c761e  jal         func_31D878
    ctx->pc = 0x316D18u;
    SET_GPR_U32(ctx, 31, 0x316D20u);
    ctx->pc = 0x316D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D18u;
    // 0x316d1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D878u, 0x316D18u, 0x316D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D20u;
label_316d20:
    // 0x316d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316d24: 0xc059590  jal         func_165640
    ctx->pc = 0x316D24u;
    SET_GPR_U32(ctx, 31, 0x316D2Cu);
    ctx->pc = 0x316D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316D24u;
    // 0x316d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316D24u, 0x316D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316D2Cu;
label_316d2c:
    // 0x316d2c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x316d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_316d30:
    // 0x316d30: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x316d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316d34: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316d38: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x316d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316d3c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x316d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316d44: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x316d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x316d48: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x316d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x316D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316D4Cu;
        // 0x316d50: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316D54u;
    // 0x316d54: 0x0  nop
    ctx->pc = 0x316d54u;
    // NOP
    ctx->pc = 0x316d58u;
}
