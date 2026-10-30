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

// Function: sub_00144D60
// Address: 0x144d60 - 0x144e50
void sub_00144D60_0x144d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144D60_0x144d60");
#endif

    switch (ctx->pc) {
        case 0x144d7cu: goto label_144d7c;
        case 0x144d90u: goto label_144d90;
        case 0x144dccu: goto label_144dcc;
        case 0x144de8u: goto label_144de8;
        default: break;
    }

    ctx->pc = 0x144d60u;

    // 0x144d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144d64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x144d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x144d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144d74: 0xc0512ea  jal         func_144BA8
    ctx->pc = 0x144D74u;
    SET_GPR_U32(ctx, 31, 0x144D7Cu);
    ctx->pc = 0x144D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144D74u;
    // 0x144d78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x144D74u, 0x144D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144D7Cu;
label_144d7c:
    // 0x144d7c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x144D7Cu;
    {
        const bool branch_taken_0x144d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D7Cu;
        // 0x144d80: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d7c) {
            ctx->pc = 0x144DC0u;
            goto label_144dc0;
        }
    }
    ctx->pc = 0x144D84u;
    // 0x144d84: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x144d84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x144d88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x144d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144d8c: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x144d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_144d90:
    // 0x144d90: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144d94: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144d98: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144d9c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144d9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144da0: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x144da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x144da4: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x144DA4u;
    {
        const bool branch_taken_0x144da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DA4u;
        // 0x144da8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144da4) {
            ctx->pc = 0x144E30u;
            goto label_144e30;
        }
    }
    ctx->pc = 0x144DACu;
    // 0x144dac: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x144dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x144db0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x144DB0u;
    {
        const bool branch_taken_0x144db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DB0u;
        // 0x144db4: 0xc51023  subu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144db0) {
            ctx->pc = 0x144D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d90;
        }
    }
    ctx->pc = 0x144DB8u;
    // 0x144db8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x144DB8u;
    {
        const bool branch_taken_0x144db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DB8u;
        // 0x144dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144db8) {
            ctx->pc = 0x144E3Cu;
            goto label_144e3c;
        }
    }
    ctx->pc = 0x144DC0u;
label_144dc0:
    // 0x144dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x144dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dc4: 0xc0512e2  jal         func_144B88
    ctx->pc = 0x144DC4u;
    SET_GPR_U32(ctx, 31, 0x144DCCu);
    ctx->pc = 0x144DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DC4u;
    // 0x144dc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144B88u, 0x144DC4u, 0x144DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144DCCu;
label_144dcc:
    // 0x144dcc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x144DCCu;
    {
        const bool branch_taken_0x144dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144DCCu;
        // 0x144dd0: 0x2609001c  addiu       $t1, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144dcc) {
            ctx->pc = 0x144E38u;
            goto label_144e38;
        }
    }
    ctx->pc = 0x144DD4u;
    // 0x144dd4: 0x8e08002c  lw          $t0, 0x2C($s0)
    ctx->pc = 0x144dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x144dd8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x144dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144ddc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x144ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144de0: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x144de0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144de4: 0x0  nop
    ctx->pc = 0x144de4u;
    // NOP
label_144de8:
    // 0x144de8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x144dec: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144df0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x144df0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x144df4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144df4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144df8: 0x2ca40004  sltiu       $a0, $a1, 0x4
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x144dfc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144e00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144e00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e04: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x144E04u;
    {
        const bool branch_taken_0x144e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x144E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E04u;
        // 0x144e08: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e04) {
            ctx->pc = 0x144DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144de8;
        }
    }
    ctx->pc = 0x144E0Cu;
    // 0x144e0c: 0x2502fffc  addiu       $v0, $t0, -0x4
    ctx->pc = 0x144e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x144e10: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144e14: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144e18: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x144e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x144e1c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144e1cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144e20: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x144e20u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x144e24: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x144e24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x144e28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144E28u;
    {
        const bool branch_taken_0x144e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E28u;
        // 0x144e2c: 0x11102b  sltu        $v0, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e28) {
            ctx->pc = 0x144E3Cu;
            goto label_144e3c;
        }
    }
    ctx->pc = 0x144E30u;
label_144e30:
    // 0x144e30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x144E30u;
    {
        const bool branch_taken_0x144e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E30u;
        // 0x144e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e30) {
            ctx->pc = 0x144E3Cu;
            goto label_144e3c;
        }
    }
    ctx->pc = 0x144E38u;
label_144e38:
    // 0x144e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144e3c:
    // 0x144e3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x144e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144e40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144e40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144e48: 0x3e00008  jr          $ra
    ctx->pc = 0x144E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E48u;
        // 0x144e4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144E50u;
}
