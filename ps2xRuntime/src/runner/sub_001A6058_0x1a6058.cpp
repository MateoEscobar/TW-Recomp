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

// Function: sub_001A6058
// Address: 0x1a6058 - 0x1a6098
void sub_001A6058_0x1a6058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6058_0x1a6058");
#endif

    switch (ctx->pc) {
        case 0x1a6070u: goto label_1a6070;
        default: break;
    }

    ctx->pc = 0x1a6058u;

    // 0x1a6058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a605c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a605cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6060: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6068: 0xc0e1938  jal         func_3864E0
    ctx->pc = 0x1A6068u;
    SET_GPR_U32(ctx, 31, 0x1A6070u);
    ctx->pc = 0x1A606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6068u;
    // 0x1a606c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3864E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3864E0u, 0x1A6068u, 0x1A6070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6070u;
label_1a6070:
    // 0x1a6070: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a6070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a6074: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1a6074u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a6078: 0x246307c0  addiu       $v1, $v1, 0x7C0
    ctx->pc = 0x1a6078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1984));
    // 0x1a607c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6080: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1a6080u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1a6084: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a6084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a6088: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a6088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a608c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A608Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A608Cu;
        // 0x1a6090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A608Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6094u;
    // 0x1a6094: 0x0  nop
    ctx->pc = 0x1a6094u;
    // NOP
    ctx->pc = 0x1a6098u;
}
