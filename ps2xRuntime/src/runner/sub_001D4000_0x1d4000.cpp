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

// Function: sub_001D4000
// Address: 0x1d4000 - 0x1d4110
void sub_001D4000_0x1d4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4000_0x1d4000");
#endif

    switch (ctx->pc) {
        case 0x1d4000u: goto label_1d4000;
        case 0x1d4004u: goto label_1d4004;
        case 0x1d4008u: goto label_1d4008;
        case 0x1d400cu: goto label_1d400c;
        case 0x1d4010u: goto label_1d4010;
        case 0x1d4014u: goto label_1d4014;
        case 0x1d4018u: goto label_1d4018;
        case 0x1d401cu: goto label_1d401c;
        case 0x1d4020u: goto label_1d4020;
        case 0x1d4024u: goto label_1d4024;
        case 0x1d4028u: goto label_1d4028;
        case 0x1d402cu: goto label_1d402c;
        case 0x1d4030u: goto label_1d4030;
        case 0x1d4034u: goto label_1d4034;
        case 0x1d4038u: goto label_1d4038;
        case 0x1d403cu: goto label_1d403c;
        case 0x1d4040u: goto label_1d4040;
        case 0x1d4044u: goto label_1d4044;
        case 0x1d4048u: goto label_1d4048;
        case 0x1d404cu: goto label_1d404c;
        case 0x1d4050u: goto label_1d4050;
        case 0x1d4054u: goto label_1d4054;
        case 0x1d4058u: goto label_1d4058;
        case 0x1d405cu: goto label_1d405c;
        case 0x1d4060u: goto label_1d4060;
        case 0x1d4064u: goto label_1d4064;
        case 0x1d4068u: goto label_1d4068;
        case 0x1d406cu: goto label_1d406c;
        case 0x1d4070u: goto label_1d4070;
        case 0x1d4074u: goto label_1d4074;
        case 0x1d4078u: goto label_1d4078;
        case 0x1d407cu: goto label_1d407c;
        case 0x1d4080u: goto label_1d4080;
        case 0x1d4084u: goto label_1d4084;
        case 0x1d4088u: goto label_1d4088;
        case 0x1d408cu: goto label_1d408c;
        case 0x1d4090u: goto label_1d4090;
        case 0x1d4094u: goto label_1d4094;
        case 0x1d4098u: goto label_1d4098;
        case 0x1d409cu: goto label_1d409c;
        case 0x1d40a0u: goto label_1d40a0;
        case 0x1d40a4u: goto label_1d40a4;
        case 0x1d40a8u: goto label_1d40a8;
        case 0x1d40acu: goto label_1d40ac;
        case 0x1d40b0u: goto label_1d40b0;
        case 0x1d40b4u: goto label_1d40b4;
        case 0x1d40b8u: goto label_1d40b8;
        case 0x1d40bcu: goto label_1d40bc;
        case 0x1d40c0u: goto label_1d40c0;
        case 0x1d40c4u: goto label_1d40c4;
        case 0x1d40c8u: goto label_1d40c8;
        case 0x1d40ccu: goto label_1d40cc;
        case 0x1d40d0u: goto label_1d40d0;
        case 0x1d40d4u: goto label_1d40d4;
        case 0x1d40d8u: goto label_1d40d8;
        case 0x1d40dcu: goto label_1d40dc;
        case 0x1d40e0u: goto label_1d40e0;
        case 0x1d40e4u: goto label_1d40e4;
        case 0x1d40e8u: goto label_1d40e8;
        case 0x1d40ecu: goto label_1d40ec;
        case 0x1d40f0u: goto label_1d40f0;
        case 0x1d40f4u: goto label_1d40f4;
        case 0x1d40f8u: goto label_1d40f8;
        case 0x1d40fcu: goto label_1d40fc;
        case 0x1d4100u: goto label_1d4100;
        case 0x1d4104u: goto label_1d4104;
        case 0x1d4108u: goto label_1d4108;
        case 0x1d410cu: goto label_1d410c;
        default: break;
    }

    ctx->pc = 0x1d4000u;

