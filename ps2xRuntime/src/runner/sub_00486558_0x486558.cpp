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

// Function: sub_00486558
// Address: 0x486558 - 0x4865c0
void sub_00486558_0x486558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486558_0x486558");
#endif

    switch (ctx->pc) {
        case 0x486590u: goto label_486590;
        default: break;
    }

    ctx->pc = 0x486558u;

    // 0x486558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x486558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48655c: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x48655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
    // 0x486560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x486564: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x486564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x486568: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x486568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48656c: 0x2451ad18  addiu       $s1, $v0, -0x52E8
    ctx->pc = 0x48656cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x486570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x486574: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486578: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x486578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x48657c: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x48657cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x486580: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x486580u;
    {
        const bool branch_taken_0x486580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486580) {
            ctx->pc = 0x48659Cu;
            goto label_48659c;
        }
    }
    ctx->pc = 0x486588u;
    // 0x486588: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x486588u;
    SET_GPR_U32(ctx, 31, 0x486590u);
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x486588u, 0x486590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486590u;
label_486590:
    // 0x486590: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x486590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
    // 0x486594: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x486594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x486598: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x486598u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_48659c:
    // 0x48659c: 0x8f838974  lw          $v1, -0x768C($gp)
    ctx->pc = 0x48659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
    // 0x4865a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4865a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4865a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4865a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4865a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4865a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4865ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4865acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4865b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4865b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4865b4: 0xaf838974  sw          $v1, -0x768C($gp)
    ctx->pc = 0x4865b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 3));
    // 0x4865b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4865B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4865BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4865B8u;
        // 0x4865bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4865B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4865C0u;
}
