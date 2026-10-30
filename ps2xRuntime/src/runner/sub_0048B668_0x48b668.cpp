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

// Function: sub_0048B668
// Address: 0x48b668 - 0x48b708
void sub_0048B668_0x48b668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048B668_0x48b668");
#endif

    switch (ctx->pc) {
        case 0x48b668u: goto label_48b668;
        case 0x48b66cu: goto label_48b66c;
        case 0x48b670u: goto label_48b670;
        case 0x48b674u: goto label_48b674;
        case 0x48b678u: goto label_48b678;
        case 0x48b67cu: goto label_48b67c;
        case 0x48b680u: goto label_48b680;
        case 0x48b684u: goto label_48b684;
        case 0x48b688u: goto label_48b688;
        case 0x48b68cu: goto label_48b68c;
        case 0x48b690u: goto label_48b690;
        case 0x48b694u: goto label_48b694;
        case 0x48b698u: goto label_48b698;
        case 0x48b69cu: goto label_48b69c;
        case 0x48b6a0u: goto label_48b6a0;
        case 0x48b6a4u: goto label_48b6a4;
        case 0x48b6a8u: goto label_48b6a8;
        case 0x48b6acu: goto label_48b6ac;
        case 0x48b6b0u: goto label_48b6b0;
        case 0x48b6b4u: goto label_48b6b4;
        case 0x48b6b8u: goto label_48b6b8;
        case 0x48b6bcu: goto label_48b6bc;
        case 0x48b6c0u: goto label_48b6c0;
        case 0x48b6c4u: goto label_48b6c4;
        case 0x48b6c8u: goto label_48b6c8;
        case 0x48b6ccu: goto label_48b6cc;
        case 0x48b6d0u: goto label_48b6d0;
        case 0x48b6d4u: goto label_48b6d4;
        case 0x48b6d8u: goto label_48b6d8;
        case 0x48b6dcu: goto label_48b6dc;
        case 0x48b6e0u: goto label_48b6e0;
        case 0x48b6e4u: goto label_48b6e4;
        case 0x48b6e8u: goto label_48b6e8;
        case 0x48b6ecu: goto label_48b6ec;
        case 0x48b6f0u: goto label_48b6f0;
        case 0x48b6f4u: goto label_48b6f4;
        case 0x48b6f8u: goto label_48b6f8;
        case 0x48b6fcu: goto label_48b6fc;
        case 0x48b700u: goto label_48b700;
        case 0x48b704u: goto label_48b704;
        default: break;
    }

    ctx->pc = 0x48b668u;

label_48b668:
    // 0x48b668: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_48b66c:
    // 0x48b66c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x48b66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_48b670:
    // 0x48b670: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48b674:
    // 0x48b674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x48b674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48b678:
    // 0x48b678: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x48b678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_48b67c:
    // 0x48b67c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x48b67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48b680:
    // 0x48b680: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x48b680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_48b684:
    // 0x48b684: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x48b684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_48b688:
    // 0x48b688: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x48b688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_48b68c:
    // 0x48b68c: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_48b690:
    if (ctx->pc == 0x48B690u) {
        ctx->pc = 0x48B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B68Cu;
        // 0x48b690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B694u;
        goto label_48b694;
    }
    ctx->pc = 0x48B68Cu;
    {
        const bool branch_taken_0x48b68c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x48B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B68Cu;
        // 0x48b690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b68c) {
            ctx->pc = 0x48B6E0u;
            goto label_48b6e0;
        }
    }
    ctx->pc = 0x48B694u;
label_48b694:
    // 0x48b694: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
label_48b698:
    if (ctx->pc == 0x48B698u) {
        ctx->pc = 0x48B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B694u;
        // 0x48b698: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B69Cu;
        goto label_48b69c;
    }
    ctx->pc = 0x48B694u;
    {
        const bool branch_taken_0x48b694 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x48B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B694u;
        // 0x48b698: 0x3c150071  lui         $s5, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48b694) {
            ctx->pc = 0x48B6CCu;
            goto label_48b6cc;
        }
    }
    ctx->pc = 0x48B69Cu;
