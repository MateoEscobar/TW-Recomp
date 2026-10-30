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

// Function: sub_003ED9C0
// Address: 0x3ed9c0 - 0x3eda58
void sub_003ED9C0_0x3ed9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED9C0_0x3ed9c0");
#endif

    switch (ctx->pc) {
        case 0x3ed9c0u: goto label_3ed9c0;
        case 0x3ed9c4u: goto label_3ed9c4;
        case 0x3ed9c8u: goto label_3ed9c8;
        case 0x3ed9ccu: goto label_3ed9cc;
        case 0x3ed9d0u: goto label_3ed9d0;
        case 0x3ed9d4u: goto label_3ed9d4;
        case 0x3ed9d8u: goto label_3ed9d8;
        case 0x3ed9dcu: goto label_3ed9dc;
        case 0x3ed9e0u: goto label_3ed9e0;
        case 0x3ed9e4u: goto label_3ed9e4;
        case 0x3ed9e8u: goto label_3ed9e8;
        case 0x3ed9ecu: goto label_3ed9ec;
        case 0x3ed9f0u: goto label_3ed9f0;
        case 0x3ed9f4u: goto label_3ed9f4;
        case 0x3ed9f8u: goto label_3ed9f8;
        case 0x3ed9fcu: goto label_3ed9fc;
        case 0x3eda00u: goto label_3eda00;
        case 0x3eda04u: goto label_3eda04;
        case 0x3eda08u: goto label_3eda08;
        case 0x3eda0cu: goto label_3eda0c;
        case 0x3eda10u: goto label_3eda10;
        case 0x3eda14u: goto label_3eda14;
        case 0x3eda18u: goto label_3eda18;
        case 0x3eda1cu: goto label_3eda1c;
        case 0x3eda20u: goto label_3eda20;
        case 0x3eda24u: goto label_3eda24;
        case 0x3eda28u: goto label_3eda28;
        case 0x3eda2cu: goto label_3eda2c;
        case 0x3eda30u: goto label_3eda30;
        case 0x3eda34u: goto label_3eda34;
        case 0x3eda38u: goto label_3eda38;
        case 0x3eda3cu: goto label_3eda3c;
        case 0x3eda40u: goto label_3eda40;
        case 0x3eda44u: goto label_3eda44;
        case 0x3eda48u: goto label_3eda48;
        case 0x3eda4cu: goto label_3eda4c;
        case 0x3eda50u: goto label_3eda50;
        case 0x3eda54u: goto label_3eda54;
        default: break;
    }

    ctx->pc = 0x3ed9c0u;

label_3ed9c0:
    // 0x3ed9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ed9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ed9c4:
    // 0x3ed9c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ed9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ed9c8:
    // 0x3ed9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ed9cc:
    // 0x3ed9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ed9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ed9d0:
    // 0x3ed9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed9d4:
    // 0x3ed9d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ed9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ed9d8:
    // 0x3ed9d8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ed9d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ed9dc:
    // 0x3ed9dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ed9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ed9e0:
    // 0x3ed9e0: 0x40f809  jalr        $v0
label_3ed9e4:
    if (ctx->pc == 0x3ED9E4u) {
        ctx->pc = 0x3ED9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9E0u;
        // 0x3ed9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED9E8u;
        goto label_3ed9e8;
    }
    ctx->pc = 0x3ED9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ED9E8u);
        ctx->pc = 0x3ED9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9E0u;
        // 0x3ed9e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ED9E0u, 0x3ED9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ED9E8u;
label_3ed9e8:
    // 0x3ed9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ed9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ed9ec:
    // 0x3ed9ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed9f0:
    // 0x3ed9f0: 0xc0e858c  jal         func_3A1630
label_3ed9f4:
    if (ctx->pc == 0x3ED9F4u) {
        ctx->pc = 0x3ED9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9F0u;
        // 0x3ed9f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ED9F8u;
        goto label_3ed9f8;
    }
    ctx->pc = 0x3ED9F0u;
    SET_GPR_U32(ctx, 31, 0x3ED9F8u);
    ctx->pc = 0x3ED9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ED9F0u;
    // 0x3ed9f4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3ED9F0u, 0x3ED9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ED9F8u;
