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

// Function: sub_003915D0
// Address: 0x3915d0 - 0x3916a8
void sub_003915D0_0x3915d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003915D0_0x3915d0");
#endif

    switch (ctx->pc) {
        case 0x391614u: goto label_391614;
        case 0x391640u: goto label_391640;
        default: break;
    }

    ctx->pc = 0x3915d0u;

    // 0x3915d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3915d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3915d4: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x3915d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x3915d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3915d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3915dc: 0x34424bc4  ori         $v0, $v0, 0x4BC4
    ctx->pc = 0x3915dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19396);
    // 0x3915e0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3915e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3915e4: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x3915e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3915e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3915e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3915ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3915ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3915f0: 0x2708018  mult        $s0, $s3, $s0
    ctx->pc = 0x3915f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x3915f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3915f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3915f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3915f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3915fc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3915fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x391600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x391604: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x391604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391608: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x391608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39160c: 0xc10c366  jal         func_430D98
    ctx->pc = 0x39160Cu;
    SET_GPR_U32(ctx, 31, 0x391614u);
    ctx->pc = 0x391610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39160Cu;
    // 0x391610: 0x2422021  addu        $a0, $s2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430D98u, 0x39160Cu, 0x391614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391614u;
label_391614:
    // 0x391614: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x391614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x391618: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x391618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x39161c: 0x34424be4  ori         $v0, $v0, 0x4BE4
    ctx->pc = 0x39161cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19428);
    // 0x391620: 0x34634be8  ori         $v1, $v1, 0x4BE8
    ctx->pc = 0x391620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19432);
    // 0x391624: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x391624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x391628: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x391628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x39162c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x39162cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x391630: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x391630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x391634: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x391634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x391638: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x391638u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39163c: 0x0  nop
    ctx->pc = 0x39163cu;
    // NOP
label_391640:
    // 0x391640: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x391640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x391644: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x391644u;
    {
        const bool branch_taken_0x391644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x391644) {
            ctx->pc = 0x391648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391644u;
            // 0x391648: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391654u;
            goto label_391654;
        }
    }
    ctx->pc = 0x39164Cu;
    // 0x39164c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x39164Cu;
    {
        const bool branch_taken_0x39164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39164Cu;
        // 0x391650: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39164c) {
            ctx->pc = 0x391688u;
            goto label_391688;
        }
    }
    ctx->pc = 0x391654u;
label_391654:
    // 0x391654: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x391654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x391658: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x391658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x39165c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x39165cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x391660: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x391660u;
    {
        const bool branch_taken_0x391660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391660u;
        // 0x391664: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391660) {
            ctx->pc = 0x391640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_391640;
        }
    }
    ctx->pc = 0x391668u;
    // 0x391668: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x391668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x39166c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x39166cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x391670: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x391670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x391674: 0x34424be4  ori         $v0, $v0, 0x4BE4
    ctx->pc = 0x391674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19428);
    // 0x391678: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x391678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x39167c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x39167cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x391680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x391680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391684: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x391684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_391688:
    // 0x391688: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x391688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39168c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x39168cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391690: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x391690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x391694: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x391694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x391698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x391698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39169c: 0x3e00008  jr          $ra
    ctx->pc = 0x39169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3916A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39169Cu;
        // 0x3916a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3916A4u;
    // 0x3916a4: 0x0  nop
    ctx->pc = 0x3916a4u;
    // NOP
    ctx->pc = 0x3916a8u;
}
