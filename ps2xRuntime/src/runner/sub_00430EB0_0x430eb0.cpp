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

// Function: sub_00430EB0
// Address: 0x430eb0 - 0x430ff8
void sub_00430EB0_0x430eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430EB0_0x430eb0");
#endif

    switch (ctx->pc) {
        case 0x430f30u: goto label_430f30;
        case 0x430fb4u: goto label_430fb4;
        case 0x430fd4u: goto label_430fd4;
        default: break;
    }

    ctx->pc = 0x430eb0u;

    // 0x430eb0: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x430eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x430eb4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x430EB4u;
    {
        const bool branch_taken_0x430eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x430EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EB4u;
        // 0x430eb8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430eb4) {
            ctx->pc = 0x430FD4u;
            goto label_430fd4;
        }
    }
    ctx->pc = 0x430EBCu;
    // 0x430ebc: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x430ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x430ec0: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x430ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430ec4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x430ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x430ec8: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x430ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x430ecc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x430eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x430ed0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x430ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x430ed4: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x430ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x430ed8: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x430ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x430edc: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x430EDCu;
    {
        const bool branch_taken_0x430edc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x430EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430EDCu;
        // 0x430ee0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430edc) {
            ctx->pc = 0x430F5Cu;
            goto label_430f5c;
        }
    }
    ctx->pc = 0x430EE4u;
    // 0x430ee4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x430ee4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430ee8: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x430ee8u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x430eec: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x430eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430ef0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430ef4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430ef8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430efc: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430f00: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430f04: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430f08: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x430f08u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x430f0c: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x430f0cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x430f10: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x430f10u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x430f14: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430f14u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430f18: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x430f18u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430f1c: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x430f1cu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430f20: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x430f20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x430f24: 0x54c0002b  bnel        $a2, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x430F24u;
    {
        const bool branch_taken_0x430f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x430f24) {
            ctx->pc = 0x430F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430F24u;
            // 0x430f28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430FD4u;
            goto label_430fd4;
        }
    }
    ctx->pc = 0x430F2Cu;
    // 0x430f2c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x430f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_430f30:
    // 0x430f30: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x430f30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430f34: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x430f34u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x430f38: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x430f38u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x430f3c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x430f3cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x430f40: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x430f40u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x430f44: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x430f44u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x430f48: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x430f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x430f4c: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x430F4Cu;
    {
        const bool branch_taken_0x430f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x430f4c) {
            ctx->pc = 0x430F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430F4Cu;
            // 0x430f50: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430f30;
        }
    }
    ctx->pc = 0x430F54u;
    // 0x430f54: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x430F54u;
    {
        const bool branch_taken_0x430f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x430F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430F54u;
        // 0x430f58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x430f54) {
            ctx->pc = 0x430FD4u;
            goto label_430fd4;
        }
    }
    ctx->pc = 0x430F5Cu;
label_430f5c:
    // 0x430f5c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x430f5cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430f60: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x430f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430f64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430f68: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430f6c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430f70: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430f70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430f74: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x430f74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x430f78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x430f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x430f7c: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x430f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x430f80: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x430f80u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x430f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430f88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x430f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x430f8c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x430F8Cu;
    {
        const bool branch_taken_0x430f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430f8c) {
            ctx->pc = 0x430F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430F8Cu;
            // 0x430f90: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430FD4u;
            goto label_430fd4;
        }
    }
    ctx->pc = 0x430F94u;
    // 0x430f94: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x430f94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x430f98: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430f98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430f9c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430f9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430fa0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x430fa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x430fa4: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x430fa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x430fa8: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x430fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x430fac: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x430facu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x430fb0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x430fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_430fb4:
    // 0x430fb4: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x430fb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x430fb8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x430fb8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x430fbc: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x430fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x430fc0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x430fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x430fc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x430fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x430fc8: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x430FC8u;
    {
        const bool branch_taken_0x430fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x430fc8) {
            ctx->pc = 0x430FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430FC8u;
            // 0x430fcc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430fb4;
        }
    }
    ctx->pc = 0x430FD0u;
    // 0x430fd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x430fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_430fd4:
    // 0x430fd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x430fd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x430fd8: 0x0  nop
    ctx->pc = 0x430fd8u;
    // NOP
    // 0x430fdc: 0x0  nop
    ctx->pc = 0x430fdcu;
    // NOP
    // 0x430fe0: 0x0  nop
    ctx->pc = 0x430fe0u;
    // NOP
    // 0x430fe4: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x430FE4u;
    {
        const bool branch_taken_0x430fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x430fe4) {
            ctx->pc = 0x430FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x430FE4u;
            // 0x430fe8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x430FD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430fd4;
        }
    }
    ctx->pc = 0x430FECu;
    // 0x430fec: 0x3e00008  jr          $ra
    ctx->pc = 0x430FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x430FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x430FECu;
        // 0x430ff0: 0x871023  subu        $v0, $a0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x430FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x430FF4u;
    // 0x430ff4: 0x0  nop
    ctx->pc = 0x430ff4u;
    // NOP
    ctx->pc = 0x430ff8u;
}
