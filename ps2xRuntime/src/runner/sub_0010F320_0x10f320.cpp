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

// Function: sub_0010F320
// Address: 0x10f320 - 0x10f360
void sub_0010F320_0x10f320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F320_0x10f320");
#endif

    switch (ctx->pc) {
        case 0x10f330u: goto label_10f330;
        case 0x10f348u: goto label_10f348;
        default: break;
    }

    ctx->pc = 0x10f320u;

    // 0x10f320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f328: 0xc051048  jal         func_144120
    ctx->pc = 0x10F328u;
    SET_GPR_U32(ctx, 31, 0x10F330u);
    ctx->pc = 0x10F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F328u;
    // 0x10f32c: 0x24040029  addiu       $a0, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10F328u, 0x10F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F330u;
label_10f330:
    // 0x10f330: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10f334: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x10f334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x10f338: 0xaca2867c  sw          $v0, -0x7984($a1)
    ctx->pc = 0x10f338u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x59867Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x59867Cu, _value); } while (0);
    // 0x10f33c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x10f33cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10f340: 0xc043e40  jal         func_10F900
    ctx->pc = 0x10F340u;
    SET_GPR_U32(ctx, 31, 0x10F348u);
    ctx->pc = 0x10F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F340u;
    // 0x10f344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F900u, 0x10F340u, 0x10F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F348u;
label_10f348:
    // 0x10f348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f34c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F34Cu;
        // 0x10f350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F354u;
    // 0x10f354: 0x0  nop
    ctx->pc = 0x10f354u;
    // NOP
    // 0x10f358: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f35c: 0x0  nop
    ctx->pc = 0x10f35cu;
    // NOP
    ctx->pc = 0x10f360u;
}
