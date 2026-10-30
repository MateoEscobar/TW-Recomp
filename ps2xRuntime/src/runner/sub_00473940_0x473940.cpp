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

// Function: sub_00473940
// Address: 0x473940 - 0x473970
void sub_00473940_0x473940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473940_0x473940");
#endif

    switch (ctx->pc) {
        case 0x473960u: goto label_473960;
        default: break;
    }

    ctx->pc = 0x473940u;

    // 0x473940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x473940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x473944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x473944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x473948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47394c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x47394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473950: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x473950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x473954: 0x8cc40054  lw          $a0, 0x54($a2)
    ctx->pc = 0x473954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x473958: 0xc11b60a  jal         func_46D828
    ctx->pc = 0x473958u;
    SET_GPR_U32(ctx, 31, 0x473960u);
    ctx->pc = 0x47395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473958u;
    // 0x47395c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D828u, 0x473958u, 0x473960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473960u;
label_473960:
    // 0x473960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x473960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x473964: 0x3e00008  jr          $ra
    ctx->pc = 0x473964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x473968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473964u;
        // 0x473968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x473964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47396Cu;
    // 0x47396c: 0x0  nop
    ctx->pc = 0x47396cu;
    // NOP
    ctx->pc = 0x473970u;
}