label_1d4000:
    // 0x1d4000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1d4004:
    // 0x1d4004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d4008:
    // 0x1d4008: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d4008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1d400c:
    // 0x1d400c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d400cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d4010:
    // 0x1d4010: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d4010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1d4014:
    // 0x1d4014: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1d4018:
    // 0x1d4018: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d4018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_1d401c:
    // 0x1d401c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1d401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_1d4020:
    // 0x1d4020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d4024:
    // 0x1d4024: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1d4024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1d4028:
    // 0x1d4028: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_1d402c:
    if (ctx->pc == 0x1D402Cu) {
        ctx->pc = 0x1D402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4028u;
        // 0x1d402c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4030u;
        goto label_1d4030;
    }
    ctx->pc = 0x1D4028u;
    {
        const bool branch_taken_0x1d4028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D402Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4028u;
        // 0x1d402c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4028) {
            ctx->pc = 0x1D40F0u;
            goto label_1d40f0;
        }
    }
    ctx->pc = 0x1D4030u;
label_1d4030:
    // 0x1d4030: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d4030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d4034:
    // 0x1d4034: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x1d4034u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_1d4038:
    // 0x1d4038: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x1d4038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
label_1d403c:
    // 0x1d403c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d403cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d4040:
    // 0x1d4040: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d4040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d4044:
    // 0x1d4044: 0x60f809  jalr        $v1
label_1d4048:
    if (ctx->pc == 0x1D4048u) {
        ctx->pc = 0x1D4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4044u;
        // 0x1d4048: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D404Cu;
        goto label_1d404c;
    }
    ctx->pc = 0x1D4044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D404Cu);
        ctx->pc = 0x1D4048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4044u;
        // 0x1d4048: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4044u, 0x1D404Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D404Cu;
label_1d404c:
    // 0x1d404c: 0x26620070  addiu       $v0, $s3, 0x70
    ctx->pc = 0x1d404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_1d4050:
    // 0x1d4050: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1d4050u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1d4054:
    // 0x1d4054: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1d4054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d4058:
    // 0x1d4058: 0x1243001a  beq         $s2, $v1, . + 4 + (0x1A << 2)
label_1d405c:
    if (ctx->pc == 0x1D405Cu) {
        ctx->pc = 0x1D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4058u;
        // 0x1d405c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4060u;
        goto label_1d4060;
    }
    ctx->pc = 0x1D4058u;
    {
        const bool branch_taken_0x1d4058 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4058u;
        // 0x1d405c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4058) {
            ctx->pc = 0x1D40C4u;
            goto label_1d40c4;
        }
    }
    ctx->pc = 0x1D4060u;
label_1d4060:
    // 0x1d4060: 0x3c150055  lui         $s5, 0x55
    ctx->pc = 0x1d4060u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)85 << 16));
label_1d4064:
    // 0x1d4064: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x1d4064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1d4068:
    // 0x1d4068: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d406c:
    if (ctx->pc == 0x1D406Cu) {
        ctx->pc = 0x1D406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4068u;
        // 0x1d406c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4070u;
        goto label_1d4070;
    }
    ctx->pc = 0x1D4068u;
    {
        const bool branch_taken_0x1d4068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4068u;
        // 0x1d406c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4068) {
            ctx->pc = 0x1D40A0u;
            goto label_1d40a0;
        }
    }
    ctx->pc = 0x1D4070u;
label_1d4070:
    // 0x1d4070: 0x8e300050  lw          $s0, 0x50($s1)
    ctx->pc = 0x1d4070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1d4074:
    // 0x1d4074: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1d4078:
    if (ctx->pc == 0x1D4078u) {
        ctx->pc = 0x1D407Cu;
        goto label_1d407c;
    }
    ctx->pc = 0x1D4074u;
    {
        const bool branch_taken_0x1d4074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4074) {
            ctx->pc = 0x1D40A0u;
            goto label_1d40a0;
        }
    }
    ctx->pc = 0x1D407Cu;
label_1d407c:
    // 0x1d407c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4080:
    // 0x1d4080: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1d4080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1d4084:
    // 0x1d4084: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1d4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1d4088:
    // 0x1d4088: 0x60f809  jalr        $v1
label_1d408c:
    if (ctx->pc == 0x1D408Cu) {
        ctx->pc = 0x1D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4088u;
        // 0x1d408c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4090u;
        goto label_1d4090;
    }
    ctx->pc = 0x1D4088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4090u);
        ctx->pc = 0x1D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4088u;
        // 0x1d408c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4088u, 0x1D4090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4090u;
label_1d4090:
    // 0x1d4090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d4094:
    // 0x1d4094: 0x26a55f20  addiu       $a1, $s5, 0x5F20
    ctx->pc = 0x1d4094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 24352));
label_1d4098:
    // 0x1d4098: 0xc13a09c  jal         func_4E8270