label_48b69c:
    // 0x48b69c: 0x24d4ffff  addiu       $s4, $a2, -0x1
    ctx->pc = 0x48b69cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_48b6a0:
    // 0x48b6a0: 0x2670001c  addiu       $s0, $s3, 0x1C
    ctx->pc = 0x48b6a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_48b6a4:
    // 0x48b6a4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x48b6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_48b6a8:
    // 0x48b6a8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x48b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_48b6ac:
    // 0x48b6ac: 0x0  nop
    ctx->pc = 0x48b6acu;
    // NOP
label_48b6b0:
    // 0x48b6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x48b6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_48b6b4:
    // 0x48b6b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x48b6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_48b6b8:
    // 0x48b6b8: 0xc122d9a  jal         func_48B668
label_48b6bc:
    if (ctx->pc == 0x48B6BCu) {
        ctx->pc = 0x48B6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6B8u;
        // 0x48b6bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B6C0u;
        goto label_48b6c0;
    }
    ctx->pc = 0x48B6B8u;
    SET_GPR_U32(ctx, 31, 0x48B6C0u);
    ctx->pc = 0x48B6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48B6B8u;
    // 0x48b6bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B668u;
    goto label_48b668;
    ctx->pc = 0x48B6C0u;
label_48b6c0:
    // 0x48b6c0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x48b6c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_48b6c4:
    // 0x48b6c4: 0x623fffa  bgezl       $s1, . + 4 + (-0x6 << 2)
label_48b6c8:
    if (ctx->pc == 0x48B6C8u) {
        ctx->pc = 0x48B6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6C4u;
        // 0x48b6c8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B6CCu;
        goto label_48b6cc;
    }
    ctx->pc = 0x48B6C4u;
    {
        const bool branch_taken_0x48b6c4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x48b6c4) {
            ctx->pc = 0x48B6C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x48B6C4u;
            // 0x48b6c8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x48B6B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48b6b0;
        }
    }
    ctx->pc = 0x48B6CCu;
label_48b6cc:
    // 0x48b6cc: 0x26a3ad18  addiu       $v1, $s5, -0x52E8
    ctx->pc = 0x48b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946072));
label_48b6d0:
    // 0x48b6d0: 0x8e444004  lw          $a0, 0x4004($s2)
    ctx->pc = 0x48b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16388)));
label_48b6d4:
    // 0x48b6d4: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x48b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_48b6d8:
    // 0x48b6d8: 0x40f809  jalr        $v0
label_48b6dc:
    if (ctx->pc == 0x48B6DCu) {
        ctx->pc = 0x48B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6D8u;
        // 0x48b6dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B6E0u;
        goto label_48b6e0;
    }
    ctx->pc = 0x48B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48B6E0u);
        ctx->pc = 0x48B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6D8u;
        // 0x48b6dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B6D8u, 0x48B6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48B6E0u;
label_48b6e0:
    // 0x48b6e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x48b6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48b6e4:
    // 0x48b6e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x48b6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48b6e8:
    // 0x48b6e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x48b6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48b6ec:
    // 0x48b6ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48b6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48b6f0:
    // 0x48b6f0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x48b6f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48b6f4:
    // 0x48b6f4: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x48b6f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48b6f8:
    // 0x48b6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48b6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48b6fc:
    // 0x48b6fc: 0x3e00008  jr          $ra
label_48b700:
    if (ctx->pc == 0x48B700u) {
        ctx->pc = 0x48B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6FCu;
        // 0x48b700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48B704u;
        goto label_48b704;
    }
    ctx->pc = 0x48B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48B6FCu;
        // 0x48b700: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48B704u;
label_48b704:
    // 0x48b704: 0x0  nop
    ctx->pc = 0x48b704u;
    // NOP
    ctx->pc = 0x48b708u;
}
