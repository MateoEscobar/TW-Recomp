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

// Function: sub_0037B2D8
// Address: 0x37b2d8 - 0x37b358
void sub_0037B2D8_0x37b2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B2D8_0x37b2d8");
#endif

    switch (ctx->pc) {
        case 0x37b2fcu: goto label_37b2fc;
        case 0x37b304u: goto label_37b304;
        case 0x37b30cu: goto label_37b30c;
        case 0x37b318u: goto label_37b318;
        case 0x37b330u: goto label_37b330;
        case 0x37b33cu: goto label_37b33c;
        default: break;
    }

    ctx->pc = 0x37b2d8u;

    // 0x37b2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b2dc: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37b2dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37b2e0: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37b2e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37b2e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37b2e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37b2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b2ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37b2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37b2f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b2f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37B2F4u;
    SET_GPR_U32(ctx, 31, 0x37B2FCu);
    ctx->pc = 0x37B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2F4u;
    // 0x37b2f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37B2F4u, 0x37B2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B2FCu;
label_37b2fc:
    // 0x37b2fc: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37B2FCu;
    SET_GPR_U32(ctx, 31, 0x37B304u);
    ctx->pc = 0x37B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B2FCu;
    // 0x37b300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37B2FCu, 0x37B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B304u;
label_37b304:
    // 0x37b304: 0xc107b96  jal         func_41EE58
    ctx->pc = 0x37B304u;
    SET_GPR_U32(ctx, 31, 0x37B30Cu);
    ctx->pc = 0x37B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B304u;
    // 0x37b308: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41EE58u, 0x37B304u, 0x37B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B30Cu;
label_37b30c:
    // 0x37b30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37b30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b310: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37B310u;
    SET_GPR_U32(ctx, 31, 0x37B318u);
    ctx->pc = 0x37B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B310u;
    // 0x37b314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37B310u, 0x37B318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B318u;
label_37b318:
    // 0x37b318: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B318u;
    {
        const bool branch_taken_0x37b318 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B318u;
        // 0x37b31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b318) {
            ctx->pc = 0x37B334u;
            goto label_37b334;
        }
    }
    ctx->pc = 0x37B320u;
    // 0x37b320: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37b320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37b324: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37b324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37b328: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37B328u;
    SET_GPR_U32(ctx, 31, 0x37B330u);
    ctx->pc = 0x37B32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B328u;
    // 0x37b32c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37B328u, 0x37B330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B330u;
label_37b330:
    // 0x37b330: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37b330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37b334:
    // 0x37b334: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37B334u;
    SET_GPR_U32(ctx, 31, 0x37B33Cu);
    ctx->pc = 0x37B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B334u;
    // 0x37b338: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37B334u, 0x37B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B33Cu;
label_37b33c:
    // 0x37b33c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37b33cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37b340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37b344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b34c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B34Cu;
        // 0x37b350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B354u;
    // 0x37b354: 0x0  nop
    ctx->pc = 0x37b354u;
    // NOP
    ctx->pc = 0x37b358u;
}
