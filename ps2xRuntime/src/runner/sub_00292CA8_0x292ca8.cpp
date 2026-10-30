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

// Function: sub_00292CA8
// Address: 0x292ca8 - 0x292cf0
void sub_00292CA8_0x292ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292CA8_0x292ca8");
#endif

    switch (ctx->pc) {
        case 0x292cbcu: goto label_292cbc;
        case 0x292cc4u: goto label_292cc4;
        case 0x292cd4u: goto label_292cd4;
        case 0x292cdcu: goto label_292cdc;
        default: break;
    }

    ctx->pc = 0x292ca8u;

    // 0x292ca8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x292ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x292cac: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x292cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x292cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292cb4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x292CB4u;
    SET_GPR_U32(ctx, 31, 0x292CBCu);
    ctx->pc = 0x292CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CB4u;
    // 0x292cb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x292CB4u, 0x292CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CBCu;
label_292cbc:
    // 0x292cbc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x292CBCu;
    SET_GPR_U32(ctx, 31, 0x292CC4u);
    ctx->pc = 0x292CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CBCu;
    // 0x292cc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x292CBCu, 0x292CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CC4u;
label_292cc4:
    // 0x292cc4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x292CC4u;
    {
        const bool branch_taken_0x292cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292cc4) {
            ctx->pc = 0x292CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x292CC4u;
            // 0x292cc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x292CE0u;
            goto label_292ce0;
        }
    }
    ctx->pc = 0x292CCCu;
    // 0x292ccc: 0xc087502  jal         func_21D408
    ctx->pc = 0x292CCCu;
    SET_GPR_U32(ctx, 31, 0x292CD4u);
    ctx->pc = 0x292CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CCCu;
    // 0x292cd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x292CCCu, 0x292CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CD4u;
label_292cd4:
    // 0x292cd4: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x292CD4u;
    SET_GPR_U32(ctx, 31, 0x292CDCu);
    ctx->pc = 0x292CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CD4u;
    // 0x292cd8: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x292CD4u, 0x292CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CDCu;
label_292cdc:
    // 0x292cdc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x292cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_292ce0:
    // 0x292ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x292CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CE4u;
        // 0x292ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292CECu;
    // 0x292cec: 0x0  nop
    ctx->pc = 0x292cecu;
    // NOP
    ctx->pc = 0x292cf0u;
}
