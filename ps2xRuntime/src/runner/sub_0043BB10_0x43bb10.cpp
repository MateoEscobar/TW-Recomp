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

// Function: sub_0043BB10
// Address: 0x43bb10 - 0x43bbd8
void sub_0043BB10_0x43bb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043BB10_0x43bb10");
#endif

    switch (ctx->pc) {
        case 0x43bb34u: goto label_43bb34;
        case 0x43bb44u: goto label_43bb44;
        case 0x43bbb8u: goto label_43bbb8;
        default: break;
    }

    ctx->pc = 0x43bb10u;

    // 0x43bb10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x43bb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x43bb14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x43bb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x43bb18: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x43bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x43bb1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43bb1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bb20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x43bb20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bb24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43bb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x43bb28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x43bb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x43bb2c: 0xc10edfe  jal         func_43B7F8
    ctx->pc = 0x43BB2Cu;
    SET_GPR_U32(ctx, 31, 0x43BB34u);
    ctx->pc = 0x43BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BB2Cu;
    // 0x43bb30: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B7F8u, 0x43BB2Cu, 0x43BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BB34u;
label_43bb34:
    // 0x43bb34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43bb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bb38: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x43bb38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x43bb3c: 0xc10edfe  jal         func_43B7F8
    ctx->pc = 0x43BB3Cu;
    SET_GPR_U32(ctx, 31, 0x43BB44u);
    ctx->pc = 0x43BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BB3Cu;
    // 0x43bb40: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B7F8u, 0x43BB3Cu, 0x43BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BB44u;
label_43bb44:
    // 0x43bb44: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x43bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x43bb48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x43bb48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bb4c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x43bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x43bb50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x43bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43bb54: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x43bb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x43bb58: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x43bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43bb5c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x43bb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x43bb60: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x43bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x43bb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x43bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x43bb68: 0x18400009  blez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x43BB68u;
    {
        const bool branch_taken_0x43bb68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x43BB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB68u;
        // 0x43bb6c: 0x21500  sll         $v0, $v0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb68) {
            ctx->pc = 0x43BB90u;
            goto label_43bb90;
        }
    }
    ctx->pc = 0x43BB70u;
    // 0x43bb70: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x43bb70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x43bb74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x43bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43bb78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43bb7c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43bb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43bb80: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43bb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43bb84: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x43bb84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x43bb88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x43BB88u;
    {
        const bool branch_taken_0x43bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BB88u;
        // 0x43bb8c: 0x2439025  or          $s2, $s2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43bb88) {
            ctx->pc = 0x43BBACu;
            goto label_43bbac;
        }
    }
    ctx->pc = 0x43BB90u;
label_43bb90:
    // 0x43bb90: 0x6183f  dsra32      $v1, $a2, 0
    ctx->pc = 0x43bb90u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x43bb94: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x43bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43bb98: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43bb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43bb9c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43bb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43bba0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x43bba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43bba4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x43bba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x43bba8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x43bba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_43bbac:
    // 0x43bbac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43bbb0: 0xc10b000  jal         func_42C000
    ctx->pc = 0x43BBB0u;
    SET_GPR_U32(ctx, 31, 0x43BBB8u);
    ctx->pc = 0x43BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43BBB0u;
    // 0x43bbb4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43BBB0u, 0x43BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43BBB8u;
label_43bbb8:
    // 0x43bbb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x43bbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43bbbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x43bbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43bbc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x43bbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43bbc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x43bbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x43BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43BBC8u;
        // 0x43bbcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43BBD0u;
    // 0x43bbd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x43bbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x43bbd4: 0x0  nop
    ctx->pc = 0x43bbd4u;
    // NOP
    ctx->pc = 0x43bbd8u;
}
