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

// Function: sub_001DCC28
// Address: 0x1dcc28 - 0x1dce80
void sub_001DCC28_0x1dcc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCC28_0x1dcc28");
#endif

    switch (ctx->pc) {
        case 0x1dcc50u: goto label_1dcc50;
        case 0x1dcc60u: goto label_1dcc60;
        case 0x1dcc74u: goto label_1dcc74;
        case 0x1dcc80u: goto label_1dcc80;
        case 0x1dcc94u: goto label_1dcc94;
        case 0x1dcca4u: goto label_1dcca4;
        case 0x1dccc8u: goto label_1dccc8;
        case 0x1dcce8u: goto label_1dcce8;
        case 0x1dcd08u: goto label_1dcd08;
        case 0x1dcd28u: goto label_1dcd28;
        case 0x1dcd48u: goto label_1dcd48;
        case 0x1dcd68u: goto label_1dcd68;
        case 0x1dcd88u: goto label_1dcd88;
        case 0x1dcda8u: goto label_1dcda8;
        case 0x1dce14u: goto label_1dce14;
        case 0x1dce60u: goto label_1dce60;
        default: break;
    }

    ctx->pc = 0x1dcc28u;

    // 0x1dcc28: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1dcc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1dcc2c: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x1dcc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x1dcc30: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x1dcc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x1dcc34: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dcc34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1dcc38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dcc38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc3c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x1dcc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x1dcc40: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1dcc40u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1dcc44: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1dcc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1dcc48: 0xc107444  jal         func_41D110
    ctx->pc = 0x1DCC48u;
    SET_GPR_U32(ctx, 31, 0x1DCC50u);
    ctx->pc = 0x1DCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC48u;
    // 0x1dcc4c: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1DCC48u, 0x1DCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC50u;
label_1dcc50:
    // 0x1dcc50: 0x54400084  bnel        $v0, $zero, . + 4 + (0x84 << 2)
    ctx->pc = 0x1DCC50u;
    {
        const bool branch_taken_0x1dcc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcc50) {
            ctx->pc = 0x1DCC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCC50u;
            // 0x1dcc54: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCE64u;
            goto label_1dce64;
        }
    }
    ctx->pc = 0x1DCC58u;
    // 0x1dcc58: 0xc107458  jal         func_41D160
    ctx->pc = 0x1DCC58u;
    SET_GPR_U32(ctx, 31, 0x1DCC60u);
    ctx->pc = 0x1DCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC58u;
    // 0x1dcc5c: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DCC58u, 0x1DCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC60u;
label_1dcc60:
    // 0x1dcc60: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x1DCC60u;
    {
        const bool branch_taken_0x1dcc60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCC60u;
        // 0x1dcc64: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcc60) {
            ctx->pc = 0x1DCE64u;
            goto label_1dce64;
        }
    }
    ctx->pc = 0x1DCC68u;
    // 0x1dcc68: 0x262420d0  addiu       $a0, $s1, 0x20D0
    ctx->pc = 0x1dcc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8400));
    // 0x1dcc6c: 0xc0692f0  jal         func_1A4BC0
    ctx->pc = 0x1DCC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC74u);
    ctx->pc = 0x1DCC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC6Cu;
    // 0x1dcc70: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x1DCC6Cu, 0x1DCC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC74u;
label_1dcc74:
    // 0x1dcc74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcc74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc78: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1DCC78u;
    SET_GPR_U32(ctx, 31, 0x1DCC80u);
    ctx->pc = 0x1DCC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC78u;
    // 0x1dcc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1DCC78u, 0x1DCC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC80u;
label_1dcc80:
    // 0x1dcc80: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1dcc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc88: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1dcc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1dcc8c: 0xc10c3ac  jal         func_430EB0
    ctx->pc = 0x1DCC8Cu;
    SET_GPR_U32(ctx, 31, 0x1DCC94u);
    ctx->pc = 0x1DCC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC8Cu;
    // 0x1dcc90: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1DCC8Cu, 0x1DCC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC94u;
label_1dcc94:
    // 0x1dcc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1dcc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc9c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1DCC9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCCA4u);
    ctx->pc = 0x1DCCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC9Cu;
    // 0x1dcca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1DCC9Cu, 0x1DCCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCA4u;
label_1dcca4:
    // 0x1dcca4: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x1dcca4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcca8: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1dcca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dccac: 0x14620042  bne         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1DCCACu;
    {
        const bool branch_taken_0x1dccac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCACu;
        // 0x1dccb0: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccac) {
            ctx->pc = 0x1DCDB8u;
            goto label_1dcdb8;
        }
    }
    ctx->pc = 0x1DCCB4u;
    // 0x1dccb4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dccb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dccb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccbc: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x1dccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
    // 0x1dccc0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCCC0u;
    SET_GPR_U32(ctx, 31, 0x1DCCC8u);
    ctx->pc = 0x1DCCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCC0u;
    // 0x1dccc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCCC0u, 0x1DCCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCC8u;
