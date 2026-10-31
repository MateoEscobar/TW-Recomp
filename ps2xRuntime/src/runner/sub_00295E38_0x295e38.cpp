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

// Function: sub_00295E38
// Address: 0x295e38 - 0x295ec8
void sub_00295E38_0x295e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295E38_0x295e38");
#endif

    switch (ctx->pc) {
        case 0x295e58u: goto label_295e58;
        case 0x295e68u: goto label_295e68;
        case 0x295e84u: goto label_295e84;
        case 0x295e8cu: goto label_295e8c;
        case 0x295ea0u: goto label_295ea0;
        default: break;
    }

    ctx->pc = 0x295e38u;

    // 0x295e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x295e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x295e3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x295e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x295e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x295e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x295e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x295e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x295e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x295e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295e50: 0xc0a58bc  jal         func_2962F0
    ctx->pc = 0x295E50u;
    SET_GPR_U32(ctx, 31, 0x295E58u);
    ctx->pc = 0x295E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E50u;
    // 0x295e54: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x295E50u, 0x295E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E58u;
label_295e58:
    // 0x295e58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x295e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e60: 0xc0a58d6  jal         func_296358
    ctx->pc = 0x295E60u;
    SET_GPR_U32(ctx, 31, 0x295E68u);
    ctx->pc = 0x295E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E60u;
    // 0x295e64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x295E60u, 0x295E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E68u;
label_295e68:
    // 0x295e68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x295e68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e6c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x295e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295e70: 0x14c20009  bne         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295E70u;
    {
        const bool branch_taken_0x295e70 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x295E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E70u;
        // 0x295e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e70) {
            ctx->pc = 0x295E98u;
            goto label_295e98;
        }
    }
    ctx->pc = 0x295E78u;
    // 0x295e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e7c: 0xc0a58ec  jal         func_2963B0
    ctx->pc = 0x295E7Cu;
    SET_GPR_U32(ctx, 31, 0x295E84u);
    ctx->pc = 0x295E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E7Cu;
    // 0x295e80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2963B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2963B0u, 0x295E7Cu, 0x295E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E84u;
label_295e84:
    // 0x295e84: 0xc087420  jal         func_21D080
    ctx->pc = 0x295E84u;
    SET_GPR_U32(ctx, 31, 0x295E8Cu);
    ctx->pc = 0x295E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E84u;
    // 0x295e88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x295E84u, 0x295E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295E8Cu;
label_295e8c:
    // 0x295e8c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x295e8cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x295e90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x295E90u;
    {
        const bool branch_taken_0x295e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295E90u;
        // 0x295e94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295e90) {
            ctx->pc = 0x295EA8u;
            goto label_295ea8;
        }
    }
    ctx->pc = 0x295E98u;
label_295e98:
    // 0x295e98: 0xc0a5904  jal         func_296410
    ctx->pc = 0x295E98u;
    SET_GPR_U32(ctx, 31, 0x295EA0u);
    ctx->pc = 0x295E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295E98u;
    // 0x295e9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x295E98u, 0x295EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295EA0u;
label_295ea0:
    // 0x295ea0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x295ea0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_295ea8:
    // 0x295ea8: 0x7e430000  sq          $v1, 0x0($s2)
    ctx->pc = 0x295ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 3));
    // 0x295eac: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x295eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295eb0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x295eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295eb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x295eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295eb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x295eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x295EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295EBCu;
        // 0x295ec0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295EC4u;
    // 0x295ec4: 0x0  nop
    ctx->pc = 0x295ec4u;
    // NOP
    ctx->pc = 0x295ec8u;
}
