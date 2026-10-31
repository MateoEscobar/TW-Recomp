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

// Function: sub_00154630
// Address: 0x154630 - 0x1546f8
void sub_00154630_0x154630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154630_0x154630");
#endif

    switch (ctx->pc) {
        case 0x154630u: goto label_154630;
        case 0x154634u: goto label_154634;
        case 0x154638u: goto label_154638;
        case 0x15463cu: goto label_15463c;
        case 0x154640u: goto label_154640;
        case 0x154644u: goto label_154644;
        case 0x154648u: goto label_154648;
        case 0x15464cu: goto label_15464c;
        case 0x154650u: goto label_154650;
        case 0x154654u: goto label_154654;
        case 0x154658u: goto label_154658;
        case 0x15465cu: goto label_15465c;
        case 0x154660u: goto label_154660;
        case 0x154664u: goto label_154664;
        case 0x154668u: goto label_154668;
        case 0x15466cu: goto label_15466c;
        case 0x154670u: goto label_154670;
        case 0x154674u: goto label_154674;
        case 0x154678u: goto label_154678;
        case 0x15467cu: goto label_15467c;
        case 0x154680u: goto label_154680;
        case 0x154684u: goto label_154684;
        case 0x154688u: goto label_154688;
        case 0x15468cu: goto label_15468c;
        case 0x154690u: goto label_154690;
        case 0x154694u: goto label_154694;
        case 0x154698u: goto label_154698;
        case 0x15469cu: goto label_15469c;
        case 0x1546a0u: goto label_1546a0;
        case 0x1546a4u: goto label_1546a4;
        case 0x1546a8u: goto label_1546a8;
        case 0x1546acu: goto label_1546ac;
        case 0x1546b0u: goto label_1546b0;
        case 0x1546b4u: goto label_1546b4;
        case 0x1546b8u: goto label_1546b8;
        case 0x1546bcu: goto label_1546bc;
        case 0x1546c0u: goto label_1546c0;
        case 0x1546c4u: goto label_1546c4;
        case 0x1546c8u: goto label_1546c8;
        case 0x1546ccu: goto label_1546cc;
        case 0x1546d0u: goto label_1546d0;
        case 0x1546d4u: goto label_1546d4;
        case 0x1546d8u: goto label_1546d8;
        case 0x1546dcu: goto label_1546dc;
        case 0x1546e0u: goto label_1546e0;
        case 0x1546e4u: goto label_1546e4;
        case 0x1546e8u: goto label_1546e8;
        case 0x1546ecu: goto label_1546ec;
        case 0x1546f0u: goto label_1546f0;
        case 0x1546f4u: goto label_1546f4;
        default: break;
    }

    ctx->pc = 0x154630u;

label_154630:
    // 0x154630: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_154634:
    // 0x154634: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x154634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_154638:
    // 0x154638: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15463c:
    // 0x15463c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15463cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154640:
    // 0x154640: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x154640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_154644:
    // 0x154644: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x154644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154648:
    // 0x154648: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15464c:
    // 0x15464c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x15464cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_154650:
    // 0x154650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154654:
    // 0x154654: 0x0  nop
    ctx->pc = 0x154654u;
    // NOP
label_154658:
    // 0x154658: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15465c:
    // 0x15465c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_154660:
    if (ctx->pc == 0x154660u) {
        ctx->pc = 0x154660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15465Cu;
        // 0x154660: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154664u;
        goto label_154664;
    }
    ctx->pc = 0x15465Cu;
    {
        const bool branch_taken_0x15465c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15465c) {
            ctx->pc = 0x154660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15465Cu;
            // 0x154660: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1546ACu;
            goto label_1546ac;
        }
    }
    ctx->pc = 0x154664u;
label_154664:
    // 0x154664: 0x8e29001c  lw          $t1, 0x1C($s1)
    ctx->pc = 0x154664u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_154668:
    // 0x154668: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x154668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_15466c:
    // 0x15466c: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x15466cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_154670:
    // 0x154670: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_154674:
    // 0x154674: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x154674u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_154678:
    // 0x154678: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_15467c:
    // 0x15467c: 0xd0182b  sltu        $v1, $a2, $s0
    ctx->pc = 0x15467cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_154680:
    // 0x154680: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_154684:
    // 0x154684: 0x85040050  lh          $a0, 0x50($t0)
    ctx->pc = 0x154684u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
