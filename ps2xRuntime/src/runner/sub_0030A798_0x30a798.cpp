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

// Function: sub_0030A798
// Address: 0x30a798 - 0x30a860
void sub_0030A798_0x30a798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A798_0x30a798");
#endif

    switch (ctx->pc) {
        case 0x30a798u: goto label_30a798;
        case 0x30a79cu: goto label_30a79c;
        case 0x30a7a0u: goto label_30a7a0;
        case 0x30a7a4u: goto label_30a7a4;
        case 0x30a7a8u: goto label_30a7a8;
        case 0x30a7acu: goto label_30a7ac;
        case 0x30a7b0u: goto label_30a7b0;
        case 0x30a7b4u: goto label_30a7b4;
        case 0x30a7b8u: goto label_30a7b8;
        case 0x30a7bcu: goto label_30a7bc;
        case 0x30a7c0u: goto label_30a7c0;
        case 0x30a7c4u: goto label_30a7c4;
        case 0x30a7c8u: goto label_30a7c8;
        case 0x30a7ccu: goto label_30a7cc;
        case 0x30a7d0u: goto label_30a7d0;
        case 0x30a7d4u: goto label_30a7d4;
        case 0x30a7d8u: goto label_30a7d8;
        case 0x30a7dcu: goto label_30a7dc;
        case 0x30a7e0u: goto label_30a7e0;
        case 0x30a7e4u: goto label_30a7e4;
        case 0x30a7e8u: goto label_30a7e8;
        case 0x30a7ecu: goto label_30a7ec;
        case 0x30a7f0u: goto label_30a7f0;
        case 0x30a7f4u: goto label_30a7f4;
        case 0x30a7f8u: goto label_30a7f8;
        case 0x30a7fcu: goto label_30a7fc;
        case 0x30a800u: goto label_30a800;
        case 0x30a804u: goto label_30a804;
        case 0x30a808u: goto label_30a808;
        case 0x30a80cu: goto label_30a80c;
        case 0x30a810u: goto label_30a810;
        case 0x30a814u: goto label_30a814;
        case 0x30a818u: goto label_30a818;
        case 0x30a81cu: goto label_30a81c;
        case 0x30a820u: goto label_30a820;
        case 0x30a824u: goto label_30a824;
        case 0x30a828u: goto label_30a828;
        case 0x30a82cu: goto label_30a82c;
        case 0x30a830u: goto label_30a830;
        case 0x30a834u: goto label_30a834;
        case 0x30a838u: goto label_30a838;
        case 0x30a83cu: goto label_30a83c;
        case 0x30a840u: goto label_30a840;
        case 0x30a844u: goto label_30a844;
        case 0x30a848u: goto label_30a848;
        case 0x30a84cu: goto label_30a84c;
        case 0x30a850u: goto label_30a850;
        case 0x30a854u: goto label_30a854;
        case 0x30a858u: goto label_30a858;
        case 0x30a85cu: goto label_30a85c;
        default: break;
    }

    ctx->pc = 0x30a798u;

label_30a798:
    // 0x30a798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30a798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30a79c:
    // 0x30a79c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30a79cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_30a7a0:
    // 0x30a7a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30a7a4:
    // 0x30a7a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30a7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30a7a8:
    // 0x30a7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30a7ac:
    // 0x30a7ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30a7b0:
    // 0x30a7b0: 0xc08a61a  jal         func_229868
label_30a7b4:
    if (ctx->pc == 0x30A7B4u) {
        ctx->pc = 0x30A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7B0u;
        // 0x30a7b4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A7B8u;
        goto label_30a7b8;
    }
    ctx->pc = 0x30A7B0u;
    SET_GPR_U32(ctx, 31, 0x30A7B8u);
    ctx->pc = 0x30A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7B0u;
    // 0x30a7b4: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30A7B0u, 0x30A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A7B8u;
label_30a7b8:
    // 0x30a7b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30a7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30a7bc:
    // 0x30a7bc: 0x10a00029  beqz        $a1, . + 4 + (0x29 << 2)
label_30a7c0:
    if (ctx->pc == 0x30A7C0u) {
        ctx->pc = 0x30A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7BCu;
        // 0x30a7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A7C4u;
        goto label_30a7c4;
    }
    ctx->pc = 0x30A7BCu;
    {
        const bool branch_taken_0x30a7bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7BCu;
        // 0x30a7c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7bc) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
    ctx->pc = 0x30A7C4u;
label_30a7c4:
    // 0x30a7c4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x30a7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_30a7c8:
    // 0x30a7c8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30a7cc:
    // 0x30a7cc: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30a7ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30a7d0:
    // 0x30a7d0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
label_30a7d4:
    if (ctx->pc == 0x30A7D4u) {
        ctx->pc = 0x30A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7D0u;
        // 0x30a7d4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A7D8u;
        goto label_30a7d8;
    }
    ctx->pc = 0x30A7D0u;
    {
        const bool branch_taken_0x30a7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7D0u;
        // 0x30a7d4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7d0) {
            ctx->pc = 0x30A860u;
            return;
        }
    }
    ctx->pc = 0x30A7D8u;
label_30a7d8:
    // 0x30a7d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30a7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30a7dc:
    // 0x30a7dc: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x30a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_30a7e0:
    // 0x30a7e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30a7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30a7e4:
    // 0x30a7e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30a7e8:
    // 0x30a7e8: 0x800008  jr          $a0
