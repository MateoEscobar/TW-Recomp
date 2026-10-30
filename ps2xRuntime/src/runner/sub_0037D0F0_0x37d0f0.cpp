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

// Function: sub_0037D0F0
// Address: 0x37d0f0 - 0x37d140
void sub_0037D0F0_0x37d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D0F0_0x37d0f0");
#endif

    switch (ctx->pc) {
        case 0x37d10cu: goto label_37d10c;
        case 0x37d114u: goto label_37d114;
        case 0x37d11cu: goto label_37d11c;
        case 0x37d128u: goto label_37d128;
        default: break;
    }

    ctx->pc = 0x37d0f0u;

    // 0x37d0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d0f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37d0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d0f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37d0fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37d100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37d104: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37D104u;
    SET_GPR_U32(ctx, 31, 0x37D10Cu);
    ctx->pc = 0x37D108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D104u;
    // 0x37d108: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37D104u, 0x37D10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D10Cu;
label_37d10c:
    // 0x37d10c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37D10Cu;
    SET_GPR_U32(ctx, 31, 0x37D114u);
    ctx->pc = 0x37D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D10Cu;
    // 0x37d110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37D10Cu, 0x37D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D114u;
label_37d114:
    // 0x37d114: 0xc108e0a  jal         func_423828
    ctx->pc = 0x37D114u;
    SET_GPR_U32(ctx, 31, 0x37D11Cu);
    ctx->pc = 0x37D118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D114u;
    // 0x37d118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423828u, 0x37D114u, 0x37D11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D11Cu;
label_37d11c:
    // 0x37d11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d120: 0xc102562  jal         func_409588
    ctx->pc = 0x37D120u;
    SET_GPR_U32(ctx, 31, 0x37D128u);
    ctx->pc = 0x37D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D120u;
    // 0x37d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x37D120u, 0x37D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D128u;
label_37d128:
    // 0x37d128: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37d128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d12c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37d130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37d130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d134: 0x3e00008  jr          $ra
    ctx->pc = 0x37D134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D134u;
        // 0x37d138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D13Cu;
    // 0x37d13c: 0x0  nop
    ctx->pc = 0x37d13cu;
    // NOP
    ctx->pc = 0x37d140u;
}
