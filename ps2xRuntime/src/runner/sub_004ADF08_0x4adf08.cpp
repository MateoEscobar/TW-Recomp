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

// Function: sub_004ADF08
// Address: 0x4adf08 - 0x4adf60
void sub_004ADF08_0x4adf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADF08_0x4adf08");
#endif

    switch (ctx->pc) {
        case 0x4adf2cu: goto label_4adf2c;
        case 0x4adf48u: goto label_4adf48;
        default: break;
    }

    ctx->pc = 0x4adf08u;

    // 0x4adf08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4adf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4adf0c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4adf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4adf10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4adf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4adf14: 0x8c625aa0  lw          $v0, 0x5AA0($v1)
    ctx->pc = 0x4adf14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715AA0u));
    // 0x4adf18: 0x24705aa0  addiu       $s0, $v1, 0x5AA0
    ctx->pc = 0x4adf18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23200));
    // 0x4adf1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4ADF1Cu;
    {
        const bool branch_taken_0x4adf1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ADF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADF1Cu;
        // 0x4adf20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4adf1c) {
            ctx->pc = 0x4ADF48u;
            goto label_4adf48;
        }
    }
    ctx->pc = 0x4ADF24u;
    // 0x4adf24: 0xc12bbb0  jal         func_4AEEC0
    ctx->pc = 0x4ADF24u;
    SET_GPR_U32(ctx, 31, 0x4ADF2Cu);
    ctx->pc = 0x4AEEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AEEC0u, 0x4ADF24u, 0x4ADF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADF2Cu;
label_4adf2c:
    // 0x4adf2c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4adf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4adf30: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4adf30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x4adf34: 0x24a504b0  addiu       $a1, $a1, 0x4B0
    ctx->pc = 0x4adf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1200));
    // 0x4adf38: 0x24c604d0  addiu       $a2, $a2, 0x4D0
    ctx->pc = 0x4adf38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1232));
    // 0x4adf3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4adf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf40: 0xc10bbee  jal         func_42EFB8
    ctx->pc = 0x4ADF40u;
    SET_GPR_U32(ctx, 31, 0x4ADF48u);
    ctx->pc = 0x4ADF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADF40u;
    // 0x4adf44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42EFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42EFB8u, 0x4ADF40u, 0x4ADF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADF48u;
label_4adf48:
    // 0x4adf48: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4adf48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4adf4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adf50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4adf50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adf54: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADF54u;
        // 0x4adf58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADF5Cu;
    // 0x4adf5c: 0x0  nop
    ctx->pc = 0x4adf5cu;
    // NOP
    ctx->pc = 0x4adf60u;
}
