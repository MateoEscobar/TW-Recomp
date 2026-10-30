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

// Function: sub_0047BEA0
// Address: 0x47bea0 - 0x47bfc8
void sub_0047BEA0_0x47bea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047BEA0_0x47bea0");
#endif

    switch (ctx->pc) {
        case 0x47bed4u: goto label_47bed4;
        case 0x47bef0u: goto label_47bef0;
        case 0x47befcu: goto label_47befc;
        case 0x47bf70u: goto label_47bf70;
        default: break;
    }

    ctx->pc = 0x47bea0u;

    // 0x47bea0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x47bea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x47bea4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x47bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x47bea8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x47bea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x47beac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47beacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47beb0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x47beb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x47beb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x47beb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47beb8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x47beb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x47bebc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x47bebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bec0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x47bec4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x47bec4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47bec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x47bec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47becc: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x47BECCu;
    SET_GPR_U32(ctx, 31, 0x47BED4u);
    ctx->pc = 0x47BED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BECCu;
    // 0x47bed0: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x47BECCu, 0x47BED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BED4u;
label_47bed4:
    // 0x47bed4: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x47bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x47bed8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x47BED8u;
    {
        const bool branch_taken_0x47bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BED8u;
        // 0x47bedc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bed8) {
            ctx->pc = 0x47BF08u;
            goto label_47bf08;
        }
    }
    ctx->pc = 0x47BEE0u;
    // 0x47bee0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47bee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47bee4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x47bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x47bee8: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47BEE8u;
    SET_GPR_U32(ctx, 31, 0x47BEF0u);
    ctx->pc = 0x47BEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BEE8u;
    // 0x47beec: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47BEE8u, 0x47BEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BEF0u;
label_47bef0:
    // 0x47bef0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x47bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x47bef4: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47BEF4u;
    SET_GPR_U32(ctx, 31, 0x47BEFCu);
    ctx->pc = 0x47BEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BEF4u;
    // 0x47bef8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47BEF4u, 0x47BEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BEFCu;
label_47befc:
    // 0x47befc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x47BEFCu;
    {
        const bool branch_taken_0x47befc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BEFCu;
        // 0x47bf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47befc) {
            ctx->pc = 0x47BFA8u;
            goto label_47bfa8;
        }
    }
    ctx->pc = 0x47BF04u;
    // 0x47bf04: 0x0  nop
    ctx->pc = 0x47bf04u;
    // NOP
label_47bf08:
    // 0x47bf08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x47bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47bf0c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x47bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x47bf10: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x47bf10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x47bf14: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x47bf14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x47bf18: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x47bf18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x47bf1c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x47bf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x47bf20: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x47BF20u;
    {
        const bool branch_taken_0x47bf20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF20u;
        // 0x47bf24: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf20) {
            ctx->pc = 0x47BF38u;
            goto label_47bf38;
        }
    }
    ctx->pc = 0x47BF28u;
    // 0x47bf28: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x47bf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x47bf2c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x47bf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x47bf30: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x47BF30u;
    {
        const bool branch_taken_0x47bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF30u;
        // 0x47bf34: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf30) {
            ctx->pc = 0x47BF68u;
            goto label_47bf68;
        }
    }
    ctx->pc = 0x47BF38u;
label_47bf38:
    // 0x47bf38: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x47bf38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x47bf3c: 0x61382  srl         $v0, $a2, 14
    ctx->pc = 0x47bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
    // 0x47bf40: 0x3484ff00  ori         $a0, $a0, 0xFF00
    ctx->pc = 0x47bf40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65280);
    // 0x47bf44: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x47bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x47bf48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x47bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x47bf4c: 0x61c02  srl         $v1, $a2, 16
    ctx->pc = 0x47bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x47bf50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47bf54: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x47bf54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x47bf58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x47bf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x47bf5c: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x47bf5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x47bf60: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x47bf60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x47bf64: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x47bf64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_47bf68:
    // 0x47bf68: 0xc11ee9c  jal         func_47BA70
    ctx->pc = 0x47BF68u;
    SET_GPR_U32(ctx, 31, 0x47BF70u);
    ctx->pc = 0x47BF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47BF68u;
    // 0x47bf6c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BA70u, 0x47BF68u, 0x47BF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47BF70u;
label_47bf70:
    // 0x47bf70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47BF70u;
    {
        const bool branch_taken_0x47bf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF70u;
        // 0x47bf74: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf70) {
            ctx->pc = 0x47BF80u;
            goto label_47bf80;
        }
    }
    ctx->pc = 0x47BF78u;
    // 0x47bf78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47bf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47bf7c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x47bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_47bf80:
    // 0x47bf80: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BF80u;
    {
        const bool branch_taken_0x47bf80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF80u;
        // 0x47bf84: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf80) {
            ctx->pc = 0x47BF8Cu;
            goto label_47bf8c;
        }
    }
    ctx->pc = 0x47BF88u;
    // 0x47bf88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47bf88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47bf8c:
    // 0x47bf8c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BF8Cu;
    {
        const bool branch_taken_0x47bf8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF8Cu;
        // 0x47bf90: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf8c) {
            ctx->pc = 0x47BF98u;
            goto label_47bf98;
        }
    }
    ctx->pc = 0x47BF94u;
    // 0x47bf94: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x47bf94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_47bf98:
    // 0x47bf98: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x47BF98u;
    {
        const bool branch_taken_0x47bf98 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x47BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BF98u;
        // 0x47bf9c: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47bf98) {
            ctx->pc = 0x47BFA4u;
            goto label_47bfa4;
        }
    }
    ctx->pc = 0x47BFA0u;
    // 0x47bfa0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x47bfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_47bfa4:
    // 0x47bfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47bfa8:
    // 0x47bfa8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x47bfa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x47bfac: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x47bfacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x47bfb0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x47bfb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47bfb4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x47bfb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47bfb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47bfb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47bfbc: 0x3e00008  jr          $ra
    ctx->pc = 0x47BFBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47BFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47BFBCu;
        // 0x47bfc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47BFBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47BFC4u;
    // 0x47bfc4: 0x0  nop
    ctx->pc = 0x47bfc4u;
    // NOP
    ctx->pc = 0x47bfc8u;
}
