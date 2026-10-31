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

// Function: sub_00359AE0
// Address: 0x359ae0 - 0x359b40
void sub_00359AE0_0x359ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359AE0_0x359ae0");
#endif

    switch (ctx->pc) {
        case 0x359b00u: goto label_359b00;
        case 0x359b08u: goto label_359b08;
        case 0x359b1cu: goto label_359b1c;
        case 0x359b28u: goto label_359b28;
        default: break;
    }

    ctx->pc = 0x359ae0u;

    // 0x359ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359ae4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359ae8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x359ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x359aec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359af0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x359af4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359af8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x359AF8u;
    SET_GPR_U32(ctx, 31, 0x359B00u);
    ctx->pc = 0x359AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AF8u;
    // 0x359afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x359AF8u, 0x359B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B00u;
label_359b00:
    // 0x359b00: 0xc10b108  jal         func_42C420
    ctx->pc = 0x359B00u;
    SET_GPR_U32(ctx, 31, 0x359B08u);
    ctx->pc = 0x359B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B00u;
    // 0x359b04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x359B00u, 0x359B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B08u;
label_359b08:
    // 0x359b08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x359b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b14: 0xc1024c6  jal         func_409318
    ctx->pc = 0x359B14u;
    SET_GPR_U32(ctx, 31, 0x359B1Cu);
    ctx->pc = 0x359B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B14u;
    // 0x359b18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x359B14u, 0x359B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B1Cu;
label_359b1c:
    // 0x359b1c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x359b1cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359b20: 0xc08d79c  jal         func_235E70
    ctx->pc = 0x359B20u;
    SET_GPR_U32(ctx, 31, 0x359B28u);
    ctx->pc = 0x359B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359B20u;
    // 0x359b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235E70u, 0x359B20u, 0x359B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359B28u;
label_359b28:
    // 0x359b28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x359b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359b2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x359b2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359b30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359b30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359b34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359b38: 0x3e00008  jr          $ra
    ctx->pc = 0x359B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359B38u;
        // 0x359b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x359B40u;
}
