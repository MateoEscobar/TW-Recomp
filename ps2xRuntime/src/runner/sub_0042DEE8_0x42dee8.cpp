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

// Function: sub_0042DEE8
// Address: 0x42dee8 - 0x42df38
void sub_0042DEE8_0x42dee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DEE8_0x42dee8");
#endif

    switch (ctx->pc) {
        case 0x42df0cu: goto label_42df0c;
        case 0x42df24u: goto label_42df24;
        default: break;
    }

    ctx->pc = 0x42dee8u;

    // 0x42dee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42dee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x42deec: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x42deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x42def0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42def0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x42def4: 0x8c6259d0  lw          $v0, 0x59D0($v1)
    ctx->pc = 0x42def4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7159D0u));
    // 0x42def8: 0x247059d0  addiu       $s0, $v1, 0x59D0
    ctx->pc = 0x42def8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22992));
    // 0x42defc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42DEFCu;
    {
        const bool branch_taken_0x42defc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42DF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DEFCu;
        // 0x42df00: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42defc) {
            ctx->pc = 0x42DF24u;
            goto label_42df24;
        }
    }
    ctx->pc = 0x42DF04u;
    // 0x42df04: 0xc10b7e0  jal         func_42DF80
    ctx->pc = 0x42DF04u;
    SET_GPR_U32(ctx, 31, 0x42DF0Cu);
    ctx->pc = 0x42DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42DF80u, 0x42DF04u, 0x42DF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DF0Cu;
label_42df0c:
    // 0x42df0c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x42df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x42df10: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x42df10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x42df14: 0x24a5c180  addiu       $a1, $a1, -0x3E80
    ctx->pc = 0x42df14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951296));
    // 0x42df18: 0x24c671c8  addiu       $a2, $a2, 0x71C8
    ctx->pc = 0x42df18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29128));
    // 0x42df1c: 0xc10bbf8  jal         func_42EFE0
    ctx->pc = 0x42DF1Cu;
    SET_GPR_U32(ctx, 31, 0x42DF24u);
    ctx->pc = 0x42DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42DF1Cu;
    // 0x42df20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFE0u, 0x42DF1Cu, 0x42DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42DF24u;
label_42df24:
    // 0x42df24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42df24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42df28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42df28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42df2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42df2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42df30: 0x3e00008  jr          $ra
    ctx->pc = 0x42DF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42DF30u;
        // 0x42df34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42DF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42DF38u;
}
