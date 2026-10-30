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

// Function: sub_00110138
// Address: 0x110138 - 0x110188
void sub_00110138_0x110138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110138_0x110138");
#endif

    switch (ctx->pc) {
        case 0x110168u: goto label_110168;
        default: break;
    }

    ctx->pc = 0x110138u;

    // 0x110138: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x110138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11013c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x110140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x110144: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x110144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x110148: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x110148u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11014c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11014cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110150: 0x8c45bd30  lw          $a1, -0x42D0($v0)
    ctx->pc = 0x110150u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x110154: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x110154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110158: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x110158u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x11015c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110160: 0xc0447de  jal         func_111F78
    ctx->pc = 0x110160u;
    SET_GPR_U32(ctx, 31, 0x110168u);
    ctx->pc = 0x110164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110160u;
    // 0x110164: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F78u, 0x110160u, 0x110168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110168u;
label_110168:
    // 0x110168: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110168u;
    {
        const bool branch_taken_0x110168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110168u;
        // 0x11016c: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110168) {
            ctx->pc = 0x110178u;
            goto label_110178;
        }
    }
    ctx->pc = 0x110170u;
    // 0x110170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x110170u;
    {
        const bool branch_taken_0x110170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110170u;
        // 0x110174: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110170) {
            ctx->pc = 0x11017Cu;
            goto label_11017c;
        }
    }
    ctx->pc = 0x110178u;
label_110178:
    // 0x110178: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x110178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_11017c:
    // 0x11017c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110180: 0x3e00008  jr          $ra
    ctx->pc = 0x110180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110180u;
        // 0x110184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110188u;
}
