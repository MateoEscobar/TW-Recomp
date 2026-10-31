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

// Function: sub_003CA500
// Address: 0x3ca500 - 0x3ca560
void sub_003CA500_0x3ca500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA500_0x3ca500");
#endif

    switch (ctx->pc) {
        case 0x3ca500u: goto label_3ca500;
        case 0x3ca504u: goto label_3ca504;
        case 0x3ca508u: goto label_3ca508;
        case 0x3ca50cu: goto label_3ca50c;
        case 0x3ca510u: goto label_3ca510;
        case 0x3ca514u: goto label_3ca514;
        case 0x3ca518u: goto label_3ca518;
        case 0x3ca51cu: goto label_3ca51c;
        case 0x3ca520u: goto label_3ca520;
        case 0x3ca524u: goto label_3ca524;
        case 0x3ca528u: goto label_3ca528;
        case 0x3ca52cu: goto label_3ca52c;
        case 0x3ca530u: goto label_3ca530;
        case 0x3ca534u: goto label_3ca534;
        case 0x3ca538u: goto label_3ca538;
        case 0x3ca53cu: goto label_3ca53c;
        case 0x3ca540u: goto label_3ca540;
        case 0x3ca544u: goto label_3ca544;
        case 0x3ca548u: goto label_3ca548;
        case 0x3ca54cu: goto label_3ca54c;
        case 0x3ca550u: goto label_3ca550;
        case 0x3ca554u: goto label_3ca554;
        case 0x3ca558u: goto label_3ca558;
        case 0x3ca55cu: goto label_3ca55c;
        default: break;
    }

    ctx->pc = 0x3ca500u;

label_3ca500:
    // 0x3ca500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ca500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ca504:
    // 0x3ca504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ca504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ca508:
    // 0x3ca508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ca508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ca50c:
    // 0x3ca50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ca50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ca510:
    // 0x3ca510: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ca510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ca514:
    // 0x3ca514: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ca514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ca518:
    // 0x3ca518: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ca51c:
    // 0x3ca51c: 0x40f809  jalr        $v0
label_3ca520:
    if (ctx->pc == 0x3CA520u) {
        ctx->pc = 0x3CA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA51Cu;
        // 0x3ca520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA524u;
        goto label_3ca524;
    }
    ctx->pc = 0x3CA51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA524u);
        ctx->pc = 0x3CA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA51Cu;
        // 0x3ca520: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA51Cu, 0x3CA524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA524u;
label_3ca524:
    // 0x3ca524: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x3ca524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3ca528:
    // 0x3ca528: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ca528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3ca52c:
    // 0x3ca52c: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3ca52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3ca530:
    // 0x3ca530: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3ca530u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ca534:
    // 0x3ca534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3ca538:
    if (ctx->pc == 0x3CA538u) {
        ctx->pc = 0x3CA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA534u;
        // 0x3ca538: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA53Cu;
        goto label_3ca53c;
    }
    ctx->pc = 0x3CA534u;
    {
        const bool branch_taken_0x3ca534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA534u;
        // 0x3ca538: 0x2463ffe0  addiu       $v1, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca534) {
            ctx->pc = 0x3CA548u;
            goto label_3ca548;
        }
    }
    ctx->pc = 0x3CA53Cu;
label_3ca53c:
    // 0x3ca53c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ca53cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca540:
    // 0x3ca540: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ca544:
    if (ctx->pc == 0x3CA544u) {
        ctx->pc = 0x3CA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA540u;
        // 0x3ca544: 0xae0300cc  sw          $v1, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA548u;
        goto label_3ca548;
    }
    ctx->pc = 0x3CA540u;
    {
        const bool branch_taken_0x3ca540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA540u;
        // 0x3ca544: 0xae0300cc  sw          $v1, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca540) {
            ctx->pc = 0x3CA54Cu;
            goto label_3ca54c;
        }
    }
    ctx->pc = 0x3CA548u;
label_3ca548:
    // 0x3ca548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ca548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca54c:
    // 0x3ca54c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ca54cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ca550:
    // 0x3ca550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ca550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ca554:
    // 0x3ca554: 0x3e00008  jr          $ra
label_3ca558:
    if (ctx->pc == 0x3CA558u) {
        ctx->pc = 0x3CA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA554u;
        // 0x3ca558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA55Cu;
        goto label_3ca55c;
    }
    ctx->pc = 0x3CA554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA554u;
        // 0x3ca558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA55Cu;
label_3ca55c:
    // 0x3ca55c: 0x0  nop
    ctx->pc = 0x3ca55cu;
    // NOP
    ctx->pc = 0x3ca560u;
}
