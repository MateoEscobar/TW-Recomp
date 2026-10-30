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

// Function: sub_001BC2F0
// Address: 0x1bc2f0 - 0x1bc328
void sub_001BC2F0_0x1bc2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC2F0_0x1bc2f0");
#endif

    switch (ctx->pc) {
        case 0x1bc310u: goto label_1bc310;
        default: break;
    }

    ctx->pc = 0x1bc2f0u;

    // 0x1bc2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bc2f4: 0x3c013f6b  lui         $at, 0x3F6B
    ctx->pc = 0x1bc2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16235 << 16));
    // 0x1bc2f8: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1bc2f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1bc2fc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bc300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bc304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc308: 0xc05e602  jal         func_179808
    ctx->pc = 0x1BC308u;
    SET_GPR_U32(ctx, 31, 0x1BC310u);
    ctx->pc = 0x1BC30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC308u;
    // 0x1bc30c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1BC308u, 0x1BC310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC310u;
label_1bc310:
    // 0x1bc310: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bc310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc318: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bc318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc31c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC31Cu;
        // 0x1bc320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC324u;
    // 0x1bc324: 0x0  nop
    ctx->pc = 0x1bc324u;
    // NOP
    ctx->pc = 0x1bc328u;
}
