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

// Function: sub_003E67E8
// Address: 0x3e67e8 - 0x3e68d0
void sub_003E67E8_0x3e67e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E67E8_0x3e67e8");
#endif

    switch (ctx->pc) {
        case 0x3e6808u: goto label_3e6808;
        case 0x3e68acu: goto label_3e68ac;
        case 0x3e68bcu: goto label_3e68bc;
        default: break;
    }

    ctx->pc = 0x3e67e8u;

    // 0x3e67e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e67e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e67ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3e67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3e67f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3e67f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3e67f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e67f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e67f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e67fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e6800: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6800u;
    SET_GPR_U32(ctx, 31, 0x3E6808u);
    ctx->pc = 0x3E6804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6800u;
    // 0x3e6804: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6800u, 0x3E6808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6808u;
label_3e6808:
    // 0x3e6808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e6808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e680c: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E680Cu;
    {
        const bool branch_taken_0x3e680c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E680Cu;
        // 0x3e6810: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e680c) {
            ctx->pc = 0x3E682Cu;
            goto label_3e682c;
        }
    }
    ctx->pc = 0x3E6814u;
    // 0x3e6814: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e6814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e6818: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e681c: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3e681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x3e6820: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e6820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e6824: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e6824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x3e6828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e682c:
    // 0x3e682c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E682Cu;
    {
        const bool branch_taken_0x3e682c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E682Cu;
        // 0x3e6830: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e682c) {
            ctx->pc = 0x3E6840u;
            goto label_3e6840;
        }
    }
    ctx->pc = 0x3E6834u;
    // 0x3e6834: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3e6834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3e6838: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e6838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x3e683c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3e683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3e6840:
    // 0x3e6840: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E6840u;
    {
        const bool branch_taken_0x3e6840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6840u;
        // 0x3e6844: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6840) {
            ctx->pc = 0x3E6864u;
            goto label_3e6864;
        }
    }
    ctx->pc = 0x3E6848u;
    // 0x3e6848: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e6848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e684c: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e684cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x3e6850: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3e6850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6854: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e6854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e6858: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x3e6858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x3e685c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E685Cu;
    {
        const bool branch_taken_0x3e685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E685Cu;
        // 0x3e6860: 0x3442000f  ori         $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e685c) {
            ctx->pc = 0x3E687Cu;
            goto label_3e687c;
        }
    }
    ctx->pc = 0x3E6864u;
label_3e6864:
    // 0x3e6864: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3e6864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6868: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x3e6868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x3e686c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x3e686cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6870: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e6870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e6874: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x3e6874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x3e6878: 0x3442001e  ori         $v0, $v0, 0x1E
    ctx->pc = 0x3e6878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30);
label_3e687c:
    // 0x3e687c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3e687cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3e6880: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3e6880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3e6884: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x3e6884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x3e6888: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3e6888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e688c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E688Cu;
    {
        const bool branch_taken_0x3e688c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E688Cu;
        // 0x3e6890: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e688c) {
            ctx->pc = 0x3E68A0u;
            goto label_3e68a0;
        }
    }
    ctx->pc = 0x3E6894u;
    // 0x3e6894: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e6898: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3e6898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x3e689c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e689cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3e68a0:
    // 0x3e68a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e68a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68a4: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E68A4u;
    SET_GPR_U32(ctx, 31, 0x3E68ACu);
    ctx->pc = 0x3E68A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E68A4u;
    // 0x3e68a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E68A4u, 0x3E68ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68ACu;
label_3e68ac:
    // 0x3e68ac: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e68acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e68b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e68b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e68b4: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E68B4u;
    SET_GPR_U32(ctx, 31, 0x3E68BCu);
    ctx->pc = 0x3E68B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E68B4u;
    // 0x3e68b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E68B4u, 0x3E68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E68BCu;
label_3e68bc:
    // 0x3e68bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3e68bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e68c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3e68c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e68c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e68c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e68c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E68C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E68CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E68C8u;
        // 0x3e68cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E68C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E68D0u;
}
