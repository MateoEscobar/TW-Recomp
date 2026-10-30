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

// Function: sub_00326020
// Address: 0x326020 - 0x3260d8
void sub_00326020_0x326020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326020_0x326020");
#endif

    switch (ctx->pc) {
        case 0x326048u: goto label_326048;
        case 0x326060u: goto label_326060;
        case 0x326070u: goto label_326070;
        case 0x32607cu: goto label_32607c;
        case 0x326088u: goto label_326088;
        case 0x326098u: goto label_326098;
        case 0x3260a4u: goto label_3260a4;
        case 0x3260b8u: goto label_3260b8;
        default: break;
    }

    ctx->pc = 0x326020u;

    // 0x326020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326024: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x326028: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x32602c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32602cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326030: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x326030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x326034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32603c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x32603cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326040: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x326040u;
    SET_GPR_U32(ctx, 31, 0x326048u);
    ctx->pc = 0x326044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326040u;
    // 0x326044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x326040u, 0x326048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326048u;
label_326048:
    // 0x326048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x326048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32604c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x32604Cu;
    {
        const bool branch_taken_0x32604c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32604Cu;
        // 0x326050: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32604c) {
            ctx->pc = 0x326068u;
            goto label_326068;
        }
    }
    ctx->pc = 0x326054u;
    // 0x326054: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x326054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326058: 0xc0c8d86  jal         func_323618
    ctx->pc = 0x326058u;
    SET_GPR_U32(ctx, 31, 0x326060u);
    ctx->pc = 0x32605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326058u;
    // 0x32605c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323618u, 0x326058u, 0x326060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326060u;
label_326060:
    // 0x326060: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x326060u;
    {
        const bool branch_taken_0x326060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326060u;
        // 0x326064: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326060) {
            ctx->pc = 0x3260C0u;
            goto label_3260c0;
        }
    }
    ctx->pc = 0x326068u;
label_326068:
    // 0x326068: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x326068u;
    SET_GPR_U32(ctx, 31, 0x326070u);
    ctx->pc = 0x32606Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326068u;
    // 0x32606c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x326068u, 0x326070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326070u;
label_326070:
    // 0x326070: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x326070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x326074: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x326074u;
    SET_GPR_U32(ctx, 31, 0x32607Cu);
    ctx->pc = 0x326078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326074u;
    // 0x326078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x326074u, 0x32607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32607Cu;
label_32607c:
    // 0x32607c: 0x2645fffe  addiu       $a1, $s2, -0x2
    ctx->pc = 0x32607cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967294));
    // 0x326080: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x326080u;
    SET_GPR_U32(ctx, 31, 0x326088u);
    ctx->pc = 0x326084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326080u;
    // 0x326084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x326080u, 0x326088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326088u;
label_326088:
    // 0x326088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x326088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32608c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32608cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326090: 0xc0c9048  jal         func_324120
    ctx->pc = 0x326090u;
    SET_GPR_U32(ctx, 31, 0x326098u);
    ctx->pc = 0x326094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326090u;
    // 0x326094: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324120u, 0x326090u, 0x326098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326098u;
label_326098:
    // 0x326098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x326098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32609c: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x32609Cu;
    SET_GPR_U32(ctx, 31, 0x3260A4u);
    ctx->pc = 0x3260A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32609Cu;
    // 0x3260a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x32609Cu, 0x3260A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260A4u;
label_3260a4:
    // 0x3260a4: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x3260a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3260a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3260a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260ac: 0x10802b  sltu        $s0, $zero, $s0
    ctx->pc = 0x3260acu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3260b0: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x3260B0u;
    SET_GPR_U32(ctx, 31, 0x3260B8u);
    ctx->pc = 0x3260B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3260B0u;
    // 0x3260b4: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x3260B0u, 0x3260B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3260B8u;
label_3260b8:
    // 0x3260b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3260b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3260bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3260bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3260c0:
    // 0x3260c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3260c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3260c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3260c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3260c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3260c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3260cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3260CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3260D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3260CCu;
        // 0x3260d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3260CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3260D4u;
    // 0x3260d4: 0x0  nop
    ctx->pc = 0x3260d4u;
    // NOP
    ctx->pc = 0x3260d8u;
}
