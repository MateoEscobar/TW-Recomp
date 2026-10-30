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

// Function: sub_00185B38
// Address: 0x185b38 - 0x185cc8
void sub_00185B38_0x185b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185B38_0x185b38");
#endif

    switch (ctx->pc) {
        case 0x185b38u: goto label_185b38;
        case 0x185b3cu: goto label_185b3c;
        case 0x185b40u: goto label_185b40;
        case 0x185b44u: goto label_185b44;
        case 0x185b48u: goto label_185b48;
        case 0x185b4cu: goto label_185b4c;
        case 0x185b50u: goto label_185b50;
        case 0x185b54u: goto label_185b54;
        case 0x185b58u: goto label_185b58;
        case 0x185b5cu: goto label_185b5c;
        case 0x185b60u: goto label_185b60;
        case 0x185b64u: goto label_185b64;
        case 0x185b68u: goto label_185b68;
        case 0x185b6cu: goto label_185b6c;
        case 0x185b70u: goto label_185b70;
        case 0x185b74u: goto label_185b74;
        case 0x185b78u: goto label_185b78;
        case 0x185b7cu: goto label_185b7c;
        case 0x185b80u: goto label_185b80;
        case 0x185b84u: goto label_185b84;
        case 0x185b88u: goto label_185b88;
        case 0x185b8cu: goto label_185b8c;
        case 0x185b90u: goto label_185b90;
        case 0x185b94u: goto label_185b94;
        case 0x185b98u: goto label_185b98;
        case 0x185b9cu: goto label_185b9c;
        case 0x185ba0u: goto label_185ba0;
        case 0x185ba4u: goto label_185ba4;
        case 0x185ba8u: goto label_185ba8;
        case 0x185bacu: goto label_185bac;
        case 0x185bb0u: goto label_185bb0;
        case 0x185bb4u: goto label_185bb4;
        case 0x185bb8u: goto label_185bb8;
        case 0x185bbcu: goto label_185bbc;
        case 0x185bc0u: goto label_185bc0;
        case 0x185bc4u: goto label_185bc4;
        case 0x185bc8u: goto label_185bc8;
        case 0x185bccu: goto label_185bcc;
        case 0x185bd0u: goto label_185bd0;
        case 0x185bd4u: goto label_185bd4;
        case 0x185bd8u: goto label_185bd8;
        case 0x185bdcu: goto label_185bdc;
        case 0x185be0u: goto label_185be0;
        case 0x185be4u: goto label_185be4;
        case 0x185be8u: goto label_185be8;
        case 0x185becu: goto label_185bec;
        case 0x185bf0u: goto label_185bf0;
        case 0x185bf4u: goto label_185bf4;
        case 0x185bf8u: goto label_185bf8;
        case 0x185bfcu: goto label_185bfc;
        case 0x185c00u: goto label_185c00;
        case 0x185c04u: goto label_185c04;
        case 0x185c08u: goto label_185c08;
        case 0x185c0cu: goto label_185c0c;
        case 0x185c10u: goto label_185c10;
        case 0x185c14u: goto label_185c14;
        case 0x185c18u: goto label_185c18;
        case 0x185c1cu: goto label_185c1c;
        case 0x185c20u: goto label_185c20;
        case 0x185c24u: goto label_185c24;
        case 0x185c28u: goto label_185c28;
        case 0x185c2cu: goto label_185c2c;
        case 0x185c30u: goto label_185c30;
        case 0x185c34u: goto label_185c34;
        case 0x185c38u: goto label_185c38;
        case 0x185c3cu: goto label_185c3c;
        case 0x185c40u: goto label_185c40;
        case 0x185c44u: goto label_185c44;
        case 0x185c48u: goto label_185c48;
        case 0x185c4cu: goto label_185c4c;
        case 0x185c50u: goto label_185c50;
        case 0x185c54u: goto label_185c54;
        case 0x185c58u: goto label_185c58;
        case 0x185c5cu: goto label_185c5c;
        case 0x185c60u: goto label_185c60;
        case 0x185c64u: goto label_185c64;
        case 0x185c68u: goto label_185c68;
        case 0x185c6cu: goto label_185c6c;
        case 0x185c70u: goto label_185c70;
        case 0x185c74u: goto label_185c74;
        case 0x185c78u: goto label_185c78;
        case 0x185c7cu: goto label_185c7c;
        case 0x185c80u: goto label_185c80;
        case 0x185c84u: goto label_185c84;
        case 0x185c88u: goto label_185c88;
        case 0x185c8cu: goto label_185c8c;
        case 0x185c90u: goto label_185c90;
        case 0x185c94u: goto label_185c94;
        case 0x185c98u: goto label_185c98;
        case 0x185c9cu: goto label_185c9c;
        case 0x185ca0u: goto label_185ca0;
        case 0x185ca4u: goto label_185ca4;
        case 0x185ca8u: goto label_185ca8;
        case 0x185cacu: goto label_185cac;
        case 0x185cb0u: goto label_185cb0;
        case 0x185cb4u: goto label_185cb4;
        case 0x185cb8u: goto label_185cb8;
        case 0x185cbcu: goto label_185cbc;
        case 0x185cc0u: goto label_185cc0;
        case 0x185cc4u: goto label_185cc4;
        default: break;
    }

    ctx->pc = 0x185b38u;

