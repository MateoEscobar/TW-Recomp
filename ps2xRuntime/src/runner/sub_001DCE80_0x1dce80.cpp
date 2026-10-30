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

// Function: sub_001DCE80
// Address: 0x1dce80 - 0x1dd0b8
void sub_001DCE80_0x1dce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCE80_0x1dce80");
#endif

    switch (ctx->pc) {
        case 0x1dcea4u: goto label_1dcea4;
        case 0x1dceb4u: goto label_1dceb4;
        case 0x1dcec8u: goto label_1dcec8;
        case 0x1dced8u: goto label_1dced8;
        case 0x1dcef8u: goto label_1dcef8;
        case 0x1dcf18u: goto label_1dcf18;
        case 0x1dcf38u: goto label_1dcf38;
        case 0x1dcf58u: goto label_1dcf58;
        case 0x1dcf78u: goto label_1dcf78;
        case 0x1dcf98u: goto label_1dcf98;
        case 0x1dcfb8u: goto label_1dcfb8;
        case 0x1dcfd8u: goto label_1dcfd8;
        case 0x1dd050u: goto label_1dd050;
        case 0x1dd09cu: goto label_1dd09c;
        default: break;
    }

    ctx->pc = 0x1dce80u;

    // 0x1dce80: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1dce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1dce84: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1dce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1dce88: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1dce88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x1dce8c: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1dce8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1dce90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dce90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce94: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1dce94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1dce98: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x1dce98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1dce9c: 0xc107444  jal         func_41D110
    ctx->pc = 0x1DCE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCEA4u);
    ctx->pc = 0x1DCEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE9Cu;
    // 0x1dcea0: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x1DCE9Cu, 0x1DCEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCEA4u;
label_1dcea4:
    // 0x1dcea4: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x1DCEA4u;
    {
        const bool branch_taken_0x1dcea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dcea4) {
            ctx->pc = 0x1DCEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCEA4u;
            // 0x1dcea8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DD0A0u;
            goto label_1dd0a0;
        }
    }
    ctx->pc = 0x1DCEACu;
    // 0x1dceac: 0xc107458  jal         func_41D160
    ctx->pc = 0x1DCEACu;
    SET_GPR_U32(ctx, 31, 0x1DCEB4u);
    ctx->pc = 0x1DCEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCEACu;
    // 0x1dceb0: 0x8e04489c  lw          $a0, 0x489C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x1DCEACu, 0x1DCEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCEB4u;
label_1dceb4:
    // 0x1dceb4: 0x1440007a  bnez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1DCEB4u;
    {
        const bool branch_taken_0x1dceb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEB4u;
        // 0x1dceb8: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dceb4) {
            ctx->pc = 0x1DD0A0u;
            goto label_1dd0a0;
        }
    }
    ctx->pc = 0x1DCEBCu;
    // 0x1dcebc: 0x26242430  addiu       $a0, $s1, 0x2430
    ctx->pc = 0x1dcebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9264));
    // 0x1dcec0: 0xc0692f0  jal         func_1A4BC0
    ctx->pc = 0x1DCEC0u;
    SET_GPR_U32(ctx, 31, 0x1DCEC8u);
    ctx->pc = 0x1DCEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCEC0u;
    // 0x1dcec4: 0xa3a00010  sb          $zero, 0x10($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4BC0u, 0x1DCEC0u, 0x1DCEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCEC8u;
label_1dcec8:
    // 0x1dcec8: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x1dcec8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1dcecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dceccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dced0: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1DCED0u;
    SET_GPR_U32(ctx, 31, 0x1DCED8u);
    ctx->pc = 0x1DCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCED0u;
    // 0x1dced4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1DCED0u, 0x1DCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCED8u;
label_1dced8:
    // 0x1dced8: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x1dced8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcedc: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x1dcedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1dcee0: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1DCEE0u;
    {
        const bool branch_taken_0x1dcee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEE0u;
        // 0x1dcee4: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcee0) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCEE8u;
    // 0x1dcee8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dceec: 0x24a56210  addiu       $a1, $a1, 0x6210
    ctx->pc = 0x1dceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25104));
    // 0x1dcef0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCEF0u;
    SET_GPR_U32(ctx, 31, 0x1DCEF8u);
    ctx->pc = 0x1DCEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCEF0u;
    // 0x1dcef4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCEF0u, 0x1DCEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCEF8u;
