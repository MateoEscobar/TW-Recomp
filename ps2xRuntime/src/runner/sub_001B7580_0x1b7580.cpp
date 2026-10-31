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

// Function: sub_001B7580
// Address: 0x1b7580 - 0x1b75f0
void sub_001B7580_0x1b7580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7580_0x1b7580");
#endif

    switch (ctx->pc) {
        case 0x1b7580u: goto label_1b7580;
        case 0x1b7584u: goto label_1b7584;
        case 0x1b7588u: goto label_1b7588;
        case 0x1b758cu: goto label_1b758c;
        case 0x1b7590u: goto label_1b7590;
        case 0x1b7594u: goto label_1b7594;
        case 0x1b7598u: goto label_1b7598;
        case 0x1b759cu: goto label_1b759c;
        case 0x1b75a0u: goto label_1b75a0;
        case 0x1b75a4u: goto label_1b75a4;
        case 0x1b75a8u: goto label_1b75a8;
        case 0x1b75acu: goto label_1b75ac;
        case 0x1b75b0u: goto label_1b75b0;
        case 0x1b75b4u: goto label_1b75b4;
        case 0x1b75b8u: goto label_1b75b8;
        case 0x1b75bcu: goto label_1b75bc;
        case 0x1b75c0u: goto label_1b75c0;
        case 0x1b75c4u: goto label_1b75c4;
        case 0x1b75c8u: goto label_1b75c8;
        case 0x1b75ccu: goto label_1b75cc;
        case 0x1b75d0u: goto label_1b75d0;
        case 0x1b75d4u: goto label_1b75d4;
        case 0x1b75d8u: goto label_1b75d8;
        case 0x1b75dcu: goto label_1b75dc;
        case 0x1b75e0u: goto label_1b75e0;
        case 0x1b75e4u: goto label_1b75e4;
        case 0x1b75e8u: goto label_1b75e8;
        case 0x1b75ecu: goto label_1b75ec;
        default: break;
    }

    ctx->pc = 0x1b7580u;

label_1b7580:
    // 0x1b7580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b7584:
    // 0x1b7584: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b7588:
    // 0x1b7588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b758c:
    // 0x1b758c: 0x24900040  addiu       $s0, $a0, 0x40
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1b7590:
    // 0x1b7590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b7594:
    // 0x1b7594: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b7594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b7598:
    // 0x1b7598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b7598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b759c:
    // 0x1b759c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b759cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b75a0:
    // 0x1b75a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b75a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b75a4:
    // 0x1b75a4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1b75a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1b75a8:
    // 0x1b75a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1b75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1b75ac:
    // 0x1b75ac: 0x40f809  jalr        $v0
label_1b75b0:
    if (ctx->pc == 0x1B75B0u) {
        ctx->pc = 0x1B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75ACu;
        // 0x1b75b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75B4u;
        goto label_1b75b4;
    }
    ctx->pc = 0x1B75ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B75B4u);
        ctx->pc = 0x1B75B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75ACu;
        // 0x1b75b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75ACu, 0x1B75B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B75B4u;
label_1b75b4:
    // 0x1b75b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b75b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b75b8:
    // 0x1b75b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b75b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b75bc:
    // 0x1b75bc: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1b75bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1b75c0:
    // 0x1b75c0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1b75c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1b75c4:
    // 0x1b75c4: 0x40f809  jalr        $v0
label_1b75c8:
    if (ctx->pc == 0x1B75C8u) {
        ctx->pc = 0x1B75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75C4u;
        // 0x1b75c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75CCu;
        goto label_1b75cc;
    }
    ctx->pc = 0x1B75C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B75CCu);
        ctx->pc = 0x1B75C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75C4u;
        // 0x1b75c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75C4u, 0x1B75CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B75CCu;
label_1b75cc:
    // 0x1b75cc: 0x2e220017  sltiu       $v0, $s1, 0x17
    ctx->pc = 0x1b75ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_1b75d0:
    // 0x1b75d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_1b75d4:
    if (ctx->pc == 0x1B75D4u) {
        ctx->pc = 0x1B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D0u;
        // 0x1b75d4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75D8u;
        goto label_1b75d8;
    }
    ctx->pc = 0x1B75D0u;
    {
        const bool branch_taken_0x1b75d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D0u;
        // 0x1b75d4: 0x26100100  addiu       $s0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75d0) {
            ctx->pc = 0x1B7598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7598;
        }
    }
    ctx->pc = 0x1B75D8u;
label_1b75d8:
    // 0x1b75d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b75d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b75dc:
    // 0x1b75dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b75dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b75e0:
    // 0x1b75e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b75e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b75e4:
    // 0x1b75e4: 0x3e00008  jr          $ra
label_1b75e8:
    if (ctx->pc == 0x1B75E8u) {
        ctx->pc = 0x1B75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E4u;
        // 0x1b75e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B75ECu;
        goto label_1b75ec;
    }
    ctx->pc = 0x1B75E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E4u;
        // 0x1b75e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B75E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B75ECu;
label_1b75ec:
    // 0x1b75ec: 0x0  nop
    ctx->pc = 0x1b75ecu;
    // NOP
    ctx->pc = 0x1b75f0u;
}
