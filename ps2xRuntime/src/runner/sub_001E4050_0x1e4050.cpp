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

// Function: sub_001E4050
// Address: 0x1e4050 - 0x1e4130
void sub_001E4050_0x1e4050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4050_0x1e4050");
#endif

    switch (ctx->pc) {
        case 0x1e4050u: goto label_1e4050;
        case 0x1e4054u: goto label_1e4054;
        case 0x1e4058u: goto label_1e4058;
        case 0x1e405cu: goto label_1e405c;
        case 0x1e4060u: goto label_1e4060;
        case 0x1e4064u: goto label_1e4064;
        case 0x1e4068u: goto label_1e4068;
        case 0x1e406cu: goto label_1e406c;
        case 0x1e4070u: goto label_1e4070;
        case 0x1e4074u: goto label_1e4074;
        case 0x1e4078u: goto label_1e4078;
        case 0x1e407cu: goto label_1e407c;
        case 0x1e4080u: goto label_1e4080;
        case 0x1e4084u: goto label_1e4084;
        case 0x1e4088u: goto label_1e4088;
        case 0x1e408cu: goto label_1e408c;
        case 0x1e4090u: goto label_1e4090;
        case 0x1e4094u: goto label_1e4094;
        case 0x1e4098u: goto label_1e4098;
        case 0x1e409cu: goto label_1e409c;
        case 0x1e40a0u: goto label_1e40a0;
        case 0x1e40a4u: goto label_1e40a4;
        case 0x1e40a8u: goto label_1e40a8;
        case 0x1e40acu: goto label_1e40ac;
        case 0x1e40b0u: goto label_1e40b0;
        case 0x1e40b4u: goto label_1e40b4;
        case 0x1e40b8u: goto label_1e40b8;
        case 0x1e40bcu: goto label_1e40bc;
        case 0x1e40c0u: goto label_1e40c0;
        case 0x1e40c4u: goto label_1e40c4;
        case 0x1e40c8u: goto label_1e40c8;
        case 0x1e40ccu: goto label_1e40cc;
        case 0x1e40d0u: goto label_1e40d0;
        case 0x1e40d4u: goto label_1e40d4;
        case 0x1e40d8u: goto label_1e40d8;
        case 0x1e40dcu: goto label_1e40dc;
        case 0x1e40e0u: goto label_1e40e0;
        case 0x1e40e4u: goto label_1e40e4;
        case 0x1e40e8u: goto label_1e40e8;
        case 0x1e40ecu: goto label_1e40ec;
        case 0x1e40f0u: goto label_1e40f0;
        case 0x1e40f4u: goto label_1e40f4;
        case 0x1e40f8u: goto label_1e40f8;
        case 0x1e40fcu: goto label_1e40fc;
        case 0x1e4100u: goto label_1e4100;
        case 0x1e4104u: goto label_1e4104;
        case 0x1e4108u: goto label_1e4108;
        case 0x1e410cu: goto label_1e410c;
        case 0x1e4110u: goto label_1e4110;
        case 0x1e4114u: goto label_1e4114;
        case 0x1e4118u: goto label_1e4118;
        case 0x1e411cu: goto label_1e411c;
        case 0x1e4120u: goto label_1e4120;
        case 0x1e4124u: goto label_1e4124;
        case 0x1e4128u: goto label_1e4128;
        case 0x1e412cu: goto label_1e412c;
        default: break;
    }

    ctx->pc = 0x1e4050u;

label_1e4050:
    // 0x1e4050: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e4054:
    // 0x1e4054: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1e4054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1e4058:
    // 0x1e4058: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e405c:
    // 0x1e405c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1e405cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1e4060:
    // 0x1e4060: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e4060u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4064:
    // 0x1e4064: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e4064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1e4068:
    // 0x1e4068: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1e406c:
    // 0x1e406c: 0x2442c490  addiu       $v0, $v0, -0x3B70
    ctx->pc = 0x1e406cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952080));
