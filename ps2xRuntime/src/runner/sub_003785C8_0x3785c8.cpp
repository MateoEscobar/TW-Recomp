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

// Function: sub_003785C8
// Address: 0x3785c8 - 0x3786a0
void sub_003785C8_0x3785c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003785C8_0x3785c8");
#endif

    switch (ctx->pc) {
        case 0x3785f0u: goto label_3785f0;
        case 0x3785f8u: goto label_3785f8;
        case 0x378608u: goto label_378608;
        case 0x378620u: goto label_378620;
        case 0x378628u: goto label_378628;
        case 0x378644u: goto label_378644;
        case 0x378650u: goto label_378650;
        case 0x378660u: goto label_378660;
        case 0x378674u: goto label_378674;
        default: break;
    }

    ctx->pc = 0x3785c8u;

    // 0x3785c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3785c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3785cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3785ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3785d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3785d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3785d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3785d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3785d8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3785d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3785dc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3785dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3785e0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3785e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3785e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3785e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3785e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3785E8u;
    SET_GPR_U32(ctx, 31, 0x3785F0u);
    ctx->pc = 0x3785ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3785E8u;
    // 0x3785ec: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3785E8u, 0x3785F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3785F0u;
label_3785f0:
    // 0x3785f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x3785F0u;
    SET_GPR_U32(ctx, 31, 0x3785F8u);
    ctx->pc = 0x3785F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3785F0u;
    // 0x3785f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x3785F0u, 0x3785F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3785F8u;
label_3785f8:
    // 0x3785f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3785f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3785fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3785fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378600: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x378600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378604: 0x0  nop
    ctx->pc = 0x378604u;
    // NOP
label_378608:
    // 0x378608: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37860c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378610: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378614: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x378614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378618: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x378618u;
    SET_GPR_U32(ctx, 31, 0x378620u);
    ctx->pc = 0x37861Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378618u;
    // 0x37861c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x378618u, 0x378620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378620u;
label_378620:
    // 0x378620: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x378620u;
    SET_GPR_U32(ctx, 31, 0x378628u);
    ctx->pc = 0x378624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378620u;
    // 0x378624: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x378620u, 0x378628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378628u;
label_378628:
    // 0x378628: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x378628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x37862c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37862cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378630: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378630u;
    {
        const bool branch_taken_0x378630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378630u;
        // 0x378634: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378630) {
            ctx->pc = 0x378608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378608;
        }
    }
    ctx->pc = 0x378638u;
    // 0x378638: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x378638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37863c: 0xc0e37ce  jal         func_38DF38
    ctx->pc = 0x37863Cu;
    SET_GPR_U32(ctx, 31, 0x378644u);
    ctx->pc = 0x378640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37863Cu;
    // 0x378640: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38DF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38DF38u, 0x37863Cu, 0x378644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378644u;
label_378644:
    // 0x378644: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x378644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378648: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x378648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x37864c: 0x0  nop
    ctx->pc = 0x37864cu;
    // NOP
label_378650:
    // 0x378650: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x378650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x378654: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x378654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x378658: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x378658u;
    SET_GPR_U32(ctx, 31, 0x378660u);
    ctx->pc = 0x37865Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378658u;
    // 0x37865c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x378658u, 0x378660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378660u;
label_378660:
    // 0x378660: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x378660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x378664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378668: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x378668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37866c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37866Cu;
    SET_GPR_U32(ctx, 31, 0x378674u);
    ctx->pc = 0x378670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37866Cu;
    // 0x378670: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37866Cu, 0x378674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378674u;
label_378674:
    // 0x378674: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x378674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x378678: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x378678u;
    {
        const bool branch_taken_0x378678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378678u;
        // 0x37867c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378678) {
            ctx->pc = 0x378650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378650;
        }
    }
    ctx->pc = 0x378680u;
    // 0x378680: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x378680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x378684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378688: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x378688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37868c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x37868cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378690: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x378690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378694: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x378694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x378698: 0x3e00008  jr          $ra
    ctx->pc = 0x378698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378698u;
        // 0x37869c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3786A0u;
}
