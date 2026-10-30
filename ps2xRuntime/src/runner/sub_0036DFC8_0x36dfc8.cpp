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

// Function: sub_0036DFC8
// Address: 0x36dfc8 - 0x36e050
void sub_0036DFC8_0x36dfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DFC8_0x36dfc8");
#endif

    switch (ctx->pc) {
        case 0x36dff0u: goto label_36dff0;
        case 0x36dff8u: goto label_36dff8;
        case 0x36e00cu: goto label_36e00c;
        case 0x36e014u: goto label_36e014;
        case 0x36e020u: goto label_36e020;
        case 0x36e028u: goto label_36e028;
        case 0x36e034u: goto label_36e034;
        default: break;
    }

    ctx->pc = 0x36dfc8u;

    // 0x36dfc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36dfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36dfcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36dfd0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36dfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36dfd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36dfd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36dfd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36dfd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfdc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36dfdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dfe0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36dfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36dfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dfe8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DFE8u;
    SET_GPR_U32(ctx, 31, 0x36DFF0u);
    ctx->pc = 0x36DFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DFE8u;
    // 0x36dfec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DFE8u, 0x36DFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DFF0u;
label_36dff0:
    // 0x36dff0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36DFF0u;
    SET_GPR_U32(ctx, 31, 0x36DFF8u);
    ctx->pc = 0x36DFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DFF0u;
    // 0x36dff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36DFF0u, 0x36DFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DFF8u;
label_36dff8:
    // 0x36dff8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36dff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36dffc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36dffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e000: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e004: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E004u;
    SET_GPR_U32(ctx, 31, 0x36E00Cu);
    ctx->pc = 0x36E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E004u;
    // 0x36e008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E004u, 0x36E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E00Cu;
label_36e00c:
    // 0x36e00c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x36E00Cu;
    SET_GPR_U32(ctx, 31, 0x36E014u);
    ctx->pc = 0x36E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E00Cu;
    // 0x36e010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x36E00Cu, 0x36E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E014u;
label_36e014:
    // 0x36e014: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36e014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e018: 0xc0e1922  jal         func_386488
    ctx->pc = 0x36E018u;
    SET_GPR_U32(ctx, 31, 0x36E020u);
    ctx->pc = 0x36E01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E018u;
    // 0x36e01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386488u, 0x36E018u, 0x36E020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E020u;
label_36e020:
    // 0x36e020: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36E020u;
    SET_GPR_U32(ctx, 31, 0x36E028u);
    ctx->pc = 0x36E024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E020u;
    // 0x36e024: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36E020u, 0x36E028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E028u;
label_36e028:
    // 0x36e028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36e028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e02c: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x36E02Cu;
    SET_GPR_U32(ctx, 31, 0x36E034u);
    ctx->pc = 0x36E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E02Cu;
    // 0x36e030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x36E02Cu, 0x36E034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E034u;
label_36e034:
    // 0x36e034: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36e034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36e038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e03c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36e03cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e040: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36e040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e048: 0x3e00008  jr          $ra
    ctx->pc = 0x36E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E048u;
        // 0x36e04c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E050u;
}