label_1dcef8:
    // 0x1dcef8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCEF8u;
    {
        const bool branch_taken_0x1dcef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEF8u;
        // 0x1dcefc: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcef8) {
            ctx->pc = 0x1DCF08u;
            goto label_1dcf08;
        }
    }
    ctx->pc = 0x1DCF00u;
    // 0x1dcf00: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DCF00u;
    {
        const bool branch_taken_0x1dcf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF00u;
        // 0x1dcf04: 0x2410001b  addiu       $s0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf00) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCF08u;
label_1dcf08:
    // 0x1dcf08: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcf0c: 0x24a562c0  addiu       $a1, $a1, 0x62C0
    ctx->pc = 0x1dcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    // 0x1dcf10: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCF10u;
    SET_GPR_U32(ctx, 31, 0x1DCF18u);
    ctx->pc = 0x1DCF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF10u;
    // 0x1dcf14: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCF10u, 0x1DCF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF18u;
label_1dcf18:
    // 0x1dcf18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF18u;
    {
        const bool branch_taken_0x1dcf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF18u;
        // 0x1dcf1c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf18) {
            ctx->pc = 0x1DCF28u;
            goto label_1dcf28;
        }
    }
    ctx->pc = 0x1DCF20u;
    // 0x1dcf20: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1DCF20u;
    {
        const bool branch_taken_0x1dcf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF20u;
        // 0x1dcf24: 0x24100019  addiu       $s0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf20) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCF28u;
label_1dcf28:
    // 0x1dcf28: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcf2c: 0x24a562f8  addiu       $a1, $a1, 0x62F8
    ctx->pc = 0x1dcf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    // 0x1dcf30: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCF30u;
    SET_GPR_U32(ctx, 31, 0x1DCF38u);
    ctx->pc = 0x1DCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF30u;
    // 0x1dcf34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCF30u, 0x1DCF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF38u;
label_1dcf38:
    // 0x1dcf38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF38u;
    {
        const bool branch_taken_0x1dcf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF38u;
        // 0x1dcf3c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf38) {
            ctx->pc = 0x1DCF48u;
            goto label_1dcf48;
        }
    }
    ctx->pc = 0x1DCF40u;
    // 0x1dcf40: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1DCF40u;
    {
        const bool branch_taken_0x1dcf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF40u;
        // 0x1dcf44: 0x2410001a  addiu       $s0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf40) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCF48u;
label_1dcf48:
    // 0x1dcf48: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcf48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcf4c: 0x24a56328  addiu       $a1, $a1, 0x6328
    ctx->pc = 0x1dcf4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25384));
    // 0x1dcf50: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCF50u;
    SET_GPR_U32(ctx, 31, 0x1DCF58u);
    ctx->pc = 0x1DCF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF50u;
    // 0x1dcf54: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCF50u, 0x1DCF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF58u;
label_1dcf58:
    // 0x1dcf58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF58u;
    {
        const bool branch_taken_0x1dcf58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF58u;
        // 0x1dcf5c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf58) {
            ctx->pc = 0x1DCF68u;
            goto label_1dcf68;
        }
    }
    ctx->pc = 0x1DCF60u;
    // 0x1dcf60: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1DCF60u;
    {
        const bool branch_taken_0x1dcf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF60u;
        // 0x1dcf64: 0x2410001d  addiu       $s0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf60) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCF68u;
label_1dcf68:
    // 0x1dcf68: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcf6c: 0x24a56360  addiu       $a1, $a1, 0x6360
    ctx->pc = 0x1dcf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25440));
    // 0x1dcf70: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCF70u;
    SET_GPR_U32(ctx, 31, 0x1DCF78u);
    ctx->pc = 0x1DCF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF70u;
    // 0x1dcf74: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCF70u, 0x1DCF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF78u;
label_1dcf78:
    // 0x1dcf78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF78u;
    {
        const bool branch_taken_0x1dcf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF78u;
        // 0x1dcf7c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf78) {
            ctx->pc = 0x1DCF88u;
            goto label_1dcf88;
        }
    }
    ctx->pc = 0x1DCF80u;
    // 0x1dcf80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DCF80u;
    {
        const bool branch_taken_0x1dcf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF80u;
        // 0x1dcf84: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf80) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCF88u;
label_1dcf88:
    // 0x1dcf88: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcf8c: 0x24a56398  addiu       $a1, $a1, 0x6398
    ctx->pc = 0x1dcf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
    // 0x1dcf90: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCF90u;
    SET_GPR_U32(ctx, 31, 0x1DCF98u);
    ctx->pc = 0x1DCF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCF90u;
    // 0x1dcf94: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCF90u, 0x1DCF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCF98u;
label_1dcf98:
    // 0x1dcf98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCF98u;
    {
        const bool branch_taken_0x1dcf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF98u;
        // 0x1dcf9c: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcf98) {
            ctx->pc = 0x1DCFA8u;
            goto label_1dcfa8;
        }
    }
    ctx->pc = 0x1DCFA0u;
    // 0x1dcfa0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1DCFA0u;
    {
        const bool branch_taken_0x1dcfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFA0u;
        // 0x1dcfa4: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfa0) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCFA8u;
label_1dcfa8:
    // 0x1dcfa8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcfac: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1dcfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    // 0x1dcfb0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCFB0u;
    SET_GPR_U32(ctx, 31, 0x1DCFB8u);
    ctx->pc = 0x1DCFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCFB0u;
    // 0x1dcfb4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCFB0u, 0x1DCFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFB8u;
label_1dcfb8:
    // 0x1dcfb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DCFB8u;
    {
        const bool branch_taken_0x1dcfb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFB8u;
        // 0x1dcfbc: 0x3c050055  lui         $a1, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfb8) {
            ctx->pc = 0x1DCFC8u;
            goto label_1dcfc8;
        }
    }
    ctx->pc = 0x1DCFC0u;
    // 0x1dcfc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DCFC0u;
    {
        const bool branch_taken_0x1dcfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFC0u;
        // 0x1dcfc4: 0x24100021  addiu       $s0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcfc0) {
            ctx->pc = 0x1DCFE4u;
            goto label_1dcfe4;
        }
    }
    ctx->pc = 0x1DCFC8u;
