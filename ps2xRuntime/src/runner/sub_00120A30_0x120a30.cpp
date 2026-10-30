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

// Function: sub_00120A30
// Address: 0x120a30 - 0x120a68
void sub_00120A30_0x120a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120A30_0x120a30");
#endif

    switch (ctx->pc) {
        case 0x120a50u: goto label_120a50;
        case 0x120a58u: goto label_120a58;
        default: break;
    }

    ctx->pc = 0x120a30u;

    // 0x120a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x120a34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120a34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x120a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x120a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x120a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x120a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120a48: 0xc048314  jal         func_120C50
    ctx->pc = 0x120A48u;
    SET_GPR_U32(ctx, 31, 0x120A50u);
    ctx->pc = 0x120A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A48u;
    // 0x120a4c: 0xe60c01a0  swc1        $f12, 0x1A0($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120C50u, 0x120A48u, 0x120A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A50u;
label_120a50:
    // 0x120a50: 0xc04829a  jal         func_120A68
    ctx->pc = 0x120A50u;
    SET_GPR_U32(ctx, 31, 0x120A58u);
    ctx->pc = 0x120A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120A50u;
    // 0x120a54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A68u, 0x120A50u, 0x120A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120A58u;
label_120a58:
    // 0x120a58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x120a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x120a5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x120a5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120a60: 0x3e00008  jr          $ra
    ctx->pc = 0x120A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120A60u;
        // 0x120a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120A68u;
}
