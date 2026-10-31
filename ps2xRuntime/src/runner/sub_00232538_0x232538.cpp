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

// Function: sub_00232538
// Address: 0x232538 - 0x2325e0
void sub_00232538_0x232538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232538_0x232538");
#endif

    switch (ctx->pc) {
        case 0x232570u: goto label_232570;
        case 0x23257cu: goto label_23257c;
        case 0x2325a0u: goto label_2325a0;
        case 0x2325acu: goto label_2325ac;
        default: break;
    }

    ctx->pc = 0x232538u;

    // 0x232538: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x232538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23253c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23253cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x232540: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x232540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x232544: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x232548: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x232548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23254c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23254cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x232550: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x232550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x232554: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232558: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x232558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x23255c: 0x84640224  lh          $a0, 0x224($v1)
    ctx->pc = 0x23255cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x232560: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x232560u;
    {
        const bool branch_taken_0x232560 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x232564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232560u;
        // 0x232564: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232560) {
            ctx->pc = 0x2325C4u;
            goto label_2325c4;
        }
    }
    ctx->pc = 0x232568u;
    // 0x232568: 0x3c130008  lui         $s3, 0x8
    ctx->pc = 0x232568u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8 << 16));
    // 0x23256c: 0x24100228  addiu       $s0, $zero, 0x228
    ctx->pc = 0x23256cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_232570:
    // 0x232570: 0x8e44489c  lw          $a0, 0x489C($s2)
    ctx->pc = 0x232570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x232574: 0xc0e409a  jal         func_390268
    ctx->pc = 0x232574u;
    SET_GPR_U32(ctx, 31, 0x23257Cu);
    ctx->pc = 0x232578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232574u;
    // 0x232578: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232574u, 0x23257Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23257Cu;
label_23257c:
    // 0x23257c: 0xdc4300e0  ld          $v1, 0xE0($v0)
    ctx->pc = 0x23257cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x232580: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x232580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x232584: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x232584u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x232588: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x232588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x23258c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x23258cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x232590: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x232590u;
    {
        const bool branch_taken_0x232590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x232594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232590u;
        // 0x232594: 0x8e44489c  lw          $a0, 0x489C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232590) {
            ctx->pc = 0x2325ACu;
            goto label_2325ac;
        }
    }
    ctx->pc = 0x232598u;
    // 0x232598: 0xc0e409a  jal         func_390268
    ctx->pc = 0x232598u;
    SET_GPR_U32(ctx, 31, 0x2325A0u);
    ctx->pc = 0x23259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232598u;
    // 0x23259c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x232598u, 0x2325A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325A0u;
label_2325a0:
    // 0x2325a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2325a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2325a4: 0xc08dbee  jal         func_236FB8
    ctx->pc = 0x2325A4u;
    SET_GPR_U32(ctx, 31, 0x2325ACu);
    ctx->pc = 0x2325A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2325A4u;
    // 0x2325a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236FB8u, 0x2325A4u, 0x2325ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2325ACu;
label_2325ac:
    // 0x2325ac: 0x8e43489c  lw          $v1, 0x489C($s2)
    ctx->pc = 0x2325acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18588)));
    // 0x2325b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2325b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2325b4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x2325b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x2325b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2325b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2325bc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2325BCu;
    {
        const bool branch_taken_0x2325bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2325C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325BCu;
        // 0x2325c0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2325bc) {
            ctx->pc = 0x232570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232570;
        }
    }
    ctx->pc = 0x2325C4u;
label_2325c4:
    // 0x2325c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2325c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2325c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2325c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2325cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2325ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2325d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2325d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2325d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2325d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2325d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2325D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2325DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2325D8u;
        // 0x2325dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2325D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2325E0u;
}
