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

// Function: sub_00270A70
// Address: 0x270a70 - 0x270b38
void sub_00270A70_0x270a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270A70_0x270a70");
#endif

    switch (ctx->pc) {
        case 0x270a8cu: goto label_270a8c;
        case 0x270a98u: goto label_270a98;
        case 0x270ab0u: goto label_270ab0;
        case 0x270ac0u: goto label_270ac0;
        case 0x270ad0u: goto label_270ad0;
        case 0x270ae0u: goto label_270ae0;
        case 0x270b00u: goto label_270b00;
        case 0x270b10u: goto label_270b10;
        default: break;
    }

    ctx->pc = 0x270a70u;

    // 0x270a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x270a74: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x270a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x270a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x270a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270a84: 0xc0e409a  jal         func_390268
    ctx->pc = 0x270A84u;
    SET_GPR_U32(ctx, 31, 0x270A8Cu);
    ctx->pc = 0x270A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A84u;
    // 0x270a88: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x270A84u, 0x270A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A8Cu;
label_270a8c:
    // 0x270a8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270a90: 0xc088e40  jal         func_223900
    ctx->pc = 0x270A90u;
    SET_GPR_U32(ctx, 31, 0x270A98u);
    ctx->pc = 0x270A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A90u;
    // 0x270a94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223900u, 0x270A90u, 0x270A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A98u;
label_270a98:
    // 0x270a98: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x270A98u;
    {
        const bool branch_taken_0x270a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270a98) {
            ctx->pc = 0x270A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270A98u;
            // 0x270a9c: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AA0u;
    // 0x270aa0: 0x52200012  beql        $s1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x270AA0u;
    {
        const bool branch_taken_0x270aa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x270aa0) {
            ctx->pc = 0x270AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AA0u;
            // 0x270aa4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AA8u;
    // 0x270aa8: 0xc088e38  jal         func_2238E0
    ctx->pc = 0x270AA8u;
    SET_GPR_U32(ctx, 31, 0x270AB0u);
    ctx->pc = 0x270AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AA8u;
    // 0x270aac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2238E0u, 0x270AA8u, 0x270AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AB0u;
label_270ab0:
    // 0x270ab0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x270AB0u;
    {
        const bool branch_taken_0x270ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ab0) {
            ctx->pc = 0x270AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AB0u;
            // 0x270ab4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AB8u;
    // 0x270ab8: 0xc089f86  jal         func_227E18
    ctx->pc = 0x270AB8u;
    SET_GPR_U32(ctx, 31, 0x270AC0u);
    ctx->pc = 0x270ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AB8u;
    // 0x270abc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x270AB8u, 0x270AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AC0u;
label_270ac0:
    // 0x270ac0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x270AC0u;
    {
        const bool branch_taken_0x270ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ac0) {
            ctx->pc = 0x270AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AC0u;
            // 0x270ac4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AC8u;
    // 0x270ac8: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x270AC8u;
    SET_GPR_U32(ctx, 31, 0x270AD0u);
    ctx->pc = 0x270ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AC8u;
    // 0x270acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x270AC8u, 0x270AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AD0u;
label_270ad0:
    // 0x270ad0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x270AD0u;
    {
        const bool branch_taken_0x270ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270ad0) {
            ctx->pc = 0x270AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270AD0u;
            // 0x270ad4: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270AECu;
            goto label_270aec;
        }
    }
    ctx->pc = 0x270AD8u;
    // 0x270ad8: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x270AD8u;
    SET_GPR_U32(ctx, 31, 0x270AE0u);
    ctx->pc = 0x270ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AD8u;
    // 0x270adc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x270AD8u, 0x270AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AE0u;
label_270ae0:
    // 0x270ae0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270AE0u;
    {
        const bool branch_taken_0x270ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AE0u;
        // 0x270ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ae0) {
            ctx->pc = 0x270B08u;
            goto label_270b08;
        }
    }
    ctx->pc = 0x270AE8u;
    // 0x270ae8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x270ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_270aec:
    // 0x270aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x270aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270af0: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x270af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
    // 0x270af4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x270af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x270af8: 0xc09c426  jal         func_271098
    ctx->pc = 0x270AF8u;
    SET_GPR_U32(ctx, 31, 0x270B00u);
    ctx->pc = 0x270AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AF8u;
    // 0x270afc: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271098u, 0x270AF8u, 0x270B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B00u;
label_270b00:
    // 0x270b00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x270B00u;
    {
        const bool branch_taken_0x270b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B00u;
        // 0x270b04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b00) {
            ctx->pc = 0x270B24u;
            goto label_270b24;
        }
    }
    ctx->pc = 0x270B08u;
label_270b08:
    // 0x270b08: 0xc089998  jal         func_226660
    ctx->pc = 0x270B08u;
    SET_GPR_U32(ctx, 31, 0x270B10u);
    ctx->pc = 0x270B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270B08u;
    // 0x270b0c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x270B08u, 0x270B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B10u;
label_270b10:
    // 0x270b10: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x270b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x270b14: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x270b14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x270b18: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x270b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x270b1c: 0xa46000bc  sh          $zero, 0xBC($v1)
    ctx->pc = 0x270b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x270b20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x270b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270b24:
    // 0x270b24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x270B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B2Cu;
        // 0x270b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270B34u;
    // 0x270b34: 0x0  nop
    ctx->pc = 0x270b34u;
    // NOP
    ctx->pc = 0x270b38u;
}
