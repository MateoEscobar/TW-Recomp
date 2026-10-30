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

// Function: sub_00441138
// Address: 0x441138 - 0x4411a8
void sub_00441138_0x441138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441138_0x441138");
#endif

    switch (ctx->pc) {
        case 0x441154u: goto label_441154;
        case 0x44115cu: goto label_44115c;
        case 0x441170u: goto label_441170;
        case 0x44118cu: goto label_44118c;
        default: break;
    }

    ctx->pc = 0x441138u;

    // 0x441138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x441138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44113c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x441140: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x441140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x441144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x441144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441148: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x441148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44114c: 0xc1103d2  jal         func_440F48
    ctx->pc = 0x44114Cu;
    SET_GPR_U32(ctx, 31, 0x441154u);
    ctx->pc = 0x441150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44114Cu;
    // 0x441150: 0x3c110052  lui         $s1, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)82 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440F48u, 0x44114Cu, 0x441154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441154u;
label_441154:
    // 0x441154: 0xc10f438  jal         func_43D0E0
    ctx->pc = 0x441154u;
    SET_GPR_U32(ctx, 31, 0x44115Cu);
    ctx->pc = 0x441158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441154u;
    // 0x441158: 0x8e248ef8  lw          $a0, -0x7108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0E0u, 0x441154u, 0x44115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44115Cu;
label_44115c:
    // 0x44115c: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x44115cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x441160: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x441160u;
    {
        const bool branch_taken_0x441160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x441164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441160u;
        // 0x441164: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441160) {
            ctx->pc = 0x441178u;
            goto label_441178;
        }
    }
    ctx->pc = 0x441168u;
    // 0x441168: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x441168u;
    SET_GPR_U32(ctx, 31, 0x441170u);
    ctx->pc = 0x44116Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441168u;
    // 0x44116c: 0x8e248ef8  lw          $a0, -0x7108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x441168u, 0x441170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441170u;
label_441170:
    // 0x441170: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x441170u;
    {
        const bool branch_taken_0x441170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x441174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441170u;
        // 0x441174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441170) {
            ctx->pc = 0x441190u;
            goto label_441190;
        }
    }
    ctx->pc = 0x441178u;
label_441178:
    // 0x441178: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x441178u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x44117c: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x44117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x441180: 0x8e248ef8  lw          $a0, -0x7108($s1)
    ctx->pc = 0x441180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938360)));
    // 0x441184: 0xc10f430  jal         func_43D0C0
    ctx->pc = 0x441184u;
    SET_GPR_U32(ctx, 31, 0x44118Cu);
    ctx->pc = 0x441188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441184u;
    // 0x441188: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0C0u, 0x441184u, 0x44118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44118Cu;
label_44118c:
    // 0x44118c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x44118cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_441190:
    // 0x441190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x441190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x441194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x441194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x441198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x441198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44119c: 0x3e00008  jr          $ra
    ctx->pc = 0x44119Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4411A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44119Cu;
        // 0x4411a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44119Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4411A4u;
    // 0x4411a4: 0x0  nop
    ctx->pc = 0x4411a4u;
    // NOP
    ctx->pc = 0x4411a8u;
}