label_3ed9f8:
    // 0x3ed9f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed9fc:
    // 0x3ed9fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3eda00:
    if (ctx->pc == 0x3EDA00u) {
        ctx->pc = 0x3EDA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ED9FCu;
        // 0x3eda00: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA04u;
        goto label_3eda04;
    }
    ctx->pc = 0x3ED9FCu;
    {
        const bool branch_taken_0x3ed9fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed9fc) {
            ctx->pc = 0x3EDA00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ED9FCu;
            // 0x3eda00: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EDA0Cu;
            goto label_3eda0c;
        }
    }
    ctx->pc = 0x3EDA04u;
label_3eda04:
    // 0x3eda04: 0x1000000f  b           . + 4 + (0xF << 2)
label_3eda08:
    if (ctx->pc == 0x3EDA08u) {
        ctx->pc = 0x3EDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA04u;
        // 0x3eda08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA0Cu;
        goto label_3eda0c;
    }
    ctx->pc = 0x3EDA04u;
    {
        const bool branch_taken_0x3eda04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA04u;
        // 0x3eda08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda04) {
            ctx->pc = 0x3EDA44u;
            goto label_3eda44;
        }
    }
    ctx->pc = 0x3EDA0Cu;
label_3eda0c:
    // 0x3eda0c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3eda0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3eda10:
    // 0x3eda10: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3eda10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3eda14:
    // 0x3eda14: 0x40f809  jalr        $v0
label_3eda18:
    if (ctx->pc == 0x3EDA18u) {
        ctx->pc = 0x3EDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA14u;
        // 0x3eda18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA1Cu;
        goto label_3eda1c;
    }
    ctx->pc = 0x3EDA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EDA1Cu);
        ctx->pc = 0x3EDA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA14u;
        // 0x3eda18: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA14u, 0x3EDA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EDA1Cu;
label_3eda1c:
    // 0x3eda1c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3eda1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3eda20:
    // 0x3eda20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3eda24:
    if (ctx->pc == 0x3EDA24u) {
        ctx->pc = 0x3EDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA20u;
        // 0x3eda24: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA28u;
        goto label_3eda28;
    }
    ctx->pc = 0x3EDA20u;
    {
        const bool branch_taken_0x3eda20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA20u;
        // 0x3eda24: 0x2403fffb  addiu       $v1, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda20) {
            ctx->pc = 0x3EDA34u;
            goto label_3eda34;
        }
    }
    ctx->pc = 0x3EDA28u;
label_3eda28:
    // 0x3eda28: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3eda28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3eda2c:
    // 0x3eda2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eda30:
    if (ctx->pc == 0x3EDA30u) {
        ctx->pc = 0x3EDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA2Cu;
        // 0x3eda30: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA34u;
        goto label_3eda34;
    }
    ctx->pc = 0x3EDA2Cu;
    {
        const bool branch_taken_0x3eda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EDA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA2Cu;
        // 0x3eda30: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eda2c) {
            ctx->pc = 0x3EDA3Cu;
            goto label_3eda3c;
        }
    }
    ctx->pc = 0x3EDA34u;
label_3eda34:
    // 0x3eda34: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3eda34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3eda38:
    // 0x3eda38: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3eda38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_3eda3c:
    // 0x3eda3c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3eda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3eda40:
    // 0x3eda40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eda40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eda44:
    // 0x3eda44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eda44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eda48:
    // 0x3eda48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eda48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eda4c:
    // 0x3eda4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eda4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eda50:
    // 0x3eda50: 0x3e00008  jr          $ra
label_3eda54:
    if (ctx->pc == 0x3EDA54u) {
        ctx->pc = 0x3EDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA50u;
        // 0x3eda54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EDA58u;
        goto label_fallthrough_0x3eda50;
    }
    ctx->pc = 0x3EDA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EDA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EDA50u;
        // 0x3eda54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EDA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eda50:
    ctx->pc = 0x3EDA58u;
}
