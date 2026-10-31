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

// Function: sub_00465810
// Address: 0x465810 - 0x4658d0
void sub_00465810_0x465810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465810_0x465810");
#endif

    switch (ctx->pc) {
        case 0x465848u: goto label_465848;
        case 0x465894u: goto label_465894;
        case 0x4658a8u: goto label_4658a8;
        case 0x4658b4u: goto label_4658b4;
        default: break;
    }

    ctx->pc = 0x465810u;

    // 0x465810: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x465814: 0x8f828490  lw          $v0, -0x7B70($gp)
    ctx->pc = 0x465814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x465818: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x465818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x46581c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x46581cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x465820: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x465820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x465824: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x465824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465828: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x465828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x46582c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x46582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x465830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465834: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x465834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x465838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46583c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x46583cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x465840: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x465840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x465844: 0x0  nop
    ctx->pc = 0x465844u;
    // NOP
label_465848:
    // 0x465848: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x465848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x46584c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x46584cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x465850: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x465850u;
    {
        const bool branch_taken_0x465850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x465854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465850u;
        // 0x465854: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465850) {
            ctx->pc = 0x465860u;
            goto label_465860;
        }
    }
    ctx->pc = 0x465858u;
    // 0x465858: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x465858u;
    {
        const bool branch_taken_0x465858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465858u;
        // 0x46585c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465858) {
            ctx->pc = 0x465874u;
            goto label_465874;
        }
    }
    ctx->pc = 0x465860u;
label_465860:
    // 0x465860: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x465860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x465864: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x465864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x465868: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x465868u;
    {
        const bool branch_taken_0x465868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x46586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465868u;
        // 0x46586c: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465868) {
            ctx->pc = 0x465848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_465848;
        }
    }
    ctx->pc = 0x465870u;
    // 0x465870: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x465870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465874:
    // 0x465874: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x465874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x465878: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x465878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x46587c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x46587cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x465880: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x465880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x465884: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x465884u;
    {
        const bool branch_taken_0x465884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465884) {
            ctx->pc = 0x465888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x465884u;
            // 0x465888: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46589Cu;
            goto label_46589c;
        }
    }
    ctx->pc = 0x46588Cu;
    // 0x46588c: 0xc122364  jal         func_488D90
    ctx->pc = 0x46588Cu;
    SET_GPR_U32(ctx, 31, 0x465894u);
    ctx->pc = 0x488D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488D90u, 0x46588Cu, 0x465894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x465894u;
label_465894:
    // 0x465894: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x465894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x465898: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x465898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_46589c:
    // 0x46589c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46589cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658a0: 0xc11981e  jal         func_466078
    ctx->pc = 0x4658A0u;
    SET_GPR_U32(ctx, 31, 0x4658A8u);
    ctx->pc = 0x4658A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4658A0u;
    // 0x4658a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466078u, 0x4658A0u, 0x4658A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658A8u;
label_4658a8:
    // 0x4658a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4658a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658ac: 0xc11981e  jal         func_466078
    ctx->pc = 0x4658ACu;
    SET_GPR_U32(ctx, 31, 0x4658B4u);
    ctx->pc = 0x4658B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4658ACu;
    // 0x4658b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x466078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466078u, 0x4658ACu, 0x4658B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4658B4u;
label_4658b4:
    // 0x4658b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4658b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4658b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4658b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4658bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4658bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4658c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4658c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4658c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4658c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4658c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4658C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4658CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4658C8u;
        // 0x4658cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4658C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4658D0u;
}
