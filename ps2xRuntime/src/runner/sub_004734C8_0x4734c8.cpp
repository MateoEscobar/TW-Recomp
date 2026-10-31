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

// Function: sub_004734C8
// Address: 0x4734c8 - 0x473538
void sub_004734C8_0x4734c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004734C8_0x4734c8");
#endif

    switch (ctx->pc) {
        case 0x4734c8u: goto label_4734c8;
        case 0x4734ccu: goto label_4734cc;
        case 0x4734d0u: goto label_4734d0;
        case 0x4734d4u: goto label_4734d4;
        case 0x4734d8u: goto label_4734d8;
        case 0x4734dcu: goto label_4734dc;
        case 0x4734e0u: goto label_4734e0;
        case 0x4734e4u: goto label_4734e4;
        case 0x4734e8u: goto label_4734e8;
        case 0x4734ecu: goto label_4734ec;
        case 0x4734f0u: goto label_4734f0;
        case 0x4734f4u: goto label_4734f4;
        case 0x4734f8u: goto label_4734f8;
        case 0x4734fcu: goto label_4734fc;
        case 0x473500u: goto label_473500;
        case 0x473504u: goto label_473504;
        case 0x473508u: goto label_473508;
        case 0x47350cu: goto label_47350c;
        case 0x473510u: goto label_473510;
        case 0x473514u: goto label_473514;
        case 0x473518u: goto label_473518;
        case 0x47351cu: goto label_47351c;
        case 0x473520u: goto label_473520;
        case 0x473524u: goto label_473524;
        case 0x473528u: goto label_473528;
        case 0x47352cu: goto label_47352c;
        case 0x473530u: goto label_473530;
        case 0x473534u: goto label_473534;
        default: break;
    }

    ctx->pc = 0x4734c8u;

label_4734c8:
    // 0x4734c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4734c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4734cc:
    // 0x4734cc: 0x8f828518  lw          $v0, -0x7AE8($gp)
    ctx->pc = 0x4734ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935832)));
label_4734d0:
    // 0x4734d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4734d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4734d4:
    // 0x4734d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4734d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4734d8:
    // 0x4734d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4734d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4734dc:
    // 0x4734dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4734dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4734e0:
    // 0x4734e0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x4734e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_4734e4:
    // 0x4734e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4734e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4734e8:
    // 0x4734e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_4734ec:
    if (ctx->pc == 0x4734ECu) {
        ctx->pc = 0x4734ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4734E8u;
        // 0x4734ec: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4734F0u;
        goto label_4734f0;
    }
    ctx->pc = 0x4734E8u;
    {
        const bool branch_taken_0x4734e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4734ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4734E8u;
        // 0x4734ec: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4734e8) {
            ctx->pc = 0x4734FCu;
            goto label_4734fc;
        }
    }
    ctx->pc = 0x4734F0u;
label_4734f0:
    // 0x4734f0: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4734f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4734f4:
    // 0x4734f4: 0x40f809  jalr        $v0
label_4734f8:
    if (ctx->pc == 0x4734F8u) {
        ctx->pc = 0x4734FCu;
        goto label_4734fc;
    }
    ctx->pc = 0x4734F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4734FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4734F4u, 0x4734FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4734FCu;
label_4734fc:
    // 0x4734fc: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4734fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_473500:
    // 0x473500: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x473500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_473504:
    // 0x473504: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x473504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_473508:
    // 0x473508: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x473508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_47350c:
    // 0x47350c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x47350cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_473510:
    // 0x473510: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x473510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
label_473514:
    // 0x473514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_473518:
    // 0x473518: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x473518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_47351c:
    // 0x47351c: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x47351cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
label_473520:
    // 0x473520: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x473520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_473524:
    // 0x473524: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x473524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_473528:
    // 0x473528: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x473528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_47352c:
    // 0x47352c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47352cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_473530:
    // 0x473530: 0x3e00008  jr          $ra
label_473534:
    if (ctx->pc == 0x473534u) {
        ctx->pc = 0x473534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473530u;
        // 0x473534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x473538u;
        goto label_fallthrough_0x473530;
    }
    ctx->pc = 0x473530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473530u;
        // 0x473534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x473530:
    ctx->pc = 0x473538u;
}
