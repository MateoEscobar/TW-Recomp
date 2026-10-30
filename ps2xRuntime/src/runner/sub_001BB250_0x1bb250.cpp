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

// Function: sub_001BB250
// Address: 0x1bb250 - 0x1bb2b0
void sub_001BB250_0x1bb250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB250_0x1bb250");
#endif

    switch (ctx->pc) {
        case 0x1bb26cu: goto label_1bb26c;
        case 0x1bb280u: goto label_1bb280;
        default: break;
    }

    ctx->pc = 0x1bb250u;

    // 0x1bb250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb254: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bb254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bb258: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bb258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb25c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb264: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1BB264u;
    SET_GPR_U32(ctx, 31, 0x1BB26Cu);
    ctx->pc = 0x1BB268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB264u;
    // 0x1bb268: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1BB264u, 0x1BB26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB26Cu;
label_1bb26c:
    // 0x1bb26c: 0xae11006c  sw          $s1, 0x6C($s0)
    ctx->pc = 0x1bb26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 17));
    // 0x1bb270: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1bb270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1bb274: 0xae110068  sw          $s1, 0x68($s0)
    ctx->pc = 0x1bb274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    // 0x1bb278: 0xc068a44  jal         func_1A2910
    ctx->pc = 0x1BB278u;
    SET_GPR_U32(ctx, 31, 0x1BB280u);
    ctx->pc = 0x1BB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB278u;
    // 0x1bb27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2910u, 0x1BB278u, 0x1BB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB280u;
label_1bb280:
    // 0x1bb280: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bb280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb284: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x1bb284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x1bb288: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1bb288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1bb28c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x1bb28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x1bb290: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x1bb290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x1bb294: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1bb294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1bb298: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb29c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB2A4u;
        // 0x1bb2a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB2ACu;
    // 0x1bb2ac: 0x0  nop
    ctx->pc = 0x1bb2acu;
    // NOP
    ctx->pc = 0x1bb2b0u;
}
