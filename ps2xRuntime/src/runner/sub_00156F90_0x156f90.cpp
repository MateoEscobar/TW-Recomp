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

// Function: sub_00156F90
// Address: 0x156f90 - 0x157090
void sub_00156F90_0x156f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156F90_0x156f90");
#endif

    switch (ctx->pc) {
        case 0x156f90u: goto label_156f90;
        case 0x156f94u: goto label_156f94;
        case 0x156f98u: goto label_156f98;
        case 0x156f9cu: goto label_156f9c;
        case 0x156fa0u: goto label_156fa0;
        case 0x156fa4u: goto label_156fa4;
        case 0x156fa8u: goto label_156fa8;
        case 0x156facu: goto label_156fac;
        case 0x156fb0u: goto label_156fb0;
        case 0x156fb4u: goto label_156fb4;
        case 0x156fb8u: goto label_156fb8;
        case 0x156fbcu: goto label_156fbc;
        case 0x156fc0u: goto label_156fc0;
        case 0x156fc4u: goto label_156fc4;
        case 0x156fc8u: goto label_156fc8;
        case 0x156fccu: goto label_156fcc;
        case 0x156fd0u: goto label_156fd0;
        case 0x156fd4u: goto label_156fd4;
        case 0x156fd8u: goto label_156fd8;
        case 0x156fdcu: goto label_156fdc;
        case 0x156fe0u: goto label_156fe0;
        case 0x156fe4u: goto label_156fe4;
        case 0x156fe8u: goto label_156fe8;
        case 0x156fecu: goto label_156fec;
        case 0x156ff0u: goto label_156ff0;
        case 0x156ff4u: goto label_156ff4;
        case 0x156ff8u: goto label_156ff8;
        case 0x156ffcu: goto label_156ffc;
        case 0x157000u: goto label_157000;
        case 0x157004u: goto label_157004;
        case 0x157008u: goto label_157008;
        case 0x15700cu: goto label_15700c;
        case 0x157010u: goto label_157010;
        case 0x157014u: goto label_157014;
        case 0x157018u: goto label_157018;
        case 0x15701cu: goto label_15701c;
        case 0x157020u: goto label_157020;
        case 0x157024u: goto label_157024;
        case 0x157028u: goto label_157028;
        case 0x15702cu: goto label_15702c;
        case 0x157030u: goto label_157030;
        case 0x157034u: goto label_157034;
        case 0x157038u: goto label_157038;
        case 0x15703cu: goto label_15703c;
        case 0x157040u: goto label_157040;
        case 0x157044u: goto label_157044;
        case 0x157048u: goto label_157048;
        case 0x15704cu: goto label_15704c;
        case 0x157050u: goto label_157050;
        case 0x157054u: goto label_157054;
        case 0x157058u: goto label_157058;
        case 0x15705cu: goto label_15705c;
        case 0x157060u: goto label_157060;
        case 0x157064u: goto label_157064;
        case 0x157068u: goto label_157068;
        case 0x15706cu: goto label_15706c;
        case 0x157070u: goto label_157070;
        case 0x157074u: goto label_157074;
        case 0x157078u: goto label_157078;
        case 0x15707cu: goto label_15707c;
        case 0x157080u: goto label_157080;
        case 0x157084u: goto label_157084;
        case 0x157088u: goto label_157088;
        case 0x15708cu: goto label_15708c;
        default: break;
    }

    ctx->pc = 0x156f90u;

label_156f90:
    // 0x156f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_156f94:
    // 0x156f94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x156f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_156f98:
    // 0x156f98: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x156f98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_156f9c:
    // 0x156f9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x156f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_156fa0:
    // 0x156fa0: 0x8e05c6cc  lw          $a1, -0x3934($s0)
    ctx->pc = 0x156fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952652)));
label_156fa4:
    // 0x156fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_156fa8:
    // 0x156fa8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_156fac:
    if (ctx->pc == 0x156FACu) {
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA8u;
        // 0x156fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FB0u;
        goto label_156fb0;
    }
    ctx->pc = 0x156FA8u;
    {
        const bool branch_taken_0x156fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FA8u;
        // 0x156fac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fa8) {
            ctx->pc = 0x156FDCu;
            goto label_156fdc;
        }
    }
    ctx->pc = 0x156FB0u;
