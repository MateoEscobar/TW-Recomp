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

// Function: sub_00485AF8
// Address: 0x485af8 - 0x485c28
void sub_00485AF8_0x485af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485AF8_0x485af8");
#endif

    switch (ctx->pc) {
        case 0x485b5cu: goto label_485b5c;
        case 0x485b88u: goto label_485b88;
        case 0x485b9cu: goto label_485b9c;
        case 0x485bc8u: goto label_485bc8;
        default: break;
    }

    ctx->pc = 0x485af8u;

    // 0x485af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x485af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x485afc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x485afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x485b00: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x485b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x485b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x485b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x485b0c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x485b0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b10: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x485b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x485b14: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x485b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x485b18: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x485b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x485b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485b20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x485b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x485b24: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x485b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x485b28: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x485B28u;
    {
        const bool branch_taken_0x485b28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x485B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485B28u;
        // 0x485b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485b28) {
            ctx->pc = 0x485BC0u;
            goto label_485bc0;
        }
    }
    ctx->pc = 0x485B30u;
    // 0x485b30: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x485b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x485b34: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x485B34u;
    {
        const bool branch_taken_0x485b34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x485b34) {
            ctx->pc = 0x485B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485B34u;
            // 0x485b38: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485B60u;
            goto label_485b60;
        }
    }
    ctx->pc = 0x485B3Cu;
    // 0x485b3c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x485b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x485b40: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x485B40u;
    {
        const bool branch_taken_0x485b40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x485B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485B40u;
        // 0x485b44: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x485b40) {
            ctx->pc = 0x485B5Cu;
            goto label_485b5c;
        }
    }
    ctx->pc = 0x485B48u;
    // 0x485b48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x485B48u;
    {
        const bool branch_taken_0x485b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x485b48) {
            ctx->pc = 0x485B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x485B48u;
            // 0x485b4c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x485B60u;
            goto label_485b60;
        }
    }
    ctx->pc = 0x485B50u;
    // 0x485b50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x485b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x485b54: 0xc10c190  jal         func_430640
    ctx->pc = 0x485B54u;
    SET_GPR_U32(ctx, 31, 0x485B5Cu);
    ctx->pc = 0x485B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485B54u;
    // 0x485b58: 0x663004  sllv        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x485B54u, 0x485B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485B5Cu;
label_485b5c:
    // 0x485b5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x485b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_485b60:
    // 0x485b60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x485b60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x485b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x485b68: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x485b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x485b6c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x485b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x485b70: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x485b70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x485b74: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x485b74u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x485b78: 0x43a818  mult        $s5, $v0, $v1
    ctx->pc = 0x485b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
    // 0x485b7c: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x485B7Cu;
    {
        const bool branch_taken_0x485b7c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x485B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485B7Cu;
        // 0x485b80: 0x8e110014  lw          $s1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485b7c) {
            ctx->pc = 0x485BCCu;
            goto label_485bcc;
        }
    }
    ctx->pc = 0x485B84u;
    // 0x485b84: 0x0  nop
    ctx->pc = 0x485b84u;
    // NOP
label_485b88:
    // 0x485b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x485b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b90: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x485b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485b94: 0xc10c190  jal         func_430640
    ctx->pc = 0x485B94u;
    SET_GPR_U32(ctx, 31, 0x485B9Cu);
    ctx->pc = 0x485B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485B94u;
    // 0x485b98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x485B94u, 0x485B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485B9Cu;
label_485b9c:
    // 0x485b9c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x485b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x485ba0: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x485ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x485ba4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x485ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x485ba8: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x485ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x485bac: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x485bacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x485bb0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x485BB0u;
    {
        const bool branch_taken_0x485bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x485BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485BB0u;
        // 0x485bb4: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485bb0) {
            ctx->pc = 0x485B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_485b88;
        }
    }
    ctx->pc = 0x485BB8u;
    // 0x485bb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x485BB8u;
    {
        const bool branch_taken_0x485bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485BB8u;
        // 0x485bbc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485bb8) {
            ctx->pc = 0x485BD0u;
            goto label_485bd0;
        }
    }
    ctx->pc = 0x485BC0u;
label_485bc0:
    // 0x485bc0: 0xc121532  jal         func_4854C8
    ctx->pc = 0x485BC0u;
    SET_GPR_U32(ctx, 31, 0x485BC8u);
    ctx->pc = 0x485BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x485BC0u;
    // 0x485bc4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4854C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4854C8u, 0x485BC0u, 0x485BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485BC8u;
label_485bc8:
    // 0x485bc8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x485bc8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_485bcc:
    // 0x485bcc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x485bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_485bd0:
    // 0x485bd0: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x485bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x485bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x485bd8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x485bd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x485bdc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x485bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x485be0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x485be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x485be4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x485be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x485be8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485be8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x485bec: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x485becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x485bf0: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x485bf0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x485bf4: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x485bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x485bf8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x485bf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485bfc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x485bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x485c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485c04: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x485c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x485c08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x485c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x485c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x485C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x485C0Cu;
        // 0x485c10: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485C0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485C14u;
    // 0x485c14: 0x0  nop
    ctx->pc = 0x485c14u;
    // NOP
    // 0x485c18: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x485c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x485c1c: 0x0  nop
    ctx->pc = 0x485c1cu;
    // NOP
    // 0x485c20: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x485c20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x485c24: 0x0  nop
    ctx->pc = 0x485c24u;
    // NOP
    ctx->pc = 0x485c28u;
}
