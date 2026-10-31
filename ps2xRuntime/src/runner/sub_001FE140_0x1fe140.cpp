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

// Function: sub_001FE140
// Address: 0x1fe140 - 0x1fe198
void sub_001FE140_0x1fe140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE140_0x1fe140");
#endif

    switch (ctx->pc) {
        case 0x1fe174u: goto label_1fe174;
        case 0x1fe180u: goto label_1fe180;
        default: break;
    }

    ctx->pc = 0x1fe140u;

    // 0x1fe140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe144: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x1fe144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x1fe148: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fe148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fe14c: 0x24a58110  addiu       $a1, $a1, -0x7EF0
    ctx->pc = 0x1fe14cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934800));
    // 0x1fe150: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fe150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fe154: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1fe154u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x1fe158: 0x2610ef30  addiu       $s0, $s0, -0x10D0
    ctx->pc = 0x1fe158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962992));
    // 0x1fe15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe160: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fe160u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe164: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x1fe164u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x63EF31u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63EF31u, _value); } while (0);
    // 0x1fe168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe16c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1FE16Cu;
    SET_GPR_U32(ctx, 31, 0x1FE174u);
    ctx->pc = 0x1FE170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE16Cu;
    // 0x1fe170: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1FE16Cu, 0x1FE174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE174u;
label_1fe174:
    // 0x1fe174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe178: 0xc10c25f  jal         func_43097C
    ctx->pc = 0x1FE178u;
    SET_GPR_U32(ctx, 31, 0x1FE180u);
    ctx->pc = 0x1FE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE178u;
    // 0x1fe17c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1FE178u, 0x1FE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE180u;
label_1fe180:
    // 0x1fe180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fe180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fe184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe18c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE18Cu;
        // 0x1fe190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE194u;
    // 0x1fe194: 0x0  nop
    ctx->pc = 0x1fe194u;
    // NOP
    ctx->pc = 0x1fe198u;
}
