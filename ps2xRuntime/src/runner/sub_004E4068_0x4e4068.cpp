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

// Function: sub_004E4068
// Address: 0x4e4068 - 0x4e4100
void sub_004E4068_0x4e4068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4068_0x4e4068");
#endif

    switch (ctx->pc) {
        case 0x4e4068u: goto label_4e4068;
        case 0x4e406cu: goto label_4e406c;
        case 0x4e4070u: goto label_4e4070;
        case 0x4e4074u: goto label_4e4074;
        case 0x4e4078u: goto label_4e4078;
        case 0x4e407cu: goto label_4e407c;
        case 0x4e4080u: goto label_4e4080;
        case 0x4e4084u: goto label_4e4084;
        case 0x4e4088u: goto label_4e4088;
        case 0x4e408cu: goto label_4e408c;
        case 0x4e4090u: goto label_4e4090;
        case 0x4e4094u: goto label_4e4094;
        case 0x4e4098u: goto label_4e4098;
        case 0x4e409cu: goto label_4e409c;
        case 0x4e40a0u: goto label_4e40a0;
        case 0x4e40a4u: goto label_4e40a4;
        case 0x4e40a8u: goto label_4e40a8;
        case 0x4e40acu: goto label_4e40ac;
        case 0x4e40b0u: goto label_4e40b0;
        case 0x4e40b4u: goto label_4e40b4;
        case 0x4e40b8u: goto label_4e40b8;
        case 0x4e40bcu: goto label_4e40bc;
        case 0x4e40c0u: goto label_4e40c0;
        case 0x4e40c4u: goto label_4e40c4;
        case 0x4e40c8u: goto label_4e40c8;
        case 0x4e40ccu: goto label_4e40cc;
        case 0x4e40d0u: goto label_4e40d0;
        case 0x4e40d4u: goto label_4e40d4;
        case 0x4e40d8u: goto label_4e40d8;
        case 0x4e40dcu: goto label_4e40dc;
        case 0x4e40e0u: goto label_4e40e0;
        case 0x4e40e4u: goto label_4e40e4;
        case 0x4e40e8u: goto label_4e40e8;
        case 0x4e40ecu: goto label_4e40ec;
        case 0x4e40f0u: goto label_4e40f0;
        case 0x4e40f4u: goto label_4e40f4;
        case 0x4e40f8u: goto label_4e40f8;
        case 0x4e40fcu: goto label_4e40fc;
        default: break;
    }

    ctx->pc = 0x4e4068u;

label_4e4068:
    // 0x4e4068: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e406c:
    // 0x4e406c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e406cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e4070:
    // 0x4e4070: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e4070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e4074:
    // 0x4e4074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4078:
    // 0x4e4078: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e4078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e407c:
    // 0x4e407c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e4080:
    // 0x4e4080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e4084:
    // 0x4e4084: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e4084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e4088:
    // 0x4e4088: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4e4088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e408c:
    // 0x4e408c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
label_4e4090:
    if (ctx->pc == 0x4E4090u) {
        ctx->pc = 0x4E4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E408Cu;
        // 0x4e4090: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4094u;
        goto label_4e4094;
    }
    ctx->pc = 0x4E408Cu;
    {
        const bool branch_taken_0x4e408c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E4090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E408Cu;
        // 0x4e4090: 0x3c13006f  lui         $s3, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e408c) {
            ctx->pc = 0x4E40D8u;
            goto label_4e40d8;
        }
    }
    ctx->pc = 0x4E4094u;
label_4e4094:
    // 0x4e4094: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x4e4094u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_4e4098:
    // 0x4e4098: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e4098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e409c:
    // 0x4e409c: 0x0  nop
    ctx->pc = 0x4e409cu;
    // NOP
label_4e40a0:
    // 0x4e40a0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4e40a4:
    if (ctx->pc == 0x4E40A4u) {
        ctx->pc = 0x4E40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40A0u;
        // 0x4e40a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E40A8u;
        goto label_4e40a8;
    }
    ctx->pc = 0x4E40A0u;
    {
        const bool branch_taken_0x4e40a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E40A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40A0u;
        // 0x4e40a4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e40a0) {
            ctx->pc = 0x4E40C8u;
            goto label_4e40c8;
        }
    }
    ctx->pc = 0x4E40A8u;
label_4e40a8:
    // 0x4e40a8: 0x8e68b9c0  lw          $t0, -0x4640($s3)
    ctx->pc = 0x4e40a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294949312)));
label_4e40ac:
    // 0x4e40ac: 0x26463ee0  addiu       $a2, $s2, 0x3EE0
    ctx->pc = 0x4e40acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16096));
label_4e40b0:
    // 0x4e40b0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e40b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e40b4:
    // 0x4e40b4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e40b8:
    // 0x4e40b8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e40b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e40bc:
    // 0x4e40bc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e40c0:
    // 0x4e40c0: 0x60f809  jalr        $v1
label_4e40c4:
    if (ctx->pc == 0x4E40C4u) {
        ctx->pc = 0x4E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40C0u;
        // 0x4e40c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E40C8u;
        goto label_4e40c8;
    }
    ctx->pc = 0x4E40C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E40C8u);
        ctx->pc = 0x4E40C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40C0u;
        // 0x4e40c4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E40C0u, 0x4E40C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E40C8u;
label_4e40c8:
    // 0x4e40c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e40c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e40cc:
    // 0x4e40cc: 0x1602fff4  bne         $s0, $v0, . + 4 + (-0xC << 2)
label_4e40d0:
    if (ctx->pc == 0x4E40D0u) {
        ctx->pc = 0x4E40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40CCu;
        // 0x4e40d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E40D4u;
        goto label_4e40d4;
    }
    ctx->pc = 0x4E40CCu;
    {
        const bool branch_taken_0x4e40cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x4E40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40CCu;
        // 0x4e40d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e40cc) {
            ctx->pc = 0x4E40A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e40a0;
        }
    }
    ctx->pc = 0x4E40D4u;
label_4e40d4:
    // 0x4e40d4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e40d8:
    // 0x4e40d8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e40d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e40dc:
    // 0x4e40dc: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x4e40dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
label_4e40e0:
    // 0x4e40e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e40e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e40e4:
    // 0x4e40e4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4e40e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e40e8:
    // 0x4e40e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e40e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e40ec:
    // 0x4e40ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e40ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e40f0:
    // 0x4e40f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e40f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e40f4:
    // 0x4e40f4: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x4e40f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_4e40f8:
    // 0x4e40f8: 0x3e00008  jr          $ra
label_4e40fc:
    if (ctx->pc == 0x4E40FCu) {
        ctx->pc = 0x4E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40F8u;
        // 0x4e40fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4100u;
        goto label_fallthrough_0x4e40f8;
    }
    ctx->pc = 0x4E40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40F8u;
        // 0x4e40fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E40F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e40f8:
    ctx->pc = 0x4E4100u;
}
