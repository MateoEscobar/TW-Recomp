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

// Function: sub_00219860
// Address: 0x219860 - 0x219890
void sub_00219860_0x219860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00219860_0x219860");
#endif

    switch (ctx->pc) {
        case 0x219870u: goto label_219870;
        default: break;
    }

    ctx->pc = 0x219860u;

    // 0x219860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x219860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x219864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x219864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x219868: 0xc087408  jal         func_21D020
    ctx->pc = 0x219868u;
    SET_GPR_U32(ctx, 31, 0x219870u);
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x219868u, 0x219870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x219870u;
label_219870:
    // 0x219870: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x219870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x219874: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x219874u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x219878: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x219878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21987c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21987cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x219880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x219884: 0x3e00008  jr          $ra
    ctx->pc = 0x219884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219884u;
        // 0x219888: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x219884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21988Cu;
    // 0x21988c: 0x0  nop
    ctx->pc = 0x21988cu;
    // NOP
    ctx->pc = 0x219890u;
}
