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

// Function: sub_0030B638
// Address: 0x30b638 - 0x30b6d8
void sub_0030B638_0x30b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B638_0x30b638");
#endif

    switch (ctx->pc) {
        case 0x30b638u: goto label_30b638;
        case 0x30b63cu: goto label_30b63c;
        case 0x30b640u: goto label_30b640;
        case 0x30b644u: goto label_30b644;
        case 0x30b648u: goto label_30b648;
        case 0x30b64cu: goto label_30b64c;
        case 0x30b650u: goto label_30b650;
        case 0x30b654u: goto label_30b654;
        case 0x30b658u: goto label_30b658;
        case 0x30b65cu: goto label_30b65c;
        case 0x30b660u: goto label_30b660;
        case 0x30b664u: goto label_30b664;
        case 0x30b668u: goto label_30b668;
        case 0x30b66cu: goto label_30b66c;
        case 0x30b670u: goto label_30b670;
        case 0x30b674u: goto label_30b674;
        case 0x30b678u: goto label_30b678;
        case 0x30b67cu: goto label_30b67c;
        case 0x30b680u: goto label_30b680;
        case 0x30b684u: goto label_30b684;
        case 0x30b688u: goto label_30b688;
        case 0x30b68cu: goto label_30b68c;
        case 0x30b690u: goto label_30b690;
        case 0x30b694u: goto label_30b694;
        case 0x30b698u: goto label_30b698;
        case 0x30b69cu: goto label_30b69c;
        case 0x30b6a0u: goto label_30b6a0;
        case 0x30b6a4u: goto label_30b6a4;
        case 0x30b6a8u: goto label_30b6a8;
        case 0x30b6acu: goto label_30b6ac;
        case 0x30b6b0u: goto label_30b6b0;
        case 0x30b6b4u: goto label_30b6b4;
        case 0x30b6b8u: goto label_30b6b8;
        case 0x30b6bcu: goto label_30b6bc;
        case 0x30b6c0u: goto label_30b6c0;
        case 0x30b6c4u: goto label_30b6c4;
        case 0x30b6c8u: goto label_30b6c8;
        case 0x30b6ccu: goto label_30b6cc;
        case 0x30b6d0u: goto label_30b6d0;
        case 0x30b6d4u: goto label_30b6d4;
        default: break;
    }

    ctx->pc = 0x30b638u;

label_30b638:
    // 0x30b638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_30b63c:
    // 0x30b63c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30b63cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_30b640:
    // 0x30b640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_30b644:
    // 0x30b644: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x30b644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30b648:
    // 0x30b648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_30b64c:
    // 0x30b64c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30b64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30b650:
    // 0x30b650: 0xc08a61a  jal         func_229868
label_30b654:
    if (ctx->pc == 0x30B654u) {
        ctx->pc = 0x30B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B650u;
        // 0x30b654: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B658u;
        goto label_30b658;
    }
    ctx->pc = 0x30B650u;
    SET_GPR_U32(ctx, 31, 0x30B658u);
    ctx->pc = 0x30B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B650u;
    // 0x30b654: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x30B650u, 0x30B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B658u;
label_30b658:
    // 0x30b658: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30b658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30b65c:
    // 0x30b65c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_30b660:
    if (ctx->pc == 0x30B660u) {
        ctx->pc = 0x30B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B65Cu;
        // 0x30b660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B664u;
        goto label_30b664;
    }
    ctx->pc = 0x30B65Cu;
    {
        const bool branch_taken_0x30b65c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B65Cu;
        // 0x30b660: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b65c) {
            ctx->pc = 0x30B6E4u;
            return;
        }
    }
    ctx->pc = 0x30B664u;
label_30b664:
    // 0x30b664: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x30b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_30b668:
    // 0x30b668: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x30b668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_30b66c:
    // 0x30b66c: 0x2c830016  sltiu       $v1, $a0, 0x16
    ctx->pc = 0x30b66cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
label_30b670:
    // 0x30b670: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_30b674:
    if (ctx->pc == 0x30B674u) {
        ctx->pc = 0x30B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B670u;
        // 0x30b674: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B678u;
        goto label_30b678;
    }
    ctx->pc = 0x30B670u;
    {
        const bool branch_taken_0x30b670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B670u;
        // 0x30b674: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b670) {
            ctx->pc = 0x30B6E0u;
            return;
        }
    }
    ctx->pc = 0x30B678u;
