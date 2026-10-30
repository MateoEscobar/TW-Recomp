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

// Function: sub_001106D0
// Address: 0x1106d0 - 0x110790
void sub_001106D0_0x1106d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001106D0_0x1106d0");
#endif

    switch (ctx->pc) {
        case 0x110750u: goto label_110750;
        case 0x11076cu: goto label_11076c;
        default: break;
    }

    ctx->pc = 0x1106d0u;

    // 0x1106d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1106d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1106d4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1106d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1106d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1106d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1106dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1106dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1106e0: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1106E0u;
    {
        const bool branch_taken_0x1106e0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1106E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106E0u;
        // 0x1106e4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106e0) {
            ctx->pc = 0x11075Cu;
            goto label_11075c;
        }
    }
    ctx->pc = 0x1106E8u;
    // 0x1106e8: 0x2cc20029  sltiu       $v0, $a2, 0x29
    ctx->pc = 0x1106e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x1106ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1106ECu;
    {
        const bool branch_taken_0x1106ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106ECu;
        // 0x1106f0: 0x24020056  addiu       $v0, $zero, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106ec) {
            ctx->pc = 0x110714u;
            goto label_110714;
        }
    }
    ctx->pc = 0x1106F4u;
    // 0x1106f4: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1106F4u;
    {
        const bool branch_taken_0x1106f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1106F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106F4u;
        // 0x1106f8: 0x2cc20007  sltiu       $v0, $a2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106f4) {
            ctx->pc = 0x11077Cu;
            goto label_11077c;
        }
    }
    ctx->pc = 0x1106FCu;
    // 0x1106fc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1106FCu;
    {
        const bool branch_taken_0x1106fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1106FCu;
        // 0x110700: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1106fc) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x110704u;
    // 0x110704: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x110704u;
    {
        const bool branch_taken_0x110704 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x110704) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x11070Cu;
    // 0x11070c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11070Cu;
    {
        const bool branch_taken_0x11070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11070Cu;
        // 0x110710: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11070c) {
            ctx->pc = 0x110780u;
            goto label_110780;
        }
    }
    ctx->pc = 0x110714u;
label_110714:
    // 0x110714: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x110714u;
    {
        const bool branch_taken_0x110714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x110718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110714u;
        // 0x110718: 0x2cc20057  sltiu       $v0, $a2, 0x57 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110714) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x11071Cu;
    // 0x11071c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11071Cu;
    {
        const bool branch_taken_0x11071c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11071Cu;
        // 0x110720: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11071c) {
            ctx->pc = 0x110734u;
            goto label_110734;
        }
    }
    ctx->pc = 0x110724u;
    // 0x110724: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x110724u;
    {
        const bool branch_taken_0x110724 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x110724) {
            ctx->pc = 0x110740u;
            goto label_110740;
        }
    }
    ctx->pc = 0x11072Cu;
    // 0x11072c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x11072Cu;
    {
        const bool branch_taken_0x11072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11072Cu;
        // 0x110730: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11072c) {
            ctx->pc = 0x110780u;
            goto label_110780;
        }
    }
    ctx->pc = 0x110734u;
label_110734:
    // 0x110734: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x110734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x110738: 0x54c20011  bnel        $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x110738u;
    {
        const bool branch_taken_0x110738 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x110738) {
            ctx->pc = 0x11073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110738u;
            // 0x11073c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110780u;
            goto label_110780;
        }
    }
    ctx->pc = 0x110740u;
label_110740:
    // 0x110740: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x110740u;
    {
        const bool branch_taken_0x110740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x110740) {
            ctx->pc = 0x110744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110740u;
            // 0x110744: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x110780u;
            goto label_110780;
        }
    }
    ctx->pc = 0x110748u;
    // 0x110748: 0xc0445a2  jal         func_111688
    ctx->pc = 0x110748u;
    SET_GPR_U32(ctx, 31, 0x110750u);
    ctx->pc = 0x111688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111688u, 0x110748u, 0x110750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110750u;
label_110750:
    // 0x110750: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x110754u;
    {
        const bool branch_taken_0x110754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110754u;
        // 0x110758: 0xa202016c  sb          $v0, 0x16C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110754) {
            ctx->pc = 0x11077Cu;
            goto label_11077c;
        }
    }
    ctx->pc = 0x11075Cu;
label_11075c:
    // 0x11075c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11075Cu;
    {
        const bool branch_taken_0x11075c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x110760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11075Cu;
        // 0x110760: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11075c) {
            ctx->pc = 0x11077Cu;
            goto label_11077c;
        }
    }
    ctx->pc = 0x110764u;
    // 0x110764: 0xc107458  jal         func_41D160
    ctx->pc = 0x110764u;
    SET_GPR_U32(ctx, 31, 0x11076Cu);
    ctx->pc = 0x110768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110764u;
    // 0x110768: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x110764u, 0x11076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11076Cu;
label_11076c:
    // 0x11076c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11076cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110770: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x110770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110774: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x110774u;
    {
        const bool branch_taken_0x110774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x110774) {
            ctx->pc = 0x110778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x110774u;
            // 0x110778: 0xa203016c  sb          $v1, 0x16C($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11077Cu;
            goto label_11077c;
        }
    }
    ctx->pc = 0x11077Cu;
label_11077c:
    // 0x11077c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x11077cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_110780:
    // 0x110780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110784: 0x3e00008  jr          $ra
    ctx->pc = 0x110784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110784u;
        // 0x110788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11078Cu;
    // 0x11078c: 0x0  nop
    ctx->pc = 0x11078cu;
    // NOP
    ctx->pc = 0x110790u;
}
