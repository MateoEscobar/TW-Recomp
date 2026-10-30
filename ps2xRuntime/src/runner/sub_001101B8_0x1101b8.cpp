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

// Function: sub_001101B8
// Address: 0x1101b8 - 0x110210
void sub_001101B8_0x1101b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001101B8_0x1101b8");
#endif

    switch (ctx->pc) {
        case 0x1101f0u: goto label_1101f0;
        default: break;
    }

    ctx->pc = 0x1101b8u;

    // 0x1101b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1101b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1101bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1101bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1101c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1101c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1101c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1101c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1101c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1101cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1101ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1101d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1101d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1101d4: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1101d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1101d8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1101d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101dc: 0x8c65bd30  lw          $a1, -0x42D0($v1)
    ctx->pc = 0x1101dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1101e0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1101e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1101e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1101e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1101e8: 0xc0447de  jal         func_111F78
    ctx->pc = 0x1101E8u;
    SET_GPR_U32(ctx, 31, 0x1101F0u);
    ctx->pc = 0x1101ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1101E8u;
    // 0x1101ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x111F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111F78u, 0x1101E8u, 0x1101F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1101F0u;
label_1101f0:
    // 0x1101f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1101F0u;
    {
        const bool branch_taken_0x1101f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101F0u;
        // 0x1101f4: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101f0) {
            ctx->pc = 0x110200u;
            goto label_110200;
        }
    }
    ctx->pc = 0x1101F8u;
    // 0x1101f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1101F8u;
    {
        const bool branch_taken_0x1101f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1101FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1101F8u;
        // 0x1101fc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1101f8) {
            ctx->pc = 0x110204u;
            goto label_110204;
        }
    }
    ctx->pc = 0x110200u;
label_110200:
    // 0x110200: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x110200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936208)));
label_110204:
    // 0x110204: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110208: 0x3e00008  jr          $ra
    ctx->pc = 0x110208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110208u;
        // 0x11020c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110210u;
}
