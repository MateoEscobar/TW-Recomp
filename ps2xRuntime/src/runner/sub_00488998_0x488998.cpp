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

// Function: sub_00488998
// Address: 0x488998 - 0x4889d8
void sub_00488998_0x488998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488998_0x488998");
#endif

    switch (ctx->pc) {
        case 0x488998u: goto label_488998;
        case 0x48899cu: goto label_48899c;
        case 0x4889a0u: goto label_4889a0;
        case 0x4889a4u: goto label_4889a4;
        case 0x4889a8u: goto label_4889a8;
        case 0x4889acu: goto label_4889ac;
        case 0x4889b0u: goto label_4889b0;
        case 0x4889b4u: goto label_4889b4;
        case 0x4889b8u: goto label_4889b8;
        case 0x4889bcu: goto label_4889bc;
        case 0x4889c0u: goto label_4889c0;
        case 0x4889c4u: goto label_4889c4;
        case 0x4889c8u: goto label_4889c8;
        case 0x4889ccu: goto label_4889cc;
        case 0x4889d0u: goto label_4889d0;
        case 0x4889d4u: goto label_4889d4;
        default: break;
    }

    ctx->pc = 0x488998u;

label_488998:
    // 0x488998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x488998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_48899c:
    // 0x48899c: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x48899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_4889a0:
    // 0x4889a0: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4889a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4889a4:
    // 0x4889a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4889a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4889a8:
    // 0x4889a8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4889a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4889ac:
    // 0x4889ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4889acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4889b0:
    // 0x4889b0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x4889b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4889b4:
    // 0x4889b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4889b8:
    if (ctx->pc == 0x4889B8u) {
        ctx->pc = 0x4889B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889B4u;
        // 0x4889b8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4889BCu;
        goto label_4889bc;
    }
    ctx->pc = 0x4889B4u;
    {
        const bool branch_taken_0x4889b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4889B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889B4u;
        // 0x4889b8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4889b4) {
            ctx->pc = 0x4889C4u;
            goto label_4889c4;
        }
    }
    ctx->pc = 0x4889BCu;
label_4889bc:
    // 0x4889bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_4889c0:
    if (ctx->pc == 0x4889C0u) {
        ctx->pc = 0x4889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889BCu;
        // 0x4889c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4889C4u;
        goto label_4889c4;
    }
    ctx->pc = 0x4889BCu;
    {
        const bool branch_taken_0x4889bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889BCu;
        // 0x4889c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4889bc) {
            ctx->pc = 0x4889CCu;
            goto label_4889cc;
        }
    }
    ctx->pc = 0x4889C4u;
label_4889c4:
    // 0x4889c4: 0x40f809  jalr        $v0
label_4889c8:
    if (ctx->pc == 0x4889C8u) {
        ctx->pc = 0x4889CCu;
        goto label_4889cc;
    }
    ctx->pc = 0x4889C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4889CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4889C4u, 0x4889CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4889CCu;
label_4889cc:
    // 0x4889cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4889ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4889d0:
    // 0x4889d0: 0x3e00008  jr          $ra
label_4889d4:
    if (ctx->pc == 0x4889D4u) {
        ctx->pc = 0x4889D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889D0u;
        // 0x4889d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4889D8u;
        goto label_fallthrough_0x4889d0;
    }
    ctx->pc = 0x4889D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4889D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4889D0u;
        // 0x4889d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4889D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4889d0:
    ctx->pc = 0x4889D8u;
}
