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

// Function: sub_00430438
// Address: 0x430438 - 0x4304c0
void sub_00430438_0x430438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00430438_0x430438");
#endif

    switch (ctx->pc) {
        case 0x430460u: goto label_430460;
        default: break;
    }

    ctx->pc = 0x430438u;

    // 0x430438: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x430438u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x43043c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x43043cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x430440: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x430440u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x430444: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x430444u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x430448: 0x354a9000  ori         $t2, $t2, 0x9000
    ctx->pc = 0x430448u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)36864);
    // 0x43044c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x43044cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x430450: 0x3529a000  ori         $t1, $t1, 0xA000
    ctx->pc = 0x430450u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)40960);
    // 0x430454: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x430454u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x430458: 0x34e73020  ori         $a3, $a3, 0x3020
    ctx->pc = 0x430458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
    // 0x43045c: 0x0  nop
    ctx->pc = 0x43045cu;
    // NOP
label_430460:
    // 0x430460: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x430460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x430464: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x430464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x430468: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x430468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x43046c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x43046cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x430470: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x430470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x430474: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x430474u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x430478: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x430478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x43047c: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x43047cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x430480: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x430480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x430484: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x430484u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x430488: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x430488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x43048c: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x43048cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x430490: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x430490u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x430494: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x430494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x430498: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x430498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x43049c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x43049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4304a0: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x4304a0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x4304a4: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x4304a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x4304a8: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x4304a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x4304ac: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x4304acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x4304b0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x4304B0u;
    {
        const bool branch_taken_0x4304b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4304B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4304B0u;
        // 0x4304b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4304b0) {
            ctx->pc = 0x430460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_430460;
        }
    }
    ctx->pc = 0x4304B8u;
    // 0x4304b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4304B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4304B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4304C0u;
}
