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

// Function: sub_002962F0
// Address: 0x2962f0 - 0x296358
void sub_002962F0_0x2962f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002962F0_0x2962f0");
#endif

    switch (ctx->pc) {
        case 0x2962f0u: goto label_2962f0;
        case 0x2962f4u: goto label_2962f4;
        case 0x2962f8u: goto label_2962f8;
        case 0x2962fcu: goto label_2962fc;
        case 0x296300u: goto label_296300;
        case 0x296304u: goto label_296304;
        case 0x296308u: goto label_296308;
        case 0x29630cu: goto label_29630c;
        case 0x296310u: goto label_296310;
        case 0x296314u: goto label_296314;
        case 0x296318u: goto label_296318;
        case 0x29631cu: goto label_29631c;
        case 0x296320u: goto label_296320;
        case 0x296324u: goto label_296324;
        case 0x296328u: goto label_296328;
        case 0x29632cu: goto label_29632c;
        case 0x296330u: goto label_296330;
        case 0x296334u: goto label_296334;
        case 0x296338u: goto label_296338;
        case 0x29633cu: goto label_29633c;
        case 0x296340u: goto label_296340;
        case 0x296344u: goto label_296344;
        case 0x296348u: goto label_296348;
        case 0x29634cu: goto label_29634c;
        case 0x296350u: goto label_296350;
        case 0x296354u: goto label_296354;
        default: break;
    }

    ctx->pc = 0x2962f0u;

label_2962f0:
    // 0x2962f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2962f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2962f4:
    // 0x2962f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2962f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2962f8:
    // 0x2962f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2962f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2962fc:
    // 0x2962fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2962fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_296300:
    // 0x296300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296304:
    // 0x296304: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x296304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_296308:
    // 0x296308: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_29630c:
    // 0x29630c: 0x40f809  jalr        $v0
label_296310:
    if (ctx->pc == 0x296310u) {
        ctx->pc = 0x296310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29630Cu;
        // 0x296310: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296314u;
        goto label_296314;
    }
    ctx->pc = 0x29630Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296314u);
        ctx->pc = 0x296310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29630Cu;
        // 0x296310: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29630Cu, 0x296314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296314u;
label_296314:
    // 0x296314: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x296314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_296318:
    // 0x296318: 0x261001b0  addiu       $s0, $s0, 0x1B0
    ctx->pc = 0x296318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_29631c:
    // 0x29631c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x29631cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_296320:
    // 0x296320: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x296320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_296324:
    // 0x296324: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_296328:
    if (ctx->pc == 0x296328u) {
        ctx->pc = 0x296328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296324u;
        // 0x296328: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29632Cu;
        goto label_29632c;
    }
    ctx->pc = 0x296324u;
    {
        const bool branch_taken_0x296324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x296324) {
            ctx->pc = 0x296328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296324u;
            // 0x296328: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296334u;
            goto label_296334;
        }
    }
    ctx->pc = 0x29632Cu;
label_29632c:
    // 0x29632c: 0x10000005  b           . + 4 + (0x5 << 2)
label_296330:
    if (ctx->pc == 0x296330u) {
        ctx->pc = 0x296330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29632Cu;
        // 0x296330: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296334u;
        goto label_296334;
    }
    ctx->pc = 0x29632Cu;
    {
        const bool branch_taken_0x29632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29632Cu;
        // 0x296330: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29632c) {
            ctx->pc = 0x296344u;
            goto label_296344;
        }
    }
    ctx->pc = 0x296334u;
label_296334:
    // 0x296334: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x296334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_296338:
    // 0x296338: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_29633c:
    if (ctx->pc == 0x29633Cu) {
        ctx->pc = 0x29633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296338u;
        // 0x29633c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296340u;
        goto label_296340;
    }
    ctx->pc = 0x296338u;
    {
        const bool branch_taken_0x296338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296338u;
        // 0x29633c: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296338) {
            ctx->pc = 0x296320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296320;
        }
    }
    ctx->pc = 0x296340u;
label_296340:
    // 0x296340: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x296340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_296344:
    // 0x296344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296348:
    // 0x296348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29634c:
    // 0x29634c: 0x3e00008  jr          $ra
label_296350:
    if (ctx->pc == 0x296350u) {
        ctx->pc = 0x296350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29634Cu;
        // 0x296350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296354u;
        goto label_296354;
    }
    ctx->pc = 0x29634Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29634Cu;
        // 0x296350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29634Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296354u;
label_296354:
    // 0x296354: 0x0  nop
    ctx->pc = 0x296354u;
    // NOP
    ctx->pc = 0x296358u;
}
