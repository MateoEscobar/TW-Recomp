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

// Function: sub_00330640
// Address: 0x330640 - 0x330748
void sub_00330640_0x330640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330640_0x330640");
#endif

    switch (ctx->pc) {
        case 0x3306a0u: goto label_3306a0;
        case 0x3306b8u: goto label_3306b8;
        case 0x3306c0u: goto label_3306c0;
        default: break;
    }

    ctx->pc = 0x330640u;

    // 0x330640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x330640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x330644: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x330644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x330648: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x330648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x33064c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x33064cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x330650: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x330650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330654: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x330654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x330658: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33065c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33065cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x330660: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x330660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x330664: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x330664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x330668: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x330668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x33066c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330670: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x330670u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x330674: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x330674u;
    {
        const bool branch_taken_0x330674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x330678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330674u;
        // 0x330678: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330674) {
            ctx->pc = 0x330684u;
            goto label_330684;
        }
    }
    ctx->pc = 0x33067Cu;
    // 0x33067c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x33067cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330680: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x330680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_330684:
    // 0x330684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x330684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x330688: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x330688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x33068c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x33068Cu;
    {
        const bool branch_taken_0x33068c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33068Cu;
        // 0x330690: 0x24150025  addiu       $s5, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33068c) {
            ctx->pc = 0x330720u;
            goto label_330720;
        }
    }
    ctx->pc = 0x330694u;
    // 0x330694: 0x2414002d  addiu       $s4, $zero, 0x2D
    ctx->pc = 0x330694u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x330698: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x330698u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33069c: 0x0  nop
    ctx->pc = 0x33069cu;
    // NOP
label_3306a0:
    // 0x3306a0: 0x54550009  bnel        $v0, $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x3306A0u;
    {
        const bool branch_taken_0x3306a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x3306a0) {
            ctx->pc = 0x3306A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3306A0u;
            // 0x3306a4: 0x82020001  lb          $v0, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3306C8u;
            goto label_3306c8;
        }
    }
    ctx->pc = 0x3306A8u;
    // 0x3306a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3306a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3306ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3306acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3306b0: 0xc0cc142  jal         func_330508
    ctx->pc = 0x3306B0u;
    SET_GPR_U32(ctx, 31, 0x3306B8u);
    ctx->pc = 0x3306B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3306B0u;
    // 0x3306b4: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330508u, 0x3306B0u, 0x3306B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3306B8u;
label_3306b8:
    // 0x3306b8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3306B8u;
    {
        const bool branch_taken_0x3306b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306B8u;
        // 0x3306bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306b8) {
            ctx->pc = 0x330714u;
            goto label_330714;
        }
    }
    ctx->pc = 0x3306C0u;
label_3306c0:
    // 0x3306c0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3306C0u;
    {
        const bool branch_taken_0x3306c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3306C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306C0u;
        // 0x3306c4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306c0) {
            ctx->pc = 0x330724u;
            goto label_330724;
        }
    }
    ctx->pc = 0x3306C8u;
label_3306c8:
    // 0x3306c8: 0x54540010  bnel        $v0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3306C8u;
    {
        const bool branch_taken_0x3306c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3306c8) {
            ctx->pc = 0x3306CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3306C8u;
            // 0x3306cc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33070Cu;
            goto label_33070c;
        }
    }
    ctx->pc = 0x3306D0u;
    // 0x3306d0: 0x26030002  addiu       $v1, $s0, 0x2
    ctx->pc = 0x3306d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x3306d4: 0x73102b  sltu        $v0, $v1, $s3
    ctx->pc = 0x3306d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3306d8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3306D8u;
    {
        const bool branch_taken_0x3306d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3306d8) {
            ctx->pc = 0x3306DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3306D8u;
            // 0x3306dc: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33070Cu;
            goto label_33070c;
        }
    }
    ctx->pc = 0x3306E0u;
    // 0x3306e0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3306e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3306e4: 0x9062fffe  lbu         $v0, -0x2($v1)
    ctx->pc = 0x3306e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x3306e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3306e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3306ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3306ECu;
    {
        const bool branch_taken_0x3306ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3306ec) {
            ctx->pc = 0x3306F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3306ECu;
            // 0x3306f0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330714u;
            goto label_330714;
        }
    }
    ctx->pc = 0x3306F4u;
    // 0x3306f4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3306f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3306f8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x3306f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3306fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3306FCu;
    {
        const bool branch_taken_0x3306fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306FCu;
        // 0x330700: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306fc) {
            ctx->pc = 0x330714u;
            goto label_330714;
        }
    }
    ctx->pc = 0x330704u;
    // 0x330704: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x330704u;
    {
        const bool branch_taken_0x330704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330704u;
        // 0x330708: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330704) {
            ctx->pc = 0x330724u;
            goto label_330724;
        }
    }
    ctx->pc = 0x33070Cu;
label_33070c:
    // 0x33070c: 0x1051ffec  beq         $v0, $s1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x33070Cu;
    {
        const bool branch_taken_0x33070c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x330710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33070Cu;
        // 0x330710: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33070c) {
            ctx->pc = 0x3306C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3306c0;
        }
    }
    ctx->pc = 0x330714u;
label_330714:
    // 0x330714: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x330714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x330718: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x330718u;
    {
        const bool branch_taken_0x330718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330718) {
            ctx->pc = 0x33071Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330718u;
            // 0x33071c: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3306A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3306a0;
        }
    }
    ctx->pc = 0x330720u;
label_330720:
    // 0x330720: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x330720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
label_330724:
    // 0x330724: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x330724u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x330728: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x330728u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33072c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x33072cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x330730: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x330730u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x330734: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x330734u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330738: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x330738u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33073c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33073cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330740: 0x3e00008  jr          $ra
    ctx->pc = 0x330740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330740u;
        // 0x330744: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330748u;
}
