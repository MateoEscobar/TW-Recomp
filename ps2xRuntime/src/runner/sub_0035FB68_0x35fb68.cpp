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

// Function: sub_0035FB68
// Address: 0x35fb68 - 0x35fbe0
void sub_0035FB68_0x35fb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035FB68_0x35fb68");
#endif

    switch (ctx->pc) {
        case 0x35fb90u: goto label_35fb90;
        case 0x35fb98u: goto label_35fb98;
        case 0x35fbacu: goto label_35fbac;
        case 0x35fbb4u: goto label_35fbb4;
        case 0x35fbc0u: goto label_35fbc0;
        default: break;
    }

    ctx->pc = 0x35fb68u;

    // 0x35fb68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35fb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35fb6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35fb70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35fb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35fb74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35fb78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35fb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35fb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb80: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35fb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35fb84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35fb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35fb88: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FB88u;
    SET_GPR_U32(ctx, 31, 0x35FB90u);
    ctx->pc = 0x35FB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB88u;
    // 0x35fb8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FB88u, 0x35FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB90u;
label_35fb90:
    // 0x35fb90: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FB90u;
    SET_GPR_U32(ctx, 31, 0x35FB98u);
    ctx->pc = 0x35FB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FB90u;
    // 0x35fb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FB90u, 0x35FB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FB98u;
label_35fb98:
    // 0x35fb98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35fb98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fb9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35fb9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35fba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fba4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35FBA4u;
    SET_GPR_U32(ctx, 31, 0x35FBACu);
    ctx->pc = 0x35FBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBA4u;
    // 0x35fba8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35FBA4u, 0x35FBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBACu;
label_35fbac:
    // 0x35fbac: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35FBACu;
    SET_GPR_U32(ctx, 31, 0x35FBB4u);
    ctx->pc = 0x35FBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBACu;
    // 0x35fbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35FBACu, 0x35FBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBB4u;
label_35fbb4:
    // 0x35fbb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35fbb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fbb8: 0xc0a4a6a  jal         func_2929A8
    ctx->pc = 0x35FBB8u;
    SET_GPR_U32(ctx, 31, 0x35FBC0u);
    ctx->pc = 0x35FBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35FBB8u;
    // 0x35fbbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2929A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2929A8u, 0x35FBB8u, 0x35FBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FBC0u;
label_35fbc0:
    // 0x35fbc0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35fbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35fbc4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35fbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35fbc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35fbc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fbcc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35fbccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fbd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35fbd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fbd4: 0x3e00008  jr          $ra
    ctx->pc = 0x35FBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35FBD4u;
        // 0x35fbd8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FBDCu;
    // 0x35fbdc: 0x0  nop
    ctx->pc = 0x35fbdcu;
    // NOP
    ctx->pc = 0x35fbe0u;
}
