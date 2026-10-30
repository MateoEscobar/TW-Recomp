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

// Function: sub_0027FFA0
// Address: 0x27ffa0 - 0x280068
void sub_0027FFA0_0x27ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FFA0_0x27ffa0");
#endif

    switch (ctx->pc) {
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27fff0u: goto label_27fff0;
        case 0x280000u: goto label_280000;
        case 0x280010u: goto label_280010;
        case 0x280028u: goto label_280028;
        case 0x280030u: goto label_280030;
        case 0x28003cu: goto label_28003c;
        case 0x280050u: goto label_280050;
        default: break;
    }

    ctx->pc = 0x27ffa0u;

    // 0x27ffa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27ffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27ffa4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x27ffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x27ffa8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ffa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ffac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ffacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ffb0: 0xc089b98  jal         func_226E60
    ctx->pc = 0x27FFB0u;
    SET_GPR_U32(ctx, 31, 0x27FFB8u);
    ctx->pc = 0x27FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFB0u;
    // 0x27ffb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x27FFB0u, 0x27FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFB8u;
label_27ffb8:
    // 0x27ffb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27ffb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ffbc: 0xc08c050  jal         func_230140
    ctx->pc = 0x27FFBCu;
    SET_GPR_U32(ctx, 31, 0x27FFC4u);
    ctx->pc = 0x27FFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFBCu;
    // 0x27ffc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230140u, 0x27FFBCu, 0x27FFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFC4u;
label_27ffc4:
    // 0x27ffc4: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27FFC4u;
    SET_GPR_U32(ctx, 31, 0x27FFCCu);
    ctx->pc = 0x27FFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFC4u;
    // 0x27ffc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27FFC4u, 0x27FFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFCCu;
label_27ffcc:
    // 0x27ffcc: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x27ffccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x27ffd0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x27FFD0u;
    {
        const bool branch_taken_0x27ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ffd0) {
            ctx->pc = 0x280000u;
            goto label_280000;
        }
    }
    ctx->pc = 0x27FFD8u;
    // 0x27ffd8: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x27FFD8u;
    {
        const bool branch_taken_0x27ffd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FFD8u;
        // 0x27ffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffd8) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27FFE0u;
    // 0x27ffe0: 0xc09ecaa  jal         func_27B2A8
    ctx->pc = 0x27FFE0u;
    SET_GPR_U32(ctx, 31, 0x27FFE8u);
    ctx->pc = 0x27FFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE0u;
    // 0x27ffe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B2A8u, 0x27FFE0u, 0x27FFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFE8u;
label_27ffe8:
    // 0x27ffe8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x27FFE8u;
    SET_GPR_U32(ctx, 31, 0x27FFF0u);
    ctx->pc = 0x27FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFE8u;
    // 0x27ffec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x27FFE8u, 0x27FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FFF0u;
label_27fff0:
    // 0x27fff0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27fff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fff8: 0xc089b0c  jal         func_226C30
    ctx->pc = 0x27FFF8u;
    SET_GPR_U32(ctx, 31, 0x280000u);
    ctx->pc = 0x27FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FFF8u;
    // 0x27fffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226C30u, 0x27FFF8u, 0x280000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280000u;
label_280000:
    // 0x280000: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x280000u;
    {
        const bool branch_taken_0x280000 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280000) {
            ctx->pc = 0x280028u;
            goto label_280028;
        }
    }
    ctx->pc = 0x280008u;
label_280008:
    // 0x280008: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x280008u;
    SET_GPR_U32(ctx, 31, 0x280010u);
    ctx->pc = 0x28000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280008u;
    // 0x28000c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x280008u, 0x280010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280010u;
label_280010:
    // 0x280010: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x280010u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x280014: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280014u;
    {
        const bool branch_taken_0x280014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280014u;
        // 0x280018: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280014) {
            ctx->pc = 0x280028u;
            goto label_280028;
        }
    }
    ctx->pc = 0x28001Cu;
    // 0x28001c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280020: 0xc088776  jal         func_221DD8
    ctx->pc = 0x280020u;
    SET_GPR_U32(ctx, 31, 0x280028u);
    ctx->pc = 0x280024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280020u;
    // 0x280024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221DD8u, 0x280020u, 0x280028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280028u;
label_280028:
    // 0x280028: 0xc0a002e  jal         func_2800B8
    ctx->pc = 0x280028u;
    SET_GPR_U32(ctx, 31, 0x280030u);
    ctx->pc = 0x28002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280028u;
    // 0x28002c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2800B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2800B8u, 0x280028u, 0x280030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280030u;
label_280030:
    // 0x280030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280034: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x280034u;
    SET_GPR_U32(ctx, 31, 0x28003Cu);
    ctx->pc = 0x280038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280034u;
    // 0x280038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x280034u, 0x28003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28003Cu;
label_28003c:
    // 0x28003c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28003Cu;
    {
        const bool branch_taken_0x28003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28003c) {
            ctx->pc = 0x280040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28003Cu;
            // 0x280040: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280054u;
            goto label_280054;
        }
    }
    ctx->pc = 0x280044u;
    // 0x280044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280048: 0xc089974  jal         func_2265D0
    ctx->pc = 0x280048u;
    SET_GPR_U32(ctx, 31, 0x280050u);
    ctx->pc = 0x28004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x280048u;
    // 0x28004c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265D0u, 0x280048u, 0x280050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280050u;
label_280050:
    // 0x280050: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x280050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_280054:
    // 0x280054: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28005c: 0x3e00008  jr          $ra
    ctx->pc = 0x28005Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28005Cu;
        // 0x280060: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28005Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280064u;
    // 0x280064: 0x0  nop
    ctx->pc = 0x280064u;
    // NOP
    ctx->pc = 0x280068u;
}
