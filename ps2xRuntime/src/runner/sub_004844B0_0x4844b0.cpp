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

// Function: sub_004844B0
// Address: 0x4844b0 - 0x484538
void sub_004844B0_0x4844b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004844B0_0x4844b0");
#endif

    switch (ctx->pc) {
        case 0x4844ecu: goto label_4844ec;
        default: break;
    }

    ctx->pc = 0x4844b0u;

    // 0x4844b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4844b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4844b4: 0xaf858960  sw          $a1, -0x76A0($gp)
    ctx->pc = 0x4844b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936928), GPR_U32(ctx, 5));
    // 0x4844b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4844b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4844bc: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4844bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4844c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4844c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4844c4: 0x8f85861c  lw          $a1, -0x79E4($gp)
    ctx->pc = 0x4844c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936092)));
    // 0x4844c8: 0x8c44ebc0  lw          $a0, -0x1440($v0)
    ctx->pc = 0x4844c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52EBC0u));
    // 0x4844cc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x4844ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x4844d0: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x4844d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4844d4: 0x8f878620  lw          $a3, -0x79E0($gp)
    ctx->pc = 0x4844d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936096)));
    // 0x4844d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4844d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4844dc: 0x2508ed18  addiu       $t0, $t0, -0x12E8
    ctx->pc = 0x4844dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962456));
    // 0x4844e0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4844e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4844e4: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4844E4u;
    SET_GPR_U32(ctx, 31, 0x4844ECu);
    ctx->pc = 0x4844E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4844E4u;
    // 0x4844e8: 0x3529000e  ori         $t1, $t1, 0xE (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)14);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4844E4u, 0x4844ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4844ECu;
label_4844ec:
    // 0x4844ec: 0x8f848960  lw          $a0, -0x76A0($gp)
    ctx->pc = 0x4844ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
    // 0x4844f0: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x4844f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x4844f4: 0x2465ad18  addiu       $a1, $v1, -0x52E8
    ctx->pc = 0x4844f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x4844f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4844f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4844fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4844FCu;
    {
        const bool branch_taken_0x4844fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x484500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4844FCu;
        // 0x484500: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4844fc) {
            ctx->pc = 0x484524u;
            goto label_484524;
        }
    }
    ctx->pc = 0x484504u;
    // 0x484504: 0x8f848964  lw          $a0, -0x769C($gp)
    ctx->pc = 0x484504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936932)));
    // 0x484508: 0x24a300bc  addiu       $v1, $a1, 0xBC
    ctx->pc = 0x484508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 188));
    // 0x48450c: 0xaca300bc  sw          $v1, 0xBC($a1)
    ctx->pc = 0x48450cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 188), GPR_U32(ctx, 3));
    // 0x484510: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x484510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x484514: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x484514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x484518: 0xaf848964  sw          $a0, -0x769C($gp)
    ctx->pc = 0x484518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936932), GPR_U32(ctx, 4));
    // 0x48451c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x48451Cu;
    {
        const bool branch_taken_0x48451c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x484520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48451Cu;
        // 0x484520: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48451c) {
            ctx->pc = 0x484528u;
            goto label_484528;
        }
    }
    ctx->pc = 0x484524u;
label_484524:
    // 0x484524: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x484524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_484528:
    // 0x484528: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x484528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48452c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48452cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x484530: 0x3e00008  jr          $ra
    ctx->pc = 0x484530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x484534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x484530u;
        // 0x484534: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x484530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484538u;
}
