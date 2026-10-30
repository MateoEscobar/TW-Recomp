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

// Function: sub_00325B00
// Address: 0x325b00 - 0x325be8
void sub_00325B00_0x325b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325B00_0x325b00");
#endif

    switch (ctx->pc) {
        case 0x325b2cu: goto label_325b2c;
        case 0x325b3cu: goto label_325b3c;
        case 0x325b48u: goto label_325b48;
        case 0x325b58u: goto label_325b58;
        case 0x325b60u: goto label_325b60;
        case 0x325b68u: goto label_325b68;
        case 0x325b74u: goto label_325b74;
        case 0x325b84u: goto label_325b84;
        case 0x325b94u: goto label_325b94;
        case 0x325ba0u: goto label_325ba0;
        case 0x325bb4u: goto label_325bb4;
        default: break;
    }

    ctx->pc = 0x325b00u;

    // 0x325b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x325b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x325b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325b08: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x325b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x325b0c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x325b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x325b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x325b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b14: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x325b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x325b18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x325b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x325b1c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x325b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x325b20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325b24: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325B24u;
    SET_GPR_U32(ctx, 31, 0x325B2Cu);
    ctx->pc = 0x325B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B24u;
    // 0x325b28: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325B24u, 0x325B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B2Cu;
label_325b2c:
    // 0x325b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325b34: 0xc0c916a  jal         func_3245A8
    ctx->pc = 0x325B34u;
    SET_GPR_U32(ctx, 31, 0x325B3Cu);
    ctx->pc = 0x325B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B34u;
    // 0x325b38: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3245A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3245A8u, 0x325B34u, 0x325B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B3Cu;
label_325b3c:
    // 0x325b3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b40: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x325B40u;
    SET_GPR_U32(ctx, 31, 0x325B48u);
    ctx->pc = 0x325B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B40u;
    // 0x325b44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3242E0u, 0x325B40u, 0x325B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B48u;
label_325b48:
    // 0x325b48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x325b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b4c: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x325B4Cu;
    {
        const bool branch_taken_0x325b4c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x325B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B4Cu;
        // 0x325b50: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b4c) {
            ctx->pc = 0x325BC4u;
            goto label_325bc4;
        }
    }
    ctx->pc = 0x325B54u;
    // 0x325b54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_325b58:
    // 0x325b58: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x325B58u;
    SET_GPR_U32(ctx, 31, 0x325B60u);
    ctx->pc = 0x325B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B58u;
    // 0x325b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x325B58u, 0x325B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B60u;
label_325b60:
    // 0x325b60: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x325B60u;
    SET_GPR_U32(ctx, 31, 0x325B68u);
    ctx->pc = 0x325B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B60u;
    // 0x325b64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x325B60u, 0x325B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B68u;
label_325b68:
    // 0x325b68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x325b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b6c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x325B6Cu;
    SET_GPR_U32(ctx, 31, 0x325B74u);
    ctx->pc = 0x325B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B6Cu;
    // 0x325b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x325B6Cu, 0x325B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B74u;
label_325b74:
    // 0x325b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x325b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325b7c: 0xc0c8f10  jal         func_323C40
    ctx->pc = 0x325B7Cu;
    SET_GPR_U32(ctx, 31, 0x325B84u);
    ctx->pc = 0x325B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B7Cu;
    // 0x325b80: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323C40u, 0x325B7Cu, 0x325B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B84u;
label_325b84:
    // 0x325b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x325b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325b8c: 0xc0c9048  jal         func_324120
    ctx->pc = 0x325B8Cu;
    SET_GPR_U32(ctx, 31, 0x325B94u);
    ctx->pc = 0x325B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B8Cu;
    // 0x325b90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x325B8Cu, 0x325B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B94u;
label_325b94:
    // 0x325b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b98: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x325B98u;
    SET_GPR_U32(ctx, 31, 0x325BA0u);
    ctx->pc = 0x325B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B98u;
    // 0x325b9c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x325B98u, 0x325BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BA0u;
label_325ba0:
    // 0x325ba0: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x325BA0u;
    {
        const bool branch_taken_0x325ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x325BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BA0u;
        // 0x325ba4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ba0) {
            ctx->pc = 0x325BC8u;
            goto label_325bc8;
        }
    }
    ctx->pc = 0x325BA8u;
    // 0x325ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x325ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bac: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x325BACu;
    SET_GPR_U32(ctx, 31, 0x325BB4u);
    ctx->pc = 0x325BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BACu;
    // 0x325bb0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x325BACu, 0x325BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BB4u;
label_325bb4:
    // 0x325bb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x325bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x325bb8: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x325bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x325bbc: 0x5040ffe6  beql        $v0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x325BBCu;
    {
        const bool branch_taken_0x325bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x325bbc) {
            ctx->pc = 0x325BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325BBCu;
            // 0x325bc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_325b58;
        }
    }
    ctx->pc = 0x325BC4u;
label_325bc4:
    // 0x325bc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x325bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_325bc8:
    // 0x325bc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x325bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x325bcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x325bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x325bd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x325bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325bd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x325bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x325BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325BDCu;
        // 0x325be0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325BE4u;
    // 0x325be4: 0x0  nop
    ctx->pc = 0x325be4u;
    // NOP
    ctx->pc = 0x325be8u;
}
