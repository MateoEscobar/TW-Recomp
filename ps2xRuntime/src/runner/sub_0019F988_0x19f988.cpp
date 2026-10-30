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

// Function: sub_0019F988
// Address: 0x19f988 - 0x19faf0
void sub_0019F988_0x19f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F988_0x19f988");
#endif

    switch (ctx->pc) {
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19fa50u: goto label_19fa50;
        case 0x19fa64u: goto label_19fa64;
        case 0x19fa80u: goto label_19fa80;
        case 0x19fa8cu: goto label_19fa8c;
        case 0x19fa94u: goto label_19fa94;
        default: break;
    }

    ctx->pc = 0x19f988u;

    // 0x19f988: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19f988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19f98c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x19f990: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19f990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19f994: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f99c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19f9a0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19f9a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x19f9a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19f9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19f9ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f9b0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x19f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x19f9b4: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x19f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x19f9b8: 0x14800027  bnez        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x19F9B8u;
    {
        const bool branch_taken_0x19f9b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9B8u;
        // 0x19f9bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9b8) {
            ctx->pc = 0x19FA58u;
            goto label_19fa58;
        }
    }
    ctx->pc = 0x19F9C0u;
    // 0x19f9c0: 0xc08a55c  jal         func_229570
    ctx->pc = 0x19F9C0u;
    SET_GPR_U32(ctx, 31, 0x19F9C8u);
    ctx->pc = 0x19F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9C0u;
    // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229570u, 0x19F9C0u, 0x19F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9cc: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x19f9ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x19f9d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x19F9D0u;
    {
        const bool branch_taken_0x19f9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D0u;
        // 0x19f9d4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9d0) {
            ctx->pc = 0x19FA58u;
            goto label_19fa58;
        }
    }
    ctx->pc = 0x19F9D8u;
    // 0x19f9d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f9dc: 0x24423c60  addiu       $v0, $v0, 0x3C60
    ctx->pc = 0x19f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15456));
    // 0x19f9e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19f9e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x19f9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f9e8: 0x800008  jr          $a0
    ctx->pc = 0x19F9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F9F0u: goto label_19f9f0;
            case 0x19F9F8u: goto label_19f9f8;
            case 0x19FA00u: goto label_19fa00;
            case 0x19FA08u: goto label_19fa08;
            case 0x19FA10u: goto label_19fa10;
            case 0x19FA18u: goto label_19fa18;
            case 0x19FA20u: goto label_19fa20;
            case 0x19FA28u: goto label_19fa28;
            case 0x19FA30u: goto label_19fa30;
            case 0x19FA38u: goto label_19fa38;
            case 0x19FA40u: goto label_19fa40;
            case 0x19FA48u: goto label_19fa48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F9E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19F9F0u;
label_19f9f0:
    // 0x19f9f0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F0u;
        // 0x19f9f4: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19F9F8u;
