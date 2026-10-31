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

// Function: sub_004658D0
// Address: 0x4658d0 - 0x465970
void sub_004658D0_0x4658d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004658D0_0x4658d0");
#endif

    switch (ctx->pc) {
        case 0x465900u: goto label_465900;
        case 0x465940u: goto label_465940;
        case 0x46594cu: goto label_46594c;
        case 0x465954u: goto label_465954;
        default: break;
    }

    ctx->pc = 0x4658d0u;

    // 0x4658d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4658d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4658d4: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x4658d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x4658d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4658d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4658dc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4658dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4658e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4658e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4658e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4658e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4658e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4658ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x4658ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4658f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4658f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658f4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x4658f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4658f8: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x4658f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x4658fc: 0x0  nop
    ctx->pc = 0x4658fcu;
    // NOP
label_465900:
    // 0x465900: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x465900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x465904: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x465904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x465908: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x465908u;
    {
        const bool branch_taken_0x465908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x46590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465908u;
        // 0x46590c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465908) {
            ctx->pc = 0x465918u;
            goto label_465918;
        }
    }
    ctx->pc = 0x465910u;
    // 0x465910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465910u;
    {
        const bool branch_taken_0x465910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465910u;
        // 0x465914: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465910) {
            ctx->pc = 0x46592Cu;
            goto label_46592c;
        }
    }
    ctx->pc = 0x465918u;
label_465918:
    // 0x465918: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x465918u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x46591c: 0x2ce30002  sltiu       $v1, $a3, 0x2
    ctx->pc = 0x46591cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465920: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465920u;
    {
        const bool branch_taken_0x465920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465920u;
        // 0x465924: 0x71180  sll         $v0, $a3, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465920) {
            ctx->pc = 0x465900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465900;
        }
    }
    ctx->pc = 0x465928u;
    // 0x465928: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46592c:
    // 0x46592c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x46592cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x465930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465934: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x465934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x465938: 0xc11981e  jal         func_466078
    ctx->pc = 0x465938u;
    SET_GPR_U32(ctx, 31, 0x465940u);
    ctx->pc = 0x46593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465938u;
    // 0x46593c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466078u, 0x465938u, 0x465940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465940u;
label_465940:
    // 0x465940: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x465940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465944: 0xc11981e  jal         func_466078
    ctx->pc = 0x465944u;
    SET_GPR_U32(ctx, 31, 0x46594Cu);
    ctx->pc = 0x465948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x465944u;
    // 0x465948: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466078u, 0x465944u, 0x46594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46594Cu;
label_46594c:
    // 0x46594c: 0xc11979e  jal         func_465E78
    ctx->pc = 0x46594Cu;
    SET_GPR_U32(ctx, 31, 0x465954u);
    ctx->pc = 0x465950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46594Cu;
    // 0x465950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x465E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465E78u, 0x46594Cu, 0x465954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465954u;
label_465954:
    // 0x465954: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x465958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46595c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x465960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x465960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x465964: 0x3e00008  jr          $ra
    ctx->pc = 0x465964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465964u;
        // 0x465968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x465964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46596Cu;
    // 0x46596c: 0x0  nop
    ctx->pc = 0x46596cu;
    // NOP
    ctx->pc = 0x465970u;
}
