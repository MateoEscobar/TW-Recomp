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

// Function: sub_0046D658
// Address: 0x46d658 - 0x46d6f0
void sub_0046D658_0x46d658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D658_0x46d658");
#endif

    switch (ctx->pc) {
        case 0x46d658u: goto label_46d658;
        case 0x46d65cu: goto label_46d65c;
        case 0x46d660u: goto label_46d660;
        case 0x46d664u: goto label_46d664;
        case 0x46d668u: goto label_46d668;
        case 0x46d66cu: goto label_46d66c;
        case 0x46d670u: goto label_46d670;
        case 0x46d674u: goto label_46d674;
        case 0x46d678u: goto label_46d678;
        case 0x46d67cu: goto label_46d67c;
        case 0x46d680u: goto label_46d680;
        case 0x46d684u: goto label_46d684;
        case 0x46d688u: goto label_46d688;
        case 0x46d68cu: goto label_46d68c;
        case 0x46d690u: goto label_46d690;
        case 0x46d694u: goto label_46d694;
        case 0x46d698u: goto label_46d698;
        case 0x46d69cu: goto label_46d69c;
        case 0x46d6a0u: goto label_46d6a0;
        case 0x46d6a4u: goto label_46d6a4;
        case 0x46d6a8u: goto label_46d6a8;
        case 0x46d6acu: goto label_46d6ac;
        case 0x46d6b0u: goto label_46d6b0;
        case 0x46d6b4u: goto label_46d6b4;
        case 0x46d6b8u: goto label_46d6b8;
        case 0x46d6bcu: goto label_46d6bc;
        case 0x46d6c0u: goto label_46d6c0;
        case 0x46d6c4u: goto label_46d6c4;
        case 0x46d6c8u: goto label_46d6c8;
        case 0x46d6ccu: goto label_46d6cc;
        case 0x46d6d0u: goto label_46d6d0;
        case 0x46d6d4u: goto label_46d6d4;
        case 0x46d6d8u: goto label_46d6d8;
        case 0x46d6dcu: goto label_46d6dc;
        case 0x46d6e0u: goto label_46d6e0;
        case 0x46d6e4u: goto label_46d6e4;
        case 0x46d6e8u: goto label_46d6e8;
        case 0x46d6ecu: goto label_46d6ec;
        default: break;
    }

    ctx->pc = 0x46d658u;

label_46d658:
    // 0x46d658: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_46d65c:
    // 0x46d65c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x46d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46d660:
    // 0x46d660: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x46d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_46d664:
    // 0x46d664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46d664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46d668:
    // 0x46d668: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x46d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_46d66c:
    // 0x46d66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_46d670:
    // 0x46d670: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x46d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_46d674:
    // 0x46d674: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x46d674u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_46d678:
    // 0x46d678: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_46d67c:
    if (ctx->pc == 0x46D67Cu) {
        ctx->pc = 0x46D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D678u;
        // 0x46d67c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D680u;
        goto label_46d680;
    }
    ctx->pc = 0x46D678u;
    {
        const bool branch_taken_0x46d678 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D678u;
        // 0x46d67c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d678) {
            ctx->pc = 0x46D6C4u;
            goto label_46d6c4;
        }
    }
    ctx->pc = 0x46D680u;
label_46d680:
    // 0x46d680: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x46d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_46d684:
    // 0x46d684: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_46d688:
    if (ctx->pc == 0x46D688u) {
        ctx->pc = 0x46D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D684u;
        // 0x46d688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D68Cu;
        goto label_46d68c;
    }
    ctx->pc = 0x46D684u;
    {
        const bool branch_taken_0x46d684 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x46D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D684u;
        // 0x46d688: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d684) {
            ctx->pc = 0x46D6A8u;
            goto label_46d6a8;
        }
    }
    ctx->pc = 0x46D68Cu;
label_46d68c:
    // 0x46d68c: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x46d68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_46d690:
    // 0x46d690: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x46d690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_46d694:
    // 0x46d694: 0xc11b3e4  jal         func_46CF90
label_46d698:
    if (ctx->pc == 0x46D698u) {
        ctx->pc = 0x46D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D694u;
        // 0x46d698: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D69Cu;
        goto label_46d69c;
    }
    ctx->pc = 0x46D694u;
    SET_GPR_U32(ctx, 31, 0x46D69Cu);
    ctx->pc = 0x46D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D694u;
    // 0x46d698: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF90u, 0x46D694u, 0x46D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D69Cu;
label_46d69c:
    // 0x46d69c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46d6a0:
    // 0x46d6a0: 0x1620fffb  bnez        $s1, . + 4 + (-0x5 << 2)
label_46d6a4:
    if (ctx->pc == 0x46D6A4u) {
        ctx->pc = 0x46D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6A0u;
        // 0x46d6a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D6A8u;
        goto label_46d6a8;
    }
    ctx->pc = 0x46D6A0u;
    {
        const bool branch_taken_0x46d6a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6A0u;
        // 0x46d6a4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d6a0) {
            ctx->pc = 0x46D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_46d690;
        }
    }
    ctx->pc = 0x46D6A8u;
label_46d6a8:
    // 0x46d6a8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46d6ac:
    // 0x46d6ac: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x46d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46d6b0:
    // 0x46d6b0: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x46d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_46d6b4:
    // 0x46d6b4: 0x60f809  jalr        $v1
label_46d6b8:
    if (ctx->pc == 0x46D6B8u) {
        ctx->pc = 0x46D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6B4u;
        // 0x46d6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D6BCu;
        goto label_46d6bc;
    }
    ctx->pc = 0x46D6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x46D6BCu);
        ctx->pc = 0x46D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6B4u;
        // 0x46d6b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D6B4u, 0x46D6BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46D6BCu;
label_46d6bc:
    // 0x46d6bc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x46d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_46d6c0:
    // 0x46d6c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x46d6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_46d6c4:
    // 0x46d6c4: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x46d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_46d6c8:
    // 0x46d6c8: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x46d6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_46d6cc:
    // 0x46d6cc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x46d6ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46d6d0:
    // 0x46d6d0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x46d6d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46d6d4:
    // 0x46d6d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46d6d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46d6d8:
    // 0x46d6d8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x46d6d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46d6dc:
    // 0x46d6dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d6dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_46d6e0:
    // 0x46d6e0: 0x3e00008  jr          $ra
label_46d6e4:
    if (ctx->pc == 0x46D6E4u) {
        ctx->pc = 0x46D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6E0u;
        // 0x46d6e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46D6E8u;
        goto label_46d6e8;
    }
    ctx->pc = 0x46D6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D6E0u;
        // 0x46d6e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D6E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D6E8u;
label_46d6e8:
    // 0x46d6e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46d6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_46d6ec:
    // 0x46d6ec: 0x0  nop
    ctx->pc = 0x46d6ecu;
    // NOP
    ctx->pc = 0x46d6f0u;
}
