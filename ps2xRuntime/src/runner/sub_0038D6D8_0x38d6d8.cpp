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

// Function: sub_0038D6D8
// Address: 0x38d6d8 - 0x38d758
void sub_0038D6D8_0x38d6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D6D8_0x38d6d8");
#endif

    switch (ctx->pc) {
        case 0x38d700u: goto label_38d700;
        case 0x38d714u: goto label_38d714;
        case 0x38d738u: goto label_38d738;
        default: break;
    }

    ctx->pc = 0x38d6d8u;

    // 0x38d6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38d6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38d6dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x38d6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38d6e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d6e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x38d6e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x38d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x38d6ec: 0x260412fc  addiu       $a0, $s0, 0x12FC
    ctx->pc = 0x38d6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4860));
    // 0x38d6f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38d6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d6f8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x38D6F8u;
    SET_GPR_U32(ctx, 31, 0x38D700u);
    ctx->pc = 0x38D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D6F8u;
    // 0x38d6fc: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x38D6F8u, 0x38D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D700u;
label_38d700:
    // 0x38d700: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38D700u;
    {
        const bool branch_taken_0x38d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D700u;
        // 0x38d704: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d700) {
            ctx->pc = 0x38D714u;
            goto label_38d714;
        }
    }
    ctx->pc = 0x38D708u;
    // 0x38d708: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38d708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d70c: 0xc0440c6  jal         func_110318
    ctx->pc = 0x38D70Cu;
    SET_GPR_U32(ctx, 31, 0x38D714u);
    ctx->pc = 0x38D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D70Cu;
    // 0x38d710: 0x8e0512fc  lw          $a1, 0x12FC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4860)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x38D70Cu, 0x38D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D714u;
label_38d714:
    // 0x38d714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x38d714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x38d718: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x38d718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x38d71c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38d71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d720: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x38d720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x38d724: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x38d724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x38d728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x38d728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38d72c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x38d72cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x38d730: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x38D730u;
    SET_GPR_U32(ctx, 31, 0x38D738u);
    ctx->pc = 0x38D734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D730u;
    // 0x38d734: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x38D730u, 0x38D738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D738u;
label_38d738:
    // 0x38d738: 0xae0212fc  sw          $v0, 0x12FC($s0)
    ctx->pc = 0x38d738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4860), GPR_U32(ctx, 2));
    // 0x38d73c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x38d73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38d740: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38d740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d744: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38d744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d74c: 0x3e00008  jr          $ra
    ctx->pc = 0x38D74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D74Cu;
        // 0x38d750: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D754u;
    // 0x38d754: 0x0  nop
    ctx->pc = 0x38d754u;
    // NOP
    ctx->pc = 0x38d758u;
}