label_185b38:
    // 0x185b38: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x185b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_185b3c:
    // 0x185b3c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x185b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_185b40:
    // 0x185b40: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x185b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_185b44:
    // 0x185b44: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x185b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_185b48:
    // 0x185b48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x185b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_185b4c:
    // 0x185b4c: 0x8c435370  lw          $v1, 0x5370($v0)
    ctx->pc = 0x185b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21360)));
label_185b50:
    // 0x185b50: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x185b50u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_185b54:
    // 0x185b54: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x185b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_185b58:
    // 0x185b58: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x185b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_185b5c:
    // 0x185b5c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x185b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_185b60:
    // 0x185b60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x185b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_185b64:
    // 0x185b64: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x185b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_185b68:
    // 0x185b68: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x185b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_185b6c:
    // 0x185b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_185b70:
    // 0x185b70: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_185b74:
    if (ctx->pc == 0x185B74u) {
        ctx->pc = 0x185B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B70u;
        // 0x185b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185B78u;
        goto label_185b78;
    }
    ctx->pc = 0x185B70u;
    {
        const bool branch_taken_0x185b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B70u;
        // 0x185b74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b70) {
            ctx->pc = 0x185C9Cu;
            goto label_185c9c;
        }
    }
    ctx->pc = 0x185B78u;
label_185b78:
    // 0x185b78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x185b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_185b7c:
    // 0x185b7c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185b80:
    // 0x185b80: 0x8c46cdb8  lw          $a2, -0x3248($v0)
    ctx->pc = 0x185b80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954424)));
label_185b84:
    // 0x185b84: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x185b84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_185b88:
    // 0x185b88: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x185b88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_185b8c:
    // 0x185b8c: 0x2636149c  addiu       $s6, $s1, 0x149C
    ctx->pc = 0x185b8cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 5276));
label_185b90:
    // 0x185b90: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x185b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_185b94:
    // 0x185b94: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x185b94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_185b98:
    // 0x185b98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185b98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185b9c:
    // 0x185b9c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185ba0:
    // 0x185ba0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185ba4:
    // 0x185ba4: 0x40f809  jalr        $v0
label_185ba8:
    if (ctx->pc == 0x185BA8u) {
        ctx->pc = 0x185BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA4u;
        // 0x185ba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BACu;
        goto label_185bac;
    }
    ctx->pc = 0x185BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185BACu);
        ctx->pc = 0x185BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BA4u;
        // 0x185ba8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BA4u, 0x185BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185BACu;
label_185bac:
    // 0x185bac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x185bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185bb0:
    // 0x185bb0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x185bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_185bb4:
    // 0x185bb4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185bb8:
    // 0x185bb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x185bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_185bbc:
    // 0x185bbc: 0xc11cb14  jal         func_472C50
label_185bc0:
    if (ctx->pc == 0x185BC0u) {
        ctx->pc = 0x185BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BBCu;
        // 0x185bc0: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BC4u;
        goto label_185bc4;
    }
    ctx->pc = 0x185BBCu;
    SET_GPR_U32(ctx, 31, 0x185BC4u);
    ctx->pc = 0x185BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BBCu;
    // 0x185bc0: 0x8c441038  lw          $a0, 0x1038($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C50u, 0x185BBCu, 0x185BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BC4u;
label_185bc4:
    // 0x185bc4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185bc8:
    // 0x185bc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x185bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185bcc:
    // 0x185bcc: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x185bccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_185bd0:
    // 0x185bd0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x185bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_185bd4:
    // 0x185bd4: 0x40f809  jalr        $v0
