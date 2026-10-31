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

// Function: sub_00114C98
// Address: 0x114c98 - 0x115bb0
void sub_00114C98_0x114c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114C98_0x114c98");
#endif

    switch (ctx->pc) {
        case 0x114cd4u: goto label_114cd4;
        case 0x114ce0u: goto label_114ce0;
        case 0x114dd8u: goto label_114dd8;
        default: break;
    }

    ctx->pc = 0x114c98u;

    // 0x114c98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x114c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x114c9c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x114c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x114ca0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x114ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x114ca4: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x114ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x114ca8: 0x8e32489c  lw          $s2, 0x489C($s1)
    ctx->pc = 0x114ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x51489Cu));
    // 0x114cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x114cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x114cb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x114cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x114cb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x114cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cb8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x114cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x114cbc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x114cbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cc0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x114cc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cc4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x114cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x114cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114ccc: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x114CCCu;
    SET_GPR_U32(ctx, 31, 0x114CD4u);
    ctx->pc = 0x114CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CCCu;
    // 0x114cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x114CCCu, 0x114CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CD4u;
label_114cd4:
    // 0x114cd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x114cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cd8: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x114CD8u;
    SET_GPR_U32(ctx, 31, 0x114CE0u);
    ctx->pc = 0x114CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CD8u;
    // 0x114cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x114CD8u, 0x114CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CE0u;
label_114ce0:
    // 0x114ce0: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x114ce4: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x114ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x114ce8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x114ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x114cec: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x114cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114cf0: 0x8483033a  lh          $v1, 0x33A($a0)
    ctx->pc = 0x114cf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
    // 0x114cf4: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x114cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x114cf8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x114cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x114cfc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x114cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x114d00: 0x10880004  beq         $a0, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D00u;
    {
        const bool branch_taken_0x114d00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        ctx->pc = 0x114D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D00u;
        // 0x114d04: 0x26a50001  addiu       $a1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d00) {
            ctx->pc = 0x114D14u;
            goto label_114d14;
        }
    }
    ctx->pc = 0x114D08u;
    // 0x114d08: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x114d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x114d0c: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x114D0Cu;
    {
        const bool branch_taken_0x114d0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x114D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D0Cu;
        // 0x114d10: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d0c) {
            ctx->pc = 0x114D58u;
            goto label_114d58;
        }
    }
    ctx->pc = 0x114D14u;
label_114d14:
    // 0x114d14: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x114d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x114d18: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114D18u;
    {
        const bool branch_taken_0x114d18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D18u;
        // 0x114d1c: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d18) {
            ctx->pc = 0x114D28u;
            goto label_114d28;
        }
    }
    ctx->pc = 0x114D20u;
    // 0x114d20: 0x16620399  bne         $s3, $v0, . + 4 + (0x399 << 2)
    ctx->pc = 0x114D20u;
    {
        const bool branch_taken_0x114d20 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D20u;
        // 0x114d24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d20) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D28u;
label_114d28:
    // 0x114d28: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x114d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x114d2c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D2Cu;
    {
        const bool branch_taken_0x114d2c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D2Cu;
        // 0x114d30: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d2c) {
            ctx->pc = 0x114D40u;
            goto label_114d40;
        }
    }
    ctx->pc = 0x114D34u;
    // 0x114d34: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114d38: 0x10a20027  beq         $a1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x114D38u;
    {
        const bool branch_taken_0x114d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x114D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D38u;
        // 0x114d3c: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d38) {
            ctx->pc = 0x114DD8u;
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114D40u;
label_114d40:
    // 0x114d40: 0x16620391  bne         $s3, $v0, . + 4 + (0x391 << 2)
    ctx->pc = 0x114D40u;
    {
        const bool branch_taken_0x114d40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D40u;
        // 0x114d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d40) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D48u;
    // 0x114d48: 0x16930390  bne         $s4, $s3, . + 4 + (0x390 << 2)
    ctx->pc = 0x114D48u;
    {
        const bool branch_taken_0x114d48 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x114D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D48u;
        // 0x114d4c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d48) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x114D50u;
    // 0x114d50: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x114D50u;
    {
        const bool branch_taken_0x114d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D50u;
        // 0x114d54: 0x24a2fffd  addiu       $v0, $a1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d50) {
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x114D58u;
label_114d58:
    // 0x114d58: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x114D58u;
    {
        const bool branch_taken_0x114d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x114d58) {
            ctx->pc = 0x114D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114D58u;
            // 0x114d5c: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114D90u;
            goto label_114d90;
        }
    }
    ctx->pc = 0x114D60u;
    // 0x114d60: 0x12660004  beq         $s3, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x114D60u;
    {
        const bool branch_taken_0x114d60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x114D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D60u;
        // 0x114d64: 0x24020059  addiu       $v0, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d60) {
            ctx->pc = 0x114D74u;
            goto label_114d74;
        }
    }
    ctx->pc = 0x114D68u;
    // 0x114d68: 0x16640387  bne         $s3, $a0, . + 4 + (0x387 << 2)
    ctx->pc = 0x114D68u;
    {
        const bool branch_taken_0x114d68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 4));
        ctx->pc = 0x114D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D68u;
        // 0x114d6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d68) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D70u;
    // 0x114d70: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x114d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_114d74:
    // 0x114d74: 0x16820384  bne         $s4, $v0, . + 4 + (0x384 << 2)
    ctx->pc = 0x114D74u;
    {
        const bool branch_taken_0x114d74 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D74u;
        // 0x114d78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d74) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D7Cu;
    // 0x114d7c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x114d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x114d80: 0x10a30381  beq         $a1, $v1, . + 4 + (0x381 << 2)
    ctx->pc = 0x114D80u;
    {
        const bool branch_taken_0x114d80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x114D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D80u;
        // 0x114d84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d80) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D88u;
    // 0x114d88: 0x1000037f  b           . + 4 + (0x37F << 2)
    ctx->pc = 0x114D88u;
    {
        const bool branch_taken_0x114d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D88u;
        // 0x114d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d88) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114D90u;
label_114d90:
    // 0x114d90: 0x14820032  bne         $a0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x114D90u;
    {
        const bool branch_taken_0x114d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x114D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D90u;
        // 0x114d94: 0x2402005f  addiu       $v0, $zero, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d90) {
            ctx->pc = 0x114E5Cu;
            goto label_114e5c;
        }
    }
    ctx->pc = 0x114D98u;
    // 0x114d98: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x114d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x114d9c: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114D9Cu;
    {
        const bool branch_taken_0x114d9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114D9Cu;
        // 0x114da0: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114d9c) {
            ctx->pc = 0x114DB8u;
            goto label_114db8;
        }
    }
    ctx->pc = 0x114DA4u;
    // 0x114da4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x114da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x114da8: 0x16820109  bne         $s4, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x114DA8u;
    {
        const bool branch_taken_0x114da8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DA8u;
        // 0x114dac: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114da8) {
            ctx->pc = 0x1151D0u;
            goto label_1151d0;
        }
    }
    ctx->pc = 0x114DB0u;
    // 0x114db0: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x114DB0u;
    {
        const bool branch_taken_0x114db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DB0u;
        // 0x114db4: 0x26a2fffe  addiu       $v0, $s5, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114db0) {
            ctx->pc = 0x1151C0u;
            goto label_1151c0;
        }
    }
    ctx->pc = 0x114DB8u;
label_114db8:
    // 0x114db8: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114DB8u;
    {
        const bool branch_taken_0x114db8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DB8u;
        // 0x114dbc: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114db8) {
            ctx->pc = 0x114DE0u;
            goto label_114de0;
        }
    }
    ctx->pc = 0x114DC0u;
    // 0x114dc0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x114dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x114dc4: 0x1682011e  bne         $s4, $v0, . + 4 + (0x11E << 2)
    ctx->pc = 0x114DC4u;
    {
        const bool branch_taken_0x114dc4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DC4u;
        // 0x114dc8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dc4) {
            ctx->pc = 0x115240u;
            goto label_115240;
        }
    }
    ctx->pc = 0x114DCCu;
    // 0x114dcc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x114dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x114dd0: 0x14a2011b  bne         $a1, $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x114DD0u;
    {
        const bool branch_taken_0x114dd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD0u;
        // 0x114dd4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dd0) {
            ctx->pc = 0x115240u;
            goto label_115240;
        }
    }
    ctx->pc = 0x114DD8u;
label_114dd8:
    // 0x114dd8: 0x1000036b  b           . + 4 + (0x36B << 2)
    ctx->pc = 0x114DD8u;
    {
        const bool branch_taken_0x114dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DD8u;
        // 0x114ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dd8) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114DE0u;
label_114de0:
    // 0x114de0: 0x16620017  bne         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x114DE0u;
    {
        const bool branch_taken_0x114de0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DE0u;
        // 0x114de4: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114de0) {
            ctx->pc = 0x114E40u;
            goto label_114e40;
        }
    }
    ctx->pc = 0x114DE8u;
    // 0x114de8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x114de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x114dec: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114DECu;
    {
        const bool branch_taken_0x114dec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DECu;
        // 0x114df0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dec) {
            ctx->pc = 0x114E08u;
            goto label_114e08;
        }
    }
    ctx->pc = 0x114DF4u;
    // 0x114df4: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x114df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x114df8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x114df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x114dfc: 0x14400362  bnez        $v0, . + 4 + (0x362 << 2)
    ctx->pc = 0x114DFCu;
    {
        const bool branch_taken_0x114dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DFCu;
        // 0x114e00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114dfc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114E04u;
    // 0x114e04: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x114e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_114e08:
    // 0x114e08: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114E08u;
    {
        const bool branch_taken_0x114e08 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E08u;
        // 0x114e0c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e08) {
            ctx->pc = 0x114E24u;
            goto label_114e24;
        }
    }
    ctx->pc = 0x114E10u;
    // 0x114e10: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x114e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x114e14: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x114e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x114e18: 0x1440035b  bnez        $v0, . + 4 + (0x35B << 2)
    ctx->pc = 0x114E18u;
    {
        const bool branch_taken_0x114e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x114E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E18u;
        // 0x114e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e18) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114E20u;
    // 0x114e20: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x114e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_114e24:
    // 0x114e24: 0x16820140  bne         $s4, $v0, . + 4 + (0x140 << 2)
    ctx->pc = 0x114E24u;
    {
        const bool branch_taken_0x114e24 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E24u;
        // 0x114e28: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e24) {
            ctx->pc = 0x115328u;
            goto label_115328;
        }
    }
    ctx->pc = 0x114E2Cu;
    // 0x114e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x114e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x114e30: 0x10a20356  beq         $a1, $v0, . + 4 + (0x356 << 2)
    ctx->pc = 0x114E30u;
    {
        const bool branch_taken_0x114e30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x114E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E30u;
        // 0x114e34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e30) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x114E38u;
    // 0x114e38: 0x1000013b  b           . + 4 + (0x13B << 2)
    ctx->pc = 0x114E38u;
    {
        const bool branch_taken_0x114e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E38u;
        // 0x114e3c: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e38) {
            ctx->pc = 0x115328u;
            goto label_115328;
        }
    }
    ctx->pc = 0x114E40u;
label_114e40:
    // 0x114e40: 0x16620351  bne         $s3, $v0, . + 4 + (0x351 << 2)
    ctx->pc = 0x114E40u;
    {
        const bool branch_taken_0x114e40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E40u;
        // 0x114e44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e40) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114E48u;
    // 0x114e48: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x114e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x114e4c: 0x1682034e  bne         $s4, $v0, . + 4 + (0x34E << 2)
    ctx->pc = 0x114E4Cu;
    {
        const bool branch_taken_0x114e4c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E4Cu;
        // 0x114e50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e4c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114E54u;
    // 0x114e54: 0x10000348  b           . + 4 + (0x348 << 2)
    ctx->pc = 0x114E54u;
    {
        const bool branch_taken_0x114e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E54u;
        // 0x114e58: 0x2463fffd  addiu       $v1, $v1, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e54) {
            ctx->pc = 0x115B78u;
            goto label_115b78;
        }
    }
    ctx->pc = 0x114E5Cu;
label_114e5c:
    // 0x114e5c: 0x1482003e  bne         $a0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x114E5Cu;
    {
        const bool branch_taken_0x114e5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E5Cu;
        // 0x114e60: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e5c) {
            ctx->pc = 0x114F58u;
            goto label_114f58;
        }
    }
    ctx->pc = 0x114E64u;
    // 0x114e64: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x114e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x114e68: 0x16820021  bne         $s4, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x114E68u;
    {
        const bool branch_taken_0x114e68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E68u;
        // 0x114e6c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e68) {
            ctx->pc = 0x114EF0u;
            goto label_114ef0;
        }
    }
    ctx->pc = 0x114E70u;
    // 0x114e70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114e74: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114E74u;
    {
        const bool branch_taken_0x114e74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E74u;
        // 0x114e78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e74) {
            ctx->pc = 0x114E84u;
            goto label_114e84;
        }
    }
    ctx->pc = 0x114E7Cu;
    // 0x114e7c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x114E7Cu;
    {
        const bool branch_taken_0x114e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E7Cu;
        // 0x114e80: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e7c) {
            ctx->pc = 0x114EE0u;
            goto label_114ee0;
        }
    }
    ctx->pc = 0x114E84u;