label_1dccc8:
    // 0x1dccc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCCC8u;
    {
        const bool branch_taken_0x1dccc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCC8u;
        // 0x1dcccc: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccc8) {
            ctx->pc = 0x1DCCD8u;
            goto label_1dccd8;
        }
    }
    ctx->pc = 0x1DCCD0u;
    // 0x1dccd0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DCCD0u;
    {
        const bool branch_taken_0x1dccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCD0u;
        // 0x1dccd4: 0x2412001b  addiu       $s2, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccd0) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCCD8u;
label_1dccd8:
    // 0x1dccd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dccd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccdc: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x1dccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x1dcce0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCCE0u;
    SET_GPR_U32(ctx, 31, 0x1DCCE8u);
    ctx->pc = 0x1DCCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCCE0u;
    // 0x1dcce4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCCE0u, 0x1DCCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCCE8u;
label_1dcce8:
    // 0x1dcce8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCCE8u;
    {
        const bool branch_taken_0x1dcce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCE8u;
        // 0x1dccec: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcce8) {
            ctx->pc = 0x1DCCF8u;
            goto label_1dccf8;
        }
    }
    ctx->pc = 0x1DCCF0u;
    // 0x1dccf0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1DCCF0u;
    {
        const bool branch_taken_0x1dccf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCCF0u;
        // 0x1dccf4: 0x24120019  addiu       $s2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dccf0) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCCF8u;
label_1dccf8:
    // 0x1dccf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dccfc: 0x24a562f8  addiu       $a1, $a1, 0x62F8
    ctx->pc = 0x1dccfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    // 0x1dcd00: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCD00u;
    SET_GPR_U32(ctx, 31, 0x1DCD08u);
    ctx->pc = 0x1DCD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD00u;
    // 0x1dcd04: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCD00u, 0x1DCD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD08u;
label_1dcd08:
    // 0x1dcd08: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD08u;
    {
        const bool branch_taken_0x1dcd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD08u;
        // 0x1dcd0c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd08) {
            ctx->pc = 0x1DCD18u;
            goto label_1dcd18;
        }
    }
    ctx->pc = 0x1DCD10u;
    // 0x1dcd10: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DCD10u;
    {
        const bool branch_taken_0x1dcd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD10u;
        // 0x1dcd14: 0x2412001a  addiu       $s2, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd10) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD18u;
label_1dcd18:
    // 0x1dcd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dcd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd1c: 0x24a56328  addiu       $a1, $a1, 0x6328
    ctx->pc = 0x1dcd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25384));
    // 0x1dcd20: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCD20u;
    SET_GPR_U32(ctx, 31, 0x1DCD28u);
    ctx->pc = 0x1DCD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD20u;
    // 0x1dcd24: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCD20u, 0x1DCD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD28u;
label_1dcd28:
    // 0x1dcd28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD28u;
    {
        const bool branch_taken_0x1dcd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD28u;
        // 0x1dcd2c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd28) {
            ctx->pc = 0x1DCD38u;
            goto label_1dcd38;
        }
    }
    ctx->pc = 0x1DCD30u;
    // 0x1dcd30: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1DCD30u;
    {
        const bool branch_taken_0x1dcd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD30u;
        // 0x1dcd34: 0x2412001d  addiu       $s2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd30) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD38u;
label_1dcd38:
    // 0x1dcd38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dcd38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd3c: 0x24a56360  addiu       $a1, $a1, 0x6360
    ctx->pc = 0x1dcd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25440));
    // 0x1dcd40: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCD40u;
    SET_GPR_U32(ctx, 31, 0x1DCD48u);
    ctx->pc = 0x1DCD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD40u;
    // 0x1dcd44: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCD40u, 0x1DCD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD48u;
label_1dcd48:
    // 0x1dcd48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD48u;
    {
        const bool branch_taken_0x1dcd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD48u;
        // 0x1dcd4c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd48) {
            ctx->pc = 0x1DCD58u;
            goto label_1dcd58;
        }
    }
    ctx->pc = 0x1DCD50u;
    // 0x1dcd50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DCD50u;
    {
        const bool branch_taken_0x1dcd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD50u;
        // 0x1dcd54: 0x2412001e  addiu       $s2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd50) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD58u;
label_1dcd58:
    // 0x1dcd58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dcd58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd5c: 0x24a56398  addiu       $a1, $a1, 0x6398
    ctx->pc = 0x1dcd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
    // 0x1dcd60: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCD60u;
    SET_GPR_U32(ctx, 31, 0x1DCD68u);
    ctx->pc = 0x1DCD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD60u;
    // 0x1dcd64: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCD60u, 0x1DCD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD68u;
label_1dcd68:
    // 0x1dcd68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD68u;
    {
        const bool branch_taken_0x1dcd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD68u;
        // 0x1dcd6c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd68) {
            ctx->pc = 0x1DCD78u;
            goto label_1dcd78;
        }
    }
    ctx->pc = 0x1DCD70u;
    // 0x1dcd70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCD70u;
    {
        const bool branch_taken_0x1dcd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD70u;
        // 0x1dcd74: 0x24120020  addiu       $s2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd70) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD78u;
label_1dcd78:
    // 0x1dcd78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dcd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd7c: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1dcd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    // 0x1dcd80: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCD80u;
    SET_GPR_U32(ctx, 31, 0x1DCD88u);
    ctx->pc = 0x1DCD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCD80u;
    // 0x1dcd84: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCD80u, 0x1DCD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCD88u;
label_1dcd88:
    // 0x1dcd88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCD88u;
    {
        const bool branch_taken_0x1dcd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD88u;
        // 0x1dcd8c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd88) {
            ctx->pc = 0x1DCD98u;
            goto label_1dcd98;
        }
    }
    ctx->pc = 0x1DCD90u;
    // 0x1dcd90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCD90u;
    {
        const bool branch_taken_0x1dcd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCD90u;
        // 0x1dcd94: 0x24120021  addiu       $s2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcd90) {
            ctx->pc = 0x1DCDB4u;
            goto label_1dcdb4;
        }
    }
    ctx->pc = 0x1DCD98u;
