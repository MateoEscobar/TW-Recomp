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

// Function: sub_0040C5E0
// Address: 0x40c5e0 - 0x40c628
void sub_0040C5E0_0x40c5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C5E0_0x40c5e0");
#endif

    switch (ctx->pc) {
        case 0x40c5fcu: goto label_40c5fc;
        case 0x40c614u: goto label_40c614;
        default: break;
    }

    ctx->pc = 0x40c5e0u;

    // 0x40c5e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x40c5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x40c5e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x40c5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x40c5e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40c5e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40c5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40c5f0: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x40c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x40c5f4: 0xc052410  jal         func_149040
    ctx->pc = 0x40C5F4u;
    SET_GPR_U32(ctx, 31, 0x40C5FCu);
    ctx->pc = 0x40C5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C5F4u;
    // 0x40c5f8: 0x24848548  addiu       $a0, $a0, -0x7AB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149040u, 0x40C5F4u, 0x40C5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C5FCu;
label_40c5fc:
    // 0x40c5fc: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40c5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40c600: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x40c600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x40c604: 0x24a58560  addiu       $a1, $a1, -0x7AA0
    ctx->pc = 0x40c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935904));
    // 0x40c608: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x40c608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40c60c: 0xc05402a  jal         func_1500A8
    ctx->pc = 0x40C60Cu;
    SET_GPR_U32(ctx, 31, 0x40C614u);
    ctx->pc = 0x40C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C60Cu;
    // 0x40c610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1500A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1500A8u, 0x40C60Cu, 0x40C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C614u;
label_40c614:
    // 0x40c614: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x40c614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40c618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40c618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40c61c: 0x3e00008  jr          $ra
    ctx->pc = 0x40C61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C61Cu;
        // 0x40c620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40C624u;
    // 0x40c624: 0x0  nop
    ctx->pc = 0x40c624u;
    // NOP
    ctx->pc = 0x40c628u;
}
