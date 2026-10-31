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

// Function: sub_004DE250
// Address: 0x4de250 - 0x4de290
void sub_004DE250_0x4de250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE250_0x4de250");
#endif

    switch (ctx->pc) {
        case 0x4de26cu: goto label_4de26c;
        case 0x4de27cu: goto label_4de27c;
        default: break;
    }

    ctx->pc = 0x4de250u;

    // 0x4de250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4de250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4de254: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4de254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4de258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4de258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4de25c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4de25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4de264: 0xc108a28  jal         func_4228A0
    ctx->pc = 0x4DE264u;
    SET_GPR_U32(ctx, 31, 0x4DE26Cu);
    ctx->pc = 0x4DE268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE264u;
    // 0x4de268: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4228A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4228A0u, 0x4DE264u, 0x4DE26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE26Cu;
label_4de26c:
    // 0x4de26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de270: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4de274: 0xc108468  jal         func_4211A0
    ctx->pc = 0x4DE274u;
    SET_GPR_U32(ctx, 31, 0x4DE27Cu);
    ctx->pc = 0x4DE278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DE274u;
    // 0x4de278: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4211A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4211A0u, 0x4DE274u, 0x4DE27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DE27Cu;
label_4de27c:
    // 0x4de27c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4de27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4de280: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4de280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4de284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4de288: 0x3e00008  jr          $ra
    ctx->pc = 0x4DE288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE288u;
        // 0x4de28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE290u;
}
