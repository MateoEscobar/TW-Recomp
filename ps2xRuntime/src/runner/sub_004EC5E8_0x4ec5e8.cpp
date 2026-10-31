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

// Function: sub_004EC5E8
// Address: 0x4ec5e8 - 0x4ec650
void sub_004EC5E8_0x4ec5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC5E8_0x4ec5e8");
#endif

    switch (ctx->pc) {
        case 0x4ec618u: goto label_4ec618;
        case 0x4ec624u: goto label_4ec624;
        case 0x4ec630u: goto label_4ec630;
        case 0x4ec63cu: goto label_4ec63c;
        default: break;
    }

    ctx->pc = 0x4ec5e8u;

    // 0x4ec5e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ec5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ec5ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4ec5f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ec5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ec5f4: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4ec5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4ec5f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ec5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ec5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ec5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ec600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ec604: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ec604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ec608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ec60c: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x4ec60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x4ec610: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4EC610u;
    SET_GPR_U32(ctx, 31, 0x4EC618u);
    ctx->pc = 0x4EC614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC610u;
    // 0x4ec614: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC610u, 0x4EC618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC618u;
label_4ec618:
    // 0x4ec618: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4ec618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4ec61c: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4EC61Cu;
    SET_GPR_U32(ctx, 31, 0x4EC624u);
    ctx->pc = 0x4EC620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC61Cu;
    // 0x4ec620: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC61Cu, 0x4EC624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC624u;
label_4ec624:
    // 0x4ec624: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4ec624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4ec628: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4EC628u;
    SET_GPR_U32(ctx, 31, 0x4EC630u);
    ctx->pc = 0x4EC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC628u;
    // 0x4ec62c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC628u, 0x4EC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC630u;
label_4ec630:
    // 0x4ec630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ec630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ec634: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4EC634u;
    SET_GPR_U32(ctx, 31, 0x4EC63Cu);
    ctx->pc = 0x4EC638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC634u;
    // 0x4ec638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC634u, 0x4EC63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC63Cu;
label_4ec63c:
    // 0x4ec63c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ec63cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ec640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ec640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ec644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ec644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ec648: 0x3e00008  jr          $ra
    ctx->pc = 0x4EC648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC648u;
        // 0x4ec64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC650u;
}
