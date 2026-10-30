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

// Function: sub_0041FCC8
// Address: 0x41fcc8 - 0x41fd60
void sub_0041FCC8_0x41fcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041FCC8_0x41fcc8");
#endif

    switch (ctx->pc) {
        case 0x41fd00u: goto label_41fd00;
        case 0x41fd20u: goto label_41fd20;
        case 0x41fd3cu: goto label_41fd3c;
        default: break;
    }

    ctx->pc = 0x41fcc8u;

    // 0x41fcc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41fcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x41fccc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41fcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41fcd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x41fcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x41fcd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41fcd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fcd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41fcdc: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x41fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x41fce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x41FCE0u;
    {
        const bool branch_taken_0x41fce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FCE0u;
        // 0x41fce4: 0x26300148  addiu       $s0, $s1, 0x148 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fce0) {
            ctx->pc = 0x41FCF0u;
            goto label_41fcf0;
        }
    }
    ctx->pc = 0x41FCE8u;
    // 0x41fce8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x41FCE8u;
    {
        const bool branch_taken_0x41fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FCE8u;
        // 0x41fcec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fce8) {
            ctx->pc = 0x41FD48u;
            goto label_41fd48;
        }
    }
    ctx->pc = 0x41FCF0u;
label_41fcf0:
    // 0x41fcf0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fcf4: 0x24a5b530  addiu       $a1, $a1, -0x4AD0
    ctx->pc = 0x41fcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948144));
    // 0x41fcf8: 0xc052cd8  jal         func_14B360
    ctx->pc = 0x41FCF8u;
    SET_GPR_U32(ctx, 31, 0x41FD00u);
    ctx->pc = 0x41FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FCF8u;
    // 0x41fcfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B360u, 0x41FCF8u, 0x41FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD00u;
label_41fd00:
    // 0x41fd00: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x41fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x41fd04: 0x34633518  ori         $v1, $v1, 0x3518
    ctx->pc = 0x41fd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13592);
    // 0x41fd08: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x41FD08u;
    {
        const bool branch_taken_0x41fd08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x41FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FD08u;
        // 0x41fd0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41fd08) {
            ctx->pc = 0x41FD48u;
            goto label_41fd48;
        }
    }
    ctx->pc = 0x41FD10u;
    // 0x41fd10: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fd10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fd14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41fd14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fd18: 0xc052cd8  jal         func_14B360
    ctx->pc = 0x41FD18u;
    SET_GPR_U32(ctx, 31, 0x41FD20u);
    ctx->pc = 0x41FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD18u;
    // 0x41fd1c: 0x24a5b548  addiu       $a1, $a1, -0x4AB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B360u, 0x41FD18u, 0x41FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD20u;
label_41fd20:
    // 0x41fd20: 0x240303c4  addiu       $v1, $zero, 0x3C4
    ctx->pc = 0x41fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    // 0x41fd24: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x41FD24u;
    {
        const bool branch_taken_0x41fd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41fd24) {
            ctx->pc = 0x41FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41FD24u;
            // 0x41fd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41FD48u;
            goto label_41fd48;
        }
    }
    ctx->pc = 0x41FD2Cu;
    // 0x41fd2c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x41fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x41fd30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41fd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41fd34: 0xc052cd8  jal         func_14B360
    ctx->pc = 0x41FD34u;
    SET_GPR_U32(ctx, 31, 0x41FD3Cu);
    ctx->pc = 0x41FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41FD34u;
    // 0x41fd38: 0x24a5b510  addiu       $a1, $a1, -0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B360u, 0x41FD34u, 0x41FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41FD3Cu;
label_41fd3c:
    // 0x41fd3c: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x41fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x41fd40: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x41fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x41fd44: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x41fd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41fd48:
    // 0x41fd48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x41fd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41fd4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41fd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41fd50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41fd50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41fd54: 0x3e00008  jr          $ra
    ctx->pc = 0x41FD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41FD54u;
        // 0x41fd58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41FD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41FD5Cu;
    // 0x41fd5c: 0x0  nop
    ctx->pc = 0x41fd5cu;
    // NOP
    ctx->pc = 0x41fd60u;
}
