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

// Function: sub_003F3588
// Address: 0x3f3588 - 0x3f35d8
void sub_003F3588_0x3f3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F3588_0x3f3588");
#endif

    switch (ctx->pc) {
        case 0x3f35a8u: goto label_3f35a8;
        case 0x3f35b4u: goto label_3f35b4;
        case 0x3f35c0u: goto label_3f35c0;
        default: break;
    }

    ctx->pc = 0x3f3588u;

    // 0x3f3588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3f3588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3f358c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f358cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3f3590: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f3590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f3594: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3f3598: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3f3598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f359c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f359cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3f35a0: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3F35A0u;
    SET_GPR_U32(ctx, 31, 0x3F35A8u);
    ctx->pc = 0x3F35A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F35A0u;
    // 0x3f35a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3F35A0u, 0x3F35A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F35A8u;
label_3f35a8:
    // 0x3f35a8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x3f35a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x3f35ac: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F35ACu;
    SET_GPR_U32(ctx, 31, 0x3F35B4u);
    ctx->pc = 0x3F35B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F35ACu;
    // 0x3f35b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F35ACu, 0x3F35B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F35B4u;
label_3f35b4:
    // 0x3f35b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f35b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f35b8: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3F35B8u;
    SET_GPR_U32(ctx, 31, 0x3F35C0u);
    ctx->pc = 0x3F35BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F35B8u;
    // 0x3f35bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3F35B8u, 0x3F35C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F35C0u;
label_3f35c0:
    // 0x3f35c0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3f35c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x3f35c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f35c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f35c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f35c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f35cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f35ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f35d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3F35D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F35D0u;
        // 0x3f35d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F35D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F35D8u;
}
