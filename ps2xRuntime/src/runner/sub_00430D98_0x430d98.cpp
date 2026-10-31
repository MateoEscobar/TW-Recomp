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

// Function: sub_00430D98
// Address: 0x430d98 - 0x430eb0
void sub_00430D98_0x430d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430D98_0x430d98");
#endif

    switch (ctx->pc) {
        case 0x430e1cu: goto label_430e1c;
        case 0x430e68u: goto label_430e68;
        case 0x430e90u: goto label_430e90;
        default: break;
    }

    ctx->pc = 0x430d98u;

    // 0x430d98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x430d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430d9c: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x430d9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x430da0: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x430da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x430da4: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x430DA4u;
    {
        const bool branch_taken_0x430da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430DA4u;
        // 0x430da8: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430da4) {
            ctx->pc = 0x430E90u;
            goto label_430e90;
        }
    }
    ctx->pc = 0x430DACu;
    // 0x430dac: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x430dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x430db0: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x430db0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430db4: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x430db4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x430db8: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x430db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x430dbc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x430dbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x430dc0: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x430dc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x430dc4: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x430dc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x430dc8: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x430dc8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x430dcc: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x430dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430dd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430dd4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430dd8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430ddc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430de0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430de4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430de8: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x430DE8u;
    {
        const bool branch_taken_0x430de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430de8) {
            ctx->pc = 0x430DECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430DE8u;
            // 0x430dec: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430E50u;
            goto label_430e50;
        }
    }
    ctx->pc = 0x430DF0u;
    // 0x430df0: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x430df0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x430df4: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x430df4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430df8: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x430df8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x430dfc: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x430dfcu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x430e00: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x430e00u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x430e04: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430e04u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430e08: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x430e08u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430e0c: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x430e0cu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430e10: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x430e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x430e14: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x430E14u;
    {
        const bool branch_taken_0x430e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E14u;
        // 0x430e18: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e14) {
            ctx->pc = 0x430E8Cu;
            goto label_430e8c;
        }
    }
    ctx->pc = 0x430E1Cu;
label_430e1c:
    // 0x430e1c: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x430e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x430e20: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x430e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x430e24: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x430e24u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430e28: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x430e28u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x430e2c: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x430e2cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x430e30: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430e30u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430e34: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x430e34u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430e38: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x430e38u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430e3c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x430e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x430e40: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x430E40u;
    {
        const bool branch_taken_0x430e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E40u;
        // 0x430e44: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e40) {
            ctx->pc = 0x430E1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430e1c;
        }
    }
    ctx->pc = 0x430E48u;
    // 0x430e48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x430E48u;
    {
        const bool branch_taken_0x430e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E48u;
        // 0x430e4c: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e48) {
            ctx->pc = 0x430E90u;
            goto label_430e90;
        }
    }
    ctx->pc = 0x430E50u;
label_430e50:
    // 0x430e50: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x430e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x430e54: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x430e54u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x430e58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430e5c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x430e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x430e60: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x430E60u;
    {
        const bool branch_taken_0x430e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E60u;
        // 0x430e64: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e60) {
            ctx->pc = 0x430E8Cu;
            goto label_430e8c;
        }
    }
    ctx->pc = 0x430E68u;
label_430e68:
    // 0x430e68: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x430e68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x430e6c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x430e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x430e70: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x430e70u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430e74: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x430e74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x430e78: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x430e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x430e7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x430e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x430e80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x430e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x430e84: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x430E84u;
    {
        const bool branch_taken_0x430e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x430E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430E84u;
        // 0x430e88: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430e84) {
            ctx->pc = 0x430E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430e68;
        }
    }
    ctx->pc = 0x430E8Cu;
label_430e8c:
    // 0x430e8c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x430e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_430e90:
    // 0x430e90: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x430e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430e94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x430e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x430e98: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x430e98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x430e9c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x430e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x430ea0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430EA0u;
    {
        const bool branch_taken_0x430ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EA0u;
        // 0x430ea4: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430ea0) {
            ctx->pc = 0x430E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430e90;
        }
    }
    ctx->pc = 0x430EA8u;
    // 0x430ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x430EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EA8u;
        // 0x430eac: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430EB0u;
}
