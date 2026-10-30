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

// Function: sub_003A2A30
// Address: 0x3a2a30 - 0x3a2b48
void sub_003A2A30_0x3a2a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2A30_0x3a2a30");
#endif

    switch (ctx->pc) {
        case 0x3a2a70u: goto label_3a2a70;
        case 0x3a2a84u: goto label_3a2a84;
        case 0x3a2aa8u: goto label_3a2aa8;
        case 0x3a2abcu: goto label_3a2abc;
        case 0x3a2ad0u: goto label_3a2ad0;
        case 0x3a2ae4u: goto label_3a2ae4;
        case 0x3a2af8u: goto label_3a2af8;
        case 0x3a2b28u: goto label_3a2b28;
        default: break;
    }

    ctx->pc = 0x3a2a30u;

    // 0x3a2a30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a2a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a2a34: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x3a2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x3a2a38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a2a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3a2a3c: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x3a2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
    // 0x3a2a40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a2a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3a2a44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a2a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a2a4c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3a2a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3a2a50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a2a50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a54: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3a2a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3a2a58: 0x3c130058  lui         $s3, 0x58
    ctx->pc = 0x3a2a58u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x3a2a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a2a60: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a2a60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3a2a68: 0xc0e8ad2  jal         func_3A2B48
    ctx->pc = 0x3A2A68u;
    SET_GPR_U32(ctx, 31, 0x3A2A70u);
    ctx->pc = 0x3A2A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A68u;
    // 0x3a2a6c: 0x26300838  addiu       $s0, $s1, 0x838 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2B48u, 0x3A2A68u, 0x3A2A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A70u;
label_3a2a70:
    // 0x3a2a70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a2a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a2a74: 0x26651860  addiu       $a1, $s3, 0x1860
    ctx->pc = 0x3a2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6240));
    // 0x3a2a78: 0x24060062  addiu       $a2, $zero, 0x62
    ctx->pc = 0x3a2a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3a2a7c: 0xc13d208  jal         func_4F4820
    ctx->pc = 0x3A2A7Cu;
    SET_GPR_U32(ctx, 31, 0x3A2A84u);
    ctx->pc = 0x3A2A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A7Cu;
    // 0x3a2a80: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4820u, 0x3A2A7Cu, 0x3A2A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A84u;
label_3a2a84:
    // 0x3a2a84: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3a2a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3a2a88: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x3a2a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a2a8c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A2A8Cu;
    {
        const bool branch_taken_0x3a2a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A8Cu;
        // 0x3a2a90: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a8c) {
            ctx->pc = 0x3A2A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2a70;
        }
    }
    ctx->pc = 0x3A2A94u;
    // 0x3a2a94: 0x26701860  addiu       $s0, $s3, 0x1860
    ctx->pc = 0x3a2a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 6240));
    // 0x3a2a98: 0x8e240840  lw          $a0, 0x840($s1)
    ctx->pc = 0x3a2a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2112)));
    // 0x3a2a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2aa0: 0xc13d228  jal         func_4F48A0
    ctx->pc = 0x3A2AA0u;
    SET_GPR_U32(ctx, 31, 0x3A2AA8u);
    ctx->pc = 0x3A2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AA0u;
    // 0x3a2aa4: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F48A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F48A0u, 0x3A2AA0u, 0x3A2AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2AA8u;
label_3a2aa8:
    // 0x3a2aa8: 0x8e240848  lw          $a0, 0x848($s1)
    ctx->pc = 0x3a2aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2120)));
    // 0x3a2aac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ab0: 0xae200840  sw          $zero, 0x840($s1)
    ctx->pc = 0x3a2ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2112), GPR_U32(ctx, 0));
    // 0x3a2ab4: 0xc13d248  jal         func_4F4920
    ctx->pc = 0x3A2AB4u;
    SET_GPR_U32(ctx, 31, 0x3A2ABCu);
    ctx->pc = 0x3A2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AB4u;
    // 0x3a2ab8: 0x24060069  addiu       $a2, $zero, 0x69 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4920u, 0x3A2AB4u, 0x3A2ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2ABCu;
label_3a2abc:
    // 0x3a2abc: 0x8e24084c  lw          $a0, 0x84C($s1)
    ctx->pc = 0x3a2abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2124)));
    // 0x3a2ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ac4: 0xae200848  sw          $zero, 0x848($s1)
    ctx->pc = 0x3a2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 0));
    // 0x3a2ac8: 0xc13d268  jal         func_4F49A0
    ctx->pc = 0x3A2AC8u;
    SET_GPR_U32(ctx, 31, 0x3A2AD0u);
    ctx->pc = 0x3A2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2AC8u;
    // 0x3a2acc: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F49A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F49A0u, 0x3A2AC8u, 0x3A2AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2AD0u;
label_3a2ad0:
    // 0x3a2ad0: 0x8e240850  lw          $a0, 0x850($s1)
    ctx->pc = 0x3a2ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2128)));
    // 0x3a2ad4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2ad8: 0xae20084c  sw          $zero, 0x84C($s1)
    ctx->pc = 0x3a2ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 0));
    // 0x3a2adc: 0xc13d288  jal         func_4F4A20
    ctx->pc = 0x3A2ADCu;
    SET_GPR_U32(ctx, 31, 0x3A2AE4u);
    ctx->pc = 0x3A2AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2ADCu;
    // 0x3a2ae0: 0x2406006f  addiu       $a2, $zero, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F4A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F4A20u, 0x3A2ADCu, 0x3A2AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2AE4u;
label_3a2ae4:
    // 0x3a2ae4: 0xae200850  sw          $zero, 0x850($s1)
    ctx->pc = 0x3a2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 0));
    // 0x3a2ae8: 0x32850001  andi        $a1, $s4, 0x1
    ctx->pc = 0x3a2ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
    // 0x3a2aec: 0xae200834  sw          $zero, 0x834($s1)
    ctx->pc = 0x3a2aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2100), GPR_U32(ctx, 0));
    // 0x3a2af0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a2af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2af4: 0x26230854  addiu       $v1, $s1, 0x854
    ctx->pc = 0x3a2af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2132));
label_3a2af8:
    // 0x3a2af8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3a2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3a2afc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a2afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a2b00: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x3a2b00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3a2b04: 0x0  nop
    ctx->pc = 0x3a2b04u;
    // NOP
    // 0x3a2b08: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A2B08u;
    {
        const bool branch_taken_0x3a2b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B08u;
        // 0x3a2b0c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b08) {
            ctx->pc = 0x3A2AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2af8;
        }
    }
    ctx->pc = 0x3A2B10u;
    // 0x3a2b10: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x3a2b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x3a2b14: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x3a2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
    // 0x3a2b18: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2B18u;
    {
        const bool branch_taken_0x3a2b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B18u;
        // 0x3a2b1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2b18) {
            ctx->pc = 0x3A2B28u;
            goto label_3a2b28;
        }
    }
    ctx->pc = 0x3A2B20u;
    // 0x3a2b20: 0xc10b208  jal         func_42C820
    ctx->pc = 0x3A2B20u;
    SET_GPR_U32(ctx, 31, 0x3A2B28u);
    ctx->pc = 0x3A2B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2B20u;
    // 0x3a2b24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x3A2B20u, 0x3A2B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2B28u;
label_3a2b28:
    // 0x3a2b28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a2b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a2b2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a2b2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a2b30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a2b30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2b34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3a2b34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2b38: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3a2b38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a2b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2b40: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2B40u;
        // 0x3a2b44: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2B48u;
}
