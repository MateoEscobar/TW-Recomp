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

// Function: sub_00323A18
// Address: 0x323a18 - 0x323ad0
void sub_00323A18_0x323a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323A18_0x323a18");
#endif

    switch (ctx->pc) {
        case 0x323a70u: goto label_323a70;
        case 0x323a80u: goto label_323a80;
        case 0x323aacu: goto label_323aac;
        default: break;
    }

    ctx->pc = 0x323a18u;

    // 0x323a18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x323a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x323a1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x323a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x323a20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x323a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x323a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x323a28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x323a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x323a2c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x323a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x323a30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x323a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a38: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x323a38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x323a3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x323A3Cu;
    {
        const bool branch_taken_0x323a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A3Cu;
        // 0x323a40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a3c) {
            ctx->pc = 0x323A70u;
            goto label_323a70;
        }
    }
    ctx->pc = 0x323A44u;
    // 0x323a44: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x323a44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x323a48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323A48u;
    {
        const bool branch_taken_0x323a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323A48u;
        // 0x323a4c: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323a48) {
            ctx->pc = 0x323A60u;
            goto label_323a60;
        }
    }
    ctx->pc = 0x323A50u;
    // 0x323a50: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x323a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x323a54: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x323a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x323a58: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x323A58u;
    {
        const bool branch_taken_0x323a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x323a58) {
            ctx->pc = 0x323A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A58u;
            // 0x323a5c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323A74u;
            goto label_323a74;
        }
    }
    ctx->pc = 0x323A60u;
label_323a60:
    // 0x323a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a64: 0x24a547d0  addiu       $a1, $a1, 0x47D0
    ctx->pc = 0x323a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18384));
    // 0x323a68: 0xc0cb28a  jal         func_32CA28
    ctx->pc = 0x323A68u;
    SET_GPR_U32(ctx, 31, 0x323A70u);
    ctx->pc = 0x323A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A68u;
    // 0x323a6c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA28u, 0x323A68u, 0x323A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A70u;
label_323a70:
    // 0x323a70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x323a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_323a74:
    // 0x323a74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x323a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323a78: 0xc0cbf30  jal         func_32FCC0
    ctx->pc = 0x323A78u;
    SET_GPR_U32(ctx, 31, 0x323A80u);
    ctx->pc = 0x323A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323A78u;
    // 0x323a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCC0u, 0x323A78u, 0x323A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323A80u;
label_323a80:
    // 0x323a80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323a84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x323a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x323a88: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323a8c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x323a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x323a90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323a94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323a98: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323A98u;
    {
        const bool branch_taken_0x323a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x323a98) {
            ctx->pc = 0x323A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x323A98u;
            // 0x323a9c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323AB0u;
            goto label_323ab0;
        }
    }
    ctx->pc = 0x323AA0u;
    // 0x323aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323aa4: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323AA4u;
    SET_GPR_U32(ctx, 31, 0x323AACu);
    ctx->pc = 0x323AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323AA4u;
    // 0x323aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323AA4u, 0x323AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323AACu;
label_323aac:
    // 0x323aac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_323ab0:
    // 0x323ab0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x323ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x323ab4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x323ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x323ab8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x323ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323abc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x323abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x323ac0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x323ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x323ac4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x323AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323AC8u;
        // 0x323acc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323AD0u;
}
