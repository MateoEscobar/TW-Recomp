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

// Function: sub_00202028
// Address: 0x202028 - 0x202090
void sub_00202028_0x202028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202028_0x202028");
#endif

    switch (ctx->pc) {
        case 0x202058u: goto label_202058;
        case 0x202064u: goto label_202064;
        case 0x202070u: goto label_202070;
        case 0x20207cu: goto label_20207c;
        default: break;
    }

    ctx->pc = 0x202028u;

    // 0x202028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20202c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20202cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x202030: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x202030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x202034: 0x2442d8f8  addiu       $v0, $v0, -0x2708
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957304));
    // 0x202038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x202038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20203c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20203cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202044: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202048: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x202048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20204c: 0x26040270  addiu       $a0, $s0, 0x270
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x202050: 0xc0742dc  jal         func_1D0B70
    ctx->pc = 0x202050u;
    SET_GPR_U32(ctx, 31, 0x202058u);
    ctx->pc = 0x202054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202050u;
    // 0x202054: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0B70u, 0x202050u, 0x202058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202058u;
label_202058:
    // 0x202058: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x20205c: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x20205Cu;
    SET_GPR_U32(ctx, 31, 0x202064u);
    ctx->pc = 0x202060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20205Cu;
    // 0x202060: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x20205Cu, 0x202064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202064u;
label_202064:
    // 0x202064: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x202064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x202068: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x202068u;
    SET_GPR_U32(ctx, 31, 0x202070u);
    ctx->pc = 0x20206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202068u;
    // 0x20206c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x202068u, 0x202070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202070u;
label_202070:
    // 0x202070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202074: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x202074u;
    SET_GPR_U32(ctx, 31, 0x20207Cu);
    ctx->pc = 0x202078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202074u;
    // 0x202078: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x202074u, 0x20207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20207Cu;
label_20207c:
    // 0x20207c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20207cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x202080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x202080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202088: 0x3e00008  jr          $ra
    ctx->pc = 0x202088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202088u;
        // 0x20208c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202090u;
}
