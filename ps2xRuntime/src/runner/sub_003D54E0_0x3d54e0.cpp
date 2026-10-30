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

// Function: sub_003D54E0
// Address: 0x3d54e0 - 0x3d5538
void sub_003D54E0_0x3d54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D54E0_0x3d54e0");
#endif

    switch (ctx->pc) {
        case 0x3d54e0u: goto label_3d54e0;
        case 0x3d54e4u: goto label_3d54e4;
        case 0x3d54e8u: goto label_3d54e8;
        case 0x3d54ecu: goto label_3d54ec;
        case 0x3d54f0u: goto label_3d54f0;
        case 0x3d54f4u: goto label_3d54f4;
        case 0x3d54f8u: goto label_3d54f8;
        case 0x3d54fcu: goto label_3d54fc;
        case 0x3d5500u: goto label_3d5500;
        case 0x3d5504u: goto label_3d5504;
        case 0x3d5508u: goto label_3d5508;
        case 0x3d550cu: goto label_3d550c;
        case 0x3d5510u: goto label_3d5510;
        case 0x3d5514u: goto label_3d5514;
        case 0x3d5518u: goto label_3d5518;
        case 0x3d551cu: goto label_3d551c;
        case 0x3d5520u: goto label_3d5520;
        case 0x3d5524u: goto label_3d5524;
        case 0x3d5528u: goto label_3d5528;
        case 0x3d552cu: goto label_3d552c;
        case 0x3d5530u: goto label_3d5530;
        case 0x3d5534u: goto label_3d5534;
        default: break;
    }

    ctx->pc = 0x3d54e0u;

label_3d54e0:
    // 0x3d54e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d54e4:
    // 0x3d54e4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d54e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d54e8:
    // 0x3d54e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3d54e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3d54ec:
    // 0x3d54ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d54ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d54f0:
    // 0x3d54f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d54f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d54f4:
    // 0x3d54f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d54f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d54f8:
    // 0x3d54f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d54fc:
    // 0x3d54fc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d54fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d5500:
    // 0x3d5500: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d5500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d5504:
    // 0x3d5504: 0x40f809  jalr        $v0
label_3d5508:
    if (ctx->pc == 0x3D5508u) {
        ctx->pc = 0x3D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5504u;
        // 0x3d5508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D550Cu;
        goto label_3d550c;
    }
    ctx->pc = 0x3D5504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D550Cu);
        ctx->pc = 0x3D5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5504u;
        // 0x3d5508: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5504u, 0x3D550Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D550Cu;
label_3d550c:
    // 0x3d550c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x3d550cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3d5510:
    // 0x3d5510: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_3d5514:
    if (ctx->pc == 0x3D5514u) {
        ctx->pc = 0x3D5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5510u;
        // 0x3d5514: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5518u;
        goto label_3d5518;
    }
    ctx->pc = 0x3D5510u;
    {
        const bool branch_taken_0x3d5510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D5514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5510u;
        // 0x3d5514: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5510) {
            ctx->pc = 0x3D5528u;
            goto label_3d5528;
        }
    }
    ctx->pc = 0x3D5518u;
label_3d5518:
    // 0x3d5518: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3d5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3d551c:
    // 0x3d551c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3d551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3d5520:
    // 0x3d5520: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3d5520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3d5524:
    // 0x3d5524: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3d5524u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_3d5528:
    // 0x3d5528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3d5528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d552c:
    // 0x3d552c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d552cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5530:
    // 0x3d5530: 0x3e00008  jr          $ra
label_3d5534:
    if (ctx->pc == 0x3D5534u) {
        ctx->pc = 0x3D5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5530u;
        // 0x3d5534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5538u;
        goto label_fallthrough_0x3d5530;
    }
    ctx->pc = 0x3D5530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5530u;
        // 0x3d5534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d5530:
    ctx->pc = 0x3D5538u;
}
