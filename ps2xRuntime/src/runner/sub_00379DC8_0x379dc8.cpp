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

// Function: sub_00379DC8
// Address: 0x379dc8 - 0x379e40
void sub_00379DC8_0x379dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379DC8_0x379dc8");
#endif

    switch (ctx->pc) {
        case 0x379de8u: goto label_379de8;
        case 0x379df0u: goto label_379df0;
        case 0x379df8u: goto label_379df8;
        case 0x379e04u: goto label_379e04;
        case 0x379e1cu: goto label_379e1c;
        case 0x379e28u: goto label_379e28;
        default: break;
    }

    ctx->pc = 0x379dc8u;

    // 0x379dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x379dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x379dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379dd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379dd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x379dd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379dd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x379dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x379ddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x379ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x379de0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x379DE0u;
    SET_GPR_U32(ctx, 31, 0x379DE8u);
    ctx->pc = 0x379DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DE0u;
    // 0x379de4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x379DE0u, 0x379DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DE8u;
label_379de8:
    // 0x379de8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x379DE8u;
    SET_GPR_U32(ctx, 31, 0x379DF0u);
    ctx->pc = 0x379DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DE8u;
    // 0x379dec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x379DE8u, 0x379DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DF0u;
label_379df0:
    // 0x379df0: 0xc0e5d1e  jal         func_397478
    ctx->pc = 0x379DF0u;
    SET_GPR_U32(ctx, 31, 0x379DF8u);
    ctx->pc = 0x379DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DF0u;
    // 0x379df4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397478u, 0x379DF0u, 0x379DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379DF8u;
label_379df8:
    // 0x379df8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x379df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379dfc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x379DFCu;
    SET_GPR_U32(ctx, 31, 0x379E04u);
    ctx->pc = 0x379E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379DFCu;
    // 0x379e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x379DFCu, 0x379E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E04u;
label_379e04:
    // 0x379e04: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x379E04u;
    {
        const bool branch_taken_0x379e04 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x379E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E04u;
        // 0x379e08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379e04) {
            ctx->pc = 0x379E20u;
            goto label_379e20;
        }
    }
    ctx->pc = 0x379E0Cu;
    // 0x379e0c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x379e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x379e10: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x379e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x379e14: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x379E14u;
    SET_GPR_U32(ctx, 31, 0x379E1Cu);
    ctx->pc = 0x379E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E14u;
    // 0x379e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x379E14u, 0x379E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E1Cu;
label_379e1c:
    // 0x379e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379e20:
    // 0x379e20: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x379E20u;
    SET_GPR_U32(ctx, 31, 0x379E28u);
    ctx->pc = 0x379E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379E20u;
    // 0x379e24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x379E20u, 0x379E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379E28u;
label_379e28:
    // 0x379e28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x379e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x379e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x379e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x379e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x379e38: 0x3e00008  jr          $ra
    ctx->pc = 0x379E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379E38u;
        // 0x379e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x379E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x379E40u;
}
