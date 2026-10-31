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

// Function: sub_00471ED8
// Address: 0x471ed8 - 0x471f18
void sub_00471ED8_0x471ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471ED8_0x471ed8");
#endif

    switch (ctx->pc) {
        case 0x471f04u: goto label_471f04;
        default: break;
    }

    ctx->pc = 0x471ed8u;

    // 0x471ed8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x471ed8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x471edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x471ee0: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x471ee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ee4: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x471ee4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471ee8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x471ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471eec: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x471eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x471ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x471ef4: 0x2444e768  addiu       $a0, $v0, -0x1898
    ctx->pc = 0x471ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961000));
    // 0x471ef8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x471ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x471efc: 0xc11fd86  jal         func_47F618
    ctx->pc = 0x471EFCu;
    SET_GPR_U32(ctx, 31, 0x471F04u);
    ctx->pc = 0x471F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x471EFCu;
    // 0x471f00: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F618u, 0x471EFCu, 0x471F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F04u;
label_471f04:
    // 0x471f04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x471f08: 0x3e00008  jr          $ra
    ctx->pc = 0x471F08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471F08u;
        // 0x471f0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471F08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471F10u;
    // 0x471f10: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x471f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x471f14: 0x0  nop
    ctx->pc = 0x471f14u;
    // NOP
    ctx->pc = 0x471f18u;
}
