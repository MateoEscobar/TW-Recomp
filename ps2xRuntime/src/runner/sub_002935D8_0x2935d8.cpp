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

// Function: sub_002935D8
// Address: 0x2935d8 - 0x293640
void sub_002935D8_0x2935d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002935D8_0x2935d8");
#endif

    switch (ctx->pc) {
        case 0x2935f8u: goto label_2935f8;
        default: break;
    }

    ctx->pc = 0x2935d8u;

    // 0x2935d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2935d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2935dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2935dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2935e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2935e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2935e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2935e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2935e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2935ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2935ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935f0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2935F0u;
    SET_GPR_U32(ctx, 31, 0x2935F8u);
    ctx->pc = 0x2935F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2935F0u;
    // 0x2935f4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2935F0u, 0x2935F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2935F8u;
label_2935f8:
    // 0x2935f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2935f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2935fc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2935fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x293600: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x293600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x293604: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x293604u;
    {
        const bool branch_taken_0x293604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x293604) {
            ctx->pc = 0x293608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293604u;
            // 0x293608: 0xc4810134  lwc1        $f1, 0x134($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x293610u;
            goto label_293610;
        }
    }
    ctx->pc = 0x29360Cu;
    // 0x29360c: 0xc4810138  lwc1        $f1, 0x138($a0)
    ctx->pc = 0x29360cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293610:
    // 0x293610: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x293610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x293614: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x293614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x293618: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x293618u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29361c: 0x0  nop
    ctx->pc = 0x29361cu;
    // NOP
    // 0x293620: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x293620u;
    {
        const bool branch_taken_0x293620 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x293624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293620u;
        // 0x293624: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293620) {
            ctx->pc = 0x29362Cu;
            goto label_29362c;
        }
    }
    ctx->pc = 0x293628u;
    // 0x293628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x293628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29362c:
    // 0x29362c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x29362cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293630: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x293634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293638: 0x3e00008  jr          $ra
    ctx->pc = 0x293638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29363Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293638u;
        // 0x29363c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293640u;
}
