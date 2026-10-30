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

// Function: sub_003265F0
// Address: 0x3265f0 - 0x326648
void sub_003265F0_0x3265f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003265F0_0x3265f0");
#endif

    switch (ctx->pc) {
        case 0x32660cu: goto label_32660c;
        case 0x326628u: goto label_326628;
        default: break;
    }

    ctx->pc = 0x3265f0u;

    // 0x3265f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3265f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3265f4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x3265f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x3265f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3265f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3265fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3265fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326600: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326604: 0xc0c9d6c  jal         func_3275B0
    ctx->pc = 0x326604u;
    SET_GPR_U32(ctx, 31, 0x32660Cu);
    ctx->pc = 0x326608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326604u;
    // 0x326608: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3275B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3275B0u, 0x326604u, 0x32660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32660Cu;
label_32660c:
    // 0x32660c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x32660cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x326610: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x326610u;
    {
        const bool branch_taken_0x326610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x326614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326610u;
        // 0x326614: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326610) {
            ctx->pc = 0x326630u;
            goto label_326630;
        }
    }
    ctx->pc = 0x326618u;
    // 0x326618: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x326618u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x32661c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32661cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326620: 0xc0c9ba2  jal         func_326E88
    ctx->pc = 0x326620u;
    SET_GPR_U32(ctx, 31, 0x326628u);
    ctx->pc = 0x326624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326620u;
    // 0x326624: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326E88u, 0x326620u, 0x326628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326628u;
label_326628:
    // 0x326628: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x32662c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x32662cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_326630:
    // 0x326630: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x326630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326634: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x326634u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326638: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32663c: 0x3e00008  jr          $ra
    ctx->pc = 0x32663Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32663Cu;
        // 0x326640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32663Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326644u;
    // 0x326644: 0x0  nop
    ctx->pc = 0x326644u;
    // NOP
    ctx->pc = 0x326648u;
}
