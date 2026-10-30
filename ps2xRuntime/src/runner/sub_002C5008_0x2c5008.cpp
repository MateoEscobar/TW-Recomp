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

// Function: sub_002C5008
// Address: 0x2c5008 - 0x2c5120
void sub_002C5008_0x2c5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5008_0x2c5008");
#endif

    switch (ctx->pc) {
        case 0x2c5040u: goto label_2c5040;
        case 0x2c5050u: goto label_2c5050;
        case 0x2c5088u: goto label_2c5088;
        case 0x2c50a8u: goto label_2c50a8;
        case 0x2c50c4u: goto label_2c50c4;
        case 0x2c50ecu: goto label_2c50ec;
        case 0x2c50f8u: goto label_2c50f8;
        default: break;
    }

    ctx->pc = 0x2c5008u;

    // 0x2c5008: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c500c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2c500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2c5010: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2c5010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2c5014: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c5014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5018: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2c5018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2c501c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c501cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5020: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c5020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c5024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5028: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2c5028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2c502c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2c502cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2c5030: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x2c5030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x2c5034: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x2c5034u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5038: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C5038u;
    SET_GPR_U32(ctx, 31, 0x2C5040u);
    ctx->pc = 0x2C503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5038u;
    // 0x2c503c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C5038u, 0x2C5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5040u;
label_2c5040:
    // 0x2c5040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c5044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5048: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C5048u;
    SET_GPR_U32(ctx, 31, 0x2C5050u);
    ctx->pc = 0x2C504Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5048u;
    // 0x2c504c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C5048u, 0x2C5050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5050u;
label_2c5050:
    // 0x2c5050: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2C5050u;
    {
        const bool branch_taken_0x2c5050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5050u;
        // 0x2c5054: 0x26320090  addiu       $s2, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5050) {
            ctx->pc = 0x2C5100u;
            goto label_2c5100;
        }
    }
    ctx->pc = 0x2C5058u;
    // 0x2c5058: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2c5058u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2c505c: 0x86450002  lh          $a1, 0x2($s2)
    ctx->pc = 0x2c505cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c5060: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2c5060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2c5064: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2c5064u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2c5068: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c5068u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c506c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2c506cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2c5070: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2c5070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2c5074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c5074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c5078: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2c5078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2c507c: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x2c507cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x2c5080: 0xc105e44  jal         func_417910
    ctx->pc = 0x2C5080u;
    SET_GPR_U32(ctx, 31, 0x2C5088u);
    ctx->pc = 0x2C5084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5080u;
    // 0x2c5084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417910u, 0x2C5080u, 0x2C5088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5088u;
label_2c5088:
    // 0x2c5088: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c5088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c508c: 0x52200010  beql        $s1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C508Cu;
    {
        const bool branch_taken_0x2c508c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c508c) {
            ctx->pc = 0x2C5090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C508Cu;
            // 0x2c5090: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C50D0u;
            goto label_2c50d0;
        }
    }
    ctx->pc = 0x2C5094u;
    // 0x2c5094: 0x86500002  lh          $s0, 0x2($s2)
    ctx->pc = 0x2c5094u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x2c5098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c5098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c509c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2c509cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2c50a0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C50A0u;
    SET_GPR_U32(ctx, 31, 0x2C50A8u);
    ctx->pc = 0x2C50A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50A0u;
    // 0x2c50a4: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C50A0u, 0x2C50A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50A8u;
label_2c50a8:
    // 0x2c50a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c50a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c50acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c50b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c50b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c50b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c50bc: 0xc09381e  jal         func_24E078
    ctx->pc = 0x2C50BCu;
    SET_GPR_U32(ctx, 31, 0x2C50C4u);
    ctx->pc = 0x2C50C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50BCu;
    // 0x2c50c0: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x2C50BCu, 0x2C50C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50C4u;
label_2c50c4:
    // 0x2c50c4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2C50C4u;
    {
        const bool branch_taken_0x2c50c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c50c4) {
            ctx->pc = 0x2C50F0u;
            goto label_2c50f0;
        }
    }
    ctx->pc = 0x2C50CCu;
    // 0x2c50cc: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x2c50ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_2c50d0:
    // 0x2c50d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c50d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c50d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c50d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50dc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c50dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c50e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c50e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c50e4: 0xc105df6  jal         func_4177D8
    ctx->pc = 0x2C50E4u;
    SET_GPR_U32(ctx, 31, 0x2C50ECu);
    ctx->pc = 0x2C50E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50E4u;
    // 0x2c50e8: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4177D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4177D8u, 0x2C50E4u, 0x2C50ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50ECu;
label_2c50ec:
    // 0x2c50ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c50ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c50f0:
    // 0x2c50f0: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2C50F0u;
    SET_GPR_U32(ctx, 31, 0x2C50F8u);
    ctx->pc = 0x2C50F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C50F0u;
    // 0x2c50f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2C50F0u, 0x2C50F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C50F8u;
label_2c50f8:
    // 0x2c50f8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c50f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c50fc: 0x7e830020  sq          $v1, 0x20($s4)
    ctx->pc = 0x2c50fcu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 32), GPR_VEC(ctx, 3));
label_2c5100:
    // 0x2c5100: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2c5100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c5104: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2c5104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c5108: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2c5108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c510c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c510cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c5110: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2c5110u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5114: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5118: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C511Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5118u;
        // 0x2c511c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5120u;
}
