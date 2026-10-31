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

// Function: sub_0036DDC0
// Address: 0x36ddc0 - 0x36de50
void sub_0036DDC0_0x36ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DDC0_0x36ddc0");
#endif

    switch (ctx->pc) {
        case 0x36dde8u: goto label_36dde8;
        case 0x36ddf0u: goto label_36ddf0;
        case 0x36de04u: goto label_36de04;
        case 0x36de0cu: goto label_36de0c;
        case 0x36de20u: goto label_36de20;
        case 0x36de30u: goto label_36de30;
        default: break;
    }

    ctx->pc = 0x36ddc0u;

    // 0x36ddc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36ddc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ddc8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36ddcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36ddccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36ddd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36ddd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddd4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36ddd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36ddd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36dddc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36dddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36dde0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DDE0u;
    SET_GPR_U32(ctx, 31, 0x36DDE8u);
    ctx->pc = 0x36DDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DDE0u;
    // 0x36dde4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DDE0u, 0x36DDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DDE8u;
label_36dde8:
    // 0x36dde8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DDE8u;
    SET_GPR_U32(ctx, 31, 0x36DDF0u);
    ctx->pc = 0x36DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DDE8u;
    // 0x36ddec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DDE8u, 0x36DDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DDF0u;
label_36ddf0:
    // 0x36ddf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ddf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36ddf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ddf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36ddf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36ddfc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36DDFCu;
    SET_GPR_U32(ctx, 31, 0x36DE04u);
    ctx->pc = 0x36DE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DDFCu;
    // 0x36de00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36DDFCu, 0x36DE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE04u;
label_36de04:
    // 0x36de04: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36DE04u;
    SET_GPR_U32(ctx, 31, 0x36DE0Cu);
    ctx->pc = 0x36DE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE04u;
    // 0x36de08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36DE04u, 0x36DE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE0Cu;
label_36de0c:
    // 0x36de0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36de0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36de10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36de14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36de18: 0xc1024c6  jal         func_409318
    ctx->pc = 0x36DE18u;
    SET_GPR_U32(ctx, 31, 0x36DE20u);
    ctx->pc = 0x36DE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE18u;
    // 0x36de1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x36DE18u, 0x36DE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE20u;
label_36de20:
    // 0x36de20: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x36de20u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36de24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36de24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de28: 0xc0e356e  jal         func_38D5B8
    ctx->pc = 0x36DE28u;
    SET_GPR_U32(ctx, 31, 0x36DE30u);
    ctx->pc = 0x36DE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36DE28u;
    // 0x36de2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D5B8u, 0x36DE28u, 0x36DE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36DE30u;
label_36de30:
    // 0x36de30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36de30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36de34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36de34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36de38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36de38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36de3c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36de3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36de40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36de40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36de44: 0x3e00008  jr          $ra
    ctx->pc = 0x36DE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36DE44u;
        // 0x36de48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36DE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36DE4Cu;
    // 0x36de4c: 0x0  nop
    ctx->pc = 0x36de4cu;
    // NOP
    ctx->pc = 0x36de50u;
}