label_1e4070:
    // 0x1e4070: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1e4074:
    // 0x1e4074: 0x2463c4b8  addiu       $v1, $v1, -0x3B48
    ctx->pc = 0x1e4074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952120));
label_1e4078:
    // 0x1e4078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e407c:
    // 0x1e407c: 0x26501c60  addiu       $s0, $s2, 0x1C60
    ctx->pc = 0x1e407cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 7264));
label_1e4080:
    // 0x1e4080: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e4080u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e4084:
    // 0x1e4084: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x1e4084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_1e4088:
    // 0x1e4088: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1e4088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1e408c:
    // 0x1e408c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e408cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e4090:
    // 0x1e4090: 0xc06870c  jal         func_1A1C30
label_1e4094:
    if (ctx->pc == 0x1E4094u) {
        ctx->pc = 0x1E4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4090u;
        // 0x1e4094: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4098u;
        goto label_1e4098;
    }
    ctx->pc = 0x1E4090u;
    SET_GPR_U32(ctx, 31, 0x1E4098u);
    ctx->pc = 0x1E4094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4090u;
    // 0x1e4094: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x1E4090u, 0x1E4098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4098u;
label_1e4098:
    // 0x1e4098: 0x26420ed0  addiu       $v0, $s2, 0xED0
    ctx->pc = 0x1e4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
label_1e409c:
    // 0x1e409c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1e40a0:
    if (ctx->pc == 0x1E40A0u) {
        ctx->pc = 0x1E40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E409Cu;
        // 0x1e40a0: 0x26510140  addiu       $s1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40A4u;
        goto label_1e40a4;
    }
    ctx->pc = 0x1E409Cu;
    {
        const bool branch_taken_0x1e409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E409Cu;
        // 0x1e40a0: 0x26510140  addiu       $s1, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e409c) {
            ctx->pc = 0x1E40D4u;
            goto label_1e40d4;
        }
    }
    ctx->pc = 0x1E40A4u;
label_1e40a4:
    // 0x1e40a4: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_1e40a8:
    if (ctx->pc == 0x1E40A8u) {
        ctx->pc = 0x1E40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40A4u;
        // 0x1e40a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40ACu;
        goto label_1e40ac;
    }
    ctx->pc = 0x1E40A4u;
    {
        const bool branch_taken_0x1e40a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1E40A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40A4u;
        // 0x1e40a8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40a4) {
            ctx->pc = 0x1E40D0u;
            goto label_1e40d0;
        }
    }
    ctx->pc = 0x1E40ACu;
label_1e40ac:
    // 0x1e40ac: 0x2610fe10  addiu       $s0, $s0, -0x1F0
    ctx->pc = 0x1e40acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
label_1e40b0:
    // 0x1e40b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e40b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e40b4:
    // 0x1e40b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e40b8:
    // 0x1e40b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e40b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e40bc:
    // 0x1e40bc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e40c0:
    // 0x1e40c0: 0x60f809  jalr        $v1
label_1e40c4:
    if (ctx->pc == 0x1E40C4u) {
        ctx->pc = 0x1E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C0u;
        // 0x1e40c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40C8u;
        goto label_1e40c8;
    }
    ctx->pc = 0x1E40C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E40C8u);
        ctx->pc = 0x1E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C0u;
        // 0x1e40c4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E40C0u, 0x1E40C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E40C8u;
label_1e40c8:
    // 0x1e40c8: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e40cc:
    if (ctx->pc == 0x1E40CCu) {
        ctx->pc = 0x1E40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C8u;
        // 0x1e40cc: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40D0u;
        goto label_1e40d0;
    }
    ctx->pc = 0x1E40C8u;
    {
        const bool branch_taken_0x1e40c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E40CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40C8u;
        // 0x1e40cc: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40c8) {
            ctx->pc = 0x1E40B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e40b0;
        }
    }
    ctx->pc = 0x1E40D0u;
label_1e40d0:
    // 0x1e40d0: 0x26510140  addiu       $s1, $s2, 0x140
    ctx->pc = 0x1e40d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
