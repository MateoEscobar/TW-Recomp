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

// Function: sub_003A85F0
// Address: 0x3a85f0 - 0x3a8678
void sub_003A85F0_0x3a85f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A85F0_0x3a85f0");
#endif

    switch (ctx->pc) {
        case 0x3a8620u: goto label_3a8620;
        case 0x3a8630u: goto label_3a8630;
        case 0x3a8650u: goto label_3a8650;
        default: break;
    }

    ctx->pc = 0x3a85f0u;

    // 0x3a85f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a85f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a85f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3a85f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3a85f8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3a85f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3a85fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a85fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3a8600: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3a8600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3a8604: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A8604u;
    {
        const bool branch_taken_0x3a8604 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A8608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8604u;
        // 0x3a8608: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8604) {
            ctx->pc = 0x3A865Cu;
            goto label_3a865c;
        }
    }
    ctx->pc = 0x3A860Cu;
    // 0x3a860c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3A860Cu;
    {
        const bool branch_taken_0x3a860c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A8610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A860Cu;
        // 0x3a8610: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a860c) {
            ctx->pc = 0x3A865Cu;
            goto label_3a865c;
        }
    }
    ctx->pc = 0x3A8614u;
    // 0x3a8614: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3a8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a8618: 0x24441550  addiu       $a0, $v0, 0x1550
    ctx->pc = 0x3a8618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5456));
    // 0x3a861c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x3a861cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a8620:
    // 0x3a8620: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x3a8620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a8624: 0x24900410  addiu       $s0, $a0, 0x410
    ctx->pc = 0x3a8624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1040));
    // 0x3a8628: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3a8628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3a862c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a862cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a8630:
    // 0x3a8630: 0x0  nop
    ctx->pc = 0x3a8630u;
    // NOP
    // 0x3a8634: 0x0  nop
    ctx->pc = 0x3a8634u;
    // NOP
    // 0x3a8638: 0x0  nop
    ctx->pc = 0x3a8638u;
    // NOP
    // 0x3a863c: 0x0  nop
    ctx->pc = 0x3a863cu;
    // NOP
    // 0x3a8640: 0x1472fffb  bne         $v1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A8640u;
    {
        const bool branch_taken_0x3a8640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A8644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8640u;
        // 0x3a8644: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8640) {
            ctx->pc = 0x3A8630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8630;
        }
    }
    ctx->pc = 0x3A8648u;
    // 0x3a8648: 0xc138ddc  jal         func_4E3770
    ctx->pc = 0x3A8648u;
    SET_GPR_U32(ctx, 31, 0x3A8650u);
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3A8648u, 0x3A8650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8650u;
label_3a8650:
    // 0x3a8650: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x3a8650u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8654: 0x1472fff2  bne         $v1, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x3A8654u;
    {
        const bool branch_taken_0x3a8654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x3A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8654u;
        // 0x3a8658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8654) {
            ctx->pc = 0x3A8620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8620;
        }
    }
    ctx->pc = 0x3A865Cu;
label_3a865c:
    // 0x3a865c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3a865cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a8660: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a8660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8664: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3a8664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8668: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a8668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a866c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A866Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A866Cu;
        // 0x3a8670: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A866Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8674u;
    // 0x3a8674: 0x0  nop
    ctx->pc = 0x3a8674u;
    // NOP
    ctx->pc = 0x3a8678u;
}
