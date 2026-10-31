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

// Function: sub_00409220
// Address: 0x409220 - 0x409280
void sub_00409220_0x409220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00409220_0x409220");
#endif

    switch (ctx->pc) {
        case 0x409244u: goto label_409244;
        case 0x40925cu: goto label_40925c;
        default: break;
    }

    ctx->pc = 0x409220u;

    // 0x409220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x409220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x409224: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x409224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x409228: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x409228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40922c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409230: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x409230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x409234: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x409234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x409238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40923c: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40923Cu;
    SET_GPR_U32(ctx, 31, 0x409244u);
    ctx->pc = 0x409240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40923Cu;
    // 0x409240: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40923Cu, 0x409244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x409244u;
label_409244:
    // 0x409244: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x409244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x409248: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x409248u;
    {
        const bool branch_taken_0x409248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x409248u;
        // 0x40924c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x409248) {
            ctx->pc = 0x40925Cu;
            goto label_40925c;
        }
    }
    ctx->pc = 0x409250u;
    // 0x409250: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x409250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x409254: 0xc0c8db8  jal         func_3236E0
    ctx->pc = 0x409254u;
    SET_GPR_U32(ctx, 31, 0x40925Cu);
    ctx->pc = 0x409258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x409254u;
    // 0x409258: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3236E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3236E0u, 0x409254u, 0x40925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40925Cu;
label_40925c:
    // 0x40925c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40925cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x409260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x409260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x409264: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x409264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x409268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x409268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40926c: 0x3e00008  jr          $ra
    ctx->pc = 0x40926Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x409270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40926Cu;
        // 0x409270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40926Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x409274u;
    // 0x409274: 0x0  nop
    ctx->pc = 0x409274u;
    // NOP
    // 0x409278: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x409278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40927c: 0x0  nop
    ctx->pc = 0x40927cu;
    // NOP
    ctx->pc = 0x409280u;
}