label_156fb0:
    // 0x156fb0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156fb4:
    // 0x156fb4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x156fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_156fb8:
    // 0x156fb8: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x156fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_156fbc:
    // 0x156fbc: 0x24c6eaf8  addiu       $a2, $a2, -0x1508
    ctx->pc = 0x156fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961912));
label_156fc0:
    // 0x156fc0: 0x24070082  addiu       $a3, $zero, 0x82
    ctx->pc = 0x156fc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_156fc4:
    // 0x156fc4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x156fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_156fc8:
    // 0x156fc8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x156fc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_156fcc:
    // 0x156fcc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x156fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_156fd0:
    // 0x156fd0: 0x60f809  jalr        $v1
label_156fd4:
    if (ctx->pc == 0x156FD4u) {
        ctx->pc = 0x156FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FD0u;
        // 0x156fd4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FD8u;
        goto label_156fd8;
    }
    ctx->pc = 0x156FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x156FD8u);
        ctx->pc = 0x156FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FD0u;
        // 0x156fd4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156FD0u, 0x156FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156FD8u;
label_156fd8:
    // 0x156fd8: 0xae00c6cc  sw          $zero, -0x3934($s0)
    ctx->pc = 0x156fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952652), GPR_U32(ctx, 0));
label_156fdc:
    // 0x156fdc: 0xc0579d2  jal         func_15E748
label_156fe0:
    if (ctx->pc == 0x156FE0u) {
        ctx->pc = 0x156FE4u;
        goto label_156fe4;
    }
    ctx->pc = 0x156FDCu;
    SET_GPR_U32(ctx, 31, 0x156FE4u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x156FDCu, 0x156FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FE4u;
label_156fe4:
    // 0x156fe4: 0x3842000a  xori        $v0, $v0, 0xA
    ctx->pc = 0x156fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
label_156fe8:
    // 0x156fe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_156fec:
    if (ctx->pc == 0x156FECu) {
        ctx->pc = 0x156FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE8u;
        // 0x156fec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FF0u;
        goto label_156ff0;
    }
    ctx->pc = 0x156FE8u;
    {
        const bool branch_taken_0x156fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x156FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FE8u;
        // 0x156fec: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156fe8) {
            ctx->pc = 0x156FF8u;
            goto label_156ff8;
        }
    }
    ctx->pc = 0x156FF0u;
label_156ff0:
    // 0x156ff0: 0xc043eda  jal         func_10FB68
label_156ff4:
    if (ctx->pc == 0x156FF4u) {
        ctx->pc = 0x156FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156FF0u;
        // 0x156ff4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156FF8u;
        goto label_156ff8;
    }
    ctx->pc = 0x156FF0u;
    SET_GPR_U32(ctx, 31, 0x156FF8u);
    ctx->pc = 0x156FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156FF0u;
    // 0x156ff4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FB68u, 0x156FF0u, 0x156FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156FF8u;
label_156ff8:
    // 0x156ff8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x156ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_156ffc:
    // 0x156ffc: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x156ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_157000:
    // 0x157000: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x157000u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
label_157004:
    // 0x157004: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_157008:
    if (ctx->pc == 0x157008u) {
        ctx->pc = 0x157008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157004u;
        // 0x157008: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15700Cu;
        goto label_15700c;
    }
    ctx->pc = 0x157004u;
    {
        const bool branch_taken_0x157004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x157008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157004u;
        // 0x157008: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157004) {
            ctx->pc = 0x157040u;
            goto label_157040;
        }
    }
    ctx->pc = 0x15700Cu;
label_15700c:
    // 0x15700c: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x15700cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_157010:
    // 0x157010: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x157010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_157014:
    // 0x157014: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x157014u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_157018:
    // 0x157018: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x157018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15701c:
    // 0x15701c: 0x40f809  jalr        $v0
label_157020:
    if (ctx->pc == 0x157020u) {
        ctx->pc = 0x157020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15701Cu;
        // 0x157020: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157024u;
        goto label_157024;
    }
    ctx->pc = 0x15701Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x157024u);
        ctx->pc = 0x157020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15701Cu;
        // 0x157020: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15701Cu, 0x157024u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157024u;