label_154688:
    // 0x154688: 0xc3800b  movn        $s0, $a2, $v1
    ctx->pc = 0x154688u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
label_15468c:
    // 0x15468c: 0x8d070054  lw          $a3, 0x54($t0)
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
label_154690:
    // 0x154690: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x154690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154694:
    // 0x154694: 0xe0f809  jalr        $a3
label_154698:
    if (ctx->pc == 0x154698u) {
        ctx->pc = 0x154698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154694u;
        // 0x154698: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15469Cu;
        goto label_15469c;
    }
    ctx->pc = 0x154694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15469Cu);
        ctx->pc = 0x154698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154694u;
        // 0x154698: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154694u, 0x15469Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15469Cu;
label_15469c:
    // 0x15469c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x15469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1546a0:
    // 0x1546a0: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x1546a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
label_1546a4:
    // 0x1546a4: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1546a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1546a8:
    // 0x1546a8: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1546ac:
    // 0x1546ac: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x1546acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1546b0:
    // 0x1546b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1546b4:
    if (ctx->pc == 0x1546B4u) {
        ctx->pc = 0x1546B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B0u;
        // 0x1546b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546B8u;
        goto label_1546b8;
    }
    ctx->pc = 0x1546B0u;
    {
        const bool branch_taken_0x1546b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546B0u;
        // 0x1546b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546b0) {
            ctx->pc = 0x1546D0u;
            goto label_1546d0;
        }
    }
    ctx->pc = 0x1546B8u;
label_1546b8:
    // 0x1546b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1546b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1546bc:
    // 0x1546bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1546bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1546c0:
    // 0x1546c0: 0xc055174  jal         func_1545D0
label_1546c4:
    if (ctx->pc == 0x1546C4u) {
        ctx->pc = 0x1546C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C0u;
        // 0x1546c4: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546C8u;
        goto label_1546c8;
    }
    ctx->pc = 0x1546C0u;
    SET_GPR_U32(ctx, 31, 0x1546C8u);
    ctx->pc = 0x1546C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546C0u;
    // 0x1546c4: 0x2709823  subu        $s3, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545D0u, 0x1546C0u, 0x1546C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546C8u;
label_1546c8:
    // 0x1546c8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
label_1546cc:
    if (ctx->pc == 0x1546CCu) {
        ctx->pc = 0x1546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C8u;
        // 0x1546cc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546D0u;
        goto label_1546d0;
    }
    ctx->pc = 0x1546C8u;
    {
        const bool branch_taken_0x1546c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1546CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546C8u;
        // 0x1546cc: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1546c8) {
            ctx->pc = 0x154658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154658;
        }
    }
    ctx->pc = 0x1546D0u;
label_1546d0:
    // 0x1546d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1546d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1546d4:
    // 0x1546d4: 0xc055174  jal         func_1545D0
label_1546d8:
    if (ctx->pc == 0x1546D8u) {
        ctx->pc = 0x1546D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546D4u;
        // 0x1546d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546DCu;
        goto label_1546dc;
    }
    ctx->pc = 0x1546D4u;
    SET_GPR_U32(ctx, 31, 0x1546DCu);
    ctx->pc = 0x1546D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1546D4u;
    // 0x1546d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1545D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1545D0u, 0x1546D4u, 0x1546DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1546DCu;
label_1546dc:
    // 0x1546dc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1546dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1546e0:
    // 0x1546e0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1546e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1546e4:
    // 0x1546e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1546e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1546e8:
    // 0x1546e8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1546e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1546ec:
    // 0x1546ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1546ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1546f0:
    // 0x1546f0: 0x3e00008  jr          $ra
label_1546f4:
    if (ctx->pc == 0x1546F4u) {
        ctx->pc = 0x1546F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F0u;
        // 0x1546f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1546F8u;
        goto label_fallthrough_0x1546f0;
    }
    ctx->pc = 0x1546F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1546F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1546F0u;
        // 0x1546f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1546F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1546f0:
    ctx->pc = 0x1546F8u;
}