label_30a7ec:
    if (ctx->pc == 0x30A7ECu) {
        ctx->pc = 0x30A7F0u;
        goto label_30a7f0;
    }
    ctx->pc = 0x30A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30A7F0u: goto label_30a7f0;
            case 0x30A800u: goto label_30a800;
            case 0x30A838u: goto label_30a838;
            case 0x30A844u: goto label_30a844;
            case 0x30A84Cu: goto label_30a84c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A7E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30A7F0u;
label_30a7f0:
    // 0x30a7f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30a7f4:
    // 0x30a7f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a7f8:
    // 0x30a7f8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30a7fc:
    if (ctx->pc == 0x30A7FCu) {
        ctx->pc = 0x30A7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7F8u;
        // 0x30a7fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A800u;
        goto label_30a800;
    }
    ctx->pc = 0x30A7F8u;
    {
        const bool branch_taken_0x30a7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30a7f8) {
            ctx->pc = 0x30A7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30A7F8u;
            // 0x30a7fc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30A810u;
            goto label_30a810;
        }
    }
    ctx->pc = 0x30A800u;
label_30a800:
    // 0x30a800: 0xc0c27a8  jal         func_309EA0
label_30a804:
    if (ctx->pc == 0x30A804u) {
        ctx->pc = 0x30A804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A800u;
        // 0x30a804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A808u;
        goto label_30a808;
    }
    ctx->pc = 0x30A800u;
    SET_GPR_U32(ctx, 31, 0x30A808u);
    ctx->pc = 0x30A804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A800u;
    // 0x30a804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309EA0u, 0x30A800u, 0x30A808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A808u;
label_30a808:
    // 0x30a808: 0x10000016  b           . + 4 + (0x16 << 2)
label_30a80c:
    if (ctx->pc == 0x30A80Cu) {
        ctx->pc = 0x30A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A808u;
        // 0x30a80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A810u;
        goto label_30a810;
    }
    ctx->pc = 0x30A808u;
    {
        const bool branch_taken_0x30a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A808u;
        // 0x30a80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a808) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
    ctx->pc = 0x30A810u;
label_30a810:
    // 0x30a810: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_30a814:
    if (ctx->pc == 0x30A814u) {
        ctx->pc = 0x30A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A810u;
        // 0x30a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A818u;
        goto label_30a818;
    }
    ctx->pc = 0x30A810u;
    {
        const bool branch_taken_0x30a810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A810u;
        // 0x30a814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a810) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
    ctx->pc = 0x30A818u;
label_30a818:
    // 0x30a818: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_30a81c:
    // 0x30a81c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30a81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a820:
    // 0x30a820: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30a820u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30a824:
    // 0x30a824: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30a824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30a828:
    // 0x30a828: 0x60f809  jalr        $v1
label_30a82c:
    if (ctx->pc == 0x30A82Cu) {
        ctx->pc = 0x30A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A828u;
        // 0x30a82c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A830u;
        goto label_30a830;
    }
    ctx->pc = 0x30A828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30A830u);
        ctx->pc = 0x30A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A828u;
        // 0x30a82c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A828u, 0x30A830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30A830u;
label_30a830:
    // 0x30a830: 0x1000000c  b           . + 4 + (0xC << 2)
label_30a834:
    if (ctx->pc == 0x30A834u) {
        ctx->pc = 0x30A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A830u;
        // 0x30a834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A838u;
        goto label_30a838;
    }
    ctx->pc = 0x30A830u;
    {
        const bool branch_taken_0x30a830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A830u;
        // 0x30a834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a830) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
    ctx->pc = 0x30A838u;
label_30a838:
    // 0x30a838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a83c:
    // 0x30a83c: 0xc0c293e  jal         func_30A4F8
label_30a840:
    if (ctx->pc == 0x30A840u) {
        ctx->pc = 0x30A840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A83Cu;
        // 0x30a840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A844u;
        goto label_30a844;
    }
    ctx->pc = 0x30A83Cu;
    SET_GPR_U32(ctx, 31, 0x30A844u);
    ctx->pc = 0x30A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A83Cu;
    // 0x30a840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4F8u, 0x30A83Cu, 0x30A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A844u;
label_30a844:
    // 0x30a844: 0x10000007  b           . + 4 + (0x7 << 2)
label_30a848:
    if (ctx->pc == 0x30A848u) {
        ctx->pc = 0x30A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A844u;
        // 0x30a848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A84Cu;
        goto label_30a84c;
    }
    ctx->pc = 0x30A844u;
    {
        const bool branch_taken_0x30a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A844u;
        // 0x30a848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a844) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
    ctx->pc = 0x30A84Cu;
label_30a84c:
    // 0x30a84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30a850:
    // 0x30a850: 0xc0c2960  jal         func_30A580
label_30a854:
    if (ctx->pc == 0x30A854u) {
        ctx->pc = 0x30A854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A850u;
        // 0x30a854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A858u;
        goto label_30a858;
    }
    ctx->pc = 0x30A850u;
    SET_GPR_U32(ctx, 31, 0x30A858u);
    ctx->pc = 0x30A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A850u;
    // 0x30a854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A580u, 0x30A850u, 0x30A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A858u;
label_30a858:
    // 0x30a858: 0x10000002  b           . + 4 + (0x2 << 2)
label_30a85c:
    if (ctx->pc == 0x30A85Cu) {
        ctx->pc = 0x30A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A858u;
        // 0x30a85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30A860u;
        goto label_fallthrough_0x30a858;
    }
    ctx->pc = 0x30A858u;
    {
        const bool branch_taken_0x30a858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A858u;
        // 0x30a85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a858) {
            ctx->pc = 0x30A864u;
            return;
        }
    }
label_fallthrough_0x30a858:
    ctx->pc = 0x30A860u;
}