label_185bd8:
    if (ctx->pc == 0x185BD8u) {
        ctx->pc = 0x185BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BD4u;
        // 0x185bd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BDCu;
        goto label_185bdc;
    }
    ctx->pc = 0x185BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185BDCu);
        ctx->pc = 0x185BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BD4u;
        // 0x185bd8: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BD4u, 0x185BDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185BDCu;
label_185bdc:
    // 0x185bdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185be0:
    // 0x185be0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x185be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_185be4:
    // 0x185be4: 0x40f809  jalr        $v0
label_185be8:
    if (ctx->pc == 0x185BE8u) {
        ctx->pc = 0x185BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BE4u;
        // 0x185be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BECu;
        goto label_185bec;
    }
    ctx->pc = 0x185BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185BECu);
        ctx->pc = 0x185BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BE4u;
        // 0x185be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BE4u, 0x185BECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185BECu;
label_185bec:
    // 0x185bec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x185becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_185bf0:
    // 0x185bf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185bf4:
    // 0x185bf4: 0x40f809  jalr        $v0
label_185bf8:
    if (ctx->pc == 0x185BF8u) {
        ctx->pc = 0x185BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BF4u;
        // 0x185bf8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185BFCu;
        goto label_185bfc;
    }
    ctx->pc = 0x185BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185BFCu);
        ctx->pc = 0x185BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BF4u;
        // 0x185bf8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185BF4u, 0x185BFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185BFCu;
label_185bfc:
    // 0x185bfc: 0xc11c754  jal         func_471D50
label_185c00:
    if (ctx->pc == 0x185C00u) {
        ctx->pc = 0x185C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BFCu;
        // 0x185c00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C04u;
        goto label_185c04;
    }
    ctx->pc = 0x185BFCu;
    SET_GPR_U32(ctx, 31, 0x185C04u);
    ctx->pc = 0x185C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185BFCu;
    // 0x185c00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x471D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x471D50u, 0x185BFCu, 0x185C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C04u;
label_185c04:
    // 0x185c04: 0x3c070018  lui         $a3, 0x18
    ctx->pc = 0x185c04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)24 << 16));
label_185c08:
    // 0x185c08: 0x8e251898  lw          $a1, 0x1898($s1)
    ctx->pc = 0x185c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_185c0c:
    // 0x185c0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x185c0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185c10:
    // 0x185c10: 0x24e74850  addiu       $a3, $a3, 0x4850
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 18512));
label_185c14:
    // 0x185c14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x185c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_185c18:
    // 0x185c18: 0xc10cff6  jal         func_433FD8
label_185c1c:
    if (ctx->pc == 0x185C1Cu) {
        ctx->pc = 0x185C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C18u;
        // 0x185c1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C20u;
        goto label_185c20;
    }
    ctx->pc = 0x185C18u;
    SET_GPR_U32(ctx, 31, 0x185C20u);
    ctx->pc = 0x185C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C18u;
    // 0x185c1c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433FD8u, 0x185C18u, 0x185C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C20u;
label_185c20:
    // 0x185c20: 0x8e221898  lw          $v0, 0x1898($s1)
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_185c24:
    // 0x185c24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_185c28:
    if (ctx->pc == 0x185C28u) {
        ctx->pc = 0x185C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C24u;
        // 0x185c28: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C2Cu;
        goto label_185c2c;
    }
    ctx->pc = 0x185C24u;
    {
        const bool branch_taken_0x185c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C24u;
        // 0x185c28: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c24) {
            ctx->pc = 0x185C54u;
            goto label_185c54;
        }
    }
    ctx->pc = 0x185C2Cu;
label_185c2c:
    // 0x185c2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_185c30:
    // 0x185c30: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x185c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_185c34:
    // 0x185c34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x185c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_185c38:
    // 0x185c38: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x185c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_185c3c:
    // 0x185c3c: 0xc065c5a  jal         func_197168
label_185c40:
    if (ctx->pc == 0x185C40u) {
        ctx->pc = 0x185C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C3Cu;
        // 0x185c40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C44u;
        goto label_185c44;
    }
    ctx->pc = 0x185C3Cu;
    SET_GPR_U32(ctx, 31, 0x185C44u);
    ctx->pc = 0x185C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C3Cu;
    // 0x185c40: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197168u, 0x185C3Cu, 0x185C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C44u;
