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

// Function: sub_002E49F8
// Address: 0x2e49f8 - 0x2e4a50
void sub_002E49F8_0x2e49f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E49F8_0x2e49f8");
#endif

    switch (ctx->pc) {
        case 0x2e4a18u: goto label_2e4a18;
        case 0x2e4a3cu: goto label_2e4a3c;
        default: break;
    }

    ctx->pc = 0x2e49f8u;

    // 0x2e49f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e49f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e49fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e49fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e4a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e4a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4a08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a0c: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e4a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e4a10: 0xc0d5068  jal         func_3541A0
    ctx->pc = 0x2E4A10u;
    SET_GPR_U32(ctx, 31, 0x2E4A18u);
    ctx->pc = 0x2E4A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A10u;
    // 0x2e4a14: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3541A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3541A0u, 0x2E4A10u, 0x2E4A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A18u;
label_2e4a18:
    // 0x2e4a18: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2e4a18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2e4a1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e4a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a20: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2e4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e4a24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4a24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a28: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x2e4a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2e4a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e4a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4a30: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e4a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4a34: 0xc0d4fd0  jal         func_353F40
    ctx->pc = 0x2E4A34u;
    SET_GPR_U32(ctx, 31, 0x2E4A3Cu);
    ctx->pc = 0x2E4A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4A34u;
    // 0x2e4a38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F40u, 0x2E4A34u, 0x2E4A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4A3Cu;
label_2e4a3c:
    // 0x2e4a3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e4a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e4a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4a44: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4A44u;
        // 0x2e4a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4A4Cu;
    // 0x2e4a4c: 0x0  nop
    ctx->pc = 0x2e4a4cu;
    // NOP
    ctx->pc = 0x2e4a50u;
}
