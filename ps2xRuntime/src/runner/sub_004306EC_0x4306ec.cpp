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

// Function: sub_004306EC
// Address: 0x4306ec - 0x4307e8
void sub_004306EC_0x4306ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004306EC_0x4306ec");
#endif

    switch (ctx->pc) {
        case 0x430720u: goto label_430720;
        case 0x430760u: goto label_430760;
        case 0x430798u: goto label_430798;
        case 0x4307c8u: goto label_4307c8;
        default: break;
    }

    ctx->pc = 0x4306ecu;

    // 0x4306ec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4306ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4306f0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x4306f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4306f4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4306F4u;
    {
        const bool branch_taken_0x4306f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4306F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4306F4u;
        // 0x4306f8: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4306f4) {
            ctx->pc = 0x430740u;
            goto label_430740;
        }
    }
    ctx->pc = 0x4306FCu;
    // 0x4306fc: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x4306fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x430700: 0x107102b  sltu        $v0, $t0, $a3
    ctx->pc = 0x430700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x430704: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x430704u;
    {
        const bool branch_taken_0x430704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x430708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430704u;
        // 0x430708: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430704) {
            ctx->pc = 0x430740u;
            goto label_430740;
        }
    }
    ctx->pc = 0x43070Cu;
    // 0x43070c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x43070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x430710: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x430710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x430714: 0x10c20032  beq         $a2, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x430714u;
    {
        const bool branch_taken_0x430714 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x430718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430714u;
        // 0x430718: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430714) {
            ctx->pc = 0x4307E0u;
            goto label_4307e0;
        }
    }
    ctx->pc = 0x43071Cu;
    // 0x43071c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43071cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_430720:
    // 0x430720: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x430720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x430724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x430724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x430728: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x430728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43072c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x43072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x430730: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430730u;
    {
        const bool branch_taken_0x430730 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x430734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430730u;
        // 0x430734: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430730) {
            ctx->pc = 0x430720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430720;
        }
    }
    ctx->pc = 0x430738u;
    // 0x430738: 0x3e00008  jr          $ra
    ctx->pc = 0x430738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430738u;
        // 0x43073c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430740u;
label_430740:
    // 0x430740: 0x2cc20020  sltiu       $v0, $a2, 0x20
    ctx->pc = 0x430740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430744: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x430744u;
    {
        const bool branch_taken_0x430744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430744) {
            ctx->pc = 0x430748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430744u;
            // 0x430748: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4307BCu;
            goto label_4307bc;
        }
    }
    ctx->pc = 0x43074Cu;
    // 0x43074c: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x43074cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x430750: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x430750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x430754: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x430754u;
    {
        const bool branch_taken_0x430754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430754) {
            ctx->pc = 0x430758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430754u;
            // 0x430758: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4307BCu;
            goto label_4307bc;
        }
    }
    ctx->pc = 0x43075Cu;
    // 0x43075c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x43075cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_430760:
    // 0x430760: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430764: 0x24c6ffe0  addiu       $a2, $a2, -0x20
    ctx->pc = 0x430764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
    // 0x430768: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x430768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x43076c: 0x2cc40020  sltiu       $a0, $a2, 0x20
    ctx->pc = 0x43076cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x430770: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x430770u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x430774: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x430774u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x430778: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x430778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43077c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x43077cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430780: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x430780u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x430784: 0x1080fff6  beqz        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x430784u;
    {
        const bool branch_taken_0x430784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x430788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430784u;
        // 0x430788: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430784) {
            ctx->pc = 0x430760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430760;
        }
    }
    ctx->pc = 0x43078Cu;
    // 0x43078c: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x43078cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x430790: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x430790u;
    {
        const bool branch_taken_0x430790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430790u;
        // 0x430794: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430790) {
            ctx->pc = 0x4307B8u;
            goto label_4307b8;
        }
    }
    ctx->pc = 0x430798u;
label_430798:
    // 0x430798: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x430798u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x43079c: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x43079cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x4307a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x4307a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4307a4: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x4307a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4307a8: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x4307a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x4307ac: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4307ACu;
    {
        const bool branch_taken_0x4307ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4307B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307ACu;
        // 0x4307b0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307ac) {
            ctx->pc = 0x430798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430798;
        }
    }
    ctx->pc = 0x4307B4u;
    // 0x4307b4: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x4307b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4307b8:
    // 0x4307b8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4307b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4307bc:
    // 0x4307bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4307c0: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4307C0u;
    {
        const bool branch_taken_0x4307c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x4307C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307C0u;
        // 0x4307c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307c0) {
            ctx->pc = 0x4307E0u;
            goto label_4307e0;
        }
    }
    ctx->pc = 0x4307C8u;
label_4307c8:
    // 0x4307c8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4307c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4307cc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4307ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x4307d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4307d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4307d4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x4307d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4307d8: 0x14c4fffb  bne         $a2, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4307D8u;
    {
        const bool branch_taken_0x4307d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x4307DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307D8u;
        // 0x4307dc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4307d8) {
            ctx->pc = 0x4307C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4307c8;
        }
    }
    ctx->pc = 0x4307E0u;
label_4307e0:
    // 0x4307e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4307E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4307E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4307E0u;
        // 0x4307e4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4307E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4307E8u;
}
