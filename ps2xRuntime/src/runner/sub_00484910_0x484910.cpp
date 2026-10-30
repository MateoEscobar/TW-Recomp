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

// Function: sub_00484910
// Address: 0x484910 - 0x484a20
void sub_00484910_0x484910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00484910_0x484910");
#endif

    switch (ctx->pc) {
        case 0x484968u: goto label_484968;
        case 0x4849b0u: goto label_4849b0;
        case 0x4849c8u: goto label_4849c8;
        default: break;
    }

    ctx->pc = 0x484910u;

    // 0x484910: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x484910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484914: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x484914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x484918: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x484918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x48491c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x48491Cu;
    {
        const bool branch_taken_0x48491c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x484920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48491Cu;
        // 0x484920: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x48491c) {
            ctx->pc = 0x484950u;
            goto label_484950;
        }
    }
    ctx->pc = 0x484924u;
    // 0x484924: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x484924u;
    {
        const bool branch_taken_0x484924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484924u;
        // 0x484928: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484924) {
            ctx->pc = 0x48493Cu;
            goto label_48493c;
        }
    }
    ctx->pc = 0x48492Cu;
    // 0x48492c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x48492Cu;
    {
        const bool branch_taken_0x48492c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x484930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48492Cu;
        // 0x484930: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48492c) {
            ctx->pc = 0x484950u;
            goto label_484950;
        }
    }
    ctx->pc = 0x484934u;
    // 0x484934: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x484934u;
    {
        const bool branch_taken_0x484934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484934) {
            ctx->pc = 0x484A18u;
            goto label_484a18;
        }
    }
    ctx->pc = 0x48493Cu;
label_48493c:
    // 0x48493c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x48493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x484940: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x484940u;
    {
        const bool branch_taken_0x484940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x484944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484940u;
        // 0x484944: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484940) {
            ctx->pc = 0x48499Cu;
            goto label_48499c;
        }
    }
    ctx->pc = 0x484948u;
    // 0x484948: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x484948u;
    {
        const bool branch_taken_0x484948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484948) {
            ctx->pc = 0x484A18u;
            goto label_484a18;
        }
    }
    ctx->pc = 0x484950u;
label_484950:
    // 0x484950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x484954: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x484954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x484958: 0x1840002e  blez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x484958u;
    {
        const bool branch_taken_0x484958 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x48495Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484958u;
        // 0x48495c: 0x8d240018  lw          $a0, 0x18($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484958) {
            ctx->pc = 0x484A14u;
            goto label_484a14;
        }
    }
    ctx->pc = 0x484960u;
    // 0x484960: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x484960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484964: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x484964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484968:
    // 0x484968: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x484968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x48496c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x48496cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x484970: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x484970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x484974: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x484974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x484978: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x484978u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x48497c: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x48497cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x484980: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x484980u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x484984: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x484984u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x484988: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x484988u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x48498c: 0x1500fff6  bnez        $t0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48498Cu;
    {
        const bool branch_taken_0x48498c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x484990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48498Cu;
        // 0x484990: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48498c) {
            ctx->pc = 0x484968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_484968;
        }
    }
    ctx->pc = 0x484994u;
    // 0x484994: 0x3e00008  jr          $ra
    ctx->pc = 0x484994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484994u;
        // 0x484998: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48499Cu;
label_48499c:
    // 0x48499c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x48499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x4849a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4849a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4849a4: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4849A4u;
    {
        const bool branch_taken_0x4849a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4849A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4849A4u;
        // 0x4849a8: 0x8d2a0014  lw          $t2, 0x14($t1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4849a4) {
            ctx->pc = 0x484A14u;
            goto label_484a14;
        }
    }
    ctx->pc = 0x4849ACu;
    // 0x4849ac: 0x0  nop
    ctx->pc = 0x4849acu;
    // NOP
label_4849b0:
    // 0x4849b0: 0x250b0001  addiu       $t3, $t0, 0x1
    ctx->pc = 0x4849b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4849b4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4849b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4849b8: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4849B8u;
    {
        const bool branch_taken_0x4849b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4849BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4849B8u;
        // 0x4849bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4849b8) {
            ctx->pc = 0x4849FCu;
            goto label_4849fc;
        }
    }
    ctx->pc = 0x4849C0u;
    // 0x4849c0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4849c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4849c4: 0x0  nop
    ctx->pc = 0x4849c4u;
    // NOP
label_4849c8:
    // 0x4849c8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4849c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4849cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4849ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4849d0: 0x90e50001  lbu         $a1, 0x1($a3)
    ctx->pc = 0x4849d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x4849d4: 0x90e60002  lbu         $a2, 0x2($a3)
    ctx->pc = 0x4849d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x4849d8: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x4849d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x4849dc: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x4849dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4849e0: 0x46202a  slt         $a0, $v0, $a2
    ctx->pc = 0x4849e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4849e4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x4849e4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4849e8: 0xa0e20003  sb          $v0, 0x3($a3)
    ctx->pc = 0x4849e8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4849ec: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x4849ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x4849f0: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x4849f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4849f4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4849F4u;
    {
        const bool branch_taken_0x4849f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4849F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4849F4u;
        // 0x4849f8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4849f4) {
            ctx->pc = 0x4849C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4849c8;
        }
    }
    ctx->pc = 0x4849FCu;
label_4849fc:
    // 0x4849fc: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x4849fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x484a00: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x484a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x484a04: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x484a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x484a08: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x484a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x484a0c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x484A0Cu;
    {
        const bool branch_taken_0x484a0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x484A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484A0Cu;
        // 0x484a10: 0x1435021  addu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x484a0c) {
            ctx->pc = 0x4849B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4849b0;
        }
    }
    ctx->pc = 0x484A14u;
label_484a14:
    // 0x484a14: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x484a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_484a18:
    // 0x484a18: 0x3e00008  jr          $ra
    ctx->pc = 0x484A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484A20u;
}
