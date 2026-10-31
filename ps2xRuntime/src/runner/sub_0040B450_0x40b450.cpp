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

// Function: sub_0040B450
// Address: 0x40b450 - 0x40b4f0
void sub_0040B450_0x40b450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040B450_0x40b450");
#endif

    switch (ctx->pc) {
        case 0x40b470u: goto label_40b470;
        case 0x40b480u: goto label_40b480;
        case 0x40b48cu: goto label_40b48c;
        case 0x40b49cu: goto label_40b49c;
        case 0x40b4a8u: goto label_40b4a8;
        case 0x40b4b4u: goto label_40b4b4;
        case 0x40b4c8u: goto label_40b4c8;
        case 0x40b4d8u: goto label_40b4d8;
        default: break;
    }

    ctx->pc = 0x40b450u;

    // 0x40b450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40b454: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40b454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40b458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40b458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40b45c: 0x24a582f0  addiu       $a1, $a1, -0x7D10
    ctx->pc = 0x40b45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935280));
    // 0x40b460: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40b460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40b464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40b464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40b468: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x40B468u;
    SET_GPR_U32(ctx, 31, 0x40B470u);
    ctx->pc = 0x40B46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B468u;
    // 0x40b46c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x40B468u, 0x40B470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B470u;
label_40b470:
    // 0x40b470: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x40b470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40b474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b478: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B478u;
    SET_GPR_U32(ctx, 31, 0x40B480u);
    ctx->pc = 0x40B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B478u;
    // 0x40b47c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B478u, 0x40B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B480u;
label_40b480:
    // 0x40b480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b484: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B484u;
    SET_GPR_U32(ctx, 31, 0x40B48Cu);
    ctx->pc = 0x40B488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B484u;
    // 0x40b488: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B484u, 0x40B48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B48Cu;
label_40b48c:
    // 0x40b48c: 0x10510010  beq         $v0, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x40B48Cu;
    {
        const bool branch_taken_0x40b48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B48Cu;
        // 0x40b490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b48c) {
            ctx->pc = 0x40B4D0u;
            goto label_40b4d0;
        }
    }
    ctx->pc = 0x40B494u;
    // 0x40b494: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40B494u;
    SET_GPR_U32(ctx, 31, 0x40B49Cu);
    ctx->pc = 0x40B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B494u;
    // 0x40b498: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40B494u, 0x40B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B49Cu;
label_40b49c:
    // 0x40b49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b4a0: 0xc0c8ef2  jal         func_323BC8
    ctx->pc = 0x40B4A0u;
    SET_GPR_U32(ctx, 31, 0x40B4A8u);
    ctx->pc = 0x40B4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4A0u;
    // 0x40b4a4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323BC8u, 0x40B4A0u, 0x40B4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4A8u;
label_40b4a8:
    // 0x40b4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40b4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b4ac: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40B4ACu;
    SET_GPR_U32(ctx, 31, 0x40B4B4u);
    ctx->pc = 0x40B4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4ACu;
    // 0x40b4b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40B4ACu, 0x40B4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4B4u;
label_40b4b4:
    // 0x40b4b4: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x40B4B4u;
    {
        const bool branch_taken_0x40b4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x40B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B4B4u;
        // 0x40b4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b4b4) {
            ctx->pc = 0x40B4D0u;
            goto label_40b4d0;
        }
    }
    ctx->pc = 0x40B4BCu;
    // 0x40b4bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40b4bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40b4c0: 0xc0ca350  jal         func_328D40
    ctx->pc = 0x40B4C0u;
    SET_GPR_U32(ctx, 31, 0x40B4C8u);
    ctx->pc = 0x40B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4C0u;
    // 0x40b4c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328D40u, 0x40B4C0u, 0x40B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4C8u;
label_40b4c8:
    // 0x40b4c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x40B4C8u;
    {
        const bool branch_taken_0x40b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B4C8u;
        // 0x40b4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40b4c8) {
            ctx->pc = 0x40B4DCu;
            goto label_40b4dc;
        }
    }
    ctx->pc = 0x40B4D0u;
label_40b4d0:
    // 0x40b4d0: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x40B4D0u;
    SET_GPR_U32(ctx, 31, 0x40B4D8u);
    ctx->pc = 0x40B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40B4D0u;
    // 0x40b4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x40B4D0u, 0x40B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40B4D8u;
label_40b4d8:
    // 0x40b4d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40b4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40b4dc:
    // 0x40b4dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40b4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40b4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40b4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40b4e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40b4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40b4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x40B4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40B4E8u;
        // 0x40b4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40B4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40B4F0u;
}
