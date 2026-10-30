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

// Function: sub_0038EF30
// Address: 0x38ef30 - 0x38ef60
void sub_0038EF30_0x38ef30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EF30_0x38ef30");
#endif

    switch (ctx->pc) {
        case 0x38ef48u: goto label_38ef48;
        default: break;
    }

    ctx->pc = 0x38ef30u;

    // 0x38ef30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38ef34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38ef34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38ef38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ef38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38ef3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38ef40: 0xc04808c  jal         func_120230
    ctx->pc = 0x38EF40u;
    SET_GPR_U32(ctx, 31, 0x38EF48u);
    ctx->pc = 0x38EF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EF40u;
    // 0x38ef44: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x38EF40u, 0x38EF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EF48u;
label_38ef48:
    // 0x38ef48: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x38ef48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x38ef4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38ef4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ef50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38ef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ef54: 0x3e00008  jr          $ra
    ctx->pc = 0x38EF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EF54u;
        // 0x38ef58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EF5Cu;
    // 0x38ef5c: 0x0  nop
    ctx->pc = 0x38ef5cu;
    // NOP
    ctx->pc = 0x38ef60u;
}
