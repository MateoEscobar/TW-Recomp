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

// Function: sub_0010B3F8
// Address: 0x10b3f8 - 0x10b448
void sub_0010B3F8_0x10b3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B3F8_0x10b3f8");
#endif

    switch (ctx->pc) {
        case 0x10b3f8u: goto label_10b3f8;
        case 0x10b3fcu: goto label_10b3fc;
        case 0x10b400u: goto label_10b400;
        case 0x10b404u: goto label_10b404;
        case 0x10b408u: goto label_10b408;
        case 0x10b40cu: goto label_10b40c;
        case 0x10b410u: goto label_10b410;
        case 0x10b414u: goto label_10b414;
        case 0x10b418u: goto label_10b418;
        case 0x10b41cu: goto label_10b41c;
        case 0x10b420u: goto label_10b420;
        case 0x10b424u: goto label_10b424;
        case 0x10b428u: goto label_10b428;
        case 0x10b42cu: goto label_10b42c;
        case 0x10b430u: goto label_10b430;
        case 0x10b434u: goto label_10b434;
        case 0x10b438u: goto label_10b438;
        case 0x10b43cu: goto label_10b43c;
        case 0x10b440u: goto label_10b440;
        case 0x10b444u: goto label_10b444;
        default: break;
    }

    ctx->pc = 0x10b3f8u;

label_10b3f8:
    // 0x10b3f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10b3fc:
    // 0x10b3fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_10b400:
    // 0x10b400: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b404:
    // 0x10b404: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b408:
    // 0x10b408: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10b408u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_10b40c:
    // 0x10b40c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10b40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b410:
    // 0x10b410: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b410u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10b414:
    // 0x10b414: 0xc05d4e0  jal         func_175380
label_10b418:
    if (ctx->pc == 0x10B418u) {
        ctx->pc = 0x10B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B414u;
        // 0x10b418: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B41Cu;
        goto label_10b41c;
    }
    ctx->pc = 0x10B414u;
    SET_GPR_U32(ctx, 31, 0x10B41Cu);
    ctx->pc = 0x10B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B414u;
    // 0x10b418: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175380u, 0x10B414u, 0x10B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B41Cu;
label_10b41c:
    // 0x10b41c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10b420:
    // 0x10b420: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10b420u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10b424:
    // 0x10b424: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x10b424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_10b428:
    // 0x10b428: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x10b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_10b42c:
    // 0x10b42c: 0x60f809  jalr        $v1
label_10b430:
    if (ctx->pc == 0x10B430u) {
        ctx->pc = 0x10B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B42Cu;
        // 0x10b430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B434u;
        goto label_10b434;
    }
    ctx->pc = 0x10B42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10B434u);
        ctx->pc = 0x10B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B42Cu;
        // 0x10b430: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B42Cu, 0x10B434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B434u;
label_10b434:
    // 0x10b434: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b438:
    // 0x10b438: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b43c:
    // 0x10b43c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10b440:
    // 0x10b440: 0x3e00008  jr          $ra
label_10b444:
    if (ctx->pc == 0x10B444u) {
        ctx->pc = 0x10B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B440u;
        // 0x10b444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B448u;
        goto label_fallthrough_0x10b440;
    }
    ctx->pc = 0x10B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B440u;
        // 0x10b444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x10b440:
    ctx->pc = 0x10B448u;
}