label_114e84:
    // 0x114e84: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114E84u;
    {
        const bool branch_taken_0x114e84 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E84u;
        // 0x114e88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e84) {
            ctx->pc = 0x114EACu;
            goto label_114eac;
        }
    }
    ctx->pc = 0x114E8Cu;
    // 0x114e8c: 0x1266ffd2  beq         $s3, $a2, . + 4 + (-0x2E << 2)
    ctx->pc = 0x114E8Cu;
    {
        const bool branch_taken_0x114e8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x114E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E8Cu;
        // 0x114e90: 0x2402003d  addiu       $v0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e8c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114E94u;
    // 0x114e94: 0x1262ffd0  beq         $s3, $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x114E94u;
    {
        const bool branch_taken_0x114e94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E94u;
        // 0x114e98: 0x2402003e  addiu       $v0, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e94) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114E9Cu;
    // 0x114e9c: 0x1262ffce  beq         $s3, $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x114E9Cu;
    {
        const bool branch_taken_0x114e9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114E9Cu;
        // 0x114ea0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114e9c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114EA4u;
    // 0x114ea4: 0x10000327  b           . + 4 + (0x327 << 2)
    ctx->pc = 0x114EA4u;
    {
        const bool branch_taken_0x114ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x114ea4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x114EACu;
label_114eac:
    // 0x114eac: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x114EACu;
    {
        const bool branch_taken_0x114eac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EACu;
        // 0x114eb0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114eac) {
            ctx->pc = 0x114EC4u;
            goto label_114ec4;
        }
    }
    ctx->pc = 0x114EB4u;
    // 0x114eb4: 0x16660334  bne         $s3, $a2, . + 4 + (0x334 << 2)
    ctx->pc = 0x114EB4u;
    {
        const bool branch_taken_0x114eb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x114EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EB4u;
        // 0x114eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114eb4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114EBCu;
    // 0x114ebc: 0x10000332  b           . + 4 + (0x332 << 2)
    ctx->pc = 0x114EBCu;
    {
        const bool branch_taken_0x114ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EBCu;
        // 0x114ec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ebc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114EC4u;
label_114ec4:
    // 0x114ec4: 0x14a20330  bne         $a1, $v0, . + 4 + (0x330 << 2)
    ctx->pc = 0x114EC4u;
    {
        const bool branch_taken_0x114ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EC4u;
        // 0x114ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ec4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114ECCu;
    // 0x114ecc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x114eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x114ed0: 0x1262032d  beq         $s3, $v0, . + 4 + (0x32D << 2)
    ctx->pc = 0x114ED0u;
    {
        const bool branch_taken_0x114ed0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ED0u;
        // 0x114ed4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ed0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114ED8u;
    // 0x114ed8: 0x1266ffbf  beq         $s3, $a2, . + 4 + (-0x41 << 2)
    ctx->pc = 0x114ED8u;
    {
        const bool branch_taken_0x114ed8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 6));
        ctx->pc = 0x114EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114ED8u;
        // 0x114edc: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ed8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114EE0u;
label_114ee0:
    // 0x114ee0: 0x1262ffbd  beq         $s3, $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x114EE0u;
    {
        const bool branch_taken_0x114ee0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EE0u;
        // 0x114ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ee0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114EE8u;
    // 0x114ee8: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x114EE8u;
    {
        const bool branch_taken_0x114ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EE8u;
        // 0x114eec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ee8) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x114EF0u;
label_114ef0:
    // 0x114ef0: 0x16820011  bne         $s4, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x114EF0u;
    {
        const bool branch_taken_0x114ef0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EF0u;
        // 0x114ef4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ef0) {
            ctx->pc = 0x114F38u;
            goto label_114f38;
        }
    }
    ctx->pc = 0x114EF8u;
    // 0x114ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114efc: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114EFCu;
    {
        const bool branch_taken_0x114efc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114EFCu;
        // 0x114f00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114efc) {
            ctx->pc = 0x114F0Cu;
            goto label_114f0c;
        }
    }
    ctx->pc = 0x114F04u;
    // 0x114f04: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x114F04u;
    {
        const bool branch_taken_0x114f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F04u;
        // 0x114f08: 0x2662ffba  addiu       $v0, $s3, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f04) {
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x114F0Cu;
label_114f0c:
    // 0x114f0c: 0x14a2031e  bne         $a1, $v0, . + 4 + (0x31E << 2)
    ctx->pc = 0x114F0Cu;
    {
        const bool branch_taken_0x114f0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F0Cu;
        // 0x114f10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f0c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114F14u;
    // 0x114f14: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x114f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x114f18: 0x1262ffaf  beq         $s3, $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x114F18u;
    {
        const bool branch_taken_0x114f18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F18u;
        // 0x114f1c: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f18) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114F20u;
    // 0x114f20: 0x12620319  beq         $s3, $v0, . + 4 + (0x319 << 2)
    ctx->pc = 0x114F20u;
    {
        const bool branch_taken_0x114f20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F20u;
        // 0x114f24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f20) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114F28u;
    // 0x114f28: 0x1274ffab  beq         $s3, $s4, . + 4 + (-0x55 << 2)
    ctx->pc = 0x114F28u;
    {
        const bool branch_taken_0x114f28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        ctx->pc = 0x114F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F28u;
        // 0x114f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f28) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114F30u;
    // 0x114f30: 0x10000316  b           . + 4 + (0x316 << 2)
    ctx->pc = 0x114F30u;
    {
        const bool branch_taken_0x114f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F30u;
        // 0x114f34: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f30) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x114F38u;
label_114f38:
    // 0x114f38: 0x16820313  bne         $s4, $v0, . + 4 + (0x313 << 2)
    ctx->pc = 0x114F38u;
    {
        const bool branch_taken_0x114f38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F38u;
        // 0x114f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f38) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114F40u;
    // 0x114f40: 0x26a2fffd  addiu       $v0, $s5, -0x3
    ctx->pc = 0x114f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967293));
    // 0x114f44: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x114f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x114f48: 0x1040030e  beqz        $v0, . + 4 + (0x30E << 2)
    ctx->pc = 0x114F48u;
    {
        const bool branch_taken_0x114f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F48u;
        // 0x114f4c: 0x2663ffba  addiu       $v1, $s3, -0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967226));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f48) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x114F50u;
    // 0x114f50: 0x1000030a  b           . + 4 + (0x30A << 2)
    ctx->pc = 0x114F50u;
    {
        const bool branch_taken_0x114f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F50u;
        // 0x114f54: 0x2c630002  sltiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f50) {
            ctx->pc = 0x115B7Cu;
            goto label_115b7c;
        }
    }
    ctx->pc = 0x114F58u;
label_114f58:
    // 0x114f58: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x114F58u;
    {
        const bool branch_taken_0x114f58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F58u;
        // 0x114f5c: 0x24020053  addiu       $v0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f58) {
            ctx->pc = 0x114FD8u;
            goto label_114fd8;
        }
    }
    ctx->pc = 0x114F60u;
    // 0x114f60: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x114f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x114f64: 0x16820009  bne         $s4, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x114F64u;
    {
        const bool branch_taken_0x114f64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F64u;
        // 0x114f68: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f64) {
            ctx->pc = 0x114F8Cu;
            goto label_114f8c;
        }
    }
    ctx->pc = 0x114F6Cu;
    // 0x114f6c: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x114f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x114f70: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114F70u;
    {
        const bool branch_taken_0x114f70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F70u;
        // 0x114f74: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f70) {
            ctx->pc = 0x114F80u;
            goto label_114f80;
        }
    }
    ctx->pc = 0x114F78u;
    // 0x114f78: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114F78u;
    {
        const bool branch_taken_0x114f78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F78u;
        // 0x114f7c: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f78) {
            ctx->pc = 0x114F8Cu;
            goto label_114f8c;
        }
    }
    ctx->pc = 0x114F80u;
label_114f80:
    // 0x114f80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x114f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x114f84: 0x10a2ff94  beq         $a1, $v0, . + 4 + (-0x6C << 2)
    ctx->pc = 0x114F84u;
    {
        const bool branch_taken_0x114f84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x114F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F84u;
        // 0x114f88: 0x2402006e  addiu       $v0, $zero, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f84) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114F8Cu;
label_114f8c:
    // 0x114f8c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114F8Cu;
    {
        const bool branch_taken_0x114f8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F8Cu;
        // 0x114f90: 0x24020090  addiu       $v0, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f8c) {
            ctx->pc = 0x114FA0u;
            goto label_114fa0;
        }
    }
    ctx->pc = 0x114F94u;
    // 0x114f94: 0x126002fc  beqz        $s3, . + 4 + (0x2FC << 2)
    ctx->pc = 0x114F94u;
    {
        const bool branch_taken_0x114f94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x114F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114F94u;
        // 0x114f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114f94) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114F9Cu;
    // 0x114f9c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x114f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_114fa0:
    // 0x114fa0: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x114FA0u;
    {
        const bool branch_taken_0x114fa0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FA0u;
        // 0x114fa4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fa0) {
            ctx->pc = 0x114FC0u;
            goto label_114fc0;
        }
    }
    ctx->pc = 0x114FA8u;
    // 0x114fa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x114fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x114fac: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x114FACu;
    {
        const bool branch_taken_0x114fac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x114FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FACu;
        // 0x114fb0: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fac) {
            ctx->pc = 0x114FC0u;
            goto label_114fc0;
        }
    }
    ctx->pc = 0x114FB4u;
    // 0x114fb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x114fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x114fb8: 0x1262ff87  beq         $s3, $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x114FB8u;
    {
        const bool branch_taken_0x114fb8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FB8u;
        // 0x114fbc: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fb8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x114FC0u;
label_114fc0:
    // 0x114fc0: 0x168202f1  bne         $s4, $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x114FC0u;
    {
        const bool branch_taken_0x114fc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x114FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FC0u;
        // 0x114fc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fc0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x114FC8u;
    // 0x114fc8: 0x166002f0  bnez        $s3, . + 4 + (0x2F0 << 2)
    ctx->pc = 0x114FC8u;
    {
        const bool branch_taken_0x114fc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x114FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FC8u;
        // 0x114fcc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fc8) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x114FD0u;
    // 0x114fd0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x114FD0u;
    {
        const bool branch_taken_0x114fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FD0u;
        // 0x114fd4: 0x24a2fffc  addiu       $v0, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fd0) {
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x114FD8u;
label_114fd8:
    // 0x114fd8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x114FD8u;
    {
        const bool branch_taken_0x114fd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x114FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FD8u;
        // 0x114fdc: 0x2402008f  addiu       $v0, $zero, 0x8F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fd8) {
            ctx->pc = 0x114FF4u;
            goto label_114ff4;
        }
    }
    ctx->pc = 0x114FE0u;
    // 0x114fe0: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x114FE0u;
    {
        const bool branch_taken_0x114fe0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x114fe0) {
            ctx->pc = 0x114FF4u;
            goto label_114ff4;
        }
    }
    ctx->pc = 0x114FE8u;
    // 0x114fe8: 0x1488001e  bne         $a0, $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x114FE8u;
    {
        const bool branch_taken_0x114fe8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 8));
        ctx->pc = 0x114FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FE8u;
        // 0x114fec: 0x24020054  addiu       $v0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114fe8) {
            ctx->pc = 0x115064u;
            goto label_115064;
        }
    }
    ctx->pc = 0x114FF0u;
    // 0x114ff0: 0x2402008f  addiu       $v0, $zero, 0x8F
    ctx->pc = 0x114ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_114ff4:
    // 0x114ff4: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x114FF4u;
    {
        const bool branch_taken_0x114ff4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x114FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FF4u;
        // 0x114ff8: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ff4) {
            ctx->pc = 0x115004u;
            goto label_115004;
        }
    }
    ctx->pc = 0x114FFCu;
    // 0x114ffc: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x114FFCu;
    {
        const bool branch_taken_0x114ffc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114FFCu;
        // 0x115000: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114ffc) {
            ctx->pc = 0x115040u;
            goto label_115040;
        }
    }
    ctx->pc = 0x115004u;
label_115004:
    // 0x115004: 0x24020091  addiu       $v0, $zero, 0x91
    ctx->pc = 0x115004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x115008: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115008u;
    {
        const bool branch_taken_0x115008 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115008u;
        // 0x11500c: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115008) {
            ctx->pc = 0x11501Cu;
            goto label_11501c;
        }
    }
    ctx->pc = 0x115010u;
    // 0x115010: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115014: 0x10a2ff70  beq         $a1, $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x115014u;
    {
        const bool branch_taken_0x115014 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115014u;
        // 0x115018: 0x24020093  addiu       $v0, $zero, 0x93 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115014) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11501Cu;
label_11501c:
    // 0x11501c: 0x16620008  bne         $s3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11501Cu;
    {
        const bool branch_taken_0x11501c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11501Cu;
        // 0x115020: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11501c) {
            ctx->pc = 0x115040u;
            goto label_115040;
        }
    }
    ctx->pc = 0x115024u;
    // 0x115024: 0x16930006  bne         $s4, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x115024u;
    {
        const bool branch_taken_0x115024 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x115024) {
            ctx->pc = 0x115040u;
            goto label_115040;
        }
    }
    ctx->pc = 0x11502Cu;
    // 0x11502c: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x11502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x115030: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115030u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115034: 0x144002d4  bnez        $v0, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x115034u;
    {
        const bool branch_taken_0x115034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115034u;
        // 0x115038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115034) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11503Cu;
    // 0x11503c: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x11503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_115040:
    // 0x115040: 0x168202d1  bne         $s4, $v0, . + 4 + (0x2D1 << 2)
    ctx->pc = 0x115040u;
    {
        const bool branch_taken_0x115040 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115040u;
        // 0x115044: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115040) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115048u;
    // 0x115048: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x115048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x11504c: 0x12620095  beq         $s3, $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x11504Cu;
    {
        const bool branch_taken_0x11504c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11504Cu;
        // 0x115050: 0x2402007b  addiu       $v0, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11504c) {
            ctx->pc = 0x1152A4u;
            goto label_1152a4;
        }
    }
    ctx->pc = 0x115054u;
    // 0x115054: 0x166202cc  bne         $s3, $v0, . + 4 + (0x2CC << 2)
    ctx->pc = 0x115054u;
    {
        const bool branch_taken_0x115054 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115054u;
        // 0x115058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115054) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11505Cu;
    // 0x11505c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x11505Cu;
    {
        const bool branch_taken_0x11505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11505Cu;
        // 0x115060: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11505c) {
            ctx->pc = 0x1152A8u;
            goto label_1152a8;
        }
    }
    ctx->pc = 0x115064u;
label_115064:
    // 0x115064: 0x148200bd  bne         $a0, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x115064u;
    {
        const bool branch_taken_0x115064 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x115068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115064u;
        // 0x115068: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115064) {
            ctx->pc = 0x11535Cu;
            goto label_11535c;
        }
    }
    ctx->pc = 0x11506Cu;
    // 0x11506c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x11506cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x115070: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115070u;
    {
        const bool branch_taken_0x115070 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115070u;
        // 0x115074: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115070) {
            ctx->pc = 0x115098u;
            goto label_115098;
        }
    }
    ctx->pc = 0x115078u;
    // 0x115078: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x115078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x11507c: 0x1682003d  bne         $s4, $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11507Cu;
    {
        const bool branch_taken_0x11507c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11507Cu;
        // 0x115080: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11507c) {
            ctx->pc = 0x115174u;
            goto label_115174;
        }
    }
    ctx->pc = 0x115084u;
    // 0x115084: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115088: 0x10a2ff53  beq         $a1, $v0, . + 4 + (-0xAD << 2)
    ctx->pc = 0x115088u;
    {
        const bool branch_taken_0x115088 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115088u;
        // 0x11508c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115088) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115090u;
    // 0x115090: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x115090u;
    {
        const bool branch_taken_0x115090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115090) {
            ctx->pc = 0x115174u;
            goto label_115174;
        }
    }
    ctx->pc = 0x115098u;