label_30b678:
    // 0x30b678: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x30b678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30b67c:
    // 0x30b67c: 0x2442bb90  addiu       $v0, $v0, -0x4470
    ctx->pc = 0x30b67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949776));
label_30b680:
    // 0x30b680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30b680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30b684:
    // 0x30b684: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x30b684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30b688:
    // 0x30b688: 0x800008  jr          $a0
label_30b68c:
    if (ctx->pc == 0x30B68Cu) {
        ctx->pc = 0x30B690u;
        goto label_30b690;
    }
    ctx->pc = 0x30B688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x30B690u: goto label_30b690;
            case 0x30B6A0u: goto label_30b6a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B688u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x30B690u;
label_30b690:
    // 0x30b690: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x30b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_30b694:
    // 0x30b694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30b694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b698:
    // 0x30b698: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_30b69c:
    if (ctx->pc == 0x30B69Cu) {
        ctx->pc = 0x30B69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B698u;
        // 0x30b69c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6A0u;
        goto label_30b6a0;
    }
    ctx->pc = 0x30B698u;
    {
        const bool branch_taken_0x30b698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30b698) {
            ctx->pc = 0x30B69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30B698u;
            // 0x30b69c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30B6B0u;
            goto label_30b6b0;
        }
    }
    ctx->pc = 0x30B6A0u;
label_30b6a0:
    // 0x30b6a0: 0xc0c2c14  jal         func_30B050
label_30b6a4:
    if (ctx->pc == 0x30B6A4u) {
        ctx->pc = 0x30B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6A0u;
        // 0x30b6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6A8u;
        goto label_30b6a8;
    }
    ctx->pc = 0x30B6A0u;
    SET_GPR_U32(ctx, 31, 0x30B6A8u);
    ctx->pc = 0x30B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B6A0u;
    // 0x30b6a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B050u, 0x30B6A0u, 0x30B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B6A8u;
label_30b6a8:
    // 0x30b6a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_30b6ac:
    if (ctx->pc == 0x30B6ACu) {
        ctx->pc = 0x30B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6A8u;
        // 0x30b6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6B0u;
        goto label_30b6b0;
    }
    ctx->pc = 0x30B6A8u;
    {
        const bool branch_taken_0x30b6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6A8u;
        // 0x30b6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6a8) {
            ctx->pc = 0x30B6E4u;
            return;
        }
    }
    ctx->pc = 0x30B6B0u;
label_30b6b0:
    // 0x30b6b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_30b6b4:
    if (ctx->pc == 0x30B6B4u) {
        ctx->pc = 0x30B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B0u;
        // 0x30b6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6B8u;
        goto label_30b6b8;
    }
    ctx->pc = 0x30B6B0u;
    {
        const bool branch_taken_0x30b6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B0u;
        // 0x30b6b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6b0) {
            ctx->pc = 0x30B6E4u;
            return;
        }
    }
    ctx->pc = 0x30B6B8u;
label_30b6b8:
    // 0x30b6b8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x30b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_30b6bc:
    // 0x30b6bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30b6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30b6c0:
    // 0x30b6c0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x30b6c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_30b6c4:
    // 0x30b6c4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x30b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_30b6c8:
    // 0x30b6c8: 0x60f809  jalr        $v1
label_30b6cc:
    if (ctx->pc == 0x30B6CCu) {
        ctx->pc = 0x30B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6C8u;
        // 0x30b6cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6D0u;
        goto label_30b6d0;
    }
    ctx->pc = 0x30B6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x30B6D0u);
        ctx->pc = 0x30B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6C8u;
        // 0x30b6cc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B6C8u, 0x30B6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x30B6D0u;
label_30b6d0:
    // 0x30b6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_30b6d4:
    if (ctx->pc == 0x30B6D4u) {
        ctx->pc = 0x30B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6D0u;
        // 0x30b6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30B6D8u;
        goto label_fallthrough_0x30b6d0;
    }
    ctx->pc = 0x30B6D0u;
    {
        const bool branch_taken_0x30b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6D0u;
        // 0x30b6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b6d0) {
            ctx->pc = 0x30B6E4u;
            return;
        }
    }
label_fallthrough_0x30b6d0:
    ctx->pc = 0x30B6D8u;
}
