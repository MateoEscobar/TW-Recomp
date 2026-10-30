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

// Function: sub_00372C78
// Address: 0x372c78 - 0x372d48
void sub_00372C78_0x372c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372C78_0x372c78");
#endif

    switch (ctx->pc) {
        case 0x372ca8u: goto label_372ca8;
        case 0x372cb0u: goto label_372cb0;
        case 0x372cc4u: goto label_372cc4;
        case 0x372cccu: goto label_372ccc;
        case 0x372ce0u: goto label_372ce0;
        case 0x372cf4u: goto label_372cf4;
        case 0x372d08u: goto label_372d08;
        case 0x372d20u: goto label_372d20;
        default: break;
    }

    ctx->pc = 0x372c78u;

    // 0x372c78: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x372c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x372c7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x372c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372c80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x372c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x372c84: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x372c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x372c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x372c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372c90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x372c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x372c94: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x372c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x372c98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x372c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x372c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x372c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x372ca0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372CA0u;
    SET_GPR_U32(ctx, 31, 0x372CA8u);
    ctx->pc = 0x372CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CA0u;
    // 0x372ca4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372CA0u, 0x372CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CA8u;
label_372ca8:
    // 0x372ca8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372CA8u;
    SET_GPR_U32(ctx, 31, 0x372CB0u);
    ctx->pc = 0x372CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CA8u;
    // 0x372cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372CA8u, 0x372CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CB0u;
label_372cb0:
    // 0x372cb0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x372cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x372cb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x372cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x372cbc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x372CBCu;
    SET_GPR_U32(ctx, 31, 0x372CC4u);
    ctx->pc = 0x372CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CBCu;
    // 0x372cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x372CBCu, 0x372CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CC4u;
label_372cc4:
    // 0x372cc4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x372CC4u;
    SET_GPR_U32(ctx, 31, 0x372CCCu);
    ctx->pc = 0x372CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CC4u;
    // 0x372cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x372CC4u, 0x372CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CCCu;
label_372ccc:
    // 0x372ccc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x372cccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x372cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372cd8: 0xc102488  jal         func_409220
    ctx->pc = 0x372CD8u;
    SET_GPR_U32(ctx, 31, 0x372CE0u);
    ctx->pc = 0x372CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CD8u;
    // 0x372cdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372CD8u, 0x372CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CE0u;
label_372ce0:
    // 0x372ce0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x372ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372ce8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x372ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x372cec: 0xc102488  jal         func_409220
    ctx->pc = 0x372CECu;
    SET_GPR_U32(ctx, 31, 0x372CF4u);
    ctx->pc = 0x372CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372CECu;
    // 0x372cf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372CECu, 0x372CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372CF4u;
label_372cf4:
    // 0x372cf4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x372cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x372cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372cfc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x372cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x372d00: 0xc102488  jal         func_409220
    ctx->pc = 0x372D00u;
    SET_GPR_U32(ctx, 31, 0x372D08u);
    ctx->pc = 0x372D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D00u;
    // 0x372d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x372D00u, 0x372D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D08u;
label_372d08:
    // 0x372d08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x372d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x372d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d10: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x372d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x372d14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d18: 0xc044f62  jal         func_113D88
    ctx->pc = 0x372D18u;
    SET_GPR_U32(ctx, 31, 0x372D20u);
    ctx->pc = 0x372D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372D18u;
    // 0x372d1c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D88u, 0x372D18u, 0x372D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372D20u;
label_372d20:
    // 0x372d20: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x372d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x372d24: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x372d24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372d28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x372d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x372d2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x372d2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x372d30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x372d30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372d34: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x372d34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372d38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x372d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x372D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372D3Cu;
        // 0x372d40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372D44u;
    // 0x372d44: 0x0  nop
    ctx->pc = 0x372d44u;
    // NOP
    ctx->pc = 0x372d48u;
}
