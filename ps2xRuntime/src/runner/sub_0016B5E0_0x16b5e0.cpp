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

// Function: sub_0016B5E0
// Address: 0x16b5e0 - 0x16b618
void sub_0016B5E0_0x16b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B5E0_0x16b5e0");
#endif

    switch (ctx->pc) {
        case 0x16b600u: goto label_16b600;
        case 0x16b60cu: goto label_16b60c;
        default: break;
    }

    ctx->pc = 0x16b5e0u;

    // 0x16b5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b5e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x16b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x16b5e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b5ec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x16b5ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x16b5f0: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B5F0u;
    {
        const bool branch_taken_0x16b5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B5F0u;
        // 0x16b5f4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b5f0) {
            ctx->pc = 0x16B60Cu;
            goto label_16b60c;
        }
    }
    ctx->pc = 0x16B5F8u;
    // 0x16b5f8: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x16B5F8u;
    SET_GPR_U32(ctx, 31, 0x16B600u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16B5F8u, 0x16B600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B600u;
label_16b600:
    // 0x16b600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b604: 0xc05a688  jal         func_169A20
    ctx->pc = 0x16B604u;
    SET_GPR_U32(ctx, 31, 0x16B60Cu);
    ctx->pc = 0x16B608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B604u;
    // 0x16b608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A20u, 0x16B604u, 0x16B60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B60Cu;
label_16b60c:
    // 0x16b60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b610: 0x3e00008  jr          $ra
    ctx->pc = 0x16B610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B610u;
        // 0x16b614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B618u;
}
