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

// Function: sub_0011B498
// Address: 0x11b498 - 0x11b558
void sub_0011B498_0x11b498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B498_0x11b498");
#endif

    switch (ctx->pc) {
        case 0x11b504u: goto label_11b504;
        case 0x11b514u: goto label_11b514;
        case 0x11b52cu: goto label_11b52c;
        case 0x11b53cu: goto label_11b53c;
        default: break;
    }

    ctx->pc = 0x11b498u;

    // 0x11b498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11b498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11b49c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11b49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11b4a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11b4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11b4a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b4ac: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x11b4acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11b4b0: 0x10c00015  beqz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B4B0u;
    {
        const bool branch_taken_0x11b4b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4B0u;
        // 0x11b4b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4b0) {
            ctx->pc = 0x11B508u;
            goto label_11b508;
        }
    }
    ctx->pc = 0x11B4B8u;
    // 0x11b4b8: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x11b4b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x11b4bc: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
    ctx->pc = 0x11B4BCu;
    {
        const bool branch_taken_0x11b4bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4BCu;
        // 0x11b4c0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4bc) {
            ctx->pc = 0x11B52Cu;
            goto label_11b52c;
        }
    }
    ctx->pc = 0x11B4C4u;
    // 0x11b4c4: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x11b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x11b4c8: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x11b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    // 0x11b4cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11b4d0: 0x8c43426c  lw          $v1, 0x426C($v0)
    ctx->pc = 0x11b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17004)));
    // 0x11b4d4: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x11B4D4u;
    {
        const bool branch_taken_0x11b4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4D4u;
        // 0x11b4d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4d4) {
            ctx->pc = 0x11B540u;
            goto label_11b540;
        }
    }
    ctx->pc = 0x11B4DCu;
    // 0x11b4dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x11b4e0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x11b4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x11b4e4: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x11b4e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x11b4e8: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11B4E8u;
    {
        const bool branch_taken_0x11b4e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4E8u;
        // 0x11b4ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b4e8) {
            ctx->pc = 0x11B540u;
            goto label_11b540;
        }
    }
    ctx->pc = 0x11B4F0u;
    // 0x11b4f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11b4f4: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11B4F4u;
    {
        const bool branch_taken_0x11b4f4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b4f4) {
            ctx->pc = 0x11B51Cu;
            goto label_11b51c;
        }
    }
    ctx->pc = 0x11B4FCu;
    // 0x11b4fc: 0xc046db0  jal         func_11B6C0
    ctx->pc = 0x11B4FCu;
    SET_GPR_U32(ctx, 31, 0x11B504u);
    ctx->pc = 0x11B500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B4FCu;
    // 0x11b500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6C0u, 0x11B4FCu, 0x11B504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B504u;
label_11b504:
    // 0x11b504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11b508:
    // 0x11b508: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b50c: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B50Cu;
    SET_GPR_U32(ctx, 31, 0x11B514u);
    ctx->pc = 0x11B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B50Cu;
    // 0x11b510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B50Cu, 0x11B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B514u;
label_11b514:
    // 0x11b514: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11B514u;
    {
        const bool branch_taken_0x11b514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B514u;
        // 0x11b518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b514) {
            ctx->pc = 0x11B540u;
            goto label_11b540;
        }
    }
    ctx->pc = 0x11B51Cu;
label_11b51c:
    // 0x11b51c: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B51Cu;
    {
        const bool branch_taken_0x11b51c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B51Cu;
        // 0x11b520: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b51c) {
            ctx->pc = 0x11B540u;
            goto label_11b540;
        }
    }
    ctx->pc = 0x11B524u;
    // 0x11b524: 0xc046db0  jal         func_11B6C0
    ctx->pc = 0x11B524u;
    SET_GPR_U32(ctx, 31, 0x11B52Cu);
    ctx->pc = 0x11B528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B524u;
    // 0x11b528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6C0u, 0x11B524u, 0x11B52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B52Cu;
label_11b52c:
    // 0x11b52c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11b52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b530: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11b530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b534: 0xc046dd0  jal         func_11B740
    ctx->pc = 0x11B534u;
    SET_GPR_U32(ctx, 31, 0x11B53Cu);
    ctx->pc = 0x11B538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B534u;
    // 0x11b538: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B740u, 0x11B534u, 0x11B53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B53Cu;
label_11b53c:
    // 0x11b53c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b540:
    // 0x11b540: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11b540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b544: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11b544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11b548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b54c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B54Cu;
        // 0x11b550: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B554u;
    // 0x11b554: 0x0  nop
    ctx->pc = 0x11b554u;
    // NOP
    ctx->pc = 0x11b558u;
}
