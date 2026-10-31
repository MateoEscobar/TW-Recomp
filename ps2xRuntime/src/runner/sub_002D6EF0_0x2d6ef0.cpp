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

// Function: sub_002D6EF0
// Address: 0x2d6ef0 - 0x2d6f98
void sub_002D6EF0_0x2d6ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6EF0_0x2d6ef0");
#endif

    switch (ctx->pc) {
        case 0x2d6f28u: goto label_2d6f28;
        case 0x2d6f38u: goto label_2d6f38;
        case 0x2d6f48u: goto label_2d6f48;
        case 0x2d6f60u: goto label_2d6f60;
        case 0x2d6f6cu: goto label_2d6f6c;
        case 0x2d6f84u: goto label_2d6f84;
        default: break;
    }

    ctx->pc = 0x2d6ef0u;

    // 0x2d6ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6ef4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x2d6ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x2d6ef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d6efc: 0x34a56a40  ori         $a1, $a1, 0x6A40
    ctx->pc = 0x2d6efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27200);
    // 0x2d6f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6f0c: 0x92020044  lbu         $v0, 0x44($s0)
    ctx->pc = 0x2d6f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x2d6f10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6f14: 0xac62021c  sw          $v0, 0x21C($v1)
    ctx->pc = 0x2d6f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 2));
    // 0x2d6f18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d6f1c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2d6f1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d6f20: 0xc089998  jal         func_226660
    ctx->pc = 0x2D6F20u;
    SET_GPR_U32(ctx, 31, 0x2D6F28u);
    ctx->pc = 0x2D6F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F20u;
    // 0x2d6f24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2D6F20u, 0x2D6F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F28u;
label_2d6f28:
    // 0x2d6f28: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2D6F28u;
    {
        const bool branch_taken_0x2d6f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6f28) {
            ctx->pc = 0x2D6F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6F28u;
            // 0x2d6f2c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6F64u;
            goto label_2d6f64;
        }
    }
    ctx->pc = 0x2D6F30u;
    // 0x2d6f30: 0xc089f98  jal         func_227E60
    ctx->pc = 0x2D6F30u;
    SET_GPR_U32(ctx, 31, 0x2D6F38u);
    ctx->pc = 0x2D6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F30u;
    // 0x2d6f34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x2D6F30u, 0x2D6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F38u;
label_2d6f38:
    // 0x2d6f38: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2D6F38u;
    {
        const bool branch_taken_0x2d6f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6f38) {
            ctx->pc = 0x2D6F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6F38u;
            // 0x2d6f3c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6F64u;
            goto label_2d6f64;
        }
    }
    ctx->pc = 0x2D6F40u;
    // 0x2d6f40: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x2D6F40u;
    SET_GPR_U32(ctx, 31, 0x2D6F48u);
    ctx->pc = 0x2D6F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F40u;
    // 0x2d6f44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x2D6F40u, 0x2D6F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F48u;
label_2d6f48:
    // 0x2d6f48: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2d6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2d6f4c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2d6f50: 0x50440004  beql        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6F50u;
    {
        const bool branch_taken_0x2d6f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2d6f50) {
            ctx->pc = 0x2D6F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6F50u;
            // 0x2d6f54: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6F64u;
            goto label_2d6f64;
        }
    }
    ctx->pc = 0x2D6F58u;
    // 0x2d6f58: 0xc097ddc  jal         func_25F770
    ctx->pc = 0x2D6F58u;
    SET_GPR_U32(ctx, 31, 0x2D6F60u);
    ctx->pc = 0x2D6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F58u;
    // 0x2d6f5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F770u, 0x2D6F58u, 0x2D6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F60u;
label_2d6f60:
    // 0x2d6f60: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6f64:
    // 0x2d6f64: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2D6F64u;
    SET_GPR_U32(ctx, 31, 0x2D6F6Cu);
    ctx->pc = 0x2D6F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F64u;
    // 0x2d6f68: 0x82050046  lb          $a1, 0x46($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 70)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2D6F64u, 0x2D6F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F6Cu;
label_2d6f6c:
    // 0x2d6f6c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x2d6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x2d6f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f74: 0xa2000042  sb          $zero, 0x42($s0)
    ctx->pc = 0x2d6f74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6f7c: 0xc087612  jal         func_21D848
    ctx->pc = 0x2D6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F84u);
    ctx->pc = 0x2D6F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F7Cu;
    // 0x2d6f80: 0xa2000043  sb          $zero, 0x43($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D848u, 0x2D6F7Cu, 0x2D6F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F84u;
label_2d6f84:
    // 0x2d6f84: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d6f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6f88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6f90: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F90u;
        // 0x2d6f94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F98u;
}
