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

// Function: sub_0018B168
// Address: 0x18b168 - 0x18b1e0
void sub_0018B168_0x18b168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B168_0x18b168");
#endif

    switch (ctx->pc) {
        case 0x18b198u: goto label_18b198;
        case 0x18b1b4u: goto label_18b1b4;
        default: break;
    }

    ctx->pc = 0x18b168u;

    // 0x18b168: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18b168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18b16c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x18b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x18b170: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18b170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x18b174: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18b174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x18b178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18b178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b17c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x18b180: 0x2451deb8  addiu       $s1, $v0, -0x2148
    ctx->pc = 0x18b180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958776));
    // 0x18b184: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18b184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18b188: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18b188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b18c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b190: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18b190u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x18b194: 0x0  nop
    ctx->pc = 0x18b194u;
    // NOP
label_18b198:
    // 0x18b198: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x18b198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18b19c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18b19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1a0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18b1a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18b1a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18b1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18b1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b1ac: 0xc063514  jal         func_18D450
    ctx->pc = 0x18B1ACu;
    SET_GPR_U32(ctx, 31, 0x18B1B4u);
    ctx->pc = 0x18B1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B1ACu;
    // 0x18b1b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D450u, 0x18B1ACu, 0x18B1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B1B4u;
label_18b1b4:
    // 0x18b1b4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x18b1b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18b1b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x18B1B8u;
    {
        const bool branch_taken_0x18b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1B8u;
        // 0x18b1bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b1b8) {
            ctx->pc = 0x18B198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b198;
        }
    }
    ctx->pc = 0x18B1C0u;
    // 0x18b1c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18b1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18b1c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18b1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b1c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18b1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b1cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b1ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b1d0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18b1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x18B1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B1D4u;
        // 0x18b1d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B1DCu;
    // 0x18b1dc: 0x0  nop
    ctx->pc = 0x18b1dcu;
    // NOP
    ctx->pc = 0x18b1e0u;
}
