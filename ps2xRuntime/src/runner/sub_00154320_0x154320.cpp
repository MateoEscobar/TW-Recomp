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

// Function: sub_00154320
// Address: 0x154320 - 0x154370
void sub_00154320_0x154320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154320_0x154320");
#endif

    switch (ctx->pc) {
        case 0x15434cu: goto label_15434c;
        default: break;
    }

    ctx->pc = 0x154320u;

    // 0x154320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154324: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x154324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x154328: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15432c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15432cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x154334: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x154334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154338: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x154338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15433c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x15433cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x154340: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x154340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x154344: 0xc10c190  jal         func_430640
    ctx->pc = 0x154344u;
    SET_GPR_U32(ctx, 31, 0x15434Cu);
    ctx->pc = 0x154348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154344u;
    // 0x154348: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x154344u, 0x15434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15434Cu;
label_15434c:
    // 0x15434c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x15434cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x154350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154354: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x154354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x154358: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x154358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x15435c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x15435cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x154360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154364: 0x3e00008  jr          $ra
    ctx->pc = 0x154364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154364u;
        // 0x154368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15436Cu;
    // 0x15436c: 0x0  nop
    ctx->pc = 0x15436cu;
    // NOP
    ctx->pc = 0x154370u;
}
