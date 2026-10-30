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

// Function: sub_004DC6F8
// Address: 0x4dc6f8 - 0x4dc748
void sub_004DC6F8_0x4dc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC6F8_0x4dc6f8");
#endif

    switch (ctx->pc) {
        case 0x4dc6f8u: goto label_4dc6f8;
        case 0x4dc6fcu: goto label_4dc6fc;
        case 0x4dc700u: goto label_4dc700;
        case 0x4dc704u: goto label_4dc704;
        case 0x4dc708u: goto label_4dc708;
        case 0x4dc70cu: goto label_4dc70c;
        case 0x4dc710u: goto label_4dc710;
        case 0x4dc714u: goto label_4dc714;
        case 0x4dc718u: goto label_4dc718;
        case 0x4dc71cu: goto label_4dc71c;
        case 0x4dc720u: goto label_4dc720;
        case 0x4dc724u: goto label_4dc724;
        case 0x4dc728u: goto label_4dc728;
        case 0x4dc72cu: goto label_4dc72c;
        case 0x4dc730u: goto label_4dc730;
        case 0x4dc734u: goto label_4dc734;
        case 0x4dc738u: goto label_4dc738;
        case 0x4dc73cu: goto label_4dc73c;
        case 0x4dc740u: goto label_4dc740;
        case 0x4dc744u: goto label_4dc744;
        default: break;
    }

    ctx->pc = 0x4dc6f8u;

label_4dc6f8:
    // 0x4dc6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4dc6fc:
    // 0x4dc6fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4dc6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4dc700:
    // 0x4dc700: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x4dc700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4dc704:
    // 0x4dc704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4dc704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dc708:
    // 0x4dc708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc70c:
    // 0x4dc70c: 0xc04884a  jal         func_122128
label_4dc710:
    if (ctx->pc == 0x4DC710u) {
        ctx->pc = 0x4DC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC70Cu;
        // 0x4dc710: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC714u;
        goto label_4dc714;
    }
    ctx->pc = 0x4DC70Cu;
    SET_GPR_U32(ctx, 31, 0x4DC714u);
    ctx->pc = 0x4DC710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC70Cu;
    // 0x4dc710: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122128u, 0x4DC70Cu, 0x4DC714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC714u;
label_4dc714:
    // 0x4dc714: 0x8e050214  lw          $a1, 0x214($s0)
    ctx->pc = 0x4dc714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_4dc718:
    // 0x4dc718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4dc718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4dc71c:
    // 0x4dc71c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc720:
    // 0x4dc720: 0x844401b0  lh          $a0, 0x1B0($v0)
    ctx->pc = 0x4dc720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
label_4dc724:
    // 0x4dc724: 0x8c4301b4  lw          $v1, 0x1B4($v0)
    ctx->pc = 0x4dc724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 436)));
label_4dc728:
    // 0x4dc728: 0x60f809  jalr        $v1
label_4dc72c:
    if (ctx->pc == 0x4DC72Cu) {
        ctx->pc = 0x4DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC728u;
        // 0x4dc72c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC730u;
        goto label_4dc730;
    }
    ctx->pc = 0x4DC728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC730u);
        ctx->pc = 0x4DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC728u;
        // 0x4dc72c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC728u, 0x4DC730u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC730u;
label_4dc730:
    // 0x4dc730: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4dc730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4dc734:
    // 0x4dc734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc738:
    // 0x4dc738: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x4dc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4dc73c:
    // 0x4dc73c: 0x3e00008  jr          $ra
label_4dc740:
    if (ctx->pc == 0x4DC740u) {
        ctx->pc = 0x4DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC73Cu;
        // 0x4dc740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC744u;
        goto label_4dc744;
    }
    ctx->pc = 0x4DC73Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC73Cu;
        // 0x4dc740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC73Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC744u;
label_4dc744:
    // 0x4dc744: 0x0  nop
    ctx->pc = 0x4dc744u;
    // NOP
    ctx->pc = 0x4dc748u;
}
