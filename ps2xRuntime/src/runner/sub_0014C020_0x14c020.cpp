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

// Function: sub_0014C020
// Address: 0x14c020 - 0x14c070
void sub_0014C020_0x14c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C020_0x14c020");
#endif

    switch (ctx->pc) {
        case 0x14c030u: goto label_14c030;
        case 0x14c038u: goto label_14c038;
        case 0x14c044u: goto label_14c044;
        case 0x14c054u: goto label_14c054;
        default: break;
    }

    ctx->pc = 0x14c020u;

    // 0x14c020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14c024: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x14c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14c028: 0xc05418a  jal         func_150628
    ctx->pc = 0x14C028u;
    SET_GPR_U32(ctx, 31, 0x14C030u);
    ctx->pc = 0x150628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150628u, 0x14C028u, 0x14C030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C030u;
label_14c030:
    // 0x14c030: 0xc053eb2  jal         func_14FAC8
    ctx->pc = 0x14C030u;
    SET_GPR_U32(ctx, 31, 0x14C038u);
    ctx->pc = 0x14C034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C030u;
    // 0x14c034: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAC8u, 0x14C030u, 0x14C038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C038u;
label_14c038:
    // 0x14c038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c03c: 0xc05420e  jal         func_150838
    ctx->pc = 0x14C03Cu;
    SET_GPR_U32(ctx, 31, 0x14C044u);
    ctx->pc = 0x14C040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C03Cu;
    // 0x14c040: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150838u, 0x14C03Cu, 0x14C044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C044u;
label_14c044:
    // 0x14c044: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x14c044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c048: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14c048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14c04c: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14C04Cu;
    SET_GPR_U32(ctx, 31, 0x14C054u);
    ctx->pc = 0x14C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C04Cu;
    // 0x14c050: 0x2484b680  addiu       $a0, $a0, -0x4980 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14C04Cu, 0x14C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C054u;
label_14c054:
    // 0x14c054: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14c054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c058: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14c058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14c05c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x14c05cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14c060: 0xac62bcec  sw          $v0, -0x4314($v1)
    ctx->pc = 0x14c060u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50BCECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BCECu, _value); } while (0);
    // 0x14c064: 0x3e00008  jr          $ra
    ctx->pc = 0x14C064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C064u;
        // 0x14c068: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14C06Cu;
    // 0x14c06c: 0x0  nop
    ctx->pc = 0x14c06cu;
    // NOP
    ctx->pc = 0x14c070u;
}
