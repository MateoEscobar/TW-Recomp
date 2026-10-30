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

// Function: sub_0014A7F0
// Address: 0x14a7f0 - 0x14a8d8
void sub_0014A7F0_0x14a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A7F0_0x14a7f0");
#endif

    switch (ctx->pc) {
        case 0x14a818u: goto label_14a818;
        case 0x14a820u: goto label_14a820;
        case 0x14a850u: goto label_14a850;
        default: break;
    }

    ctx->pc = 0x14a7f0u;

    // 0x14a7f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14a7f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14a7f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14a7fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14a7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14a804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14a804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a808: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x14a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14a80c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x14a80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14a814: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x14a814u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_14a818:
    // 0x14a818: 0xc111490  jal         func_445240
    ctx->pc = 0x14A818u;
    SET_GPR_U32(ctx, 31, 0x14A820u);
    ctx->pc = 0x14A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A818u;
    // 0x14a81c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445240u, 0x14A818u, 0x14A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A820u;
label_14a820:
    // 0x14a820: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a824: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x14a824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14a828: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x14a828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14a82c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A82Cu;
    {
        const bool branch_taken_0x14a82c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A82Cu;
        // 0x14a830: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a82c) {
            ctx->pc = 0x14A840u;
            goto label_14a840;
        }
    }
    ctx->pc = 0x14A834u;
    // 0x14a834: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14a834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14a838: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14A838u;
    {
        const bool branch_taken_0x14a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a838) {
            ctx->pc = 0x14A818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a818;
        }
    }
    ctx->pc = 0x14A840u;
label_14a840:
    // 0x14a840: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a844: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a848: 0xc111590  jal         func_445640
    ctx->pc = 0x14A848u;
    SET_GPR_U32(ctx, 31, 0x14A850u);
    ctx->pc = 0x14A84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A848u;
    // 0x14a84c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14A848u, 0x14A850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A850u;
label_14a850:
    // 0x14a850: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14a850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14a854: 0x8c67bcd8  lw          $a3, -0x4328($v1)
    ctx->pc = 0x14a854u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50BCD8u));
    // 0x14a858: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x14a858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x14a85c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14a860: 0x8ce50010  lw          $a1, 0x10($a3)
    ctx->pc = 0x14a860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14a864: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x14a864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a868: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x14a868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x14a86c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14a870: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14a874: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14a874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14a878: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x14a878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x14a87c: 0x243302a  slt         $a2, $s2, $v1
    ctx->pc = 0x14a87cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a880: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x14a880u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x14a884: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x14a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x14a888: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x14a888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x14a88c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A88Cu;
    {
        const bool branch_taken_0x14a88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a88c) {
            ctx->pc = 0x14A890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A88Cu;
            // 0x14a890: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8ACu;
            goto label_14a8ac;
        }
    }
    ctx->pc = 0x14A894u;
    // 0x14a894: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x14a894u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14a898: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14A898u;
    {
        const bool branch_taken_0x14a898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a898) {
            ctx->pc = 0x14A89Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A898u;
            // 0x14a89c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A8A0u;
            goto label_14a8a0;
        }
    }
    ctx->pc = 0x14A8A0u;
label_14a8a0:
    // 0x14a8a0: 0x1010  mfhi        $v0
    ctx->pc = 0x14a8a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x14a8a4: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x14a8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
    // 0x14a8a8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x14a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_14a8ac:
    // 0x14a8ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x14a8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a8b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14a8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a8b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14a8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14a8b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14a8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a8bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14a8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a8c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x14a8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a8c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a8c8: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x14a8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x14a8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x14A8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A8CCu;
        // 0x14a8d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A8D4u;
    // 0x14a8d4: 0x0  nop
    ctx->pc = 0x14a8d4u;
    // NOP
    ctx->pc = 0x14a8d8u;
}
