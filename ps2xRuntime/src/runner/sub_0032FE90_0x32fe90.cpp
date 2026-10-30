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

// Function: sub_0032FE90
// Address: 0x32fe90 - 0x32ff70
void sub_0032FE90_0x32fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FE90_0x32fe90");
#endif

    switch (ctx->pc) {
        case 0x32feb4u: goto label_32feb4;
        case 0x32fec4u: goto label_32fec4;
        case 0x32feccu: goto label_32fecc;
        case 0x32fed8u: goto label_32fed8;
        case 0x32fef0u: goto label_32fef0;
        case 0x32fef8u: goto label_32fef8;
        case 0x32ff04u: goto label_32ff04;
        case 0x32ff40u: goto label_32ff40;
        case 0x32ff54u: goto label_32ff54;
        default: break;
    }

    ctx->pc = 0x32fe90u;

    // 0x32fe90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32fe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32fe94: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32fe94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32fe98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x32fe98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x32fe9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x32fe9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fea0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x32fea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x32fea4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x32fea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x32fea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32feac: 0xc0c9192  jal         func_324648
    ctx->pc = 0x32FEACu;
    SET_GPR_U32(ctx, 31, 0x32FEB4u);
    ctx->pc = 0x32FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEACu;
    // 0x32feb0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324648u, 0x32FEACu, 0x32FEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEB4u;
label_32feb4:
    // 0x32feb4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x32feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32feb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32feb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32febc: 0xc0c91d4  jal         func_324750
    ctx->pc = 0x32FEBCu;
    SET_GPR_U32(ctx, 31, 0x32FEC4u);
    ctx->pc = 0x32FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEBCu;
    // 0x32fec0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324750u, 0x32FEBCu, 0x32FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEC4u;
label_32fec4:
    // 0x32fec4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32FEC4u;
    SET_GPR_U32(ctx, 31, 0x32FECCu);
    ctx->pc = 0x32FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEC4u;
    // 0x32fec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32FEC4u, 0x32FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FECCu;
label_32fecc:
    // 0x32fecc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32feccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fed0: 0xc0cbf9c  jal         func_32FE70
    ctx->pc = 0x32FED0u;
    SET_GPR_U32(ctx, 31, 0x32FED8u);
    ctx->pc = 0x32FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FED0u;
    // 0x32fed4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE70u, 0x32FED0u, 0x32FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FED8u;
label_32fed8:
    // 0x32fed8: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x32fed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x32fedc: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x32fedcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x32fee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32fee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32fee4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x32fee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32fee8: 0xc0c91f2  jal         func_3247C8
    ctx->pc = 0x32FEE8u;
    SET_GPR_U32(ctx, 31, 0x32FEF0u);
    ctx->pc = 0x32FEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEE8u;
    // 0x32feec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3247C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3247C8u, 0x32FEE8u, 0x32FEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEF0u;
label_32fef0:
    // 0x32fef0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x32FEF0u;
    SET_GPR_U32(ctx, 31, 0x32FEF8u);
    ctx->pc = 0x32FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEF0u;
    // 0x32fef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x32FEF0u, 0x32FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FEF8u;
label_32fef8:
    // 0x32fef8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x32fef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32fefc: 0xc0cbf9c  jal         func_32FE70
    ctx->pc = 0x32FEFCu;
    SET_GPR_U32(ctx, 31, 0x32FF04u);
    ctx->pc = 0x32FF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FEFCu;
    // 0x32ff00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FE70u, 0x32FEFCu, 0x32FF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF04u;
label_32ff04:
    // 0x32ff04: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x32ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ff08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ff0c: 0x10182a  slt         $v1, $zero, $s0
    ctx->pc = 0x32ff0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x32ff10: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x32ff10u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32ff14: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x32ff14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x32ff18: 0x44300a  movz        $a2, $v0, $a0
    ctx->pc = 0x32ff18u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x32ff1c: 0xd0102a  slt         $v0, $a2, $s0
    ctx->pc = 0x32ff1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x32ff20: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x32FF20u;
    {
        const bool branch_taken_0x32ff20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF20u;
        // 0x32ff24: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff20) {
            ctx->pc = 0x32FF48u;
            goto label_32ff48;
        }
    }
    ctx->pc = 0x32FF28u;
    // 0x32ff28: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x32ff28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x32ff2c: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x32ff2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x32ff30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x32ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x32ff38: 0xc0c8e50  jal         func_323940
    ctx->pc = 0x32FF38u;
    SET_GPR_U32(ctx, 31, 0x32FF40u);
    ctx->pc = 0x32FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF38u;
    // 0x32ff3c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323940u, 0x32FF38u, 0x32FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF40u;
label_32ff40:
    // 0x32ff40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32FF40u;
    {
        const bool branch_taken_0x32ff40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32FF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF40u;
        // 0x32ff44: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ff40) {
            ctx->pc = 0x32FF58u;
            goto label_32ff58;
        }
    }
    ctx->pc = 0x32FF48u;
label_32ff48:
    // 0x32ff48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ff48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ff4c: 0xc0c8e68  jal         func_3239A0
    ctx->pc = 0x32FF4Cu;
    SET_GPR_U32(ctx, 31, 0x32FF54u);
    ctx->pc = 0x32FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32FF4Cu;
    // 0x32ff50: 0x24a55f00  addiu       $a1, $a1, 0x5F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3239A0u, 0x32FF4Cu, 0x32FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32FF54u;
label_32ff54:
    // 0x32ff54: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x32ff54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_32ff58:
    // 0x32ff58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32ff5c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x32ff5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32ff60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32ff60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32ff64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32ff64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32ff68: 0x3e00008  jr          $ra
    ctx->pc = 0x32FF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32FF68u;
        // 0x32ff6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32FF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32FF70u;
}