label_1dcfc8:
    // 0x1dcfc8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1dcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dcfcc: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x1dcfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
    // 0x1dcfd0: 0xc10c46c  jal         func_4311B0
    ctx->pc = 0x1DCFD0u;
    SET_GPR_U32(ctx, 31, 0x1DCFD8u);
    ctx->pc = 0x1DCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCFD0u;
    // 0x1dcfd4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4311B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4311B0u, 0x1DCFD0u, 0x1DCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCFD8u;
label_1dcfd8:
    // 0x1dcfd8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1dcfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1dcfdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1dcfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1dcfe0: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1dcfe0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1dcfe4:
    // 0x1dcfe4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1dcfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1dcfe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1dcfe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1dcfec: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x1dcfecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x1dcff0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dcff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dcff4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dcff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dcff8: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DCFF8u;
    {
        const bool branch_taken_0x1dcff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DCFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFF8u;
        // 0x1dcffc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcff8) {
            ctx->pc = 0x1DD00Cu;
            goto label_1dd00c;
        }
    }
    ctx->pc = 0x1DD000u;
    // 0x1dd000: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x1dd000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x1dd004: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dd004u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dd008: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dd008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dd00c:
    // 0x1dd00c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1dd00cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd010: 0xe440ede8  swc1        $f0, -0x1218($v0)
    ctx->pc = 0x1dd010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294962664), bits); }
    // 0x1dd014: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x1dd014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x1dd018: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1dd01c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dd01cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dd020: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dd020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dd024: 0x8c83cdb4  lw          $v1, -0x324C($a0)
    ctx->pc = 0x1dd024u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1dd028: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dd028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dd02c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1dd02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1dd030: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD030u;
    {
        const bool branch_taken_0x1dd030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD030u;
        // 0x1dd034: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd030) {
            ctx->pc = 0x1DD044u;
            goto label_1dd044;
        }
    }
    ctx->pc = 0x1DD038u;
    // 0x1dd038: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x1dd03c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1dd03cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1dd040: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dd040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1dd044:
    // 0x1dd044: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x1dd044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1dd048: 0xc04444c  jal         func_111130
    ctx->pc = 0x1DD048u;
    SET_GPR_U32(ctx, 31, 0x1DD050u);
    ctx->pc = 0x1DD04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD048u;
    // 0x1dd04c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1DD048u, 0x1DD050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD050u;
label_1dd050:
    // 0x1dd050: 0x24031f40  addiu       $v1, $zero, 0x1F40
    ctx->pc = 0x1dd050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    // 0x1dd054: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1dd054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1dd058: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dd058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dd05c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1dd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1dd060: 0xc4afede0  lwc1        $f15, -0x1220($a1)
    ctx->pc = 0x1dd060u;
    { uint32_t bits = FAST_READ32(0x50EDE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1dd064: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1dd064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1dd068: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1dd068u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1dd06c: 0xc62eede8  lwc1        $f14, -0x1218($s1)
    ctx->pc = 0x1dd06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294962664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1dd070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dd070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dd074: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1dd074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1dd078: 0x24a56410  addiu       $a1, $a1, 0x6410
    ctx->pc = 0x1dd078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    // 0x1dd07c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1dd07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd080: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dd080u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1dd084: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1dd084u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd088: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1dd088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dd08c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dd08cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd090: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1dd090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd094: 0xc06ce46  jal         func_1B3918
    ctx->pc = 0x1DD094u;
    SET_GPR_U32(ctx, 31, 0x1DD09Cu);
    ctx->pc = 0x1DD098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD094u;
    // 0x1dd098: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3918u, 0x1DD094u, 0x1DD09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD09Cu;
label_1dd09c:
    // 0x1dd09c: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1dd09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1dd0a0:
    // 0x1dd0a0: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1dd0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1dd0a4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1dd0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1dd0a8: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x1dd0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dd0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0ACu;
        // 0x1dd0b0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0B4u;
    // 0x1dd0b4: 0x0  nop
    ctx->pc = 0x1dd0b4u;
    // NOP
    ctx->pc = 0x1dd0b8u;
}