label_115098:
    // 0x115098: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115098u;
    {
        const bool branch_taken_0x115098 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115098u;
        // 0x11509c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115098) {
            ctx->pc = 0x1150B4u;
            goto label_1150b4;
        }
    }
    ctx->pc = 0x1150A0u;
    // 0x1150a0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1150a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1150a4: 0x168202b8  bne         $s4, $v0, . + 4 + (0x2B8 << 2)
    ctx->pc = 0x1150A4u;
    {
        const bool branch_taken_0x1150a4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1150A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A4u;
        // 0x1150a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1150ACu;
    // 0x1150ac: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1150ACu;
    {
        const bool branch_taken_0x1150ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150ACu;
        // 0x1150b0: 0x26a2ffff  addiu       $v0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150ac) {
            ctx->pc = 0x115180u;
            goto label_115180;
        }
    }
    ctx->pc = 0x1150B4u;
label_1150b4:
    // 0x1150b4: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1150B4u;
    {
        const bool branch_taken_0x1150b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1150B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150B4u;
        // 0x1150b8: 0x2662ffd7  addiu       $v0, $s3, -0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150b4) {
            ctx->pc = 0x1150C4u;
            goto label_1150c4;
        }
    }
    ctx->pc = 0x1150BCu;
    // 0x1150bc: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1150BCu;
    {
        const bool branch_taken_0x1150bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150BCu;
        // 0x1150c0: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150bc) {
            ctx->pc = 0x115174u;
            goto label_115174;
        }
    }
    ctx->pc = 0x1150C4u;
label_1150c4:
    // 0x1150c4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1150c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1150c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1150C8u;
    {
        const bool branch_taken_0x1150c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150C8u;
        // 0x1150cc: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150c8) {
            ctx->pc = 0x1150E0u;
            goto label_1150e0;
        }
    }
    ctx->pc = 0x1150D0u;
    // 0x1150d0: 0x168202ad  bne         $s4, $v0, . + 4 + (0x2AD << 2)
    ctx->pc = 0x1150D0u;
    {
        const bool branch_taken_0x1150d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1150D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150D0u;
        // 0x1150d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150d0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1150D8u;
    // 0x1150d8: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1150D8u;
    {
        const bool branch_taken_0x1150d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150D8u;
        // 0x1150dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150d8) {
            ctx->pc = 0x1152A8u;
            goto label_1152a8;
        }
    }
    ctx->pc = 0x1150E0u;
