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

// Function: sub_00424890
// Address: 0x424890 - 0x424958
void sub_00424890_0x424890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424890_0x424890");
#endif

    switch (ctx->pc) {
        case 0x4248d0u: goto label_4248d0;
        case 0x4248d8u: goto label_4248d8;
        case 0x4248f8u: goto label_4248f8;
        case 0x424918u: goto label_424918;
        default: break;
    }

    ctx->pc = 0x424890u;

    // 0x424890: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x424890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x424894: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x424894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x424898: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x424898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x42489c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42489cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4248a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4248a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4248a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4248a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4248a8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4248a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4248ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4248acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4248b0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4248b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4248b4: 0x30b400ff  andi        $s4, $a1, 0xFF
    ctx->pc = 0x4248b4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x4248b8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4248b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4248bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4248bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4248c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4248c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4248c4: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4248C4u;
    {
        const bool branch_taken_0x4248c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4248C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4248C4u;
        // 0x4248c8: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4248c4) {
            ctx->pc = 0x42492Cu;
            goto label_42492c;
        }
    }
    ctx->pc = 0x4248CCu;
    // 0x4248cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4248ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4248d0:
    // 0x4248d0: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x4248D0u;
    SET_GPR_U32(ctx, 31, 0x4248D8u);
    ctx->pc = 0x4248D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4248D0u;
    // 0x4248d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x4248D0u, 0x4248D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4248D8u;
label_4248d8:
    // 0x4248d8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x4248d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x4248dc: 0x5474000f  bnel        $v1, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x4248DCu;
    {
        const bool branch_taken_0x4248dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x4248dc) {
            ctx->pc = 0x4248E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4248DCu;
            // 0x4248e0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42491Cu;
            goto label_42491c;
        }
    }
    ctx->pc = 0x4248E4u;
    // 0x4248e4: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4248E4u;
    {
        const bool branch_taken_0x4248e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4248E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4248E4u;
        // 0x4248e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4248e4) {
            ctx->pc = 0x424900u;
            goto label_424900;
        }
    }
    ctx->pc = 0x4248ECu;
    // 0x4248ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4248ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4248f0: 0xc109032  jal         func_4240C8
    ctx->pc = 0x4248F0u;
    SET_GPR_U32(ctx, 31, 0x4248F8u);
    ctx->pc = 0x4248F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4248F0u;
    // 0x4248f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4240C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4240C8u, 0x4248F0u, 0x4248F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4248F8u;
label_4248f8:
    // 0x4248f8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4248F8u;
    {
        const bool branch_taken_0x4248f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4248f8) {
            ctx->pc = 0x424904u;
            goto label_424904;
        }
    }
    ctx->pc = 0x424900u;
label_424900:
    // 0x424900: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x424900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424904:
    // 0x424904: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x424904u;
    {
        const bool branch_taken_0x424904 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x424908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424904u;
        // 0x424908: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424904) {
            ctx->pc = 0x424918u;
            goto label_424918;
        }
    }
    ctx->pc = 0x42490Cu;
    // 0x42490c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424910: 0xc10903e  jal         func_4240F8
    ctx->pc = 0x424910u;
    SET_GPR_U32(ctx, 31, 0x424918u);
    ctx->pc = 0x424914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424910u;
    // 0x424914: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4240F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4240F8u, 0x424910u, 0x424918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424918u;
label_424918:
    // 0x424918: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x424918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42491c:
    // 0x42491c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x42491cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x424920: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x424920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x424924: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x424924u;
    {
        const bool branch_taken_0x424924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x424928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424924u;
        // 0x424928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424924) {
            ctx->pc = 0x4248D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4248d0;
        }
    }
    ctx->pc = 0x42492Cu;
label_42492c:
    // 0x42492c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42492cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424930: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x424930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x424934: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x424934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x424938: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x424938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42493c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42493cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x424940: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x424940u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x424944: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x424944u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x424948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x424948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42494c: 0x3e00008  jr          $ra
    ctx->pc = 0x42494Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42494Cu;
        // 0x424950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42494Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424954u;
    // 0x424954: 0x0  nop
    ctx->pc = 0x424954u;
    // NOP
    ctx->pc = 0x424958u;
}
