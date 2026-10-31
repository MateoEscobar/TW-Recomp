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

// Function: sub_00154550
// Address: 0x154550 - 0x1545a0
void sub_00154550_0x154550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154550_0x154550");
#endif

    switch (ctx->pc) {
        case 0x154550u: goto label_154550;
        case 0x154554u: goto label_154554;
        case 0x154558u: goto label_154558;
        case 0x15455cu: goto label_15455c;
        case 0x154560u: goto label_154560;
        case 0x154564u: goto label_154564;
        case 0x154568u: goto label_154568;
        case 0x15456cu: goto label_15456c;
        case 0x154570u: goto label_154570;
        case 0x154574u: goto label_154574;
        case 0x154578u: goto label_154578;
        case 0x15457cu: goto label_15457c;
        case 0x154580u: goto label_154580;
        case 0x154584u: goto label_154584;
        case 0x154588u: goto label_154588;
        case 0x15458cu: goto label_15458c;
        case 0x154590u: goto label_154590;
        case 0x154594u: goto label_154594;
        case 0x154598u: goto label_154598;
        case 0x15459cu: goto label_15459c;
        default: break;
    }

    ctx->pc = 0x154550u;

label_154550:
    // 0x154550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_154554:
    // 0x154554: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x154554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_154558:
    // 0x154558: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15455c:
    // 0x15455c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15455cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154560:
    // 0x154560: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x154560u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
label_154564:
    // 0x154564: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x154564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
label_154568:
    // 0x154568: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x154568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_15456c:
    // 0x15456c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x15456cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
label_154570:
    // 0x154570: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x154570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_154574:
    // 0x154574: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x154574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_154578:
    // 0x154578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15457c:
    // 0x15457c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_154580:
    // 0x154580: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_154584:
    // 0x154584: 0x40f809  jalr        $v0
label_154588:
    if (ctx->pc == 0x154588u) {
        ctx->pc = 0x154588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154584u;
        // 0x154588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15458Cu;
        goto label_15458c;
    }
    ctx->pc = 0x154584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15458Cu);
        ctx->pc = 0x154588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154584u;
        // 0x154588: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154584u, 0x15458Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15458Cu;
label_15458c:
    // 0x15458c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x15458cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_154590:
    // 0x154590: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x154590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154594:
    // 0x154594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154598:
    // 0x154598: 0x3e00008  jr          $ra
label_15459c:
    if (ctx->pc == 0x15459Cu) {
        ctx->pc = 0x15459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154598u;
        // 0x15459c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1545A0u;
        goto label_fallthrough_0x154598;
    }
    ctx->pc = 0x154598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154598u;
        // 0x15459c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x154598:
    ctx->pc = 0x1545A0u;
}
