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

// Function: sub_00204098
// Address: 0x204098 - 0x2040c8
void sub_00204098_0x204098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204098_0x204098");
#endif

    switch (ctx->pc) {
        case 0x2040bcu: goto label_2040bc;
        default: break;
    }

    ctx->pc = 0x204098u;

    // 0x204098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20409c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x20409cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2040a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2040a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2040a4: 0x2442f1d8  addiu       $v0, $v0, -0xE28
    ctx->pc = 0x2040a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963672));
    // 0x2040a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2040a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2040acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2040b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2040b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2040b4: 0xc10c4de  jal         func_431378
    ctx->pc = 0x2040B4u;
    SET_GPR_U32(ctx, 31, 0x2040BCu);
    ctx->pc = 0x2040B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2040B4u;
    // 0x2040b8: 0xa0400008  sb          $zero, 0x8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x2040B4u, 0x2040BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2040BCu;
label_2040bc:
    // 0x2040bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2040bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2040c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2040C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2040C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2040C0u;
        // 0x2040c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2040C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2040C8u;
}
