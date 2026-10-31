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

// Function: sub_00368480
// Address: 0x368480 - 0x368530
void sub_00368480_0x368480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368480_0x368480");
#endif

    switch (ctx->pc) {
        case 0x3684a0u: goto label_3684a0;
        case 0x3684b8u: goto label_3684b8;
        case 0x3684c0u: goto label_3684c0;
        case 0x3684d8u: goto label_3684d8;
        case 0x3684e0u: goto label_3684e0;
        case 0x3684f0u: goto label_3684f0;
        case 0x368504u: goto label_368504;
        default: break;
    }

    ctx->pc = 0x368480u;

    // 0x368480: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x368480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x368484: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x368484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x368488: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x368488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x36848c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36848cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368490: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x368490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x368494: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x368494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36849c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36849cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3684a0:
    // 0x3684a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3684a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3684a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3684a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3684a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3684ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3684acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684b0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3684B0u;
    SET_GPR_U32(ctx, 31, 0x3684B8u);
    ctx->pc = 0x3684B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684B0u;
    // 0x3684b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3684B0u, 0x3684B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684B8u;
label_3684b8:
    // 0x3684b8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x3684B8u;
    SET_GPR_U32(ctx, 31, 0x3684C0u);
    ctx->pc = 0x3684BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684B8u;
    // 0x3684bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x3684B8u, 0x3684C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684C0u;
label_3684c0:
    // 0x3684c0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3684c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3684c4: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x3684c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3684c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3684C8u;
    {
        const bool branch_taken_0x3684c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3684CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684C8u;
        // 0x3684cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684c8) {
            ctx->pc = 0x3684A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3684a0;
        }
    }
    ctx->pc = 0x3684D0u;
    // 0x3684d0: 0xc0639ae  jal         func_18E6B8
    ctx->pc = 0x3684D0u;
    SET_GPR_U32(ctx, 31, 0x3684D8u);
    ctx->pc = 0x3684D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684D0u;
    // 0x3684d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6B8u, 0x3684D0u, 0x3684D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684D8u;
label_3684d8:
    // 0x3684d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3684d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3684dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3684e0:
    // 0x3684e0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3684e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3684e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3684e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3684e8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3684E8u;
    SET_GPR_U32(ctx, 31, 0x3684F0u);
    ctx->pc = 0x3684ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684E8u;
    // 0x3684ec: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3684E8u, 0x3684F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684F0u;
label_3684f0:
    // 0x3684f0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3684f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3684f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3684f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3684f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3684fc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3684FCu;
    SET_GPR_U32(ctx, 31, 0x368504u);
    ctx->pc = 0x368500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684FCu;
    // 0x368500: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3684FCu, 0x368504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368504u;
label_368504:
    // 0x368504: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x368504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368508: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368508u;
    {
        const bool branch_taken_0x368508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368508u;
        // 0x36850c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368508) {
            ctx->pc = 0x3684E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3684e0;
        }
    }
    ctx->pc = 0x368510u;
    // 0x368510: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x368510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368514: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368514u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368518: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x368518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36851c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36851cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368524: 0x3e00008  jr          $ra
    ctx->pc = 0x368524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368524u;
        // 0x368528: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36852Cu;
    // 0x36852c: 0x0  nop
    ctx->pc = 0x36852cu;
    // NOP
    ctx->pc = 0x368530u;
}
