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

// Function: sub_0032CA28
// Address: 0x32ca28 - 0x32ca88
void sub_0032CA28_0x32ca28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032CA28_0x32ca28");
#endif

    switch (ctx->pc) {
        case 0x32ca6cu: goto label_32ca6c;
        case 0x32ca78u: goto label_32ca78;
        default: break;
    }

    ctx->pc = 0x32ca28u;

    // 0x32ca28: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x32ca28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x32ca2c: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x32ca2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x32ca30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32ca30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca34: 0xffa60180  sd          $a2, 0x180($sp)
    ctx->pc = 0x32ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 6));
    // 0x32ca38: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x32ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x32ca3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32ca3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca40: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x32ca40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x32ca44: 0xffa70188  sd          $a3, 0x188($sp)
    ctx->pc = 0x32ca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 7));
    // 0x32ca48: 0xffa80190  sd          $t0, 0x190($sp)
    ctx->pc = 0x32ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 8));
    // 0x32ca4c: 0xffa90198  sd          $t1, 0x198($sp)
    ctx->pc = 0x32ca4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 9));
    // 0x32ca50: 0xffaa01a0  sd          $t2, 0x1A0($sp)
    ctx->pc = 0x32ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 10));
    // 0x32ca54: 0xffab01a8  sd          $t3, 0x1A8($sp)
    ctx->pc = 0x32ca54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 11));
    // 0x32ca58: 0xe7ac0170  swc1        $f12, 0x170($sp)
    ctx->pc = 0x32ca58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x32ca5c: 0xe7ae0174  swc1        $f14, 0x174($sp)
    ctx->pc = 0x32ca5cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
    // 0x32ca60: 0xe7b00178  swc1        $f16, 0x178($sp)
    ctx->pc = 0x32ca60u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x32ca64: 0xc10ce32  jal         func_4338C8
    ctx->pc = 0x32CA64u;
    SET_GPR_U32(ctx, 31, 0x32CA6Cu);
    ctx->pc = 0x32CA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA64u;
    // 0x32ca68: 0xe7b2017c  swc1        $f18, 0x17C($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4338C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4338C8u, 0x32CA64u, 0x32CA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA6Cu;
label_32ca6c:
    // 0x32ca6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32ca6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ca70: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x32CA70u;
    SET_GPR_U32(ctx, 31, 0x32CA78u);
    ctx->pc = 0x32CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32CA70u;
    // 0x32ca74: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x32CA70u, 0x32CA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32CA78u;
label_32ca78:
    // 0x32ca78: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x32ca78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x32ca7c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x32ca7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32ca80: 0x3e00008  jr          $ra
    ctx->pc = 0x32CA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32CA80u;
        // 0x32ca84: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32CA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32CA88u;
}
