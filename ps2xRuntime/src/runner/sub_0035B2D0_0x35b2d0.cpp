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

// Function: sub_0035B2D0
// Address: 0x35b2d0 - 0x35b340
void sub_0035B2D0_0x35b2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B2D0_0x35b2d0");
#endif

    switch (ctx->pc) {
        case 0x35b2f0u: goto label_35b2f0;
        case 0x35b2f8u: goto label_35b2f8;
        case 0x35b300u: goto label_35b300;
        case 0x35b314u: goto label_35b314;
        case 0x35b324u: goto label_35b324;
        default: break;
    }

    ctx->pc = 0x35b2d0u;

    // 0x35b2d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b2d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b2d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b2d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35b2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35b2dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b2e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35b2e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b2e8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B2E8u;
    SET_GPR_U32(ctx, 31, 0x35B2F0u);
    ctx->pc = 0x35B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2E8u;
    // 0x35b2ec: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B2E8u, 0x35B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2F0u;
label_35b2f0:
    // 0x35b2f0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B2F0u;
    SET_GPR_U32(ctx, 31, 0x35B2F8u);
    ctx->pc = 0x35B2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2F0u;
    // 0x35b2f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B2F0u, 0x35B2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B2F8u;
label_35b2f8:
    // 0x35b2f8: 0xc08d4ac  jal         func_2352B0
    ctx->pc = 0x35B2F8u;
    SET_GPR_U32(ctx, 31, 0x35B300u);
    ctx->pc = 0x35B2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B2F8u;
    // 0x35b2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2352B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2352B0u, 0x35B2F8u, 0x35B300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B300u;
label_35b300:
    // 0x35b300: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x35b300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x35b304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35b304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b30c: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x35B30Cu;
    SET_GPR_U32(ctx, 31, 0x35B314u);
    ctx->pc = 0x35B310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B30Cu;
    // 0x35b310: 0x24a590b0  addiu       $a1, $a1, -0x6F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x35B30Cu, 0x35B314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B314u;
label_35b314:
    // 0x35b314: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x35b314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35b318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b31c: 0xc10254e  jal         func_409538
    ctx->pc = 0x35B31Cu;
    SET_GPR_U32(ctx, 31, 0x35B324u);
    ctx->pc = 0x35B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B31Cu;
    // 0x35b320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409538u, 0x35B31Cu, 0x35B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B324u;
label_35b324:
    // 0x35b324: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35b324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35b328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b32c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35b32cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b334: 0x3e00008  jr          $ra
    ctx->pc = 0x35B334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B334u;
        // 0x35b338: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B33Cu;
    // 0x35b33c: 0x0  nop
    ctx->pc = 0x35b33cu;
    // NOP
    ctx->pc = 0x35b340u;
}
