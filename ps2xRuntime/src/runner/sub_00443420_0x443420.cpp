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

// Function: sub_00443420
// Address: 0x443420 - 0x443520
void sub_00443420_0x443420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443420_0x443420");
#endif

    switch (ctx->pc) {
        case 0x443460u: goto label_443460;
        case 0x44346cu: goto label_44346c;
        case 0x44347cu: goto label_44347c;
        case 0x443490u: goto label_443490;
        case 0x4434a8u: goto label_4434a8;
        case 0x4434bcu: goto label_4434bc;
        case 0x4434d8u: goto label_4434d8;
        default: break;
    }

    ctx->pc = 0x443420u;

    // 0x443420: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x443420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x443424: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x443424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x443428: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x443428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44342c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x443430: 0x3c150044  lui         $s5, 0x44
    ctx->pc = 0x443430u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)68 << 16));
    // 0x443434: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x443434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x443438: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x443438u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
    // 0x44343c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x443440: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x443440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x443444: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x443448: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x443448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x44344c: 0x24508f18  addiu       $s0, $v0, -0x70E8
    ctx->pc = 0x44344cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938392));
    // 0x443450: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x443450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x443454: 0x8c448f18  lw          $a0, -0x70E8($v0)
    ctx->pc = 0x443454u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x518F18u));
    // 0x443458: 0xc110d48  jal         func_443520
    ctx->pc = 0x443458u;
    SET_GPR_U32(ctx, 31, 0x443460u);
    ctx->pc = 0x44345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443458u;
    // 0x44345c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443520u, 0x443458u, 0x443460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443460u;
label_443460:
    // 0x443460: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x443460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x443464: 0xc110d48  jal         func_443520
    ctx->pc = 0x443464u;
    SET_GPR_U32(ctx, 31, 0x44346Cu);
    ctx->pc = 0x443468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443464u;
    // 0x443468: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443520u, 0x443464u, 0x44346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44346Cu;
label_44346c:
    // 0x44346c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x44346cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x443470: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x443470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x443474: 0xc110d02  jal         func_443408
    ctx->pc = 0x443474u;
    SET_GPR_U32(ctx, 31, 0x44347Cu);
    ctx->pc = 0x443478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443474u;
    // 0x443478: 0x26a633c8  addiu       $a2, $s5, 0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 13256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x443474u, 0x44347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44347Cu;
label_44347c:
    // 0x44347c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x44347cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443480: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x443480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x443484: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x443484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x443488: 0xc110d02  jal         func_443408
    ctx->pc = 0x443488u;
    SET_GPR_U32(ctx, 31, 0x443490u);
    ctx->pc = 0x44348Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443488u;
    // 0x44348c: 0x26863390  addiu       $a2, $s4, 0x3390 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 13200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x443488u, 0x443490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443490u;
label_443490:
    // 0x443490: 0x2671fdf4  addiu       $s1, $s3, -0x20C
    ctx->pc = 0x443490u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
    // 0x443494: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x443494u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443498: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x443498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
    // 0x44349c: 0x12300014  beq         $s1, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x44349Cu;
    {
        const bool branch_taken_0x44349c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x4434A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44349Cu;
        // 0x4434a0: 0x3c160052  lui         $s6, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44349c) {
            ctx->pc = 0x4434F0u;
            goto label_4434f0;
        }
    }
    ctx->pc = 0x4434A4u;
    // 0x4434a4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4434a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4434a8:
    // 0x4434a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4434A8u;
    {
        const bool branch_taken_0x4434a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4434ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434A8u;
        // 0x4434ac: 0x26640004  addiu       $a0, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434a8) {
            ctx->pc = 0x4434C8u;
            goto label_4434c8;
        }
    }
    ctx->pc = 0x4434B0u;
    // 0x4434b0: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x4434b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x4434b4: 0xc110d02  jal         func_443408
    ctx->pc = 0x4434B4u;
    SET_GPR_U32(ctx, 31, 0x4434BCu);
    ctx->pc = 0x4434B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4434B4u;
    // 0x4434b8: 0x26a633c8  addiu       $a2, $s5, 0x33C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 13256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x4434B4u, 0x4434BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4434BCu;
label_4434bc:
    // 0x4434bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4434bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4434c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4434C0u;
    {
        const bool branch_taken_0x4434c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4434C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434C0u;
        // 0x4434c4: 0x2671fdf4  addiu       $s1, $s3, -0x20C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434c0) {
            ctx->pc = 0x4434E0u;
            goto label_4434e0;
        }
    }
    ctx->pc = 0x4434C8u;
label_4434c8:
    // 0x4434c8: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x4434c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4434cc: 0x3c058008  lui         $a1, 0x8008
    ctx->pc = 0x4434ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32776 << 16));
    // 0x4434d0: 0xc110d02  jal         func_443408
    ctx->pc = 0x4434D0u;
    SET_GPR_U32(ctx, 31, 0x4434D8u);
    ctx->pc = 0x4434D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4434D0u;
    // 0x4434d4: 0x26863390  addiu       $a2, $s4, 0x3390 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 13200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443408u, 0x4434D0u, 0x4434D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4434D8u;
label_4434d8:
    // 0x4434d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4434d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4434dc: 0x2650fe98  addiu       $s0, $s2, -0x168
    ctx->pc = 0x4434dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966936));
label_4434e0:
    // 0x4434e0: 0x1630fff1  bne         $s1, $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x4434E0u;
    {
        const bool branch_taken_0x4434e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4434E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434E0u;
        // 0x4434e4: 0x230102b  sltu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434e0) {
            ctx->pc = 0x4434A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4434a8;
        }
    }
    ctx->pc = 0x4434E8u;
    // 0x4434e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4434E8u;
    {
        const bool branch_taken_0x4434e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4434ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4434E8u;
        // 0x4434ec: 0xaed18f10  sw          $s1, -0x70F0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294938384), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4434e8) {
            ctx->pc = 0x4434F4u;
            goto label_4434f4;
        }
    }
    ctx->pc = 0x4434F0u;
label_4434f0:
    // 0x4434f0: 0xaed18f10  sw          $s1, -0x70F0($s6)
    ctx->pc = 0x4434f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294938384), GPR_U32(ctx, 17));
label_4434f4:
    // 0x4434f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4434f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4434f8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4434f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4434fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4434fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x443500: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x443500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x443504: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x443504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443508: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44350c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44350cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443514: 0x3e00008  jr          $ra
    ctx->pc = 0x443514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443514u;
        // 0x443518: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44351Cu;
    // 0x44351c: 0x0  nop
    ctx->pc = 0x44351cu;
    // NOP
    ctx->pc = 0x443520u;
}
