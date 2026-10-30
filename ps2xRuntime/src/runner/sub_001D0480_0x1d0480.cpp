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

// Function: sub_001D0480
// Address: 0x1d0480 - 0x1d0548
void sub_001D0480_0x1d0480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0480_0x1d0480");
#endif

    switch (ctx->pc) {
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0534u: goto label_1d0534;
        default: break;
    }

    ctx->pc = 0x1d0480u;

    // 0x1d0480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0484: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0488: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d048c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d048cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0490: 0x8e021b7c  lw          $v0, 0x1B7C($s0)
    ctx->pc = 0x1d0490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7036)));
    // 0x1d0494: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D0494u;
    {
        const bool branch_taken_0x1d0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0494u;
        // 0x1d0498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0494) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D049Cu;
    // 0x1d049c: 0x8e021ba0  lw          $v0, 0x1BA0($s0)
    ctx->pc = 0x1d049cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7072)));
    // 0x1d04a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D04A0u;
    {
        const bool branch_taken_0x1d04a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04A0u;
        // 0x1d04a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04a0) {
            ctx->pc = 0x1D04B8u;
            goto label_1d04b8;
        }
    }
    ctx->pc = 0x1D04A8u;
    // 0x1d04a8: 0xc077b5a  jal         func_1DED68
    ctx->pc = 0x1D04A8u;
    SET_GPR_U32(ctx, 31, 0x1D04B0u);
    ctx->pc = 0x1D04ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04A8u;
    // 0x1d04ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED68u, 0x1D04A8u, 0x1D04B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04B0u;
label_1d04b0:
    // 0x1d04b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1D04B0u;
    {
        const bool branch_taken_0x1d04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B0u;
        // 0x1d04b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b0) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D04B8u;
label_1d04b8:
    // 0x1d04b8: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D04B8u;
    {
        const bool branch_taken_0x1d04b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04B8u;
        // 0x1d04bc: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04b8) {
            ctx->pc = 0x1D04E0u;
            goto label_1d04e0;
        }
    }
    ctx->pc = 0x1D04C0u;
    // 0x1d04c0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D04C0u;
    {
        const bool branch_taken_0x1d04c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04C0u;
        // 0x1d04c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04c0) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D04C8u;
    // 0x1d04c8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d04c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d04cc: 0x14a2001a  bne         $a1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D04CCu;
    {
        const bool branch_taken_0x1d04cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04CCu;
        // 0x1d04d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04cc) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D04D4u;
    // 0x1d04d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d04d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d04d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1D04D8u;
    {
        const bool branch_taken_0x1d04d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D04D8u;
        // 0x1d04dc: 0xae031b7c  sw          $v1, 0x1B7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04d8) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D04E0u;
label_1d04e0:
    // 0x1d04e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1d04e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1d04e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d04e8: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D04E8u;
    SET_GPR_U32(ctx, 31, 0x1D04F0u);
    ctx->pc = 0x1D04ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04E8u;
    // 0x1d04ec: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D04E8u, 0x1D04F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04F0u;
label_1d04f0:
    // 0x1d04f0: 0xae02078c  sw          $v0, 0x78C($s0)
    ctx->pc = 0x1d04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1932), GPR_U32(ctx, 2));
    // 0x1d04f4: 0xc0750fa  jal         func_1D43E8
    ctx->pc = 0x1D04F4u;
    SET_GPR_U32(ctx, 31, 0x1D04FCu);
    ctx->pc = 0x1D04F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D04F4u;
    // 0x1d04f8: 0x26045a00  addiu       $a0, $s0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x1D04F4u, 0x1D04FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D04FCu;
label_1d04fc:
    // 0x1d04fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d04fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0500: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D0500u;
    {
        const bool branch_taken_0x1d0500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0500u;
        // 0x1d0504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0500) {
            ctx->pc = 0x1D0518u;
            goto label_1d0518;
        }
    }
    ctx->pc = 0x1D0508u;
    // 0x1d0508: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0508u;
    {
        const bool branch_taken_0x1d0508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0508u;
        // 0x1d050c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0508) {
            ctx->pc = 0x1D0524u;
            goto label_1d0524;
        }
    }
    ctx->pc = 0x1D0510u;
    // 0x1d0510: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D0510u;
    {
        const bool branch_taken_0x1d0510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0510u;
        // 0x1d0514: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0510) {
            ctx->pc = 0x1D053Cu;
            goto label_1d053c;
        }
    }
    ctx->pc = 0x1D0518u;
label_1d0518:
    // 0x1d0518: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d0518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d051c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D051Cu;
    {
        const bool branch_taken_0x1d051c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D051Cu;
        // 0x1d0520: 0xae031b7c  sw          $v1, 0x1B7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 7036), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d051c) {
            ctx->pc = 0x1D0538u;
            goto label_1d0538;
        }
    }
    ctx->pc = 0x1D0524u;
label_1d0524:
    // 0x1d0524: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d0524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d0528: 0xae031ba0  sw          $v1, 0x1BA0($s0)
    ctx->pc = 0x1d0528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7072), GPR_U32(ctx, 3));
    // 0x1d052c: 0xc108a70  jal         func_4229C0
    ctx->pc = 0x1D052Cu;
    SET_GPR_U32(ctx, 31, 0x1D0534u);
    ctx->pc = 0x1D0530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D052Cu;
    // 0x1d0530: 0x2484e490  addiu       $a0, $a0, -0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4229C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4229C0u, 0x1D052Cu, 0x1D0534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0534u;
label_1d0534:
    // 0x1d0534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0538:
    // 0x1d0538: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d053c:
    // 0x1d053c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0540: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0540u;
        // 0x1d0544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0548u;
}
