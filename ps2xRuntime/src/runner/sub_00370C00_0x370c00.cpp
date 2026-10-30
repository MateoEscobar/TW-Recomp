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

// Function: sub_00370C00
// Address: 0x370c00 - 0x370c38
void sub_00370C00_0x370c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370C00_0x370c00");
#endif

    switch (ctx->pc) {
        case 0x370c14u: goto label_370c14;
        case 0x370c1cu: goto label_370c1c;
        case 0x370c24u: goto label_370c24;
        default: break;
    }

    ctx->pc = 0x370c00u;

    // 0x370c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370c04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x370c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370c0c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x370C0Cu;
    SET_GPR_U32(ctx, 31, 0x370C14u);
    ctx->pc = 0x370C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C0Cu;
    // 0x370c10: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x370C0Cu, 0x370C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C14u;
label_370c14:
    // 0x370c14: 0xc10b108  jal         func_42C420
    ctx->pc = 0x370C14u;
    SET_GPR_U32(ctx, 31, 0x370C1Cu);
    ctx->pc = 0x370C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C14u;
    // 0x370c18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x370C14u, 0x370C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C1Cu;
label_370c1c:
    // 0x370c1c: 0xc06d1a4  jal         func_1B4690
    ctx->pc = 0x370C1Cu;
    SET_GPR_U32(ctx, 31, 0x370C24u);
    ctx->pc = 0x370C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370C1Cu;
    // 0x370c20: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4690u, 0x370C1Cu, 0x370C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370C24u;
label_370c24:
    // 0x370c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x370C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370C2Cu;
        // 0x370c30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370C34u;
    // 0x370c34: 0x0  nop
    ctx->pc = 0x370c34u;
    // NOP
    ctx->pc = 0x370c38u;
}
