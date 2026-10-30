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

// Function: sub_00101A60
// Address: 0x101a60 - 0x101af8
void sub_00101A60_0x101a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101A60_0x101a60");
#endif

    switch (ctx->pc) {
        case 0x101a80u: goto label_101a80;
        case 0x101a94u: goto label_101a94;
        case 0x101aacu: goto label_101aac;
        case 0x101ac0u: goto label_101ac0;
        default: break;
    }

    ctx->pc = 0x101a60u;

    // 0x101a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x101a64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101a68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a6c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x101a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101a70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x101a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101a78: 0xc0886fc  jal         func_221BF0
    ctx->pc = 0x101A78u;
    SET_GPR_U32(ctx, 31, 0x101A80u);
    ctx->pc = 0x101A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101A78u;
    // 0x101a7c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221BF0u, 0x101A78u, 0x101A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101A80u;
label_101a80:
    // 0x101a80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101a84: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x101A84u;
    {
        const bool branch_taken_0x101a84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x101A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A84u;
        // 0x101a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a84) {
            ctx->pc = 0x101AA4u;
            goto label_101aa4;
        }
    }
    ctx->pc = 0x101A8Cu;
    // 0x101a8c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x101A8Cu;
    {
        const bool branch_taken_0x101a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A8Cu;
        // 0x101a90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a8c) {
            ctx->pc = 0x101AE4u;
            goto label_101ae4;
        }
    }
    ctx->pc = 0x101A94u;
label_101a94:
    // 0x101a94: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x101a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x101a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x101a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101a9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x101A9Cu;
    {
        const bool branch_taken_0x101a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101A9Cu;
        // 0x101aa0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101a9c) {
            ctx->pc = 0x101AE0u;
            goto label_101ae0;
        }
    }
    ctx->pc = 0x101AA4u;
label_101aa4:
    // 0x101aa4: 0xc040494  jal         func_101250
    ctx->pc = 0x101AA4u;
    SET_GPR_U32(ctx, 31, 0x101AACu);
    ctx->pc = 0x101AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101AA4u;
    // 0x101aa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101AA4u, 0x101AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101AACu;
label_101aac:
    // 0x101aac: 0x9604001a  lhu         $a0, 0x1A($s0)
    ctx->pc = 0x101aacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101ab0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x101ab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ab4: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x101AB4u;
    {
        const bool branch_taken_0x101ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AB4u;
        // 0x101ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ab4) {
            ctx->pc = 0x101ADCu;
            goto label_101adc;
        }
    }
    ctx->pc = 0x101ABCu;
    // 0x101abc: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x101abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_101ac0:
    // 0x101ac0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x101ac0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x101ac4: 0x1046fff3  beq         $v0, $a2, . + 4 + (-0xD << 2)
    ctx->pc = 0x101AC4u;
    {
        const bool branch_taken_0x101ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x101AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AC4u;
        // 0x101ac8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ac4) {
            ctx->pc = 0x101A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101a94;
        }
    }
    ctx->pc = 0x101ACCu;
    // 0x101acc: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x101accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x101ad0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x101ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x101ad4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x101AD4u;
    {
        const bool branch_taken_0x101ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AD4u;
        // 0x101ad8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ad4) {
            ctx->pc = 0x101AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101ac0;
        }
    }
    ctx->pc = 0x101ADCu;
label_101adc:
    // 0x101adc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101ae0:
    // 0x101ae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101ae4:
    // 0x101ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101aec: 0x3e00008  jr          $ra
    ctx->pc = 0x101AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101AECu;
        // 0x101af0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101AF4u;
    // 0x101af4: 0x0  nop
    ctx->pc = 0x101af4u;
    // NOP
    ctx->pc = 0x101af8u;
}
