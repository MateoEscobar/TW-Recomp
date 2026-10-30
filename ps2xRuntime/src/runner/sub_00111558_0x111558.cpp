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

// Function: sub_00111558
// Address: 0x111558 - 0x1115a8
void sub_00111558_0x111558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111558_0x111558");
#endif

    switch (ctx->pc) {
        case 0x11157cu: goto label_11157c;
        case 0x11158cu: goto label_11158c;
        default: break;
    }

    ctx->pc = 0x111558u;

    // 0x111558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11155c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x11155cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x111560: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111564: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x111564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x111568: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x111568u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x11156c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111570: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x111570u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x111574: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x111574u;
    SET_GPR_U32(ctx, 31, 0x11157Cu);
    ctx->pc = 0x111578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111574u;
    // 0x111578: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111574u, 0x11157Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11157Cu;
label_11157c:
    // 0x11157c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11157Cu;
    {
        const bool branch_taken_0x11157c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11157Cu;
        // 0x111580: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11157c) {
            ctx->pc = 0x111598u;
            goto label_111598;
        }
    }
    ctx->pc = 0x111584u;
    // 0x111584: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x111584u;
    SET_GPR_U32(ctx, 31, 0x11158Cu);
    ctx->pc = 0x111588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111584u;
    // 0x111588: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x111584u, 0x11158Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11158Cu;
label_11158c:
    // 0x11158c: 0xe4540054  swc1        $f20, 0x54($v0)
    ctx->pc = 0x11158cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x111590: 0xe4550050  swc1        $f21, 0x50($v0)
    ctx->pc = 0x111590u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x111594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_111598:
    // 0x111598: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x111598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11159c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x11159cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1115a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1115A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1115A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1115A0u;
        // 0x1115a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1115A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1115A8u;
}
