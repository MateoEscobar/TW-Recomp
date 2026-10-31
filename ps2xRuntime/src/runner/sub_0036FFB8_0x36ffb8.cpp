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

// Function: sub_0036FFB8
// Address: 0x36ffb8 - 0x370098
void sub_0036FFB8_0x36ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FFB8_0x36ffb8");
#endif

    switch (ctx->pc) {
        case 0x36ffe0u: goto label_36ffe0;
        case 0x36fff4u: goto label_36fff4;
        case 0x370000u: goto label_370000;
        case 0x37001cu: goto label_37001c;
        case 0x370028u: goto label_370028;
        case 0x370038u: goto label_370038;
        case 0x370050u: goto label_370050;
        case 0x370064u: goto label_370064;
        default: break;
    }

    ctx->pc = 0x36ffb8u;

    // 0x36ffb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36ffb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36ffbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36ffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x36ffc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x36ffc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x36ffc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36ffc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ffc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x36ffc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x36ffcc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36ffccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ffd0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x36ffd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x36ffd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36ffd8: 0x26510001  addiu       $s1, $s2, 0x1
    ctx->pc = 0x36ffd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x36ffdc: 0x0  nop
    ctx->pc = 0x36ffdcu;
    // NOP
label_36ffe0:
    // 0x36ffe0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36ffe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ffe4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ffe8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36ffe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ffec: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x36FFECu;
    SET_GPR_U32(ctx, 31, 0x36FFF4u);
    ctx->pc = 0x36FFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FFECu;
    // 0x36fff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x36FFECu, 0x36FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FFF4u;
label_36fff4:
    // 0x36fff4: 0x3b28021  addu        $s0, $sp, $s2
    ctx->pc = 0x36fff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 18)));
    // 0x36fff8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36FFF8u;
    SET_GPR_U32(ctx, 31, 0x370000u);
    ctx->pc = 0x36FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FFF8u;
    // 0x36fffc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36FFF8u, 0x370000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370000u;
label_370000:
    // 0x370000: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x370000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370004: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x370004u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x370008: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x370008u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37000c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37000Cu;
    {
        const bool branch_taken_0x37000c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37000Cu;
        // 0x370010: 0x26510001  addiu       $s1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37000c) {
            ctx->pc = 0x36FFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ffe0;
        }
    }
    ctx->pc = 0x370014u;
    // 0x370014: 0xc06d73c  jal         func_1B5CF0
    ctx->pc = 0x370014u;
    SET_GPR_U32(ctx, 31, 0x37001Cu);
    ctx->pc = 0x370018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370014u;
    // 0x370018: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5CF0u, 0x370014u, 0x37001Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37001Cu;
label_37001c:
    // 0x37001c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37001cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370020: 0x3a61021  addu        $v0, $sp, $a2
    ctx->pc = 0x370020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
    // 0x370024: 0x0  nop
    ctx->pc = 0x370024u;
    // NOP
label_370028:
    // 0x370028: 0x24d10001  addiu       $s1, $a2, 0x1
    ctx->pc = 0x370028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x37002c: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x37002cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x370030: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x370030u;
    SET_GPR_U32(ctx, 31, 0x370038u);
    ctx->pc = 0x370034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370030u;
    // 0x370034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x370030u, 0x370038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370038u;
label_370038:
    // 0x370038: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x370038u;
    {
        const bool branch_taken_0x370038 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x37003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370038u;
        // 0x37003c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370038) {
            ctx->pc = 0x370054u;
            goto label_370054;
        }
    }
    ctx->pc = 0x370040u;
    // 0x370040: 0x340580e0  ori         $a1, $zero, 0x80E0
    ctx->pc = 0x370040u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32992);
    // 0x370044: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x370044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x370048: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x370048u;
    SET_GPR_U32(ctx, 31, 0x370050u);
    ctx->pc = 0x37004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370048u;
    // 0x37004c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x370048u, 0x370050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370050u;
label_370050:
    // 0x370050: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x370050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_370054:
    // 0x370054: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x370058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37005c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37005Cu;
    SET_GPR_U32(ctx, 31, 0x370064u);
    ctx->pc = 0x370060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37005Cu;
    // 0x370060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37005Cu, 0x370064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370064u;
label_370064:
    // 0x370064: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x370064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370068: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x370068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37006c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x37006Cu;
    {
        const bool branch_taken_0x37006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37006Cu;
        // 0x370070: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37006c) {
            ctx->pc = 0x370028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_370028;
        }
    }
    ctx->pc = 0x370074u;
    // 0x370074: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x370074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x370078: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x370078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37007c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x37007cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x370080: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x370080u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x370084: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x370084u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x370088: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37008c: 0x3e00008  jr          $ra
    ctx->pc = 0x37008Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37008Cu;
        // 0x370090: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37008Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370094u;
    // 0x370094: 0x0  nop
    ctx->pc = 0x370094u;
    // NOP
    ctx->pc = 0x370098u;
}
