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

// Function: sub_00367030
// Address: 0x367030 - 0x3670c0
void sub_00367030_0x367030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367030_0x367030");
#endif

    switch (ctx->pc) {
        case 0x367058u: goto label_367058;
        case 0x367060u: goto label_367060;
        case 0x367074u: goto label_367074;
        case 0x36707cu: goto label_36707c;
        case 0x367090u: goto label_367090;
        case 0x3670a0u: goto label_3670a0;
        default: break;
    }

    ctx->pc = 0x367030u;

    // 0x367030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x367030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x367034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367038: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x367038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36703c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36703cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x367040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x367044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x367048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36704c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36704cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x367050: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367050u;
    SET_GPR_U32(ctx, 31, 0x367058u);
    ctx->pc = 0x367054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367050u;
    // 0x367054: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367050u, 0x367058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367058u;
label_367058:
    // 0x367058: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367058u;
    SET_GPR_U32(ctx, 31, 0x367060u);
    ctx->pc = 0x36705Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367058u;
    // 0x36705c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367058u, 0x367060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367060u;
label_367060:
    // 0x367060: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x367060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367064: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x367064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367068: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36706c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36706Cu;
    SET_GPR_U32(ctx, 31, 0x367074u);
    ctx->pc = 0x367070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36706Cu;
    // 0x367070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36706Cu, 0x367074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367074u;
label_367074:
    // 0x367074: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367074u;
    SET_GPR_U32(ctx, 31, 0x36707Cu);
    ctx->pc = 0x367078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367074u;
    // 0x367078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367074u, 0x36707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36707Cu;
label_36707c:
    // 0x36707c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36707cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x367080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367084: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x367084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367088: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367088u;
    SET_GPR_U32(ctx, 31, 0x367090u);
    ctx->pc = 0x36708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367088u;
    // 0x36708c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367088u, 0x367090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367090u;
label_367090:
    // 0x367090: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x367090u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x367094: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367098: 0xc046f70  jal         func_11BDC0
    ctx->pc = 0x367098u;
    SET_GPR_U32(ctx, 31, 0x3670A0u);
    ctx->pc = 0x36709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367098u;
    // 0x36709c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BDC0u, 0x367098u, 0x3670A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3670A0u;
label_3670a0:
    // 0x3670a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3670a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3670a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3670a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3670a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3670ac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3670acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3670b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3670b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3670b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3670B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3670B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3670B4u;
        // 0x3670b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3670B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3670BCu;
    // 0x3670bc: 0x0  nop
    ctx->pc = 0x3670bcu;
    // NOP
    ctx->pc = 0x3670c0u;
}
