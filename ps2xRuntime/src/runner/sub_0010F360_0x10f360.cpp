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

// Function: sub_0010F360
// Address: 0x10f360 - 0x10f3a0
void sub_0010F360_0x10f360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F360_0x10f360");
#endif

    switch (ctx->pc) {
        case 0x10f370u: goto label_10f370;
        case 0x10f388u: goto label_10f388;
        default: break;
    }

    ctx->pc = 0x10f360u;

    // 0x10f360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f368: 0xc051048  jal         func_144120
    ctx->pc = 0x10F368u;
    SET_GPR_U32(ctx, 31, 0x10F370u);
    ctx->pc = 0x10F36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F368u;
    // 0x10f36c: 0x24040031  addiu       $a0, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10F368u, 0x10F370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F370u;
label_10f370:
    // 0x10f370: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10f370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10f374: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x10f374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x10f378: 0xaca28680  sw          $v0, -0x7980($a1)
    ctx->pc = 0x10f378u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x598680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x598680u, _value); } while (0);
    // 0x10f37c: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x10f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10f380: 0xc043e76  jal         func_10F9D8
    ctx->pc = 0x10F380u;
    SET_GPR_U32(ctx, 31, 0x10F388u);
    ctx->pc = 0x10F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F380u;
    // 0x10f384: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D8u, 0x10F380u, 0x10F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F388u;
label_10f388:
    // 0x10f388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f38c: 0x3e00008  jr          $ra
    ctx->pc = 0x10F38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F38Cu;
        // 0x10f390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F394u;
    // 0x10f394: 0x0  nop
    ctx->pc = 0x10f394u;
    // NOP
    // 0x10f398: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x10f398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10f39c: 0x0  nop
    ctx->pc = 0x10f39cu;
    // NOP
    ctx->pc = 0x10f3a0u;
}