label_1150e0:
    // 0x1150e0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1150e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1150e4: 0x1662002b  bne         $s3, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1150E4u;
    {
        const bool branch_taken_0x1150e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1150E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150E4u;
        // 0x1150e8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150e4) {
            ctx->pc = 0x115194u;
            goto label_115194;
        }
    }
    ctx->pc = 0x1150ECu;
    // 0x1150ec: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x1150ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
    // 0x1150f0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1150f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1150f4: 0x8444033a  lh          $a0, 0x33A($v0)
    ctx->pc = 0x1150f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
    // 0x1150f8: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1150F8u;
    {
        const bool branch_taken_0x1150f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1150FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150F8u;
        // 0x1150fc: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150f8) {
            ctx->pc = 0x115194u;
            goto label_115194;
        }
    }
    ctx->pc = 0x115100u;
    // 0x115100: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x115100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x115104: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115104u;
    {
        const bool branch_taken_0x115104 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115104u;
        // 0x115108: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115104) {
            ctx->pc = 0x115118u;
            goto label_115118;
        }
    }
    ctx->pc = 0x11510Cu;
    // 0x11510c: 0x10a4029e  beq         $a1, $a0, . + 4 + (0x29E << 2)
    ctx->pc = 0x11510Cu;
    {
        const bool branch_taken_0x11510c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x115110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11510Cu;
        // 0x115110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11510c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115114u;
    // 0x115114: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x115114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_115118:
    // 0x115118: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115118u;
    {
        const bool branch_taken_0x115118 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115118u;
        // 0x11511c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115118) {
            ctx->pc = 0x115134u;
            goto label_115134;
        }
    }
    ctx->pc = 0x115120u;
    // 0x115120: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x115120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x115124: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115128: 0x14400297  bnez        $v0, . + 4 + (0x297 << 2)
    ctx->pc = 0x115128u;
    {
        const bool branch_taken_0x115128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115128u;
        // 0x11512c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115128) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115130u;
    // 0x115130: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x115130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_115134:
    // 0x115134: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115134u;
    {
        const bool branch_taken_0x115134 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115134u;
        // 0x115138: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115134) {
            ctx->pc = 0x115148u;
            goto label_115148;
        }
    }
    ctx->pc = 0x11513Cu;
    // 0x11513c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115140: 0x10a2ff25  beq         $a1, $v0, . + 4 + (-0xDB << 2)
    ctx->pc = 0x115140u;
    {
        const bool branch_taken_0x115140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115140u;
        // 0x115144: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115140) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115148u;
label_115148:
    // 0x115148: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115148u;
    {
        const bool branch_taken_0x115148 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115148u;
        // 0x11514c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115148) {
            ctx->pc = 0x11515Cu;
            goto label_11515c;
        }
    }
    ctx->pc = 0x115150u;
    // 0x115150: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115154: 0x10a2ff20  beq         $a1, $v0, . + 4 + (-0xE0 << 2)
    ctx->pc = 0x115154u;
    {
        const bool branch_taken_0x115154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115154u;
        // 0x115158: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115154) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11515Cu;
label_11515c:
    // 0x11515c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11515Cu;
    {
        const bool branch_taken_0x11515c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11515Cu;
        // 0x115160: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11515c) {
            ctx->pc = 0x115174u;
            goto label_115174;
        }
    }
    ctx->pc = 0x115164u;
    // 0x115164: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115168: 0x10a20288  beq         $a1, $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x115168u;
    {
        const bool branch_taken_0x115168 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11516Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115168u;
        // 0x11516c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115168) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115170u;
    // 0x115170: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x115170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_115174:
    // 0x115174: 0x16820284  bne         $s4, $v0, . + 4 + (0x284 << 2)
    ctx->pc = 0x115174u;
    {
        const bool branch_taken_0x115174 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115174u;
        // 0x115178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115174) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11517Cu;
    // 0x11517c: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x11517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_115180:
    // 0x115180: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115184: 0x1040027f  beqz        $v0, . + 4 + (0x27F << 2)
    ctx->pc = 0x115184u;
    {
        const bool branch_taken_0x115184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115184u;
        // 0x115188: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115184) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x11518Cu;
    // 0x11518c: 0x1000027f  b           . + 4 + (0x27F << 2)
    ctx->pc = 0x11518Cu;
    {
        const bool branch_taken_0x11518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11518Cu;
        // 0x115190: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11518c) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115194u;
label_115194:
    // 0x115194: 0x1662001d  bne         $s3, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x115194u;
    {
        const bool branch_taken_0x115194 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115194u;
        // 0x115198: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115194) {
            ctx->pc = 0x11520Cu;
            goto label_11520c;
        }
    }
    ctx->pc = 0x11519Cu;
    // 0x11519c: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x11519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
    // 0x1151a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1151a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1151a4: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x1151a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
    // 0x1151a8: 0x14640018  bne         $v1, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1151A8u;
    {
        const bool branch_taken_0x1151a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1151ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151A8u;
        // 0x1151ac: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151a8) {
            ctx->pc = 0x11520Cu;
            goto label_11520c;
        }
    }
    ctx->pc = 0x1151B0u;
    // 0x1151b0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1151b4: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1151B4u;
    {
        const bool branch_taken_0x1151b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1151B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B4u;
        // 0x1151b8: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b4) {
            ctx->pc = 0x1151D0u;
            goto label_1151d0;
        }
    }
    ctx->pc = 0x1151BCu;
    // 0x1151bc: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x1151bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_1151c0:
    // 0x1151c0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1151c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1151c4: 0x14400270  bnez        $v0, . + 4 + (0x270 << 2)
    ctx->pc = 0x1151C4u;
    {
        const bool branch_taken_0x1151c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151C4u;
        // 0x1151c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151c4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1151CCu;
    // 0x1151cc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1151d0:
    // 0x1151d0: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151ECu;
            goto label_1151ec;
        }
    }
    ctx->pc = 0x1151D8u;
    // 0x1151d8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1151d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1151dc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1151e0: 0x14400269  bnez        $v0, . + 4 + (0x269 << 2)
    ctx->pc = 0x1151E0u;
    {
        const bool branch_taken_0x1151e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151E0u;
        // 0x1151e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151e0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1151E8u;
    // 0x1151e8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1151e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1151ec:
    // 0x1151ec: 0x16820025  bne         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1151ECu;
    {
        const bool branch_taken_0x1151ec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1151F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151ECu;
        // 0x1151f0: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151ec) {
            ctx->pc = 0x115284u;
            goto label_115284;
        }
    }
    ctx->pc = 0x1151F4u;
    // 0x1151f4: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x1151f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x1151f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1151f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1151fc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1151FCu;
    {
        const bool branch_taken_0x1151fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151FCu;
        // 0x115200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151fc) {
            ctx->pc = 0x115280u;
            goto label_115280;
        }
    }
    ctx->pc = 0x115204u;
    // 0x115204: 0x10000261  b           . + 4 + (0x261 << 2)
    ctx->pc = 0x115204u;
    {
        const bool branch_taken_0x115204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115204u;
        // 0x115208: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115204) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x11520Cu;
label_11520c:
    // 0x11520c: 0x1662002a  bne         $s3, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x11520Cu;
    {
        const bool branch_taken_0x11520c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11520Cu;
        // 0x115210: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11520c) {
            ctx->pc = 0x1152B8u;
            goto label_1152b8;
        }
    }
    ctx->pc = 0x115214u;
    // 0x115214: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x115214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
    // 0x115218: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11521c: 0x8444033a  lh          $a0, 0x33A($v0)
    ctx->pc = 0x11521cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
    // 0x115220: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x115220u;
    {
        const bool branch_taken_0x115220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x115224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115220u;
        // 0x115224: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115220) {
            ctx->pc = 0x1152B8u;
            goto label_1152b8;
        }
    }
    ctx->pc = 0x115228u;
    // 0x115228: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x115228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x11522c: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11522Cu;
    {
        const bool branch_taken_0x11522c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11522Cu;
        // 0x115230: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11522c) {
            ctx->pc = 0x115240u;
            goto label_115240;
        }
    }
    ctx->pc = 0x115234u;
    // 0x115234: 0x10a40254  beq         $a1, $a0, . + 4 + (0x254 << 2)
    ctx->pc = 0x115234u;
    {
        const bool branch_taken_0x115234 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115234) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11523Cu;
    // 0x11523c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_115240:
    // 0x115240: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115240u;
    {
        const bool branch_taken_0x115240 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115240u;
        // 0x115244: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115240) {
            ctx->pc = 0x115258u;
            goto label_115258;
        }
    }
    ctx->pc = 0x115248u;
    // 0x115248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11524c: 0x10a2024f  beq         $a1, $v0, . + 4 + (0x24F << 2)
    ctx->pc = 0x11524Cu;
    {
        const bool branch_taken_0x11524c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11524Cu;
        // 0x115250: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11524c) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115254u;
    // 0x115254: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x115254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_115258:
    // 0x115258: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115258u;
    {
        const bool branch_taken_0x115258 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11525Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115258u;
        // 0x11525c: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115258) {
            ctx->pc = 0x11526Cu;
            goto label_11526c;
        }
    }
    ctx->pc = 0x115260u;
    // 0x115260: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115264: 0x10a2fedc  beq         $a1, $v0, . + 4 + (-0x124 << 2)
    ctx->pc = 0x115264u;
    {
        const bool branch_taken_0x115264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115264u;
        // 0x115268: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115264) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11526Cu;
label_11526c:
    // 0x11526c: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11526Cu;
    {
        const bool branch_taken_0x11526c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11526Cu;
        // 0x115270: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11526c) {
            ctx->pc = 0x115284u;
            goto label_115284;
        }
    }
    ctx->pc = 0x115274u;
    // 0x115274: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115278: 0x10a20243  beq         $a1, $v0, . + 4 + (0x243 << 2)
    ctx->pc = 0x115278u;
    {
        const bool branch_taken_0x115278 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x11527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115278u;
        // 0x11527c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115278) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115280u;
label_115280:
    // 0x115280: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x115280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_115284:
    // 0x115284: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115284u;
    {
        const bool branch_taken_0x115284 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115284u;
        // 0x115288: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115284) {
            ctx->pc = 0x11529Cu;
            goto label_11529c;
        }
    }
    ctx->pc = 0x11528Cu;
    // 0x11528c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115290: 0x10a2023e  beq         $a1, $v0, . + 4 + (0x23E << 2)
    ctx->pc = 0x115290u;
    {
        const bool branch_taken_0x115290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115290u;
        // 0x115294: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115290) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115298u;
    // 0x115298: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x115298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_11529c:
    // 0x11529c: 0x1682023a  bne         $s4, $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x11529Cu;
    {
        const bool branch_taken_0x11529c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1152A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11529Cu;
        // 0x1152a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11529c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152A4u;
label_1152a4:
    // 0x1152a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1152a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1152a8:
    // 0x1152a8: 0x14a20237  bne         $a1, $v0, . + 4 + (0x237 << 2)
    ctx->pc = 0x1152A8u;
    {
        const bool branch_taken_0x1152a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1152ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152A8u;
        // 0x1152ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152a8) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152B0u;
    // 0x1152b0: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x1152B0u;
    {
        const bool branch_taken_0x1152b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1152B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B0u;
        // 0x1152b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152b0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152B8u;
label_1152b8:
    // 0x1152b8: 0x16620233  bne         $s3, $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x1152B8u;
    {
        const bool branch_taken_0x1152b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1152BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152B8u;
        // 0x1152bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152b8) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152C0u;
    // 0x1152c0: 0x8ce2489c  lw          $v0, 0x489C($a3)
    ctx->pc = 0x1152c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 18588)));
    // 0x1152c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1152c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1152c8: 0x8443033a  lh          $v1, 0x33A($v0)
    ctx->pc = 0x1152c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 826)));
    // 0x1152cc: 0x1464022e  bne         $v1, $a0, . + 4 + (0x22E << 2)
    ctx->pc = 0x1152CCu;
    {
        const bool branch_taken_0x1152cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1152D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152CCu;
        // 0x1152d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152cc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152D4u;
    // 0x1152d4: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1152d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1152d8: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1152D8u;
    {
        const bool branch_taken_0x1152d8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1152DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152D8u;
        // 0x1152dc: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152d8) {
            ctx->pc = 0x1152F4u;
            goto label_1152f4;
        }
    }
    ctx->pc = 0x1152E0u;
    // 0x1152e0: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x1152e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x1152e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1152e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1152e8: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x1152E8u;
    {
        const bool branch_taken_0x1152e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1152ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152E8u;
        // 0x1152ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152e8) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1152F0u;
    // 0x1152f0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_1152f4:
    // 0x1152f4: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1152F4u;
    {
        const bool branch_taken_0x1152f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x1152F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1152F4u;
        // 0x1152f8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1152f4) {
            ctx->pc = 0x11530Cu;
            goto label_11530c;
        }
    }
    ctx->pc = 0x1152FCu;
    // 0x1152fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1152fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115300: 0x10a20222  beq         $a1, $v0, . + 4 + (0x222 << 2)
    ctx->pc = 0x115300u;
    {
        const bool branch_taken_0x115300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115300u;
        // 0x115304: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115300) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115308u;
    // 0x115308: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x115308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_11530c:
    // 0x11530c: 0x16820006  bne         $s4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11530Cu;
    {
        const bool branch_taken_0x11530c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11530Cu;
        // 0x115310: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11530c) {
            ctx->pc = 0x115328u;
            goto label_115328;
        }
    }
    ctx->pc = 0x115314u;
    // 0x115314: 0x24a2fffe  addiu       $v0, $a1, -0x2
    ctx->pc = 0x115314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x115318: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11531c: 0x1440021a  bnez        $v0, . + 4 + (0x21A << 2)
    ctx->pc = 0x11531Cu;
    {
        const bool branch_taken_0x11531c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11531Cu;
        // 0x115320: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11531c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115324u;
    // 0x115324: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_115328:
    // 0x115328: 0x16820005  bne         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115328u;
    {
        const bool branch_taken_0x115328 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115328u;
        // 0x11532c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115328) {
            ctx->pc = 0x115340u;
            goto label_115340;
        }
    }
    ctx->pc = 0x115330u;
    // 0x115330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115334: 0x10a20215  beq         $a1, $v0, . + 4 + (0x215 << 2)
    ctx->pc = 0x115334u;
    {
        const bool branch_taken_0x115334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x115338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115334u;
        // 0x115338: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115334) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x11533Cu;
    // 0x11533c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x11533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_115340:
    // 0x115340: 0x16820211  bne         $s4, $v0, . + 4 + (0x211 << 2)
    ctx->pc = 0x115340u;
    {
        const bool branch_taken_0x115340 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x115344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115340u;
        // 0x115344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115340) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115348u;
    // 0x115348: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11534c: 0x54a2020e  bnel        $a1, $v0, . + 4 + (0x20E << 2)
    ctx->pc = 0x11534Cu;
    {
        const bool branch_taken_0x11534c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11534c) {
            ctx->pc = 0x115350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11534Cu;
            // 0x115350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115354u;
    // 0x115354: 0x1000020d  b           . + 4 + (0x20D << 2)
    ctx->pc = 0x115354u;
    {
        const bool branch_taken_0x115354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115354u;
        // 0x115358: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115354) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x11535Cu;
label_11535c:
    // 0x11535c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x11535Cu;
    {
        const bool branch_taken_0x11535c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x115360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11535Cu;
        // 0x115360: 0x2c820065  sltiu       $v0, $a0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11535c) {
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x115364u;
    // 0x115364: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x115368: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115368u;
    {
        const bool branch_taken_0x115368 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x11536Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115368u;
        // 0x11536c: 0x2c820065  sltiu       $v0, $a0, 0x65 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115368) {
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x115370u;
    // 0x115370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115374: 0x56620004  bnel        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115374u;
    {
        const bool branch_taken_0x115374 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x115374) {
            ctx->pc = 0x115378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115374u;
            // 0x115378: 0x2c820065  sltiu       $v0, $a0, 0x65 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x115388u;
            goto label_115388;
        }
    }
    ctx->pc = 0x11537Cu;
    // 0x11537c: 0x10730203  beq         $v1, $s3, . + 4 + (0x203 << 2)
    ctx->pc = 0x11537Cu;
    {
        const bool branch_taken_0x11537c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x115380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11537Cu;
        // 0x115380: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11537c) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115384u;
    // 0x115384: 0x2c820065  sltiu       $v0, $a0, 0x65
    ctx->pc = 0x115384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
label_115388:
    // 0x115388: 0x144001ff  bnez        $v0, . + 4 + (0x1FF << 2)
    ctx->pc = 0x115388u;
    {
        const bool branch_taken_0x115388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115388u;
        // 0x11538c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115388) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115390u;
    // 0x115390: 0x2683fff6  addiu       $v1, $s4, -0xA
    ctx->pc = 0x115390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
    // 0x115394: 0x2c62008c  sltiu       $v0, $v1, 0x8C
    ctx->pc = 0x115394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)140) ? 1 : 0);
    // 0x115398: 0x104001fa  beqz        $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x115398u;
    {
        const bool branch_taken_0x115398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115398u;
        // 0x11539c: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115398) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x1153A0u;
    // 0x1153a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1153a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1153a4: 0x24427e10  addiu       $v0, $v0, 0x7E10
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32272));
    // 0x1153a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1153ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1153b0: 0x800008  jr          $a0
    ctx->pc = 0x1153B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1153B8u: goto label_1153b8;
            case 0x1153CCu: goto label_1153cc;
            case 0x1153FCu: goto label_1153fc;
            case 0x115434u: goto label_115434;
            case 0x115490u: goto label_115490;
            case 0x11560Cu: goto label_11560c;
            case 0x1156BCu: goto label_1156bc;
            case 0x1156F0u: goto label_1156f0;
            case 0x115764u: goto label_115764;
            case 0x1157C0u: goto label_1157c0;
            case 0x115824u: goto label_115824;
            case 0x115914u: goto label_115914;
            case 0x115980u: goto label_115980;
            case 0x1159B4u: goto label_1159b4;
            case 0x115A98u: goto label_115a98;
            case 0x115B04u: goto label_115b04;
            case 0x115B54u: goto label_115b54;
            case 0x115B84u: goto label_115b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1153B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1153B8u;
label_1153b8:
    // 0x1153b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1153b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153bc: 0x14a201f2  bne         $a1, $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x1153BCu;
    {
        const bool branch_taken_0x1153bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1153C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153BCu;
        // 0x1153c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153bc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1153C4u;
    // 0x1153c4: 0x100001df  b           . + 4 + (0x1DF << 2)
    ctx->pc = 0x1153C4u;
    {
        const bool branch_taken_0x1153c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153C4u;
        // 0x1153c8: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153c4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1153CCu;
label_1153cc:
    // 0x1153cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1153ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1153d0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1153D0u;
    {
        const bool branch_taken_0x1153d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1153D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153D0u;
        // 0x1153d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153d0) {
            ctx->pc = 0x1153ECu;
            goto label_1153ec;
        }
    }
    ctx->pc = 0x1153D8u;
    // 0x1153d8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1153d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1153dc: 0x1262fe7e  beq         $s3, $v0, . + 4 + (-0x182 << 2)
    ctx->pc = 0x1153DCu;
    {
        const bool branch_taken_0x1153dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1153E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153DCu;
        // 0x1153e0: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153dc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1153E4u;
    // 0x1153e4: 0x1262fe7c  beq         $s3, $v0, . + 4 + (-0x184 << 2)
    ctx->pc = 0x1153E4u;
    {
        const bool branch_taken_0x1153e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1153E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153E4u;
        // 0x1153e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153e4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1153ECu;
label_1153ec:
    // 0x1153ec: 0x14a201e6  bne         $a1, $v0, . + 4 + (0x1E6 << 2)
    ctx->pc = 0x1153ECu;
    {
        const bool branch_taken_0x1153ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1153F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153ECu;
        // 0x1153f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153ec) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1153F4u;
    // 0x1153f4: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1153F4u;
        // 0x1153f8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1153FCu;
label_1153fc:
    // 0x1153fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1153fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115400: 0x14a201e1  bne         $a1, $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x115400u;
    {
        const bool branch_taken_0x115400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115400u;
        // 0x115404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115400) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115408u;
    // 0x115408: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x115408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x11540c: 0x1262fe72  beq         $s3, $v0, . + 4 + (-0x18E << 2)
    ctx->pc = 0x11540Cu;
    {
        const bool branch_taken_0x11540c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11540Cu;
        // 0x115410: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11540c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115414u;
    // 0x115414: 0x1262fe70  beq         $s3, $v0, . + 4 + (-0x190 << 2)
    ctx->pc = 0x115414u;
    {
        const bool branch_taken_0x115414 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115414u;
        // 0x115418: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115414) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11541Cu;
    // 0x11541c: 0x1262fe6e  beq         $s3, $v0, . + 4 + (-0x192 << 2)
    ctx->pc = 0x11541Cu;
    {
        const bool branch_taken_0x11541c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11541Cu;
        // 0x115420: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11541c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115424u;
    // 0x115424: 0x1262fe6c  beq         $s3, $v0, . + 4 + (-0x194 << 2)
    ctx->pc = 0x115424u;
    {
        const bool branch_taken_0x115424 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115424u;
        // 0x115428: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115424) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11542Cu;
    // 0x11542c: 0x100001c5  b           . + 4 + (0x1C5 << 2)
    ctx->pc = 0x11542Cu;
    {
        const bool branch_taken_0x11542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11542c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115434u;
label_115434:
    // 0x115434: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115438: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115438u;
    {
        const bool branch_taken_0x115438 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11543Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115438u;
        // 0x11543c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115438) {
            ctx->pc = 0x115454u;
            goto label_115454;
        }
    }
    ctx->pc = 0x115440u;
    // 0x115440: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x115440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x115444: 0x1262fe64  beq         $s3, $v0, . + 4 + (-0x19C << 2)
    ctx->pc = 0x115444u;
    {
        const bool branch_taken_0x115444 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115444u;
        // 0x115448: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115444) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11544Cu;
    // 0x11544c: 0x1262fe62  beq         $s3, $v0, . + 4 + (-0x19E << 2)
    ctx->pc = 0x11544Cu;
    {
        const bool branch_taken_0x11544c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11544Cu;
        // 0x115450: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11544c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115454u;
label_115454:
    // 0x115454: 0x14a201cc  bne         $a1, $v0, . + 4 + (0x1CC << 2)
    ctx->pc = 0x115454u;
    {
        const bool branch_taken_0x115454 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115454u;
        // 0x115458: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115454) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11545Cu;
    // 0x11545c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x11545cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x115460: 0x1262fe5d  beq         $s3, $v0, . + 4 + (-0x1A3 << 2)
    ctx->pc = 0x115460u;
    {
        const bool branch_taken_0x115460 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115460u;
        // 0x115464: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115460) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115468u;
    // 0x115468: 0x1262fe5b  beq         $s3, $v0, . + 4 + (-0x1A5 << 2)
    ctx->pc = 0x115468u;
    {
        const bool branch_taken_0x115468 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11546Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115468u;
        // 0x11546c: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115468) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115470u;
    // 0x115470: 0x1262fe59  beq         $s3, $v0, . + 4 + (-0x1A7 << 2)
    ctx->pc = 0x115470u;
    {
        const bool branch_taken_0x115470 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115470u;
        // 0x115474: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115470) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115478u;
    // 0x115478: 0x1262fe57  beq         $s3, $v0, . + 4 + (-0x1A9 << 2)
    ctx->pc = 0x115478u;
    {
        const bool branch_taken_0x115478 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115478u;
        // 0x11547c: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115478) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115480u;
    // 0x115480: 0x1262fe55  beq         $s3, $v0, . + 4 + (-0x1AB << 2)
    ctx->pc = 0x115480u;
    {
        const bool branch_taken_0x115480 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115480u;
        // 0x115484: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115480) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115488u;
    // 0x115488: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x115488u;
    {
        const bool branch_taken_0x115488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115488) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115490u;
label_115490:
    // 0x115490: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x115490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x115494: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x115494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x115498: 0x104001ba  beqz        $v0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x115498u;
    {
        const bool branch_taken_0x115498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115498u;
        // 0x11549c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115498) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x1154A0u;
    // 0x1154a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1154a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1154a4: 0x24428040  addiu       $v0, $v0, -0x7FC0
    ctx->pc = 0x1154a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934592));
    // 0x1154a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1154a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1154ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1154acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1154b0: 0x800008  jr          $a0
    ctx->pc = 0x1154B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1154B8u: goto label_1154b8;
            case 0x1154C0u: goto label_1154c0;
            case 0x1154D4u: goto label_1154d4;
            case 0x115510u: goto label_115510;
            case 0x11553Cu: goto label_11553c;
            case 0x115590u: goto label_115590;
            case 0x1155BCu: goto label_1155bc;
            case 0x1155F8u: goto label_1155f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1154B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1154B8u;
label_1154b8:
    // 0x1154b8: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1154B8u;
    {
        const bool branch_taken_0x1154b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1154BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154B8u;
        // 0x1154bc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154b8) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1154C0u;
label_1154c0:
    // 0x1154c0: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x1154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1154c4: 0x1262fe44  beq         $s3, $v0, . + 4 + (-0x1BC << 2)
    ctx->pc = 0x1154C4u;
    {
        const bool branch_taken_0x1154c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154C4u;
        // 0x1154c8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154c4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1154CCu;
    // 0x1154cc: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x1154CCu;
    {
        const bool branch_taken_0x1154cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1154cc) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1154D4u;
label_1154d4:
    // 0x1154d4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1154d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1154d8: 0x1262fe3f  beq         $s3, $v0, . + 4 + (-0x1C1 << 2)
    ctx->pc = 0x1154D8u;
    {
        const bool branch_taken_0x1154d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154D8u;
        // 0x1154dc: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154d8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1154E0u;
    // 0x1154e0: 0x1262fe3d  beq         $s3, $v0, . + 4 + (-0x1C3 << 2)
    ctx->pc = 0x1154E0u;
    {
        const bool branch_taken_0x1154e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154E0u;
        // 0x1154e4: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154e0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1154E8u;
    // 0x1154e8: 0x1262fe3b  beq         $s3, $v0, . + 4 + (-0x1C5 << 2)
    ctx->pc = 0x1154E8u;
    {
        const bool branch_taken_0x1154e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154E8u;
        // 0x1154ec: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154e8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1154F0u;
    // 0x1154f0: 0x1262fe39  beq         $s3, $v0, . + 4 + (-0x1C7 << 2)
    ctx->pc = 0x1154F0u;
    {
        const bool branch_taken_0x1154f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154F0u;
        // 0x1154f4: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154f0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1154F8u;
    // 0x1154f8: 0x1262fe37  beq         $s3, $v0, . + 4 + (-0x1C9 << 2)
    ctx->pc = 0x1154F8u;
    {
        const bool branch_taken_0x1154f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1154FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1154F8u;
        // 0x1154fc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1154f8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115500u;
    // 0x115500: 0x1262fe35  beq         $s3, $v0, . + 4 + (-0x1CB << 2)
    ctx->pc = 0x115500u;
    {
        const bool branch_taken_0x115500 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115500u;
        // 0x115504: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115500) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115508u;
    // 0x115508: 0x1000018e  b           . + 4 + (0x18E << 2)
    ctx->pc = 0x115508u;
    {
        const bool branch_taken_0x115508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115508) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115510u;
label_115510:
    // 0x115510: 0x2662ffd4  addiu       $v0, $s3, -0x2C
    ctx->pc = 0x115510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967252));
    // 0x115514: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x115514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x115518: 0x1440019b  bnez        $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x115518u;
    {
        const bool branch_taken_0x115518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115518u;
        // 0x11551c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115518) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115520u;
    // 0x115520: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x115520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x115524: 0x1262fe2c  beq         $s3, $v0, . + 4 + (-0x1D4 << 2)
    ctx->pc = 0x115524u;
    {
        const bool branch_taken_0x115524 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115524u;
        // 0x115528: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115524) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11552Cu;
    // 0x11552c: 0x1262fe2a  beq         $s3, $v0, . + 4 + (-0x1D6 << 2)
    ctx->pc = 0x11552Cu;
    {
        const bool branch_taken_0x11552c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11552Cu;
        // 0x115530: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11552c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115534u;
    // 0x115534: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x115534u;
    {
        const bool branch_taken_0x115534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115534) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x11553Cu;
label_11553c:
    // 0x11553c: 0x2662ffe3  addiu       $v0, $s3, -0x1D
    ctx->pc = 0x11553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967267));
    // 0x115540: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115544: 0x14400190  bnez        $v0, . + 4 + (0x190 << 2)
    ctx->pc = 0x115544u;
    {
        const bool branch_taken_0x115544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115544u;
        // 0x115548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115544) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11554Cu;
    // 0x11554c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x11554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x115550: 0x1262fe21  beq         $s3, $v0, . + 4 + (-0x1DF << 2)
    ctx->pc = 0x115550u;
    {
        const bool branch_taken_0x115550 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115550u;
        // 0x115554: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115550) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115558u;
    // 0x115558: 0x1262fe1f  beq         $s3, $v0, . + 4 + (-0x1E1 << 2)
    ctx->pc = 0x115558u;
    {
        const bool branch_taken_0x115558 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115558u;
        // 0x11555c: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115558) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115560u;
    // 0x115560: 0x1262fe1d  beq         $s3, $v0, . + 4 + (-0x1E3 << 2)
    ctx->pc = 0x115560u;
    {
        const bool branch_taken_0x115560 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115560u;
        // 0x115564: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115560) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115568u;
    // 0x115568: 0x1262fe1b  beq         $s3, $v0, . + 4 + (-0x1E5 << 2)
    ctx->pc = 0x115568u;
    {
        const bool branch_taken_0x115568 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11556Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115568u;
        // 0x11556c: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115568) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115570u;
    // 0x115570: 0x1262fe19  beq         $s3, $v0, . + 4 + (-0x1E7 << 2)
    ctx->pc = 0x115570u;
    {
        const bool branch_taken_0x115570 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115570u;
        // 0x115574: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115570) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115578u;
    // 0x115578: 0x1262fe17  beq         $s3, $v0, . + 4 + (-0x1E9 << 2)
    ctx->pc = 0x115578u;
    {
        const bool branch_taken_0x115578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115578u;
        // 0x11557c: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115578) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115580u;
    // 0x115580: 0x1262fe15  beq         $s3, $v0, . + 4 + (-0x1EB << 2)
    ctx->pc = 0x115580u;
    {
        const bool branch_taken_0x115580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115580u;
        // 0x115584: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115580) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115588u;
    // 0x115588: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x115588u;
    {
        const bool branch_taken_0x115588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115588) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115590u;
label_115590:
    // 0x115590: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x115590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x115594: 0x1262fe10  beq         $s3, $v0, . + 4 + (-0x1F0 << 2)
    ctx->pc = 0x115594u;
    {
        const bool branch_taken_0x115594 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115594u;
        // 0x115598: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115594) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11559Cu;
    // 0x11559c: 0x1262fe0e  beq         $s3, $v0, . + 4 + (-0x1F2 << 2)
    ctx->pc = 0x11559Cu;
    {
        const bool branch_taken_0x11559c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11559Cu;
        // 0x1155a0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11559c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155A4u;
    // 0x1155a4: 0x1262fe0c  beq         $s3, $v0, . + 4 + (-0x1F4 << 2)
    ctx->pc = 0x1155A4u;
    {
        const bool branch_taken_0x1155a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155A4u;
        // 0x1155a8: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155a4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155ACu;
    // 0x1155ac: 0x1262fe0a  beq         $s3, $v0, . + 4 + (-0x1F6 << 2)
    ctx->pc = 0x1155ACu;
    {
        const bool branch_taken_0x1155ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155ACu;
        // 0x1155b0: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155ac) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155B4u;
    // 0x1155b4: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x1155B4u;
    {
        const bool branch_taken_0x1155b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1155b4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1155BCu;
label_1155bc:
    // 0x1155bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1155bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1155c0: 0x1262fe05  beq         $s3, $v0, . + 4 + (-0x1FB << 2)
    ctx->pc = 0x1155C0u;
    {
        const bool branch_taken_0x1155c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C0u;
        // 0x1155c4: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155c0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155C8u;
    // 0x1155c8: 0x1262fe03  beq         $s3, $v0, . + 4 + (-0x1FD << 2)
    ctx->pc = 0x1155C8u;
    {
        const bool branch_taken_0x1155c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155C8u;
        // 0x1155cc: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155c8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155D0u;
    // 0x1155d0: 0x1262fe01  beq         $s3, $v0, . + 4 + (-0x1FF << 2)
    ctx->pc = 0x1155D0u;
    {
        const bool branch_taken_0x1155d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155D0u;
        // 0x1155d4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155d0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155D8u;
    // 0x1155d8: 0x1262fdff  beq         $s3, $v0, . + 4 + (-0x201 << 2)
    ctx->pc = 0x1155D8u;
    {
        const bool branch_taken_0x1155d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155D8u;
        // 0x1155dc: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155d8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155E0u;
    // 0x1155e0: 0x1262fdfd  beq         $s3, $v0, . + 4 + (-0x203 << 2)
    ctx->pc = 0x1155E0u;
    {
        const bool branch_taken_0x1155e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155E0u;
        // 0x1155e4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155e0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155E8u;
    // 0x1155e8: 0x1262fdfb  beq         $s3, $v0, . + 4 + (-0x205 << 2)
    ctx->pc = 0x1155E8u;
    {
        const bool branch_taken_0x1155e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1155ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155E8u;
        // 0x1155ec: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155e8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1155F0u;
    // 0x1155f0: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x1155F0u;
    {
        const bool branch_taken_0x1155f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1155f0) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1155F8u;
label_1155f8:
    // 0x1155f8: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x1155f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1155fc: 0x1262fdf6  beq         $s3, $v0, . + 4 + (-0x20A << 2)
    ctx->pc = 0x1155FCu;
    {
        const bool branch_taken_0x1155fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155FCu;
        // 0x115600: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155fc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115604u;
    // 0x115604: 0x1000014f  b           . + 4 + (0x14F << 2)
    ctx->pc = 0x115604u;
    {
        const bool branch_taken_0x115604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115604) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x11560Cu;
label_11560c:
    // 0x11560c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x11560cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x115610: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x115610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x115614: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x115614u;
    {
        const bool branch_taken_0x115614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115614u;
        // 0x115618: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115614) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x11561Cu;
    // 0x11561c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11561cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115620: 0x24428060  addiu       $v0, $v0, -0x7FA0
    ctx->pc = 0x115620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934624));
    // 0x115624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x115628: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x115628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11562c: 0x800008  jr          $a0
    ctx->pc = 0x11562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115634u: goto label_115634;
            case 0x11563Cu: goto label_11563c;
            case 0x115660u: goto label_115660;
            case 0x115688u: goto label_115688;
            case 0x115690u: goto label_115690;
            case 0x1156B4u: goto label_1156b4;
            case 0x115B84u: goto label_115b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11562Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115634u;
label_115634:
    // 0x115634: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x115634u;
    {
        const bool branch_taken_0x115634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115634u;
        // 0x115638: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115634) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x11563Cu;
label_11563c:
    // 0x11563c: 0x2662ffda  addiu       $v0, $s3, -0x26
    ctx->pc = 0x11563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967258));
    // 0x115640: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x115640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x115644: 0x14400150  bnez        $v0, . + 4 + (0x150 << 2)
    ctx->pc = 0x115644u;
    {
        const bool branch_taken_0x115644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115644u;
        // 0x115648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115644) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11564Cu;
    // 0x11564c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x115650: 0x1262fde1  beq         $s3, $v0, . + 4 + (-0x21F << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115650u;
        // 0x115654: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115650) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115658u;
    // 0x115658: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x115658u;
    {
        const bool branch_taken_0x115658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115658) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115660u;
label_115660:
    // 0x115660: 0x2663ffda  addiu       $v1, $s3, -0x26
    ctx->pc = 0x115660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967258));
    // 0x115664: 0x2c620041  sltiu       $v0, $v1, 0x41
    ctx->pc = 0x115664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x115668: 0x10400146  beqz        $v0, . + 4 + (0x146 << 2)
    ctx->pc = 0x115668u;
    {
        const bool branch_taken_0x115668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115668u;
        // 0x11566c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115668) {
            ctx->pc = 0x115B84u;
            goto label_115b84;
        }
    }
    ctx->pc = 0x115670u;
    // 0x115670: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x115670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115674: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x115674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x115678: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x115678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11567c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11567cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115680: 0x800008  jr          $a0
    ctx->pc = 0x115680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x114DD8u: goto label_114dd8;
            case 0x115B84u: goto label_115b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115680u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x115688u;
label_115688:
    // 0x115688: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x115688u;
    {
        const bool branch_taken_0x115688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115688u;
        // 0x11568c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115688) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115690u;
label_115690:
    // 0x115690: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x115690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x115694: 0x1262fdd0  beq         $s3, $v0, . + 4 + (-0x230 << 2)
    ctx->pc = 0x115694u;
    {
        const bool branch_taken_0x115694 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115694u;
        // 0x115698: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115694) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11569Cu;
    // 0x11569c: 0x1262fdce  beq         $s3, $v0, . + 4 + (-0x232 << 2)
    ctx->pc = 0x11569Cu;
    {
        const bool branch_taken_0x11569c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1156A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11569Cu;
        // 0x1156a0: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11569c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1156A4u;
    // 0x1156a4: 0x1262fdcc  beq         $s3, $v0, . + 4 + (-0x234 << 2)
    ctx->pc = 0x1156A4u;
    {
        const bool branch_taken_0x1156a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1156A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156A4u;
        // 0x1156a8: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156a4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1156ACu;
    // 0x1156ac: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x1156ACu;
    {
        const bool branch_taken_0x1156ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1156ac) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1156B4u;
label_1156b4:
    // 0x1156b4: 0x10000123  b           . + 4 + (0x123 << 2)
    ctx->pc = 0x1156B4u;
    {
        const bool branch_taken_0x1156b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1156B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156B4u;
        // 0x1156b8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156b4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1156BCu;
label_1156bc:
    // 0x1156bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1156bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1156c0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1156C0u;
    {
        const bool branch_taken_0x1156c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1156C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156C0u;
        // 0x1156c4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156c0) {
            ctx->pc = 0x1156D4u;
            goto label_1156d4;
        }
    }
    ctx->pc = 0x1156C8u;
    // 0x1156c8: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1156c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1156cc: 0x1262fdc2  beq         $s3, $v0, . + 4 + (-0x23E << 2)
    ctx->pc = 0x1156CCu;
    {
        const bool branch_taken_0x1156cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1156D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156CCu;
        // 0x1156d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156cc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1156D4u;
label_1156d4:
    // 0x1156d4: 0x14a2012c  bne         $a1, $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x1156D4u;
    {
        const bool branch_taken_0x1156d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1156D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156D4u;
        // 0x1156d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156d4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1156DCu;
    // 0x1156dc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1156dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1156e0: 0x1262fdbd  beq         $s3, $v0, . + 4 + (-0x243 << 2)
    ctx->pc = 0x1156E0u;
    {
        const bool branch_taken_0x1156e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1156E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156E0u;
        // 0x1156e4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156e0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1156E8u;
    // 0x1156e8: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x1156E8u;
    {
        const bool branch_taken_0x1156e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1156e8) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1156F0u;
label_1156f0:
    // 0x1156f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1156f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1156f4: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1156F4u;
    {
        const bool branch_taken_0x1156f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1156F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1156F4u;
        // 0x1156f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1156f4) {
            ctx->pc = 0x115718u;
            goto label_115718;
        }
    }
    ctx->pc = 0x1156FCu;
    // 0x1156fc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1156fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x115700: 0x1262fdb5  beq         $s3, $v0, . + 4 + (-0x24B << 2)
    ctx->pc = 0x115700u;
    {
        const bool branch_taken_0x115700 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115700u;
        // 0x115704: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115700) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115708u;
    // 0x115708: 0x1262fdb3  beq         $s3, $v0, . + 4 + (-0x24D << 2)
    ctx->pc = 0x115708u;
    {
        const bool branch_taken_0x115708 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115708u;
        // 0x11570c: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115708) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115710u;
    // 0x115710: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x115710u;
    {
        const bool branch_taken_0x115710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115710) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115718u;
label_115718:
    // 0x115718: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x115718u;
    {
        const bool branch_taken_0x115718 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115718u;
        // 0x11571c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115718) {
            ctx->pc = 0x11574Cu;
            goto label_11574c;
        }
    }
    ctx->pc = 0x115720u;
    // 0x115720: 0x2662ffd4  addiu       $v0, $s3, -0x2C
    ctx->pc = 0x115720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967252));
    // 0x115724: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x115724u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x115728: 0x14400117  bnez        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x115728u;
    {
        const bool branch_taken_0x115728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115728u;
        // 0x11572c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115728) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115730u;
    // 0x115730: 0x2402005a  addiu       $v0, $zero, 0x5A
    ctx->pc = 0x115730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x115734: 0x1262fda8  beq         $s3, $v0, . + 4 + (-0x258 << 2)
    ctx->pc = 0x115734u;
    {
        const bool branch_taken_0x115734 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115734u;
        // 0x115738: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115734) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11573Cu;
    // 0x11573c: 0x1262fda6  beq         $s3, $v0, . + 4 + (-0x25A << 2)
    ctx->pc = 0x11573Cu;
    {
        const bool branch_taken_0x11573c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11573Cu;
        // 0x115740: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11573c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115744u;
    // 0x115744: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x115744u;
    {
        const bool branch_taken_0x115744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115744) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x11574Cu;
label_11574c:
    // 0x11574c: 0x14a2010e  bne         $a1, $v0, . + 4 + (0x10E << 2)
    ctx->pc = 0x11574Cu;
    {
        const bool branch_taken_0x11574c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11574Cu;
        // 0x115750: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11574c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115754u;
    // 0x115754: 0x1663010d  bne         $s3, $v1, . + 4 + (0x10D << 2)
    ctx->pc = 0x115754u;
    {
        const bool branch_taken_0x115754 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x115758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115754u;
        // 0x115758: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115754) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x11575Cu;
    // 0x11575c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x11575Cu;
    {
        const bool branch_taken_0x11575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11575Cu;
        // 0x115760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11575c) {
            ctx->pc = 0x115B8Cu;
            goto label_115b8c;
        }
    }
    ctx->pc = 0x115764u;
label_115764:
    // 0x115764: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115768: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115768u;
    {
        const bool branch_taken_0x115768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115768u;
        // 0x11576c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115768) {
            ctx->pc = 0x11577Cu;
            goto label_11577c;
        }
    }
    ctx->pc = 0x115770u;
    // 0x115770: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x115770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x115774: 0x1262fd98  beq         $s3, $v0, . + 4 + (-0x268 << 2)
    ctx->pc = 0x115774u;
    {
        const bool branch_taken_0x115774 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115774u;
        // 0x115778: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115774) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11577Cu;
label_11577c:
    // 0x11577c: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11577Cu;
    {
        const bool branch_taken_0x11577c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11577Cu;
        // 0x115780: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11577c) {
            ctx->pc = 0x1157B0u;
            goto label_1157b0;
        }
    }
    ctx->pc = 0x115784u;
    // 0x115784: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x115784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x115788: 0x1262fd93  beq         $s3, $v0, . + 4 + (-0x26D << 2)
    ctx->pc = 0x115788u;
    {
        const bool branch_taken_0x115788 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115788u;
        // 0x11578c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115788) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115790u;
    // 0x115790: 0x1262fd91  beq         $s3, $v0, . + 4 + (-0x26F << 2)
    ctx->pc = 0x115790u;
    {
        const bool branch_taken_0x115790 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115790u;
        // 0x115794: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115790) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115798u;
    // 0x115798: 0x1262fd8f  beq         $s3, $v0, . + 4 + (-0x271 << 2)
    ctx->pc = 0x115798u;
    {
        const bool branch_taken_0x115798 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115798u;
        // 0x11579c: 0x24020057  addiu       $v0, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115798) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1157A0u;
    // 0x1157a0: 0x1262fd8d  beq         $s3, $v0, . + 4 + (-0x273 << 2)
    ctx->pc = 0x1157A0u;
    {
        const bool branch_taken_0x1157a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1157A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157A0u;
        // 0x1157a4: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157a0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1157A8u;
    // 0x1157a8: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x1157A8u;
    {
        const bool branch_taken_0x1157a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1157a8) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1157B0u;
label_1157b0:
    // 0x1157b0: 0x14a200f5  bne         $a1, $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x1157B0u;
    {
        const bool branch_taken_0x1157b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B0u;
        // 0x1157b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157b0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1157B8u;
    // 0x1157b8: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x1157B8u;
    {
        const bool branch_taken_0x1157b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1157BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157B8u;
        // 0x1157bc: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157b8) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1157C0u;
label_1157c0:
    // 0x1157c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1157c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1157c4: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1157C4u;
    {
        const bool branch_taken_0x1157c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1157C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157C4u;
        // 0x1157c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157c4) {
            ctx->pc = 0x1157F0u;
            goto label_1157f0;
        }
    }
    ctx->pc = 0x1157CCu;
    // 0x1157cc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1157ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1157d0: 0x1262fd81  beq         $s3, $v0, . + 4 + (-0x27F << 2)
    ctx->pc = 0x1157D0u;
    {
        const bool branch_taken_0x1157d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157D0u;
        // 0x1157d4: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157d0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1157D8u;
    // 0x1157d8: 0x1262fd7f  beq         $s3, $v0, . + 4 + (-0x281 << 2)
    ctx->pc = 0x1157D8u;
    {
        const bool branch_taken_0x1157d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1157DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157D8u;
        // 0x1157dc: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157d8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1157E0u;
    // 0x1157e0: 0x1262fd7d  beq         $s3, $v0, . + 4 + (-0x283 << 2)
    ctx->pc = 0x1157E0u;
    {
        const bool branch_taken_0x1157e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1157E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157E0u;
        // 0x1157e4: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157e0) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1157E8u;
    // 0x1157e8: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1157E8u;
    {
        const bool branch_taken_0x1157e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1157e8) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1157F0u;
label_1157f0:
    // 0x1157f0: 0x14a200e5  bne         $a1, $v0, . + 4 + (0xE5 << 2)
    ctx->pc = 0x1157F0u;
    {
        const bool branch_taken_0x1157f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1157F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1157F0u;
        // 0x1157f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1157f0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1157F8u;
    // 0x1157f8: 0x2662ffe4  addiu       $v0, $s3, -0x1C
    ctx->pc = 0x1157f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1157fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1157fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115800: 0x144000e1  bnez        $v0, . + 4 + (0xE1 << 2)
    ctx->pc = 0x115800u;
    {
        const bool branch_taken_0x115800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115800u;
        // 0x115804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115800) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115808u;
    // 0x115808: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x11580c: 0x1262fd72  beq         $s3, $v0, . + 4 + (-0x28E << 2)
    ctx->pc = 0x11580Cu;
    {
        const bool branch_taken_0x11580c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11580Cu;
        // 0x115810: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11580c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115814u;
    // 0x115814: 0x1262fd70  beq         $s3, $v0, . + 4 + (-0x290 << 2)
    ctx->pc = 0x115814u;
    {
        const bool branch_taken_0x115814 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115814u;
        // 0x115818: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115814) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11581Cu;
    // 0x11581c: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x11581Cu;
    {
        const bool branch_taken_0x11581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11581c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115824u;
label_115824:
    // 0x115824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115828: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x115828u;
    {
        const bool branch_taken_0x115828 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115828u;
        // 0x11582c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115828) {
            ctx->pc = 0x115874u;
            goto label_115874;
        }
    }
    ctx->pc = 0x115830u;
    // 0x115830: 0x2662ffd4  addiu       $v0, $s3, -0x2C
    ctx->pc = 0x115830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967252));
    // 0x115834: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x115834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x115838: 0x144000d3  bnez        $v0, . + 4 + (0xD3 << 2)
    ctx->pc = 0x115838u;
    {
        const bool branch_taken_0x115838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115838u;
        // 0x11583c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115838) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115840u;
    // 0x115840: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x115840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x115844: 0x1262fd64  beq         $s3, $v0, . + 4 + (-0x29C << 2)
    ctx->pc = 0x115844u;
    {
        const bool branch_taken_0x115844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115844u;
        // 0x115848: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115844) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11584Cu;
    // 0x11584c: 0x1262fd62  beq         $s3, $v0, . + 4 + (-0x29E << 2)
    ctx->pc = 0x11584Cu;
    {
        const bool branch_taken_0x11584c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11584Cu;
        // 0x115850: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11584c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115854u;
    // 0x115854: 0x1262fd60  beq         $s3, $v0, . + 4 + (-0x2A0 << 2)
    ctx->pc = 0x115854u;
    {
        const bool branch_taken_0x115854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115854u;
        // 0x115858: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115854) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11585Cu;
    // 0x11585c: 0x1262fd5e  beq         $s3, $v0, . + 4 + (-0x2A2 << 2)
    ctx->pc = 0x11585Cu;
    {
        const bool branch_taken_0x11585c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11585Cu;
        // 0x115860: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11585c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115864u;
    // 0x115864: 0x1262fd5c  beq         $s3, $v0, . + 4 + (-0x2A4 << 2)
    ctx->pc = 0x115864u;
    {
        const bool branch_taken_0x115864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115864u;
        // 0x115868: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115864) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11586Cu;
    // 0x11586c: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x11586Cu;
    {
        const bool branch_taken_0x11586c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11586c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115874u;
label_115874:
    // 0x115874: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115874u;
    {
        const bool branch_taken_0x115874 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115874u;
        // 0x115878: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115874) {
            ctx->pc = 0x1158A0u;
            goto label_1158a0;
        }
    }
    ctx->pc = 0x11587Cu;
    // 0x11587c: 0x2662ffe5  addiu       $v0, $s3, -0x1B
    ctx->pc = 0x11587cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967269));
    // 0x115880: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x115880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x115884: 0x144000c0  bnez        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x115884u;
    {
        const bool branch_taken_0x115884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115884u;
        // 0x115888: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115884) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11588Cu;
    // 0x11588c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x11588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x115890: 0x1262fd51  beq         $s3, $v0, . + 4 + (-0x2AF << 2)
    ctx->pc = 0x115890u;
    {
        const bool branch_taken_0x115890 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115890u;
        // 0x115894: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115890) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115898u;
    // 0x115898: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x115898u;
    {
        const bool branch_taken_0x115898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115898) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1158A0u;
label_1158a0:
    // 0x1158a0: 0x14a20018  bne         $a1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1158A0u;
    {
        const bool branch_taken_0x1158a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1158A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158A0u;
        // 0x1158a4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158a0) {
            ctx->pc = 0x115904u;
            goto label_115904;
        }
    }
    ctx->pc = 0x1158A8u;
    // 0x1158a8: 0x2662ffed  addiu       $v0, $s3, -0x13
    ctx->pc = 0x1158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967277));
    // 0x1158ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1158acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1158b0: 0x144000b5  bnez        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x1158B0u;
    {
        const bool branch_taken_0x1158b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1158B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158B0u;
        // 0x1158b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158b0) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1158B8u;
    // 0x1158b8: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1158bc: 0x1262fd46  beq         $s3, $v0, . + 4 + (-0x2BA << 2)
    ctx->pc = 0x1158BCu;
    {
        const bool branch_taken_0x1158bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158BCu;
        // 0x1158c0: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158bc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158C4u;
    // 0x1158c4: 0x1262fd44  beq         $s3, $v0, . + 4 + (-0x2BC << 2)
    ctx->pc = 0x1158C4u;
    {
        const bool branch_taken_0x1158c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158C4u;
        // 0x1158c8: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158c4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158CCu;
    // 0x1158cc: 0x1262fd42  beq         $s3, $v0, . + 4 + (-0x2BE << 2)
    ctx->pc = 0x1158CCu;
    {
        const bool branch_taken_0x1158cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158CCu;
        // 0x1158d0: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158cc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158D4u;
    // 0x1158d4: 0x1262fd40  beq         $s3, $v0, . + 4 + (-0x2C0 << 2)
    ctx->pc = 0x1158D4u;
    {
        const bool branch_taken_0x1158d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158D4u;
        // 0x1158d8: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158d4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158DCu;
    // 0x1158dc: 0x1262fd3e  beq         $s3, $v0, . + 4 + (-0x2C2 << 2)
    ctx->pc = 0x1158DCu;
    {
        const bool branch_taken_0x1158dc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158DCu;
        // 0x1158e0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158dc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158E4u;
    // 0x1158e4: 0x1262fd3c  beq         $s3, $v0, . + 4 + (-0x2C4 << 2)
    ctx->pc = 0x1158E4u;
    {
        const bool branch_taken_0x1158e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158E4u;
        // 0x1158e8: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158e4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158ECu;
    // 0x1158ec: 0x1262fd3a  beq         $s3, $v0, . + 4 + (-0x2C6 << 2)
    ctx->pc = 0x1158ECu;
    {
        const bool branch_taken_0x1158ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158ECu;
        // 0x1158f0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158ec) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158F4u;
    // 0x1158f4: 0x1262fd38  beq         $s3, $v0, . + 4 + (-0x2C8 << 2)
    ctx->pc = 0x1158F4u;
    {
        const bool branch_taken_0x1158f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1158F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F4u;
        // 0x1158f8: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158f4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1158FCu;
    // 0x1158fc: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1158FCu;
    {
        const bool branch_taken_0x1158fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1158fc) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115904u;
label_115904:
    // 0x115904: 0x14a200a0  bne         $a1, $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x115904u;
    {
        const bool branch_taken_0x115904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115904u;
        // 0x115908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115904) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11590Cu;
    // 0x11590c: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x11590Cu;
    {
        const bool branch_taken_0x11590c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11590Cu;
        // 0x115910: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11590c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115914u;
label_115914:
    // 0x115914: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x115918: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115918u;
    {
        const bool branch_taken_0x115918 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115918u;
        // 0x11591c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115918) {
            ctx->pc = 0x115944u;
            goto label_115944;
        }
    }
    ctx->pc = 0x115920u;
    // 0x115920: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x115920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x115924: 0x1262fd2c  beq         $s3, $v0, . + 4 + (-0x2D4 << 2)
    ctx->pc = 0x115924u;
    {
        const bool branch_taken_0x115924 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115924u;
        // 0x115928: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115924) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11592Cu;
    // 0x11592c: 0x1262fd2a  beq         $s3, $v0, . + 4 + (-0x2D6 << 2)
    ctx->pc = 0x11592Cu;
    {
        const bool branch_taken_0x11592c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11592Cu;
        // 0x115930: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11592c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115934u;
    // 0x115934: 0x1262fd28  beq         $s3, $v0, . + 4 + (-0x2D8 << 2)
    ctx->pc = 0x115934u;
    {
        const bool branch_taken_0x115934 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115934u;
        // 0x115938: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115934) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x11593Cu;
    // 0x11593c: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x11593Cu;
    {
        const bool branch_taken_0x11593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11593c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115944u;
label_115944:
    // 0x115944: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115944u;
    {
        const bool branch_taken_0x115944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115944u;
        // 0x115948: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115944) {
            ctx->pc = 0x115954u;
            goto label_115954;
        }
    }
    ctx->pc = 0x11594Cu;
    // 0x11594c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x11594Cu;
    {
        const bool branch_taken_0x11594c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11594Cu;
        // 0x115950: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11594c) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115954u;
label_115954:
    // 0x115954: 0x14a2008c  bne         $a1, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x115954u;
    {
        const bool branch_taken_0x115954 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115954u;
        // 0x115958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115954) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x11595Cu;
    // 0x11595c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x11595cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x115960: 0x1262fd1d  beq         $s3, $v0, . + 4 + (-0x2E3 << 2)
    ctx->pc = 0x115960u;
    {
        const bool branch_taken_0x115960 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115960u;
        // 0x115964: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115960) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115968u;
    // 0x115968: 0x1262fd1b  beq         $s3, $v0, . + 4 + (-0x2E5 << 2)
    ctx->pc = 0x115968u;
    {
        const bool branch_taken_0x115968 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x11596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115968u;
        // 0x11596c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115968) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115970u;
    // 0x115970: 0x1262fd19  beq         $s3, $v0, . + 4 + (-0x2E7 << 2)
    ctx->pc = 0x115970u;
    {
        const bool branch_taken_0x115970 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115970u;
        // 0x115974: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115970) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115978u;
    // 0x115978: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x115978u;
    {
        const bool branch_taken_0x115978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115978) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115980u;
label_115980:
    // 0x115980: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115984: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115984u;
    {
        const bool branch_taken_0x115984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115984u;
        // 0x115988: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115984) {
            ctx->pc = 0x115998u;
            goto label_115998;
        }
    }
    ctx->pc = 0x11598Cu;
    // 0x11598c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x11598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x115990: 0x1262fd11  beq         $s3, $v0, . + 4 + (-0x2EF << 2)
    ctx->pc = 0x115990u;
    {
        const bool branch_taken_0x115990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115990u;
        // 0x115994: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115990) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115998u;
label_115998:
    // 0x115998: 0x14a2007b  bne         $a1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x115998u;
    {
        const bool branch_taken_0x115998 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115998u;
        // 0x11599c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115998) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1159A0u;
    // 0x1159a0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1159a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1159a4: 0x1262fd0c  beq         $s3, $v0, . + 4 + (-0x2F4 << 2)
    ctx->pc = 0x1159A4u;
    {
        const bool branch_taken_0x1159a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159A4u;
        // 0x1159a8: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159a4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1159ACu;
    // 0x1159ac: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1159ACu;
    {
        const bool branch_taken_0x1159ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1159ac) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1159B4u;
label_1159b4:
    // 0x1159b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1159b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1159b8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1159B8u;
    {
        const bool branch_taken_0x1159b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1159BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159B8u;
        // 0x1159bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159b8) {
            ctx->pc = 0x1159CCu;
            goto label_1159cc;
        }
    }
    ctx->pc = 0x1159C0u;
    // 0x1159c0: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1159c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1159c4: 0x1262fd04  beq         $s3, $v0, . + 4 + (-0x2FC << 2)
    ctx->pc = 0x1159C4u;
    {
        const bool branch_taken_0x1159c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1159C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159C4u;
        // 0x1159c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159c4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x1159CCu;
label_1159cc:
    // 0x1159cc: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1159CCu;
    {
        const bool branch_taken_0x1159cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1159D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159CCu;
        // 0x1159d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159cc) {
            ctx->pc = 0x1159ECu;
            goto label_1159ec;
        }
    }
    ctx->pc = 0x1159D4u;
    // 0x1159d4: 0x2662ffd3  addiu       $v0, $s3, -0x2D
    ctx->pc = 0x1159d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967251));
    // 0x1159d8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1159d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1159dc: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1159DCu;
    {
        const bool branch_taken_0x1159dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159DCu;
        // 0x1159e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159dc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x1159E4u;
    // 0x1159e4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1159E4u;
    {
        const bool branch_taken_0x1159e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1159E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159E4u;
        // 0x1159e8: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159e4) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x1159ECu;
label_1159ec:
    // 0x1159ec: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1159ECu;
    {
        const bool branch_taken_0x1159ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159ECu;
        // 0x1159f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159ec) {
            ctx->pc = 0x115A38u;
            goto label_115a38;
        }
    }
    ctx->pc = 0x1159F4u;
    // 0x1159f4: 0x2662ffdd  addiu       $v0, $s3, -0x23
    ctx->pc = 0x1159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967261));
    // 0x1159f8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1159f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1159fc: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1159FCu;
    {
        const bool branch_taken_0x1159fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1159FCu;
        // 0x115a00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1159fc) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115A04u;
    // 0x115a04: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x115a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x115a08: 0x1262fcf3  beq         $s3, $v0, . + 4 + (-0x30D << 2)
    ctx->pc = 0x115A08u;
    {
        const bool branch_taken_0x115a08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A08u;
        // 0x115a0c: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a08) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A10u;
    // 0x115a10: 0x1262fcf1  beq         $s3, $v0, . + 4 + (-0x30F << 2)
    ctx->pc = 0x115A10u;
    {
        const bool branch_taken_0x115a10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A10u;
        // 0x115a14: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a10) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A18u;
    // 0x115a18: 0x1262fcef  beq         $s3, $v0, . + 4 + (-0x311 << 2)
    ctx->pc = 0x115A18u;
    {
        const bool branch_taken_0x115a18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A18u;
        // 0x115a1c: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a18) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A20u;
    // 0x115a20: 0x1262fced  beq         $s3, $v0, . + 4 + (-0x313 << 2)
    ctx->pc = 0x115A20u;
    {
        const bool branch_taken_0x115a20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A20u;
        // 0x115a24: 0x2402004e  addiu       $v0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a20) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A28u;
    // 0x115a28: 0x1262fceb  beq         $s3, $v0, . + 4 + (-0x315 << 2)
    ctx->pc = 0x115A28u;
    {
        const bool branch_taken_0x115a28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A28u;
        // 0x115a2c: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a28) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A30u;
    // 0x115a30: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x115A30u;
    {
        const bool branch_taken_0x115a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115a30) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115A38u;
label_115a38:
    // 0x115a38: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115A38u;
    {
        const bool branch_taken_0x115a38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A38u;
        // 0x115a3c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a38) {
            ctx->pc = 0x115A5Cu;
            goto label_115a5c;
        }
    }
    ctx->pc = 0x115A40u;
    // 0x115a40: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x115a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x115a44: 0x1262fce4  beq         $s3, $v0, . + 4 + (-0x31C << 2)
    ctx->pc = 0x115A44u;
    {
        const bool branch_taken_0x115a44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A44u;
        // 0x115a48: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a44) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A4Cu;
    // 0x115a4c: 0x1262fce2  beq         $s3, $v0, . + 4 + (-0x31E << 2)
    ctx->pc = 0x115A4Cu;
    {
        const bool branch_taken_0x115a4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A4Cu;
        // 0x115a50: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a4c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A54u;
    // 0x115a54: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x115A54u;
    {
        const bool branch_taken_0x115a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115a54) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115A5Cu;
label_115a5c:
    // 0x115a5c: 0x14a2004a  bne         $a1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x115A5Cu;
    {
        const bool branch_taken_0x115a5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A5Cu;
        // 0x115a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a5c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115A64u;
    // 0x115a64: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x115a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x115a68: 0x1262fcdb  beq         $s3, $v0, . + 4 + (-0x325 << 2)
    ctx->pc = 0x115A68u;
    {
        const bool branch_taken_0x115a68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A68u;
        // 0x115a6c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a68) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A70u;
    // 0x115a70: 0x1262fcd9  beq         $s3, $v0, . + 4 + (-0x327 << 2)
    ctx->pc = 0x115A70u;
    {
        const bool branch_taken_0x115a70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A70u;
        // 0x115a74: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a70) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A78u;
    // 0x115a78: 0x1262fcd7  beq         $s3, $v0, . + 4 + (-0x329 << 2)
    ctx->pc = 0x115A78u;
    {
        const bool branch_taken_0x115a78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A78u;
        // 0x115a7c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a78) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A80u;
    // 0x115a80: 0x1262fcd5  beq         $s3, $v0, . + 4 + (-0x32B << 2)
    ctx->pc = 0x115A80u;
    {
        const bool branch_taken_0x115a80 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A80u;
        // 0x115a84: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a80) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A88u;
    // 0x115a88: 0x1262fcd3  beq         $s3, $v0, . + 4 + (-0x32D << 2)
    ctx->pc = 0x115A88u;
    {
        const bool branch_taken_0x115a88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A88u;
        // 0x115a8c: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a88) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115A90u;
    // 0x115a90: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x115A90u;
    {
        const bool branch_taken_0x115a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115a90) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115A98u;
label_115a98:
    // 0x115a98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115a9c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115A9Cu;
    {
        const bool branch_taken_0x115a9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115A9Cu;
        // 0x115aa0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115a9c) {
            ctx->pc = 0x115AB0u;
            goto label_115ab0;
        }
    }
    ctx->pc = 0x115AA4u;
    // 0x115aa4: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x115aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x115aa8: 0x1262fccb  beq         $s3, $v0, . + 4 + (-0x335 << 2)
    ctx->pc = 0x115AA8u;
    {
        const bool branch_taken_0x115aa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AA8u;
        // 0x115aac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115aa8) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115AB0u;
label_115ab0:
    // 0x115ab0: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x115AB0u;
    {
        const bool branch_taken_0x115ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AB0u;
        // 0x115ab4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ab0) {
            ctx->pc = 0x115AD4u;
            goto label_115ad4;
        }
    }
    ctx->pc = 0x115AB8u;
    // 0x115ab8: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x115ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x115abc: 0x1262fcc6  beq         $s3, $v0, . + 4 + (-0x33A << 2)
    ctx->pc = 0x115ABCu;
    {
        const bool branch_taken_0x115abc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ABCu;
        // 0x115ac0: 0x24020049  addiu       $v0, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115abc) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115AC4u;
    // 0x115ac4: 0x1262fcc4  beq         $s3, $v0, . + 4 + (-0x33C << 2)
    ctx->pc = 0x115AC4u;
    {
        const bool branch_taken_0x115ac4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AC4u;
        // 0x115ac8: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ac4) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115ACCu;
    // 0x115acc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x115ACCu;
    {
        const bool branch_taken_0x115acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x115acc) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115AD4u;
label_115ad4:
    // 0x115ad4: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x115AD4u;
    {
        const bool branch_taken_0x115ad4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AD4u;
        // 0x115ad8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ad4) {
            ctx->pc = 0x115AE4u;
            goto label_115ae4;
        }
    }
    ctx->pc = 0x115ADCu;
    // 0x115adc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x115ADCu;
    {
        const bool branch_taken_0x115adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115ADCu;
        // 0x115ae0: 0x24020044  addiu       $v0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115adc) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115AE4u;
label_115ae4:
    // 0x115ae4: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x115AE4u;
    {
        const bool branch_taken_0x115ae4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AE4u;
        // 0x115ae8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ae4) {
            ctx->pc = 0x115B38u;
            goto label_115b38;
        }
    }
    ctx->pc = 0x115AECu;
    // 0x115aec: 0x2662ffe2  addiu       $v0, $s3, -0x1E
    ctx->pc = 0x115aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967266));
    // 0x115af0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x115af0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x115af4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x115AF4u;
    {
        const bool branch_taken_0x115af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AF4u;
        // 0x115af8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115af4) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115AFCu;
    // 0x115afc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x115AFCu;
    {
        const bool branch_taken_0x115afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115AFCu;
        // 0x115b00: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115afc) {
            ctx->pc = 0x115B44u;
            goto label_115b44;
        }
    }
    ctx->pc = 0x115B04u;
label_115b04:
    // 0x115b04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x115b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x115b08: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115B08u;
    {
        const bool branch_taken_0x115b08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B08u;
        // 0x115b0c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b08) {
            ctx->pc = 0x115B24u;
            goto label_115b24;
        }
    }
    ctx->pc = 0x115B10u;
    // 0x115b10: 0x24020057  addiu       $v0, $zero, 0x57
    ctx->pc = 0x115b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x115b14: 0x1262fcb0  beq         $s3, $v0, . + 4 + (-0x350 << 2)
    ctx->pc = 0x115B14u;
    {
        const bool branch_taken_0x115b14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B14u;
        // 0x115b18: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b14) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115B1Cu;
    // 0x115b1c: 0x1262fcae  beq         $s3, $v0, . + 4 + (-0x352 << 2)
    ctx->pc = 0x115B1Cu;
    {
        const bool branch_taken_0x115b1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B1Cu;
        // 0x115b20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b1c) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115B24u;
label_115b24:
    // 0x115b24: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115B24u;
    {
        const bool branch_taken_0x115b24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B24u;
        // 0x115b28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b24) {
            ctx->pc = 0x115B38u;
            goto label_115b38;
        }
    }
    ctx->pc = 0x115B2Cu;
    // 0x115b2c: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x115b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x115b30: 0x1262fca9  beq         $s3, $v0, . + 4 + (-0x357 << 2)
    ctx->pc = 0x115B30u;
    {
        const bool branch_taken_0x115b30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B30u;
        // 0x115b34: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b30) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115B38u;
label_115b38:
    // 0x115b38: 0x14a20013  bne         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x115B38u;
    {
        const bool branch_taken_0x115b38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B38u;
        // 0x115b3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b38) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115B40u;
    // 0x115b40: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x115b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_115b44:
    // 0x115b44: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x115B44u;
    {
        const bool branch_taken_0x115b44 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B44u;
        // 0x115b48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b44) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115B4Cu;
    // 0x115b4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x115B4Cu;
    {
        const bool branch_taken_0x115b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B4Cu;
        // 0x115b50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b4c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115B54u;
label_115b54:
    // 0x115b54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115b58: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115B58u;
    {
        const bool branch_taken_0x115b58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B58u;
        // 0x115b5c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b58) {
            ctx->pc = 0x115B6Cu;
            goto label_115b6c;
        }
    }
    ctx->pc = 0x115B60u;
    // 0x115b60: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x115b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x115b64: 0x1262fc9c  beq         $s3, $v0, . + 4 + (-0x364 << 2)
    ctx->pc = 0x115B64u;
    {
        const bool branch_taken_0x115b64 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x115B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B64u;
        // 0x115b68: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b64) {
            ctx->pc = 0x114DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114dd8;
        }
    }
    ctx->pc = 0x115B6Cu;
label_115b6c:
    // 0x115b6c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x115B6Cu;
    {
        const bool branch_taken_0x115b6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x115B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B6Cu;
        // 0x115b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b6c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115B74u;
    // 0x115b74: 0x2663ffbf  addiu       $v1, $s3, -0x41
    ctx->pc = 0x115b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967231));
label_115b78:
    // 0x115b78: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x115b78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_115b7c:
    // 0x115b7c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x115B7Cu;
    {
        const bool branch_taken_0x115b7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x115B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B7Cu;
        // 0x115b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115b7c) {
            ctx->pc = 0x115B88u;
            goto label_115b88;
        }
    }
    ctx->pc = 0x115B84u;
label_115b84:
    // 0x115b84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x115b84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_115b88:
    // 0x115b88: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x115b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_115b8c:
    // 0x115b8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x115b8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115b90: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x115b90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x115b94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x115b94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115b98: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x115b98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115b9c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x115b9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x115BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BA4u;
        // 0x115ba8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115BACu;
    // 0x115bac: 0x0  nop
    ctx->pc = 0x115bacu;
    // NOP
    ctx->pc = 0x115bb0u;
}
