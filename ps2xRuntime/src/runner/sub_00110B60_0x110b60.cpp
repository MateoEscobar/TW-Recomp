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

// Function: sub_00110B60
// Address: 0x110b60 - 0x110c70
void sub_00110B60_0x110b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110B60_0x110b60");
#endif

    switch (ctx->pc) {
        case 0x110b94u: goto label_110b94;
        case 0x110ba4u: goto label_110ba4;
        case 0x110bc0u: goto label_110bc0;
        case 0x110bd0u: goto label_110bd0;
        case 0x110becu: goto label_110bec;
        case 0x110bfcu: goto label_110bfc;
        case 0x110c08u: goto label_110c08;
        case 0x110c50u: goto label_110c50;
        default: break;
    }

    ctx->pc = 0x110b60u;

    // 0x110b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x110b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x110b64: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x110b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x110b68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x110b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x110b6c: 0x34424274  ori         $v0, $v0, 0x4274
    ctx->pc = 0x110b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17012);
    // 0x110b70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x110b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b74: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x110b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x110b78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x110b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x110b7c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x110b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x110b80: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x110b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x110b84: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x110b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110b8c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110B8Cu;
    SET_GPR_U32(ctx, 31, 0x110B94u);
    ctx->pc = 0x110B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B8Cu;
    // 0x110b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110B8Cu, 0x110B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110B94u;
label_110b94:
    // 0x110b94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x110B94u;
    {
        const bool branch_taken_0x110b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B94u;
        // 0x110b98: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110b94) {
            ctx->pc = 0x110BF0u;
            goto label_110bf0;
        }
    }
    ctx->pc = 0x110B9Cu;
    // 0x110b9c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x110B9Cu;
    SET_GPR_U32(ctx, 31, 0x110BA4u);
    ctx->pc = 0x110BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110B9Cu;
    // 0x110ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x110B9Cu, 0x110BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BA4u;
label_110ba4:
    // 0x110ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x110ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110ba8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x110ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x110bac: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x110bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x110bb0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x110BB0u;
    {
        const bool branch_taken_0x110bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x110bb0) {
            ctx->pc = 0x110BC8u;
            goto label_110bc8;
        }
    }
    ctx->pc = 0x110BB8u;
    // 0x110bb8: 0xc04431c  jal         func_110C70
    ctx->pc = 0x110BB8u;
    SET_GPR_U32(ctx, 31, 0x110BC0u);
    ctx->pc = 0x110BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BB8u;
    // 0x110bbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C70u, 0x110BB8u, 0x110BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BC0u;
label_110bc0:
    // 0x110bc0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x110BC0u;
    {
        const bool branch_taken_0x110bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BC0u;
        // 0x110bc4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bc0) {
            ctx->pc = 0x110BF0u;
            goto label_110bf0;
        }
    }
    ctx->pc = 0x110BC8u;
label_110bc8:
    // 0x110bc8: 0xc043c20  jal         func_10F080
    ctx->pc = 0x110BC8u;
    SET_GPR_U32(ctx, 31, 0x110BD0u);
    ctx->pc = 0x110BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BC8u;
    // 0x110bcc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F080u, 0x110BC8u, 0x110BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BD0u;
label_110bd0:
    // 0x110bd0: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x110BD0u;
    {
        const bool branch_taken_0x110bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x110BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BD0u;
        // 0x110bd4: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bd0) {
            ctx->pc = 0x110BE4u;
            goto label_110be4;
        }
    }
    ctx->pc = 0x110BD8u;
    // 0x110bd8: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x110bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x110bdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x110BDCu;
    {
        const bool branch_taken_0x110bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BDCu;
        // 0x110be0: 0x8c624274  lw          $v0, 0x4274($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110bdc) {
            ctx->pc = 0x110C54u;
            goto label_110c54;
        }
    }
    ctx->pc = 0x110BE4u;
label_110be4:
    // 0x110be4: 0xc04431c  jal         func_110C70
    ctx->pc = 0x110BE4u;
    SET_GPR_U32(ctx, 31, 0x110BECu);
    ctx->pc = 0x110BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BE4u;
    // 0x110be8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110C70u, 0x110BE4u, 0x110BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BECu;
label_110bec:
    // 0x110bec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x110becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_110bf0:
    // 0x110bf0: 0x8c51489c  lw          $s1, 0x489C($v0)
    ctx->pc = 0x110bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x110bf4: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x110BF4u;
    SET_GPR_U32(ctx, 31, 0x110BFCu);
    ctx->pc = 0x110BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110BF4u;
    // 0x110bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x110BF4u, 0x110BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110BFCu;
label_110bfc:
    // 0x110bfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x110bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c00: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x110C00u;
    SET_GPR_U32(ctx, 31, 0x110C08u);
    ctx->pc = 0x110C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C00u;
    // 0x110c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x110C00u, 0x110C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C08u;
label_110c08:
    // 0x110c08: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x110c0c: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x110c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x110c10: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x110c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x110c14: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x110c14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x110c18: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x110c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x110c1c: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x110C1Cu;
    {
        const bool branch_taken_0x110c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x110C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C1Cu;
        // 0x110c20: 0x3c100002  lui         $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c1c) {
            ctx->pc = 0x110C3Cu;
            goto label_110c3c;
        }
    }
    ctx->pc = 0x110C24u;
    // 0x110c24: 0x3c0263f1  lui         $v0, 0x63F1
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25585 << 16));
    // 0x110c28: 0x3c030ffb  lui         $v1, 0xFFB
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4091 << 16));
    // 0x110c2c: 0x3442c8b3  ori         $v0, $v0, 0xC8B3
    ctx->pc = 0x110c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51379);
    // 0x110c30: 0x3463aa27  ori         $v1, $v1, 0xAA27
    ctx->pc = 0x110c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43559);
    // 0x110c34: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x110c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x110c38: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x110c38u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_110c3c:
    // 0x110c3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x110c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c40: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x110c40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x110c44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x110c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c48: 0xc043ef2  jal         func_10FBC8
    ctx->pc = 0x110C48u;
    SET_GPR_U32(ctx, 31, 0x110C50u);
    ctx->pc = 0x110C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110C48u;
    // 0x110c4c: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBC8u, 0x110C48u, 0x110C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C50u;
label_110c50:
    // 0x110c50: 0xae024274  sw          $v0, 0x4274($s0)
    ctx->pc = 0x110c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17012), GPR_U32(ctx, 2));
label_110c54:
    // 0x110c54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x110c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x110c58: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x110c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x110c5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x110c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c60: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x110c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c68: 0x3e00008  jr          $ra
    ctx->pc = 0x110C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C68u;
        // 0x110c6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C70u;
}