label_19f9f8:
    // 0x19f9f8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x19F9F8u;
    {
        const bool branch_taken_0x19f9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9F8u;
        // 0x19f9fc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9f8) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA00u;
label_19fa00:
    // 0x19fa00: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x19FA00u;
    {
        const bool branch_taken_0x19fa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA00u;
        // 0x19fa04: 0x24020025  addiu       $v0, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa00) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA08u;
label_19fa08:
    // 0x19fa08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x19FA08u;
    {
        const bool branch_taken_0x19fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA08u;
        // 0x19fa0c: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa08) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA10u;
label_19fa10:
    // 0x19fa10: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x19FA10u;
    {
        const bool branch_taken_0x19fa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA10u;
        // 0x19fa14: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa10) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA18u;
label_19fa18:
    // 0x19fa18: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x19FA18u;
    {
        const bool branch_taken_0x19fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA18u;
        // 0x19fa1c: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa18) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA20u;
label_19fa20:
    // 0x19fa20: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x19FA20u;
    {
        const bool branch_taken_0x19fa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA20u;
        // 0x19fa24: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa20) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA28u;
label_19fa28:
    // 0x19fa28: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x19FA28u;
    {
        const bool branch_taken_0x19fa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA28u;
        // 0x19fa2c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa28) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA30u;
label_19fa30:
    // 0x19fa30: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x19FA30u;
    {
        const bool branch_taken_0x19fa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA30u;
        // 0x19fa34: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa30) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA38u;
label_19fa38:
    // 0x19fa38: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x19FA38u;
    {
        const bool branch_taken_0x19fa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA38u;
        // 0x19fa3c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa38) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA40u;
label_19fa40:
    // 0x19fa40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x19FA40u;
    {
        const bool branch_taken_0x19fa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA40u;
        // 0x19fa44: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa40) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA48u;
label_19fa48:
    // 0x19fa48: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x19FA48u;
    {
        const bool branch_taken_0x19fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA48u;
        // 0x19fa4c: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa48) {
            ctx->pc = 0x19FAC8u;
            goto label_19fac8;
        }
    }
    ctx->pc = 0x19FA50u;
label_19fa50:
    // 0x19fa50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19FA50u;
    {
        const bool branch_taken_0x19fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA50u;
        // 0x19fa54: 0x2412002c  addiu       $s2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa50) {
            ctx->pc = 0x19FAC4u;
            goto label_19fac4;
        }
    }
    ctx->pc = 0x19FA58u;
label_19fa58:
    // 0x19fa58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fa5c: 0xc087502  jal         func_21D408
    ctx->pc = 0x19FA5Cu;
    SET_GPR_U32(ctx, 31, 0x19FA64u);
    ctx->pc = 0x19FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA5Cu;
    // 0x19fa60: 0x24120028  addiu       $s2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x19FA5Cu, 0x19FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA64u;
label_19fa64:
    // 0x19fa64: 0x8c54020c  lw          $s4, 0x20C($v0)
    ctx->pc = 0x19fa64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x19fa68: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x19fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x19fa6c: 0x84430224  lh          $v1, 0x224($v0)
    ctx->pc = 0x19fa6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 548)));
    // 0x19fa70: 0x18600014  blez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19FA70u;
    {
        const bool branch_taken_0x19fa70 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x19FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FA70u;
        // 0x19fa74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fa70) {
            ctx->pc = 0x19FAC4u;
            goto label_19fac4;
        }
    }
    ctx->pc = 0x19FA78u;
    // 0x19fa78: 0x2415002d  addiu       $s5, $zero, 0x2D
    ctx->pc = 0x19fa78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x19fa7c: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x19fa7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
label_19fa80:
    // 0x19fa80: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x19fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x19fa84: 0xc0e409a  jal         func_390268
    ctx->pc = 0x19FA84u;
    SET_GPR_U32(ctx, 31, 0x19FA8Cu);
    ctx->pc = 0x19FA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA84u;
    // 0x19fa88: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x19FA84u, 0x19FA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA8Cu;
label_19fa8c:
    // 0x19fa8c: 0xc087502  jal         func_21D408
    ctx->pc = 0x19FA8Cu;
    SET_GPR_U32(ctx, 31, 0x19FA94u);
    ctx->pc = 0x19FA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FA8Cu;
    // 0x19fa90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x19FA8Cu, 0x19FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FA94u;
label_19fa94:
    // 0x19fa94: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x19fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x19fa98: 0x56830005  bnel        $s4, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FA98u;
    {
        const bool branch_taken_0x19fa98 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x19fa98) {
            ctx->pc = 0x19FA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FA98u;
            // 0x19fa9c: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAB0u;
            goto label_19fab0;
        }
    }
    ctx->pc = 0x19FAA0u;
    // 0x19faa0: 0x1200ffeb  beqz        $s0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x19FAA0u;
    {
        const bool branch_taken_0x19faa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAA0u;
        // 0x19faa4: 0x3a020001  xori        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faa0) {
            ctx->pc = 0x19FA50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fa50;
        }
    }
    ctx->pc = 0x19FAA8u;
    // 0x19faa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19FAA8u;
    {
        const bool branch_taken_0x19faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAA8u;
        // 0x19faac: 0x2a2900a  movz        $s2, $s5, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faa8) {
            ctx->pc = 0x19FAC4u;
            goto label_19fac4;
        }
    }
    ctx->pc = 0x19FAB0u;
label_19fab0:
    // 0x19fab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19fab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19fab4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x19fab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x19fab8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x19fab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19fabc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19FABCu;
    {
        const bool branch_taken_0x19fabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FABCu;
        // 0x19fac0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fabc) {
            ctx->pc = 0x19FA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fa80;
        }
    }
    ctx->pc = 0x19FAC4u;
label_19fac4:
    // 0x19fac4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x19fac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19fac8:
    // 0x19fac8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19fac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19facc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19faccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19fad0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19fad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19fad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19fad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19fad8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19fad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fadc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19fadcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19fae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fae4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAE4u;
        // 0x19fae8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FAECu;
    // 0x19faec: 0x0  nop
    ctx->pc = 0x19faecu;
    // NOP
    ctx->pc = 0x19faf0u;
}
