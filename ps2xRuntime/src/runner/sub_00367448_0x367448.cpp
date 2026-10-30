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

// Function: sub_00367448
// Address: 0x367448 - 0x3674d0
void sub_00367448_0x367448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367448_0x367448");
#endif

    switch (ctx->pc) {
        case 0x367468u: goto label_367468;
        case 0x36747cu: goto label_36747c;
        case 0x367488u: goto label_367488;
        case 0x367494u: goto label_367494;
        case 0x3674acu: goto label_3674ac;
        case 0x3674b8u: goto label_3674b8;
        default: break;
    }

    ctx->pc = 0x367448u;

    // 0x367448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36744c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36744cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x367450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x367454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x367458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36745c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36745cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367460: 0xc102488  jal         func_409220
    ctx->pc = 0x367460u;
    SET_GPR_U32(ctx, 31, 0x367468u);
    ctx->pc = 0x367464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367460u;
    // 0x367464: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367460u, 0x367468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367468u;
label_367468:
    // 0x367468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36746c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36746cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367470: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367474: 0xc102488  jal         func_409220
    ctx->pc = 0x367474u;
    SET_GPR_U32(ctx, 31, 0x36747Cu);
    ctx->pc = 0x367478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367474u;
    // 0x367478: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367474u, 0x36747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36747Cu;
label_36747c:
    // 0x36747c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36747cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367480: 0xc0d4fe2  jal         func_353F88
    ctx->pc = 0x367480u;
    SET_GPR_U32(ctx, 31, 0x367488u);
    ctx->pc = 0x367484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367480u;
    // 0x367484: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353F88u, 0x367480u, 0x367488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367488u;
label_367488:
    // 0x367488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x367488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36748c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x36748Cu;
    SET_GPR_U32(ctx, 31, 0x367494u);
    ctx->pc = 0x367490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36748Cu;
    // 0x367490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x36748Cu, 0x367494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367494u;
label_367494:
    // 0x367494: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x367494u;
    {
        const bool branch_taken_0x367494 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x367498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367494u;
        // 0x367498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367494) {
            ctx->pc = 0x3674B0u;
            goto label_3674b0;
        }
    }
    ctx->pc = 0x36749Cu;
    // 0x36749c: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x36749cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x3674a0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3674a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3674a4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x3674A4u;
    SET_GPR_U32(ctx, 31, 0x3674ACu);
    ctx->pc = 0x3674A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3674A4u;
    // 0x3674a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x3674A4u, 0x3674ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3674ACu;
label_3674ac:
    // 0x3674ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3674acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3674b0:
    // 0x3674b0: 0xc10253a  jal         func_4094E8
    ctx->pc = 0x3674B0u;
    SET_GPR_U32(ctx, 31, 0x3674B8u);
    ctx->pc = 0x3674B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3674B0u;
    // 0x3674b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4094E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4094E8u, 0x3674B0u, 0x3674B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3674B8u;
label_3674b8:
    // 0x3674b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3674b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3674bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3674bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3674c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3674c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3674c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3674c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3674c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3674C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3674CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3674C8u;
        // 0x3674cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3674C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3674D0u;
}
