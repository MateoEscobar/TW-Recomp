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

// Function: sub_001A8ED8
// Address: 0x1a8ed8 - 0x1a8f20
void sub_001A8ED8_0x1a8ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8ED8_0x1a8ed8");
#endif

    switch (ctx->pc) {
        case 0x1a8efcu: goto label_1a8efc;
        case 0x1a8f04u: goto label_1a8f04;
        case 0x1a8f0cu: goto label_1a8f0c;
        default: break;
    }

    ctx->pc = 0x1a8ed8u;

    // 0x1a8ed8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8edc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a8edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8ee0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8ee4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1a8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1a8ee8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8ef0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1a8ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1a8ef4: 0xc06a3e2  jal         func_1A8F88
    ctx->pc = 0x1A8EF4u;
    SET_GPR_U32(ctx, 31, 0x1A8EFCu);
    ctx->pc = 0x1A8EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EF4u;
    // 0x1a8ef8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F88u, 0x1A8EF4u, 0x1A8EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8EFCu;
label_1a8efc:
    // 0x1a8efc: 0xc06a3de  jal         func_1A8F78
    ctx->pc = 0x1A8EFCu;
    SET_GPR_U32(ctx, 31, 0x1A8F04u);
    ctx->pc = 0x1A8F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8EFCu;
    // 0x1a8f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F78u, 0x1A8EFCu, 0x1A8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F04u;
label_1a8f04:
    // 0x1a8f04: 0xc06a3ce  jal         func_1A8F38
    ctx->pc = 0x1A8F04u;
    SET_GPR_U32(ctx, 31, 0x1A8F0Cu);
    ctx->pc = 0x1A8F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8F04u;
    // 0x1a8f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F38u, 0x1A8F04u, 0x1A8F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8F0Cu;
label_1a8f0c:
    // 0x1a8f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a8f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8f14: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8F14u;
        // 0x1a8f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8F1Cu;
    // 0x1a8f1c: 0x0  nop
    ctx->pc = 0x1a8f1cu;
    // NOP
    ctx->pc = 0x1a8f20u;
}
