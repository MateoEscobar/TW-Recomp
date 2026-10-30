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

// Function: sub_003EA9C0
// Address: 0x3ea9c0 - 0x3eaa30
void sub_003EA9C0_0x3ea9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA9C0_0x3ea9c0");
#endif

    switch (ctx->pc) {
        case 0x3ea9c0u: goto label_3ea9c0;
        case 0x3ea9c4u: goto label_3ea9c4;
        case 0x3ea9c8u: goto label_3ea9c8;
        case 0x3ea9ccu: goto label_3ea9cc;
        case 0x3ea9d0u: goto label_3ea9d0;
        case 0x3ea9d4u: goto label_3ea9d4;
        case 0x3ea9d8u: goto label_3ea9d8;
        case 0x3ea9dcu: goto label_3ea9dc;
        case 0x3ea9e0u: goto label_3ea9e0;
        case 0x3ea9e4u: goto label_3ea9e4;
        case 0x3ea9e8u: goto label_3ea9e8;
        case 0x3ea9ecu: goto label_3ea9ec;
        case 0x3ea9f0u: goto label_3ea9f0;
        case 0x3ea9f4u: goto label_3ea9f4;
        case 0x3ea9f8u: goto label_3ea9f8;
        case 0x3ea9fcu: goto label_3ea9fc;
        case 0x3eaa00u: goto label_3eaa00;
        case 0x3eaa04u: goto label_3eaa04;
        case 0x3eaa08u: goto label_3eaa08;
        case 0x3eaa0cu: goto label_3eaa0c;
        case 0x3eaa10u: goto label_3eaa10;
        case 0x3eaa14u: goto label_3eaa14;
        case 0x3eaa18u: goto label_3eaa18;
        case 0x3eaa1cu: goto label_3eaa1c;
        case 0x3eaa20u: goto label_3eaa20;
        case 0x3eaa24u: goto label_3eaa24;
        case 0x3eaa28u: goto label_3eaa28;
        case 0x3eaa2cu: goto label_3eaa2c;
        default: break;
    }

    ctx->pc = 0x3ea9c0u;

label_3ea9c0:
    // 0x3ea9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ea9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ea9c4:
    // 0x3ea9c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3ea9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3ea9c8:
    // 0x3ea9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ea9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ea9cc:
    // 0x3ea9cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ea9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ea9d0:
    // 0x3ea9d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ea9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea9d4:
    // 0x3ea9d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ea9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ea9d8:
    // 0x3ea9d8: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3ea9d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea9dc:
    // 0x3ea9dc: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea9e0:
    // 0x3ea9e0: 0x40f809  jalr        $v0
label_3ea9e4:
    if (ctx->pc == 0x3EA9E4u) {
        ctx->pc = 0x3EA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9E0u;
        // 0x3ea9e4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9E8u;
        goto label_3ea9e8;
    }
    ctx->pc = 0x3EA9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA9E8u);
        ctx->pc = 0x3EA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9E0u;
        // 0x3ea9e4: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA9E0u, 0x3EA9E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA9E8u;
label_3ea9e8:
    // 0x3ea9e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ea9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea9ec:
    // 0x3ea9ec: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3ea9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ea9f0:
    // 0x3ea9f0: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
label_3ea9f4:
    if (ctx->pc == 0x3EA9F4u) {
        ctx->pc = 0x3EA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9F0u;
        // 0x3ea9f4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA9F8u;
        goto label_3ea9f8;
    }
    ctx->pc = 0x3EA9F0u;
    {
        const bool branch_taken_0x3ea9f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9F0u;
        // 0x3ea9f4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea9f0) {
            ctx->pc = 0x3EAA00u;
            goto label_3eaa00;
        }
    }
    ctx->pc = 0x3EA9F8u;
label_3ea9f8:
    // 0x3ea9f8: 0x56220008  bnel        $s1, $v0, . + 4 + (0x8 << 2)
label_3ea9fc:
    if (ctx->pc == 0x3EA9FCu) {
        ctx->pc = 0x3EA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA9F8u;
        // 0x3ea9fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA00u;
        goto label_3eaa00;
    }
    ctx->pc = 0x3EA9F8u;
    {
        const bool branch_taken_0x3ea9f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea9f8) {
            ctx->pc = 0x3EA9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA9F8u;
            // 0x3ea9fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAA1Cu;
            goto label_3eaa1c;
        }
    }
    ctx->pc = 0x3EAA00u;
label_3eaa00:
    // 0x3eaa00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3eaa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eaa04:
    // 0x3eaa04: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_3eaa08:
    if (ctx->pc == 0x3EAA08u) {
        ctx->pc = 0x3EAA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA04u;
        // 0x3eaa08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA0Cu;
        goto label_3eaa0c;
    }
    ctx->pc = 0x3EAA04u;
    {
        const bool branch_taken_0x3eaa04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eaa04) {
            ctx->pc = 0x3EAA08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAA04u;
            // 0x3eaa08: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAA1Cu;
            goto label_3eaa1c;
        }
    }
    ctx->pc = 0x3EAA0Cu;
label_3eaa0c:
    // 0x3eaa0c: 0xc0e95f6  jal         func_3A57D8
label_3eaa10:
    if (ctx->pc == 0x3EAA10u) {
        ctx->pc = 0x3EAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA0Cu;
        // 0x3eaa10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA14u;
        goto label_3eaa14;
    }
    ctx->pc = 0x3EAA0Cu;
    SET_GPR_U32(ctx, 31, 0x3EAA14u);
    ctx->pc = 0x3EAA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EAA0Cu;
    // 0x3eaa10: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x3EAA0Cu, 0x3EAA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EAA14u;
label_3eaa14:
    // 0x3eaa14: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3eaa14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3eaa18:
    // 0x3eaa18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3eaa18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3eaa1c:
    // 0x3eaa1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3eaa1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eaa20:
    // 0x3eaa20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eaa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eaa24:
    // 0x3eaa24: 0x3e00008  jr          $ra
label_3eaa28:
    if (ctx->pc == 0x3EAA28u) {
        ctx->pc = 0x3EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA24u;
        // 0x3eaa28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAA2Cu;
        goto label_3eaa2c;
    }
    ctx->pc = 0x3EAA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAA24u;
        // 0x3eaa28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAA2Cu;
label_3eaa2c:
    // 0x3eaa2c: 0x0  nop
    ctx->pc = 0x3eaa2cu;
    // NOP
    ctx->pc = 0x3eaa30u;
}
