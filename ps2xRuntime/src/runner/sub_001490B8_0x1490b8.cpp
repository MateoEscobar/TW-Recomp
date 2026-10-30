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

// Function: sub_001490B8
// Address: 0x1490b8 - 0x149160
void sub_001490B8_0x1490b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001490B8_0x1490b8");
#endif

    switch (ctx->pc) {
        case 0x1490dcu: goto label_1490dc;
        case 0x1490f0u: goto label_1490f0;
        case 0x1490fcu: goto label_1490fc;
        case 0x149118u: goto label_149118;
        default: break;
    }

    ctx->pc = 0x1490b8u;

    // 0x1490b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1490b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1490bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1490bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1490c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1490c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1490c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1490c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1490c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1490ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1490d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1490d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1490d4: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1490D4u;
    SET_GPR_U32(ctx, 31, 0x1490DCu);
    ctx->pc = 0x1490D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490D4u;
    // 0x1490d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1490D4u, 0x1490DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490DCu;
label_1490dc:
    // 0x1490dc: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x1490dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x1490e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1490e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490e4: 0x261091e0  addiu       $s0, $s0, -0x6E20
    ctx->pc = 0x1490e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939104));
    // 0x1490e8: 0xc050ff6  jal         func_143FD8
    ctx->pc = 0x1490E8u;
    SET_GPR_U32(ctx, 31, 0x1490F0u);
    ctx->pc = 0x1490ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490E8u;
    // 0x1490ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FD8u, 0x1490E8u, 0x1490F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490F0u;
label_1490f0:
    // 0x1490f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1490f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1490f4: 0xc050fda  jal         func_143F68
    ctx->pc = 0x1490F4u;
    SET_GPR_U32(ctx, 31, 0x1490FCu);
    ctx->pc = 0x1490F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1490F4u;
    // 0x1490f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1490F4u, 0x1490FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1490FCu;
label_1490fc:
    // 0x1490fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1490fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149100: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x149100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149104: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149104u;
    {
        const bool branch_taken_0x149104 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x149108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149104u;
        // 0x149108: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149104) {
            ctx->pc = 0x149138u;
            goto label_149138;
        }
    }
    ctx->pc = 0x14910Cu;
    // 0x14910c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x14910cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x149110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149114: 0x0  nop
    ctx->pc = 0x149114u;
    // NOP
label_149118:
    // 0x149118: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x149118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x14911c: 0x54460003  bnel        $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14911Cu;
    {
        const bool branch_taken_0x14911c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x14911c) {
            ctx->pc = 0x149120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14911Cu;
            // 0x149120: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14912Cu;
            goto label_14912c;
        }
    }
    ctx->pc = 0x149124u;
    // 0x149124: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149124u;
    {
        const bool branch_taken_0x149124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149124u;
        // 0x149128: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149124) {
            ctx->pc = 0x14913Cu;
            goto label_14913c;
        }
    }
    ctx->pc = 0x14912Cu;
label_14912c:
    // 0x14912c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x14912cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x149130: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x149130u;
    {
        const bool branch_taken_0x149130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149130u;
        // 0x149134: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149130) {
            ctx->pc = 0x149118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149118;
        }
    }
    ctx->pc = 0x149138u;
label_149138:
    // 0x149138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14913c:
    // 0x14913c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14913cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149140: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x149140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149144: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x149144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14914c: 0x3e00008  jr          $ra
    ctx->pc = 0x14914Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14914Cu;
        // 0x149150: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14914Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149154u;
    // 0x149154: 0x0  nop
    ctx->pc = 0x149154u;
    // NOP
    // 0x149158: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x149158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14915c: 0x0  nop
    ctx->pc = 0x14915cu;
    // NOP
    ctx->pc = 0x149160u;
}
