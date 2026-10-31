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

// Function: sub_00296130
// Address: 0x296130 - 0x296190
void sub_00296130_0x296130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296130_0x296130");
#endif

    switch (ctx->pc) {
        case 0x29615cu: goto label_29615c;
        default: break;
    }

    ctx->pc = 0x296130u;

    // 0x296130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296134: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x296138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x29613c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29613cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x296140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296148: 0x92030274  lbu         $v1, 0x274($s0)
    ctx->pc = 0x296148u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x29614c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29614Cu;
    {
        const bool branch_taken_0x29614c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x296150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29614Cu;
        // 0x296150: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29614c) {
            ctx->pc = 0x29615Cu;
            goto label_29615c;
        }
    }
    ctx->pc = 0x296154u;
    // 0x296154: 0xc0a55b4  jal         func_2956D0
    ctx->pc = 0x296154u;
    SET_GPR_U32(ctx, 31, 0x29615Cu);
    ctx->pc = 0x2956D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956D0u, 0x296154u, 0x29615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29615Cu;
label_29615c:
    // 0x29615c: 0x92020270  lbu         $v0, 0x270($s0)
    ctx->pc = 0x29615cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 624)));
    // 0x296160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296164: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x296164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x296168: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x296168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29616c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x29616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x296170: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x296170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x296174: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x296174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296178: 0x9062024c  lbu         $v0, 0x24C($v1)
    ctx->pc = 0x296178u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 588)));
    // 0x29617c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29617cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296180: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x296180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x296184: 0x3e00008  jr          $ra
    ctx->pc = 0x296184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296184u;
        // 0x296188: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29618Cu;
    // 0x29618c: 0x0  nop
    ctx->pc = 0x29618cu;
    // NOP
    ctx->pc = 0x296190u;
}
