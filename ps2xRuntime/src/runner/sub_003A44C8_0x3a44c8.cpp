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

// Function: sub_003A44C8
// Address: 0x3a44c8 - 0x3a45a0
void sub_003A44C8_0x3a44c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A44C8_0x3a44c8");
#endif

    switch (ctx->pc) {
        case 0x3a44e4u: goto label_3a44e4;
        case 0x3a44fcu: goto label_3a44fc;
        case 0x3a4514u: goto label_3a4514;
        case 0x3a4524u: goto label_3a4524;
        case 0x3a453cu: goto label_3a453c;
        case 0x3a4550u: goto label_3a4550;
        case 0x3a4560u: goto label_3a4560;
        case 0x3a456cu: goto label_3a456c;
        case 0x3a4578u: goto label_3a4578;
        default: break;
    }

    ctx->pc = 0x3a44c8u;

    // 0x3a44c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a44c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a44cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a44d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a44d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a44d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a44d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a44d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a44d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a44dc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A44DCu;
    SET_GPR_U32(ctx, 31, 0x3A44E4u);
    ctx->pc = 0x3A44E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A44DCu;
    // 0x3a44e0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A44DCu, 0x3A44E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A44E4u;
label_3a44e4:
    // 0x3a44e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a44e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a44e8: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x3a44e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x3a44ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A44ECu;
    {
        const bool branch_taken_0x3a44ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a44ec) {
            ctx->pc = 0x3A44FCu;
            goto label_3a44fc;
        }
    }
    ctx->pc = 0x3A44F4u;
    // 0x3a44f4: 0xc0e5532  jal         func_3954C8
    ctx->pc = 0x3A44F4u;
    SET_GPR_U32(ctx, 31, 0x3A44FCu);
    ctx->pc = 0x3A44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A44F4u;
    // 0x3a44f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3954C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3954C8u, 0x3A44F4u, 0x3A44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A44FCu;
label_3a44fc:
    // 0x3a44fc: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A44FCu;
    {
        const bool branch_taken_0x3a44fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A44FCu;
        // 0x3a4500: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a44fc) {
            ctx->pc = 0x3A4530u;
            goto label_3a4530;
        }
    }
    ctx->pc = 0x3A4504u;
    // 0x3a4504: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3a4504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x3a4508: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x3a4508u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x3a450c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A450Cu;
    SET_GPR_U32(ctx, 31, 0x3A4514u);
    ctx->pc = 0x3A4510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A450Cu;
    // 0x3a4510: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A450Cu, 0x3A4514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4514u;
label_3a4514:
    // 0x3a4514: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3a4514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x3a4518: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3a4518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a451c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x3A451Cu;
    SET_GPR_U32(ctx, 31, 0x3A4524u);
    ctx->pc = 0x3A4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A451Cu;
    // 0x3a4520: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x3A451Cu, 0x3A4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4524u;
label_3a4524:
    // 0x3a4524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a4524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4528: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3A4528u;
    {
        const bool branch_taken_0x3a4528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4528u;
        // 0x3a452c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4528) {
            ctx->pc = 0x3A4584u;
            goto label_3a4584;
        }
    }
    ctx->pc = 0x3A4530u;
label_3a4530:
    // 0x3a4530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a4530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4534: 0xc06046c  jal         func_1811B0
    ctx->pc = 0x3A4534u;
    SET_GPR_U32(ctx, 31, 0x3A453Cu);
    ctx->pc = 0x3A4538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4534u;
    // 0x3a4538: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811B0u, 0x3A4534u, 0x3A453Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A453Cu;
label_3a453c:
    // 0x3a453c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A453Cu;
    {
        const bool branch_taken_0x3a453c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A453Cu;
        // 0x3a4540: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a453c) {
            ctx->pc = 0x3A4580u;
            goto label_3a4580;
        }
    }
    ctx->pc = 0x3A4544u;
    // 0x3a4544: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a4544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4548: 0xc06022e  jal         func_1808B8
    ctx->pc = 0x3A4548u;
    SET_GPR_U32(ctx, 31, 0x3A4550u);
    ctx->pc = 0x3A454Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4548u;
    // 0x3a454c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1808B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1808B8u, 0x3A4548u, 0x3A4550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4550u;
label_3a4550:
    // 0x3a4550: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A4550u;
    {
        const bool branch_taken_0x3a4550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4550u;
        // 0x3a4554: 0x8e24cd4c  lw          $a0, -0x32B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4550) {
            ctx->pc = 0x3A4584u;
            goto label_3a4584;
        }
    }
    ctx->pc = 0x3A4558u;
    // 0x3a4558: 0xc06046c  jal         func_1811B0
    ctx->pc = 0x3A4558u;
    SET_GPR_U32(ctx, 31, 0x3A4560u);
    ctx->pc = 0x3A455Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4558u;
    // 0x3a455c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1811B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1811B0u, 0x3A4558u, 0x3A4560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4560u;
label_3a4560:
    // 0x3a4560: 0x8e24cd4c  lw          $a0, -0x32B4($s1)
    ctx->pc = 0x3a4560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954316)));
    // 0x3a4564: 0xc0603d6  jal         func_180F58
    ctx->pc = 0x3A4564u;
    SET_GPR_U32(ctx, 31, 0x3A456Cu);
    ctx->pc = 0x3A4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4564u;
    // 0x3a4568: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F58u, 0x3A4564u, 0x3A456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A456Cu;
label_3a456c:
    // 0x3a456c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a456cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4570: 0xc0e5526  jal         func_395498
    ctx->pc = 0x3A4570u;
    SET_GPR_U32(ctx, 31, 0x3A4578u);
    ctx->pc = 0x3A4574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4570u;
    // 0x3a4574: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395498u, 0x3A4570u, 0x3A4578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4578u;
label_3a4578:
    // 0x3a4578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A4578u;
    {
        const bool branch_taken_0x3a4578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4578u;
        // 0x3a457c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4578) {
            ctx->pc = 0x3A4588u;
            goto label_3a4588;
        }
    }
    ctx->pc = 0x3A4580u;
label_3a4580:
    // 0x3a4580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a4580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a4584:
    // 0x3a4584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a4584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a4588:
    // 0x3a4588: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a4588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a458c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a458cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a4590: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a4590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a4594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4598: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4598u;
        // 0x3a459c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A45A0u;
}
