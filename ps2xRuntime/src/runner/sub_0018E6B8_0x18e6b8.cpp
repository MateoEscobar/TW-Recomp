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

// Function: sub_0018E6B8
// Address: 0x18e6b8 - 0x18e780
void sub_0018E6B8_0x18e6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E6B8_0x18e6b8");
#endif

    switch (ctx->pc) {
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e720u: goto label_18e720;
        case 0x18e740u: goto label_18e740;
        case 0x18e754u: goto label_18e754;
        default: break;
    }

    ctx->pc = 0x18e6b8u;

    // 0x18e6b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18e6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18e6bc: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x18e6bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x18e6c0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18e6c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18e6c8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x18e6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18e6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18e6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18e6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18e6d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18e6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e6dc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x18e6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x18e6e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18e6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18e6e4: 0x0  nop
    ctx->pc = 0x18e6e4u;
    // NOP
label_18e6e8:
    // 0x18e6e8: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x18e6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18e6ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18e6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18e6f0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18e6f4: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x18E6F4u;
    SET_GPR_U32(ctx, 31, 0x18E6FCu);
    ctx->pc = 0x18E6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6F4u;
    // 0x18e6f8: 0x46146302  mul.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x18E6F4u, 0x18E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6FCu;
label_18e6fc:
    // 0x18e6fc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x18e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18e700: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x18e700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x18e704: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18E704u;
    {
        const bool branch_taken_0x18e704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E704u;
        // 0x18e708: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e704) {
            ctx->pc = 0x18E6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e6e8;
        }
    }
    ctx->pc = 0x18E70Cu;
    // 0x18e70c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18e710: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18e710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e714: 0x2450deb8  addiu       $s0, $v0, -0x2148
    ctx->pc = 0x18e714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18e718: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x18e71c: 0x0  nop
    ctx->pc = 0x18e71cu;
    // NOP
label_18e720:
    // 0x18e720: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18e720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18e724: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18e724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e728: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18e728u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e72c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18e72cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e730: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x18e730u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e734: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18e734u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e738: 0xc062d2a  jal         func_18B4A8
    ctx->pc = 0x18E738u;
    SET_GPR_U32(ctx, 31, 0x18E740u);
    ctx->pc = 0x18E73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E738u;
    // 0x18e73c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B4A8u, 0x18E738u, 0x18E740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E740u;
label_18e740:
    // 0x18e740: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18e740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x18e744: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18e748: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x18e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18e74c: 0xc062d18  jal         func_18B460
    ctx->pc = 0x18E74Cu;
    SET_GPR_U32(ctx, 31, 0x18E754u);
    ctx->pc = 0x18E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E74Cu;
    // 0x18e750: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B460u, 0x18E74Cu, 0x18E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E754u;
label_18e754:
    // 0x18e754: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x18e754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18e758: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x18E758u;
    {
        const bool branch_taken_0x18e758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e758) {
            ctx->pc = 0x18E75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E758u;
            // 0x18e75c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18e720;
        }
    }
    ctx->pc = 0x18E760u;
    // 0x18e760: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18e760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e764: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18e764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18e768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e76c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e770: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x18e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18e774: 0x3e00008  jr          $ra
    ctx->pc = 0x18E774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E774u;
        // 0x18e778: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E77Cu;
    // 0x18e77c: 0x0  nop
    ctx->pc = 0x18e77cu;
    // NOP
    ctx->pc = 0x18e780u;
}
