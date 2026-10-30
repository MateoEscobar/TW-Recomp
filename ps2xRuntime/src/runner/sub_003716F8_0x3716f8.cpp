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

// Function: sub_003716F8
// Address: 0x3716f8 - 0x371768
void sub_003716F8_0x3716f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003716F8_0x3716f8");
#endif

    switch (ctx->pc) {
        case 0x371718u: goto label_371718;
        case 0x371720u: goto label_371720;
        case 0x37172cu: goto label_37172c;
        case 0x371744u: goto label_371744;
        case 0x371750u: goto label_371750;
        default: break;
    }

    ctx->pc = 0x3716f8u;

    // 0x3716f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3716f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3716fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3716fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371700: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x371700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x371704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x371704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371708: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x371708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37170c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37170cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x371710: 0xc102488  jal         func_409220
    ctx->pc = 0x371710u;
    SET_GPR_U32(ctx, 31, 0x371718u);
    ctx->pc = 0x371714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371710u;
    // 0x371714: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x371710u, 0x371718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371718u;
label_371718:
    // 0x371718: 0xc044dea  jal         func_1137A8
    ctx->pc = 0x371718u;
    SET_GPR_U32(ctx, 31, 0x371720u);
    ctx->pc = 0x37171Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371718u;
    // 0x37171c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1137A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1137A8u, 0x371718u, 0x371720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371720u;
label_371720:
    // 0x371720: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x371720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371724: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x371724u;
    SET_GPR_U32(ctx, 31, 0x37172Cu);
    ctx->pc = 0x371728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371724u;
    // 0x371728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x371724u, 0x37172Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37172Cu;
label_37172c:
    // 0x37172c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37172Cu;
    {
        const bool branch_taken_0x37172c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x371730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37172Cu;
        // 0x371730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37172c) {
            ctx->pc = 0x371748u;
            goto label_371748;
        }
    }
    ctx->pc = 0x371734u;
    // 0x371734: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x371734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x371738: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x371738u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37173c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37173Cu;
    SET_GPR_U32(ctx, 31, 0x371744u);
    ctx->pc = 0x371740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37173Cu;
    // 0x371740: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37173Cu, 0x371744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371744u;
label_371744:
    // 0x371744: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x371744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_371748:
    // 0x371748: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x371748u;
    SET_GPR_U32(ctx, 31, 0x371750u);
    ctx->pc = 0x37174Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371748u;
    // 0x37174c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x371748u, 0x371750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371750u;
label_371750:
    // 0x371750: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x371750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x371754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x371754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371758: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x371758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37175c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37175cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371760: 0x3e00008  jr          $ra
    ctx->pc = 0x371760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371760u;
        // 0x371764: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371768u;
}
