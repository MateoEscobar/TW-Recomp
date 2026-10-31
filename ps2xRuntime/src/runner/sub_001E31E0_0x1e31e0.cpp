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

// Function: sub_001E31E0
// Address: 0x1e31e0 - 0x1e3220
void sub_001E31E0_0x1e31e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E31E0_0x1e31e0");
#endif

    switch (ctx->pc) {
        case 0x1e3204u: goto label_1e3204;
        default: break;
    }

    ctx->pc = 0x1e31e0u;

    // 0x1e31e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e31e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e31e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e31e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e31e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e31e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e31ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e31ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e31f0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1e31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e31f4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E31F4u;
    {
        const bool branch_taken_0x1e31f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e31f4) {
            ctx->pc = 0x1E31F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E31F4u;
            // 0x1e31f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E3210u;
            goto label_1e3210;
        }
    }
    ctx->pc = 0x1E31FCu;
    // 0x1e31fc: 0xc06e4a4  jal         func_1B9290
    ctx->pc = 0x1E31FCu;
    SET_GPR_U32(ctx, 31, 0x1E3204u);
    ctx->pc = 0x1E3200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E31FCu;
    // 0x1e3200: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9290u, 0x1E31FCu, 0x1E3204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3204u;
label_1e3204:
    // 0x1e3204: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e3204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e3208: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e3208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e320c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e320cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3210:
    // 0x1e3210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3214: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3214u;
        // 0x1e3218: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E321Cu;
    // 0x1e321c: 0x0  nop
    ctx->pc = 0x1e321cu;
    // NOP
    ctx->pc = 0x1e3220u;
}
