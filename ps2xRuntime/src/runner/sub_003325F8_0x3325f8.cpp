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

// Function: sub_003325F8
// Address: 0x3325f8 - 0x332668
void sub_003325F8_0x3325f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003325F8_0x3325f8");
#endif

    switch (ctx->pc) {
        case 0x33262cu: goto label_33262c;
        case 0x332654u: goto label_332654;
        default: break;
    }

    ctx->pc = 0x3325f8u;

    // 0x3325f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3325f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3325fc: 0x3c090057  lui         $t1, 0x57
    ctx->pc = 0x3325fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)87 << 16));
    // 0x332600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x332600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x332604: 0x3c0a7fff  lui         $t2, 0x7FFF
    ctx->pc = 0x332604u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32767 << 16));
    // 0x332608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x332608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33260c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33260cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332610: 0x25296520  addiu       $t1, $t1, 0x6520
    ctx->pc = 0x332610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 25888));
    // 0x332614: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x332614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332618: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x332618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33261c: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x33261cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x332620: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x332620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x332624: 0xc0cb1ac  jal         func_32C6B0
    ctx->pc = 0x332624u;
    SET_GPR_U32(ctx, 31, 0x33262Cu);
    ctx->pc = 0x332628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332624u;
    // 0x332628: 0x354afffd  ori         $t2, $t2, 0xFFFD (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65533);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C6B0u, 0x332624u, 0x33262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33262Cu;
label_33262c:
    // 0x33262c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x33262cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x332630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x332630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332634: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x332634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332638: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x332638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x33263c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x33263cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x332640: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x332640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x332644: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x332644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
    // 0x332648: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x332648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x33264c: 0xc0cc94c  jal         func_332530
    ctx->pc = 0x33264Cu;
    SET_GPR_U32(ctx, 31, 0x332654u);
    ctx->pc = 0x332650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33264Cu;
    // 0x332650: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332530u, 0x33264Cu, 0x332654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332654u;
label_332654:
    // 0x332654: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x332654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x332658: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x332658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33265c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332660: 0x3e00008  jr          $ra
    ctx->pc = 0x332660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332660u;
        // 0x332664: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332668u;
}
