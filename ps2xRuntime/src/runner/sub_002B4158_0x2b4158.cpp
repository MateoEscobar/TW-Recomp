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

// Function: sub_002B4158
// Address: 0x2b4158 - 0x2b4200
void sub_002B4158_0x2b4158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4158_0x2b4158");
#endif

    switch (ctx->pc) {
        case 0x2b41c0u: goto label_2b41c0;
        case 0x2b41d4u: goto label_2b41d4;
        case 0x2b41e0u: goto label_2b41e0;
        default: break;
    }

    ctx->pc = 0x2b4158u;

    // 0x2b4158: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b415c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2b415cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x2b4160: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b4160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b4164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2b4164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4168: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b4168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b416c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b416cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4170: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b4170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b4174: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b4174u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2b4178: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b4178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b417c: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2b417cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2b4180: 0x8ca6bd30  lw          $a2, -0x42D0($a1)
    ctx->pc = 0x2b4180u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2b4184: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b4184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4188: 0x92280028  lbu         $t0, 0x28($s1)
    ctx->pc = 0x2b4188u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x2b418c: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x2b418cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x2b4190: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b4190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2b4194: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b4194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b4198: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2b4198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b419c: 0xae260010  sw          $a2, 0x10($s1)
    ctx->pc = 0x2b419cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 6));
    // 0x2b41a0: 0x15070003  bne         $t0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B41A0u;
    {
        const bool branch_taken_0x2b41a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x2B41A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A0u;
        // 0x2b41a4: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41a0) {
            ctx->pc = 0x2B41B0u;
            goto label_2b41b0;
        }
    }
    ctx->pc = 0x2B41A8u;
    // 0x2b41a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B41A8u;
    {
        const bool branch_taken_0x2b41a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41A8u;
        // 0x2b41ac: 0x26100164  addiu       $s0, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41a8) {
            ctx->pc = 0x2B41C8u;
            goto label_2b41c8;
        }
    }
    ctx->pc = 0x2B41B0u;
label_2b41b0:
    // 0x2b41b0: 0x8e04020c  lw          $a0, 0x20C($s0)
    ctx->pc = 0x2b41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
    // 0x2b41b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2b41b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b41b8: 0xc05b202  jal         func_16C808
    ctx->pc = 0x2B41B8u;
    SET_GPR_U32(ctx, 31, 0x2B41C0u);
    ctx->pc = 0x2B41BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41B8u;
    // 0x2b41bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C808u, 0x2B41B8u, 0x2B41C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41C0u;
label_2b41c0:
    // 0x2b41c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B41C0u;
    {
        const bool branch_taken_0x2b41c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B41C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41C0u;
        // 0x2b41c4: 0x24500048  addiu       $s0, $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b41c0) {
            ctx->pc = 0x2B41E8u;
            goto label_2b41e8;
        }
    }
    ctx->pc = 0x2B41C8u;
label_2b41c8:
    // 0x2b41c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b41c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41cc: 0xc13b748  jal         func_4EDD20
    ctx->pc = 0x2B41CCu;
    SET_GPR_U32(ctx, 31, 0x2B41D4u);
    ctx->pc = 0x2B41D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41CCu;
    // 0x2b41d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x2B41CCu, 0x2B41D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41D4u;
label_2b41d4:
    // 0x2b41d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b41d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b41d8: 0xc137826  jal         func_4DE098
    ctx->pc = 0x2B41D8u;
    SET_GPR_U32(ctx, 31, 0x2B41E0u);
    ctx->pc = 0x2B41DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41D8u;
    // 0x2b41dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2B41D8u, 0x2B41E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B41E0u;
label_2b41e0:
    // 0x2b41e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b41e4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2b41e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_2b41e8:
    // 0x2b41e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b41e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b41ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b41ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b41f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b41f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b41f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B41F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B41F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B41F4u;
        // 0x2b41f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B41F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B41FCu;
    // 0x2b41fc: 0x0  nop
    ctx->pc = 0x2b41fcu;
    // NOP
    ctx->pc = 0x2b4200u;
}