label_1dcd98:
    // 0x1dcd98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dcd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcd9c: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x1dcd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
    // 0x1dcda0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCDA0u;
    SET_GPR_U32(ctx, 31, 0x1DCDA8u);
    ctx->pc = 0x1DCDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCDA0u;
    // 0x1dcda4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCDA0u, 0x1DCDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCDA8u;
label_1dcda8:
    // 0x1dcda8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1dcda8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1dcdac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1dcdacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1dcdb0: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1dcdb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
label_1dcdb4:
    // 0x1dcdb4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1dcdb8:
    // 0x1dcdb8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1dcdb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1dcdbc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dcdbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dcdc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dcdc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcdc4: 0x8c64cdb4  lw          $a0, -0x324C($v1)
    ctx->pc = 0x1dcdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
    // 0x1dcdc8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dcdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dcdcc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dcdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcdd0: 0xe440ede8  swc1        $f0, -0x1218($v0)
    ctx->pc = 0x1dcdd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x50EDE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50EDE8u, _value); } while (0); }
    // 0x1dcdd4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1dcdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dcdd8: 0x3c013d0f  lui         $at, 0x3D0F
    ctx->pc = 0x1dcdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15631 << 16));
    // 0x1dcddc: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x1dcddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x1dcde0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dcde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dcde4: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1dcde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1dcde8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DCDE8u;
    {
        const bool branch_taken_0x1dcde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDE8u;
        // 0x1dcdec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcde8) {
            ctx->pc = 0x1DCE08u;
            goto label_1dce08;
        }
    }
    ctx->pc = 0x1DCDF0u;
    // 0x1dcdf0: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1dcdf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1dcdf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCDF4u;
    {
        const bool branch_taken_0x1dcdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDF4u;
        // 0x1dcdf8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcdf4) {
            ctx->pc = 0x1DCE08u;
            goto label_1dce08;
        }
    }
    ctx->pc = 0x1DCDFCu;
    // 0x1dcdfc: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1dcdfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1dce00: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dce00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dce04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dce04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dce08:
    // 0x1dce08: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1dce08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1dce0c: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DCE0Cu;
    SET_GPR_U32(ctx, 31, 0x1DCE14u);
    ctx->pc = 0x1DCE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE0Cu;
    // 0x1dce10: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DCE0Cu, 0x1DCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE14u;
label_1dce14:
    // 0x1dce14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1dce14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1dce18: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dce18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1dce1c: 0xc46fede0  lwc1        $f15, -0x1220($v1)
    ctx->pc = 0x1dce1cu;
    { uint32_t bits = FAST_READ32(0x50EDE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dce20: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dce20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dce24: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x1dce24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x1dce28: 0xc60eede8  lwc1        $f14, -0x1218($s0)
    ctx->pc = 0x1dce28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294962664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dce2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dce2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dce30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1dce30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dce34: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1dce34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1dce38: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dce38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dce3c: 0x24a56410  addiu       $a1, $a1, 0x6410
    ctx->pc = 0x1dce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    // 0x1dce40: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1dce40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dce44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dce48: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1dce48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce4c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1dce4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dce50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dce50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce54: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1dce54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dce58: 0xc06ce46  jal         func_1B3918
    ctx->pc = 0x1DCE58u;
    SET_GPR_U32(ctx, 31, 0x1DCE60u);
    ctx->pc = 0x1DCE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE58u;
    // 0x1dce5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3918u, 0x1DCE58u, 0x1DCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE60u;
label_1dce60:
    // 0x1dce60: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x1dce60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1dce64:
    // 0x1dce64: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x1dce64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1dce68: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x1dce68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dce6c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1dce6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dce70: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1dce70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dce74: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCE74u;
        // 0x1dce78: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCE7Cu;
    // 0x1dce7c: 0x0  nop
    ctx->pc = 0x1dce7cu;
    // NOP
    ctx->pc = 0x1dce80u;
}
