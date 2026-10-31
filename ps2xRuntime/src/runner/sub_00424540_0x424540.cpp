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

// Function: sub_00424540
// Address: 0x424540 - 0x4245d8
void sub_00424540_0x424540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424540_0x424540");
#endif

    switch (ctx->pc) {
        case 0x424578u: goto label_424578;
        case 0x424598u: goto label_424598;
        default: break;
    }

    ctx->pc = 0x424540u;

    // 0x424540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x424540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x424544: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x424544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x424548: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x424548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x42454c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x42454cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x424550: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x424550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424554: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x424554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x424558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42455c: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x42455cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x424560: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x424560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x424564: 0x8cb256d4  lw          $s2, 0x56D4($a1)
    ctx->pc = 0x424564u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22228)));
    // 0x424568: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x424568u;
    {
        const bool branch_taken_0x424568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x42456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424568u;
        // 0x42456c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424568) {
            ctx->pc = 0x4245B8u;
            goto label_4245b8;
        }
    }
    ctx->pc = 0x424570u;
    // 0x424570: 0x24b014d8  addiu       $s0, $a1, 0x14D8
    ctx->pc = 0x424570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 5336));
    // 0x424574: 0x0  nop
    ctx->pc = 0x424574u;
    // NOP
label_424578:
    // 0x424578: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x424578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x42457c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x42457Cu;
    {
        const bool branch_taken_0x42457c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42457Cu;
        // 0x424580: 0x2c420018  sltiu       $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42457c) {
            ctx->pc = 0x4245A8u;
            goto label_4245a8;
        }
    }
    ctx->pc = 0x424584u;
    // 0x424584: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x424584u;
    {
        const bool branch_taken_0x424584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x424584) {
            ctx->pc = 0x424588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424584u;
            // 0x424588: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4245ACu;
            goto label_4245ac;
        }
    }
    ctx->pc = 0x42458Cu;
    // 0x42458c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x42458cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x424590: 0xc109076  jal         func_4241D8
    ctx->pc = 0x424590u;
    SET_GPR_U32(ctx, 31, 0x424598u);
    ctx->pc = 0x424594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424590u;
    // 0x424594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4241D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4241D8u, 0x424590u, 0x424598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424598u;
label_424598:
    // 0x424598: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x424598u;
    {
        const bool branch_taken_0x424598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424598u;
        // 0x42459c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424598) {
            ctx->pc = 0x4245ACu;
            goto label_4245ac;
        }
    }
    ctx->pc = 0x4245A0u;
    // 0x4245a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4245A0u;
    {
        const bool branch_taken_0x4245a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4245A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245A0u;
        // 0x4245a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4245a0) {
            ctx->pc = 0x4245BCu;
            goto label_4245bc;
        }
    }
    ctx->pc = 0x4245A8u;
label_4245a8:
    // 0x4245a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4245a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4245ac:
    // 0x4245ac: 0x232102b  sltu        $v0, $s1, $s2
    ctx->pc = 0x4245acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4245b0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4245B0u;
    {
        const bool branch_taken_0x4245b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4245B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245B0u;
        // 0x4245b4: 0x26100084  addiu       $s0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4245b0) {
            ctx->pc = 0x424578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424578;
        }
    }
    ctx->pc = 0x4245B8u;
label_4245b8:
    // 0x4245b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4245b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4245bc:
    // 0x4245bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4245bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4245c0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4245c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4245c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4245c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4245c8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4245c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4245cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4245ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4245d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4245D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4245D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4245D0u;
        // 0x4245d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4245D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4245D8u;
}