label_157024:
    // 0x157024: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_157028:
    if (ctx->pc == 0x157028u) {
        ctx->pc = 0x157028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157024u;
        // 0x157028: 0x8e05b734  lw          $a1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15702Cu;
        goto label_15702c;
    }
    ctx->pc = 0x157024u;
    {
        const bool branch_taken_0x157024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157024u;
        // 0x157028: 0x8e05b734  lw          $a1, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157024) {
            ctx->pc = 0x157040u;
            goto label_157040;
        }
    }
    ctx->pc = 0x15702Cu;
label_15702c:
    // 0x15702c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_157030:
    // 0x157030: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x157030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_157034:
    // 0x157034: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x157034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_157038:
    // 0x157038: 0x60f809  jalr        $v1
label_15703c:
    if (ctx->pc == 0x15703Cu) {
        ctx->pc = 0x15703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157038u;
        // 0x15703c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157040u;
        goto label_157040;
    }
    ctx->pc = 0x157038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x157040u);
        ctx->pc = 0x15703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157038u;
        // 0x15703c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157038u, 0x157040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x157040u;
label_157040:
    // 0x157040: 0xc0705c6  jal         func_1C1718
label_157044:
    if (ctx->pc == 0x157044u) {
        ctx->pc = 0x157044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157040u;
        // 0x157044: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157048u;
        goto label_157048;
    }
    ctx->pc = 0x157040u;
    SET_GPR_U32(ctx, 31, 0x157048u);
    ctx->pc = 0x157044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157040u;
    // 0x157044: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1718u, 0x157040u, 0x157048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157048u;
label_157048:
    // 0x157048: 0xc0579d2  jal         func_15E748
label_15704c:
    if (ctx->pc == 0x15704Cu) {
        ctx->pc = 0x157050u;
        goto label_157050;
    }
    ctx->pc = 0x157048u;
    SET_GPR_U32(ctx, 31, 0x157050u);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x157048u, 0x157050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157050u;
label_157050:
    // 0x157050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x157050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_157054:
    // 0x157054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157058:
    // 0x157058: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
label_15705c:
    if (ctx->pc == 0x15705Cu) {
        ctx->pc = 0x15705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157058u;
        // 0x15705c: 0x8e04b734  lw          $a0, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157060u;
        goto label_157060;
    }
    ctx->pc = 0x157058u;
    {
        const bool branch_taken_0x157058 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x157058) {
            ctx->pc = 0x15705Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157058u;
            // 0x15705c: 0x8e04b734  lw          $a0, -0x48CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157070u;
            goto label_157070;
        }
    }
    ctx->pc = 0x157060u;
label_157060:
    // 0x157060: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_157064:
    // 0x157064: 0x8c43eddc  lw          $v1, -0x1224($v0)
    ctx->pc = 0x157064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962652)));
label_157068:
    // 0x157068: 0xac6420ac  sw          $a0, 0x20AC($v1)
    ctx->pc = 0x157068u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8364), GPR_U32(ctx, 4));
label_15706c:
    // 0x15706c: 0x8e04b734  lw          $a0, -0x48CC($s0)
    ctx->pc = 0x15706cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
label_157070:
    // 0x157070: 0xc0517d8  jal         func_145F60
label_157074:
    if (ctx->pc == 0x157074u) {
        ctx->pc = 0x157074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157070u;
        // 0x157074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x157078u;
        goto label_157078;
    }
    ctx->pc = 0x157070u;
    SET_GPR_U32(ctx, 31, 0x157078u);
    ctx->pc = 0x157074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157070u;
    // 0x157074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x157070u, 0x157078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157078u;
label_157078:
    // 0x157078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x157078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15707c:
    // 0x15707c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15707cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_157080:
    // 0x157080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157084:
    // 0x157084: 0x3e00008  jr          $ra
label_157088:
    if (ctx->pc == 0x157088u) {
        ctx->pc = 0x157088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157084u;
        // 0x157088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15708Cu;
        goto label_15708c;
    }
    ctx->pc = 0x157084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157084u;
        // 0x157088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15708Cu;
label_15708c:
    // 0x15708c: 0x0  nop
    ctx->pc = 0x15708cu;
    // NOP
    ctx->pc = 0x157090u;
}
