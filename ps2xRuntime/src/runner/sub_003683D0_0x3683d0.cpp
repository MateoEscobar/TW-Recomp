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

// Function: sub_003683D0
// Address: 0x3683d0 - 0x368480
void sub_003683D0_0x3683d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003683D0_0x3683d0");
#endif

    switch (ctx->pc) {
        case 0x3683f0u: goto label_3683f0;
        case 0x368408u: goto label_368408;
        case 0x368410u: goto label_368410;
        case 0x368428u: goto label_368428;
        case 0x368430u: goto label_368430;
        case 0x368440u: goto label_368440;
        case 0x368454u: goto label_368454;
        default: break;
    }

    ctx->pc = 0x3683d0u;

    // 0x3683d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3683d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3683d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3683d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3683d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3683d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3683dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3683dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3683e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3683e4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x3683e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3683e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3683ec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3683ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3683f0:
    // 0x3683f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3683f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3683f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3683f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3683f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3683f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3683fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3683fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368400: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x368400u;
    SET_GPR_U32(ctx, 31, 0x368408u);
    ctx->pc = 0x368404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368400u;
    // 0x368404: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x368400u, 0x368408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368408u;
label_368408:
    // 0x368408: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x368408u;
    SET_GPR_U32(ctx, 31, 0x368410u);
    ctx->pc = 0x36840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368408u;
    // 0x36840c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x368408u, 0x368410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368410u;
label_368410:
    // 0x368410: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x368410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x368414: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x368414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368418: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368418u;
    {
        const bool branch_taken_0x368418 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368418u;
        // 0x36841c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368418) {
            ctx->pc = 0x3683F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3683f0;
        }
    }
    ctx->pc = 0x368420u;
    // 0x368420: 0xc06397c  jal         func_18E5F0
    ctx->pc = 0x368420u;
    SET_GPR_U32(ctx, 31, 0x368428u);
    ctx->pc = 0x368424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368420u;
    // 0x368424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E5F0u, 0x368420u, 0x368428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368428u;
label_368428:
    // 0x368428: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x368428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36842c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x36842cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_368430:
    // 0x368430: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x368430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x368434: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x368434u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x368438: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x368438u;
    SET_GPR_U32(ctx, 31, 0x368440u);
    ctx->pc = 0x36843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368438u;
    // 0x36843c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x368438u, 0x368440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368440u;
label_368440:
    // 0x368440: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x368440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x368444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36844c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x36844Cu;
    SET_GPR_U32(ctx, 31, 0x368454u);
    ctx->pc = 0x368450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36844Cu;
    // 0x368450: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x36844Cu, 0x368454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368454u;
label_368454:
    // 0x368454: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x368454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x368458: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x368458u;
    {
        const bool branch_taken_0x368458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368458u;
        // 0x36845c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368458) {
            ctx->pc = 0x368430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368430;
        }
    }
    ctx->pc = 0x368460u;
    // 0x368460: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x368460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x368464: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x368464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368468: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x368468u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36846c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36846cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368470: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368474: 0x3e00008  jr          $ra
    ctx->pc = 0x368474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368474u;
        // 0x368478: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36847Cu;
    // 0x36847c: 0x0  nop
    ctx->pc = 0x36847cu;
    // NOP
    ctx->pc = 0x368480u;
}
