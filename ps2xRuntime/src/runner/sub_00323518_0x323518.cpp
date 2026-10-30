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

// Function: sub_00323518
// Address: 0x323518 - 0x323568
void sub_00323518_0x323518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323518_0x323518");
#endif

    switch (ctx->pc) {
        case 0x323528u: goto label_323528;
        default: break;
    }

    ctx->pc = 0x323518u;

    // 0x323518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x323518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32351c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32351cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323520: 0xc0c8cb0  jal         func_3232C0
    ctx->pc = 0x323520u;
    SET_GPR_U32(ctx, 31, 0x323528u);
    ctx->pc = 0x3232C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3232C0u, 0x323520u, 0x323528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323528u;
label_323528:
    // 0x323528: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x323528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32352c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x32352Cu;
    {
        const bool branch_taken_0x32352c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x323530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32352Cu;
        // 0x323530: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32352c) {
            ctx->pc = 0x323550u;
            goto label_323550;
        }
    }
    ctx->pc = 0x323534u;
    // 0x323534: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x323534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x323538: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x323538u;
    {
        const bool branch_taken_0x323538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323538u;
        // 0x32353c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323538) {
            ctx->pc = 0x323554u;
            goto label_323554;
        }
    }
    ctx->pc = 0x323540u;
    // 0x323540: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x323540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x323544: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x323544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x323548: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x323548u;
    {
        const bool branch_taken_0x323548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323548u;
        // 0x32354c: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323548) {
            ctx->pc = 0x323554u;
            goto label_323554;
        }
    }
    ctx->pc = 0x323550u;
label_323550:
    // 0x323550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x323550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_323554:
    // 0x323554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323558: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x323558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32355c: 0x3e00008  jr          $ra
    ctx->pc = 0x32355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32355Cu;
        // 0x323560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323564u;
    // 0x323564: 0x0  nop
    ctx->pc = 0x323564u;
    // NOP
    ctx->pc = 0x323568u;
}