label_1e40d4:
    // 0x1e40d4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_1e40d8:
    if (ctx->pc == 0x1E40D8u) {
        ctx->pc = 0x1E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40D4u;
        // 0x1e40d8: 0x26500ed0  addiu       $s0, $s2, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40DCu;
        goto label_1e40dc;
    }
    ctx->pc = 0x1E40D4u;
    {
        const bool branch_taken_0x1e40d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40D4u;
        // 0x1e40d8: 0x26500ed0  addiu       $s0, $s2, 0xED0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 3792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40d4) {
            ctx->pc = 0x1E4108u;
            goto label_1e4108;
        }
    }
    ctx->pc = 0x1E40DCu;
label_1e40dc:
    // 0x1e40dc: 0x5230000b  beql        $s1, $s0, . + 4 + (0xB << 2)
label_1e40e0:
    if (ctx->pc == 0x1E40E0u) {
        ctx->pc = 0x1E40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40DCu;
        // 0x1e40e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E40E4u;
        goto label_1e40e4;
    }
    ctx->pc = 0x1E40DCu;
    {
        const bool branch_taken_0x1e40dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x1e40dc) {
            ctx->pc = 0x1E40E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E40DCu;
            // 0x1e40e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E410Cu;
            goto label_1e410c;
        }
    }
    ctx->pc = 0x1E40E4u;
label_1e40e4:
    // 0x1e40e4: 0x2610fe10  addiu       $s0, $s0, -0x1F0
    ctx->pc = 0x1e40e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
label_1e40e8:
    // 0x1e40e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e40e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e40ec:
    // 0x1e40ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e40ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1e40f0:
    // 0x1e40f0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e40f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_1e40f4:
    // 0x1e40f4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1e40f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_1e40f8:
    // 0x1e40f8: 0x60f809  jalr        $v1
label_1e40fc:
    if (ctx->pc == 0x1E40FCu) {
        ctx->pc = 0x1E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40F8u;
        // 0x1e40fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4100u;
        goto label_1e4100;
    }
    ctx->pc = 0x1E40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E4100u);
        ctx->pc = 0x1E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E40F8u;
        // 0x1e40fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E40F8u, 0x1E4100u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4100u;
label_1e4100:
    // 0x1e4100: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_1e4104:
    if (ctx->pc == 0x1E4104u) {
        ctx->pc = 0x1E4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4100u;
        // 0x1e4104: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4108u;
        goto label_1e4108;
    }
    ctx->pc = 0x1E4100u;
    {
        const bool branch_taken_0x1e4100 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x1E4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4100u;
        // 0x1e4104: 0x2610fe10  addiu       $s0, $s0, -0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4100) {
            ctx->pc = 0x1E40E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e40e8;
        }
    }
    ctx->pc = 0x1E4108u;
label_1e4108:
    // 0x1e4108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e4108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e410c:
    // 0x1e410c: 0xc078d30  jal         func_1E34C0
label_1e4110:
    if (ctx->pc == 0x1E4110u) {
        ctx->pc = 0x1E4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E410Cu;
        // 0x1e4110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4114u;
        goto label_1e4114;
    }
    ctx->pc = 0x1E410Cu;
    SET_GPR_U32(ctx, 31, 0x1E4114u);
    ctx->pc = 0x1E4110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E410Cu;
    // 0x1e4110: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E34C0u, 0x1E410Cu, 0x1E4114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4114u;
label_1e4114:
    // 0x1e4114: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e4114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e4118:
    // 0x1e4118: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e4118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e411c:
    // 0x1e411c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e411cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e4120:
    // 0x1e4120: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e4120u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e4124:
    // 0x1e4124: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4128:
    // 0x1e4128: 0x3e00008  jr          $ra
label_1e412c:
    if (ctx->pc == 0x1E412Cu) {
        ctx->pc = 0x1E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4128u;
        // 0x1e412c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4130u;
        goto label_fallthrough_0x1e4128;
    }
    ctx->pc = 0x1E4128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4128u;
        // 0x1e412c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e4128:
    ctx->pc = 0x1E4130u;
}