label_185c44:
    // 0x185c44: 0x8e231898  lw          $v1, 0x1898($s1)
    ctx->pc = 0x185c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6296)));
label_185c48:
    // 0x185c48: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x185c48u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_185c4c:
    // 0x185c4c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_185c50:
    if (ctx->pc == 0x185C50u) {
        ctx->pc = 0x185C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C4Cu;
        // 0x185c50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C54u;
        goto label_185c54;
    }
    ctx->pc = 0x185C4Cu;
    {
        const bool branch_taken_0x185c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185c4c) {
            ctx->pc = 0x185C50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C4Cu;
            // 0x185c50: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x185C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185c30;
        }
    }
    ctx->pc = 0x185C54u;
label_185c54:
    // 0x185c54: 0xae201898  sw          $zero, 0x1898($s1)
    ctx->pc = 0x185c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6296), GPR_U32(ctx, 0));
label_185c58:
    // 0x185c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_185c5c:
    // 0x185c5c: 0xc062c16  jal         func_18B058
label_185c60:
    if (ctx->pc == 0x185C60u) {
        ctx->pc = 0x185C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C5Cu;
        // 0x185c60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C64u;
        goto label_185c64;
    }
    ctx->pc = 0x185C5Cu;
    SET_GPR_U32(ctx, 31, 0x185C64u);
    ctx->pc = 0x185C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C5Cu;
    // 0x185c60: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B058u, 0x185C5Cu, 0x185C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C64u;
label_185c64:
    // 0x185c64: 0x26e3ad28  addiu       $v1, $s7, -0x52D8
    ctx->pc = 0x185c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294946088));
label_185c68:
    // 0x185c68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x185c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185c6c:
    // 0x185c6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_185c70:
    // 0x185c70: 0x40f809  jalr        $v0
label_185c74:
    if (ctx->pc == 0x185C74u) {
        ctx->pc = 0x185C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C70u;
        // 0x185c74: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C78u;
        goto label_185c78;
    }
    ctx->pc = 0x185C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185C78u);
        ctx->pc = 0x185C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C70u;
        // 0x185c74: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185C70u, 0x185C78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185C78u;
label_185c78:
    // 0x185c78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_185c7c:
    // 0x185c7c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x185c7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_185c80:
    // 0x185c80: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x185c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_185c84:
    // 0x185c84: 0x40f809  jalr        $v0
label_185c88:
    if (ctx->pc == 0x185C88u) {
        ctx->pc = 0x185C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C84u;
        // 0x185c88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C8Cu;
        goto label_185c8c;
    }
    ctx->pc = 0x185C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185C8Cu);
        ctx->pc = 0x185C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C84u;
        // 0x185c88: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185C84u, 0x185C8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x185C8Cu;
label_185c8c:
    // 0x185c8c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x185c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_185c90:
    // 0x185c90: 0xc11cb0a  jal         func_472C28
label_185c94:
    if (ctx->pc == 0x185C94u) {
        ctx->pc = 0x185C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C90u;
        // 0x185c94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185C98u;
        goto label_185c98;
    }
    ctx->pc = 0x185C90u;
    SET_GPR_U32(ctx, 31, 0x185C98u);
    ctx->pc = 0x185C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185C90u;
    // 0x185c94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x472C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472C28u, 0x185C90u, 0x185C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185C98u;
label_185c98:
    // 0x185c98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x185c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_185c9c:
    // 0x185c9c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x185c9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_185ca0:
    // 0x185ca0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x185ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_185ca4:
    // 0x185ca4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x185ca4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_185ca8:
    // 0x185ca8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x185ca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_185cac:
    // 0x185cac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x185cacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_185cb0:
    // 0x185cb0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x185cb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185cb4:
    // 0x185cb4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x185cb4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_185cb8:
    // 0x185cb8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x185cb8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_185cbc:
    // 0x185cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_185cc0:
    // 0x185cc0: 0x3e00008  jr          $ra
label_185cc4:
    if (ctx->pc == 0x185CC4u) {
        ctx->pc = 0x185CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CC0u;
        // 0x185cc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x185CC8u;
        goto label_fallthrough_0x185cc0;
    }
    ctx->pc = 0x185CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CC0u;
        // 0x185cc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x185cc0:
    ctx->pc = 0x185CC8u;
}