label_1d409c:
    if (ctx->pc == 0x1D409Cu) {
        ctx->pc = 0x1D409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4098u;
        // 0x1d409c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40A0u;
        goto label_1d40a0;
    }
    ctx->pc = 0x1D4098u;
    SET_GPR_U32(ctx, 31, 0x1D40A0u);
    ctx->pc = 0x1D409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4098u;
    // 0x1d409c: 0x24060090  addiu       $a2, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8270u, 0x1D4098u, 0x1D40A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40A0u;
label_1d40a0:
    // 0x1d40a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1d40a4:
    if (ctx->pc == 0x1D40A4u) {
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A0u;
        // 0x1d40a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40A8u;
        goto label_1d40a8;
    }
    ctx->pc = 0x1D40A0u;
    {
        const bool branch_taken_0x1d40a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40A0u;
        // 0x1d40a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d40a0) {
            ctx->pc = 0x1D40B4u;
            goto label_1d40b4;
        }
    }
    ctx->pc = 0x1D40A8u;
label_1d40a8:
    // 0x1d40a8: 0x26a55f20  addiu       $a1, $s5, 0x5F20
    ctx->pc = 0x1d40a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 24352));
label_1d40ac:
    // 0x1d40ac: 0xc13a0bc  jal         func_4E82F0
label_1d40b0:
    if (ctx->pc == 0x1D40B0u) {
        ctx->pc = 0x1D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40ACu;
        // 0x1d40b0: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40B4u;
        goto label_1d40b4;
    }
    ctx->pc = 0x1D40ACu;
    SET_GPR_U32(ctx, 31, 0x1D40B4u);
    ctx->pc = 0x1D40B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40ACu;
    // 0x1d40b0: 0x24060095  addiu       $a2, $zero, 0x95 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 149));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E82F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E82F0u, 0x1D40ACu, 0x1D40B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40B4u;
label_1d40b4:
    // 0x1d40b4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x1d40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1d40b8:
    // 0x1d40b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d40b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d40bc:
    // 0x1d40bc: 0x5642ffea  bnel        $s2, $v0, . + 4 + (-0x16 << 2)
label_1d40c0:
    if (ctx->pc == 0x1D40C0u) {
        ctx->pc = 0x1D40C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40BCu;
        // 0x1d40c0: 0x8e6200a8  lw          $v0, 0xA8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40C4u;
        goto label_1d40c4;
    }
    ctx->pc = 0x1D40BCu;
    {
        const bool branch_taken_0x1d40bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d40bc) {
            ctx->pc = 0x1D40C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D40BCu;
            // 0x1d40c0: 0x8e6200a8  lw          $v0, 0xA8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4068;
        }
    }
    ctx->pc = 0x1D40C4u;
label_1d40c4:
    // 0x1d40c4: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x1d40c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1d40c8:
    // 0x1d40c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d40c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d40cc:
    // 0x1d40cc: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x1d40ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1d40d0:
    // 0x1d40d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d40d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d40d4:
    // 0x1d40d4: 0xc10c1bb  jal         func_4306EC
label_1d40d8:
    if (ctx->pc == 0x1D40D8u) {
        ctx->pc = 0x1D40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D40D4u;
        // 0x1d40d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D40DCu;
        goto label_1d40dc;
    }
    ctx->pc = 0x1D40D4u;
    SET_GPR_U32(ctx, 31, 0x1D40DCu);
    ctx->pc = 0x1D40D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D40D4u;
    // 0x1d40d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x1D40D4u, 0x1D40DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D40DCu;
label_1d40dc:
    // 0x1d40dc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1d40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1d40e0:
    // 0x1d40e0: 0x2118023  subu        $s0, $s0, $s1
    ctx->pc = 0x1d40e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1d40e4:
    // 0x1d40e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1d40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1d40e8:
    // 0x1d40e8: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x1d40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_1d40ec:
    // 0x1d40ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d40ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d40f0:
    // 0x1d40f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d40f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d40f4:
    // 0x1d40f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d40f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d40f8:
    // 0x1d40f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d40f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d40fc:
    // 0x1d40fc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d40fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d4100:
    // 0x1d4100: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1d4100u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d4104:
    // 0x1d4104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4108:
    // 0x1d4108: 0x3e00008  jr          $ra
label_1d410c:
    if (ctx->pc == 0x1D410Cu) {
        ctx->pc = 0x1D410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4108u;
        // 0x1d410c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4110u;
        goto label_fallthrough_0x1d4108;
    }
    ctx->pc = 0x1D4108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4108u;
        // 0x1d410c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d4108:
    ctx->pc = 0x1D4110u;
}
