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

// Function: sub_00374518
// Address: 0x374518 - 0x374620
void sub_00374518_0x374518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374518_0x374518");
#endif

    switch (ctx->pc) {
        case 0x374548u: goto label_374548;
        case 0x374550u: goto label_374550;
        case 0x374568u: goto label_374568;
        case 0x374570u: goto label_374570;
        case 0x374580u: goto label_374580;
        case 0x374598u: goto label_374598;
        case 0x3745a0u: goto label_3745a0;
        case 0x3745c0u: goto label_3745c0;
        case 0x3745c8u: goto label_3745c8;
        case 0x3745d8u: goto label_3745d8;
        case 0x3745ecu: goto label_3745ec;
        default: break;
    }

    ctx->pc = 0x374518u;

    // 0x374518: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x374518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37451c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37451cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374520: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x374520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x374524: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x374524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x374528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37452c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37452cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374530: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x374530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x374534: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x374534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x374538: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x374538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x37453c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x374540: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374540u;
    SET_GPR_U32(ctx, 31, 0x374548u);
    ctx->pc = 0x374544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374540u;
    // 0x374544: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374540u, 0x374548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374548u;
label_374548:
    // 0x374548: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x374548u;
    SET_GPR_U32(ctx, 31, 0x374550u);
    ctx->pc = 0x37454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374548u;
    // 0x37454c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x374548u, 0x374550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374550u;
label_374550:
    // 0x374550: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x374550u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x374554: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x374554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37455c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37455cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x374560: 0xc102472  jal         func_4091C8
    ctx->pc = 0x374560u;
    SET_GPR_U32(ctx, 31, 0x374568u);
    ctx->pc = 0x374564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374560u;
    // 0x374564: 0x2a403  sra         $s4, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x374560u, 0x374568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374568u;
label_374568:
    // 0x374568: 0xc10b108  jal         func_42C420
    ctx->pc = 0x374568u;
    SET_GPR_U32(ctx, 31, 0x374570u);
    ctx->pc = 0x37456Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374568u;
    // 0x37456c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x374568u, 0x374570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374570u;
label_374570:
    // 0x374570: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x374570u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374578: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x374578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37457c: 0x0  nop
    ctx->pc = 0x37457cu;
    // NOP
label_374580:
    // 0x374580: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x374580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x374584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x374584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374588: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x374588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37458c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37458cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374590: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x374590u;
    SET_GPR_U32(ctx, 31, 0x374598u);
    ctx->pc = 0x374594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374590u;
    // 0x374594: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x374590u, 0x374598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374598u;
label_374598:
    // 0x374598: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x374598u;
    SET_GPR_U32(ctx, 31, 0x3745A0u);
    ctx->pc = 0x37459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374598u;
    // 0x37459c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x374598u, 0x3745A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745A0u;
label_3745a0:
    // 0x3745a0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3745a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3745a4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3745a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3745a8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3745A8u;
    {
        const bool branch_taken_0x3745a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3745ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745A8u;
        // 0x3745ac: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745a8) {
            ctx->pc = 0x374580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374580;
        }
    }
    ctx->pc = 0x3745B0u;
    // 0x3745b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3745b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745b4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3745b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745b8: 0xc05adca  jal         func_16B728
    ctx->pc = 0x3745B8u;
    SET_GPR_U32(ctx, 31, 0x3745C0u);
    ctx->pc = 0x3745BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745B8u;
    // 0x3745bc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B728u, 0x3745B8u, 0x3745C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745C0u;
label_3745c0:
    // 0x3745c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3745c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745c4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3745c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3745c8:
    // 0x3745c8: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x3745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3745cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3745ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3745d0: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3745D0u;
    SET_GPR_U32(ctx, 31, 0x3745D8u);
    ctx->pc = 0x3745D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745D0u;
    // 0x3745d4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3745D0u, 0x3745D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745D8u;
label_3745d8:
    // 0x3745d8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3745d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3745dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3745e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3745e4: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3745E4u;
    SET_GPR_U32(ctx, 31, 0x3745ECu);
    ctx->pc = 0x3745E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3745E4u;
    // 0x3745e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3745E4u, 0x3745ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3745ECu;
label_3745ec:
    // 0x3745ec: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3745ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3745f0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3745F0u;
    {
        const bool branch_taken_0x3745f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3745F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745F0u;
        // 0x3745f4: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745f0) {
            ctx->pc = 0x3745C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3745c8;
        }
    }
    ctx->pc = 0x3745F8u;
    // 0x3745f8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3745f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3745fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3745fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374600: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x374600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x374604: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x374604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x374608: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x374608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37460c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x37460cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x374610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374614: 0x3e00008  jr          $ra
    ctx->pc = 0x374614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374614u;
        // 0x374618: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37461Cu;
    // 0x37461c: 0x0  nop
    ctx->pc = 0x37461cu;
    // NOP
    ctx->pc = 0x374620u;
}
