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

// Function: sub_0037CB20
// Address: 0x37cb20 - 0x37cb98
void sub_0037CB20_0x37cb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CB20_0x37cb20");
#endif

    switch (ctx->pc) {
        case 0x37cb40u: goto label_37cb40;
        case 0x37cb48u: goto label_37cb48;
        case 0x37cb50u: goto label_37cb50;
        case 0x37cb5cu: goto label_37cb5c;
        case 0x37cb74u: goto label_37cb74;
        case 0x37cb80u: goto label_37cb80;
        default: break;
    }

    ctx->pc = 0x37cb20u;

    // 0x37cb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37cb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37cb24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37cb2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37cb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37cb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37cb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cb38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CB38u;
    SET_GPR_U32(ctx, 31, 0x37CB40u);
    ctx->pc = 0x37CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB38u;
    // 0x37cb3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CB38u, 0x37CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB40u;
label_37cb40:
    // 0x37cb40: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CB40u;
    SET_GPR_U32(ctx, 31, 0x37CB48u);
    ctx->pc = 0x37CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB40u;
    // 0x37cb44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CB40u, 0x37CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB48u;
label_37cb48:
    // 0x37cb48: 0xc10898c  jal         func_422630
    ctx->pc = 0x37CB48u;
    SET_GPR_U32(ctx, 31, 0x37CB50u);
    ctx->pc = 0x37CB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB48u;
    // 0x37cb4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422630u, 0x37CB48u, 0x37CB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB50u;
label_37cb50:
    // 0x37cb50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37cb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb54: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CB54u;
    SET_GPR_U32(ctx, 31, 0x37CB5Cu);
    ctx->pc = 0x37CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB54u;
    // 0x37cb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CB54u, 0x37CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB5Cu;
label_37cb5c:
    // 0x37cb5c: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37CB5Cu;
    {
        const bool branch_taken_0x37cb5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB5Cu;
        // 0x37cb60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb5c) {
            ctx->pc = 0x37CB78u;
            goto label_37cb78;
        }
    }
    ctx->pc = 0x37CB64u;
    // 0x37cb64: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x37cb64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x37cb68: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x37cb68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x37cb6c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x37CB6Cu;
    SET_GPR_U32(ctx, 31, 0x37CB74u);
    ctx->pc = 0x37CB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB6Cu;
    // 0x37cb70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x37CB6Cu, 0x37CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB74u;
label_37cb74:
    // 0x37cb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37cb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37cb78:
    // 0x37cb78: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x37CB78u;
    SET_GPR_U32(ctx, 31, 0x37CB80u);
    ctx->pc = 0x37CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB78u;
    // 0x37cb7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x37CB78u, 0x37CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB80u;
label_37cb80:
    // 0x37cb80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37cb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cb84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37cb88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37cb88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cb90: 0x3e00008  jr          $ra
    ctx->pc = 0x37CB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB90u;
        // 0x37cb94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CB98u;
}
