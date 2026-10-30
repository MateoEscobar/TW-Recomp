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

// Function: sub_004DE4C0
// Address: 0x4de4c0 - 0x4de540
void sub_004DE4C0_0x4de4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE4C0_0x4de4c0");
#endif

    switch (ctx->pc) {
        case 0x4de4c0u: goto label_4de4c0;
        case 0x4de4c4u: goto label_4de4c4;
        case 0x4de4c8u: goto label_4de4c8;
        case 0x4de4ccu: goto label_4de4cc;
        case 0x4de4d0u: goto label_4de4d0;
        case 0x4de4d4u: goto label_4de4d4;
        case 0x4de4d8u: goto label_4de4d8;
        case 0x4de4dcu: goto label_4de4dc;
        case 0x4de4e0u: goto label_4de4e0;
        case 0x4de4e4u: goto label_4de4e4;
        case 0x4de4e8u: goto label_4de4e8;
        case 0x4de4ecu: goto label_4de4ec;
        case 0x4de4f0u: goto label_4de4f0;
        case 0x4de4f4u: goto label_4de4f4;
        case 0x4de4f8u: goto label_4de4f8;
        case 0x4de4fcu: goto label_4de4fc;
        case 0x4de500u: goto label_4de500;
        case 0x4de504u: goto label_4de504;
        case 0x4de508u: goto label_4de508;
        case 0x4de50cu: goto label_4de50c;
        case 0x4de510u: goto label_4de510;
        case 0x4de514u: goto label_4de514;
        case 0x4de518u: goto label_4de518;
        case 0x4de51cu: goto label_4de51c;
        case 0x4de520u: goto label_4de520;
        case 0x4de524u: goto label_4de524;
        case 0x4de528u: goto label_4de528;
        case 0x4de52cu: goto label_4de52c;
        case 0x4de530u: goto label_4de530;
        case 0x4de534u: goto label_4de534;
        case 0x4de538u: goto label_4de538;
        case 0x4de53cu: goto label_4de53c;
        default: break;
    }

    ctx->pc = 0x4de4c0u;

label_4de4c0:
    // 0x4de4c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de4c4:
    // 0x4de4c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de4c8:
    // 0x4de4c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de4cc:
    // 0x4de4cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de4d0:
    // 0x4de4d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de4d4:
    // 0x4de4d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de4d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de4d8:
    // 0x4de4d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de4dc:
    // 0x4de4dc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de4e0:
    if (ctx->pc == 0x4DE4E0u) {
        ctx->pc = 0x4DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4DCu;
        // 0x4de4e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE4E4u;
        goto label_4de4e4;
    }
    ctx->pc = 0x4DE4DCu;
    {
        const bool branch_taken_0x4de4dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4DCu;
        // 0x4de4e0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de4dc) {
            ctx->pc = 0x4DE524u;
            goto label_4de524;
        }
    }
    ctx->pc = 0x4DE4E4u;
label_4de4e4:
    // 0x4de4e4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4de4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4de4e8:
    // 0x4de4e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de4ec:
    // 0x4de4ec: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de4ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de4f0:
    // 0x4de4f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de4f4:
    // 0x4de4f4: 0x60f809  jalr        $v1
label_4de4f8:
    if (ctx->pc == 0x4DE4F8u) {
        ctx->pc = 0x4DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4F4u;
        // 0x4de4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE4FCu;
        goto label_4de4fc;
    }
    ctx->pc = 0x4DE4F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE4FCu);
        ctx->pc = 0x4DE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE4F4u;
        // 0x4de4f8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE4F4u, 0x4DE4FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE4FCu;
label_4de4fc:
    // 0x4de4fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de500:
    // 0x4de500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de504:
    // 0x4de504: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de504u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de508:
    // 0x4de508: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de50c:
    // 0x4de50c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de510:
    // 0x4de510: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de514:
    // 0x4de514: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de518:
    // 0x4de518: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de51c:
    // 0x4de51c: 0x60f809  jalr        $v1
label_4de520:
    if (ctx->pc == 0x4DE520u) {
        ctx->pc = 0x4DE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE51Cu;
        // 0x4de520: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE524u;
        goto label_4de524;
    }
    ctx->pc = 0x4DE51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE524u);
        ctx->pc = 0x4DE520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE51Cu;
        // 0x4de520: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE51Cu, 0x4DE524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE524u;
label_4de524:
    // 0x4de524: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de528:
    // 0x4de528: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de52c:
    // 0x4de52c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de530:
    // 0x4de530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de534:
    // 0x4de534: 0x3e00008  jr          $ra
label_4de538:
    if (ctx->pc == 0x4DE538u) {
        ctx->pc = 0x4DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE534u;
        // 0x4de538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE53Cu;
        goto label_4de53c;
    }
    ctx->pc = 0x4DE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE534u;
        // 0x4de538: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE53Cu;
label_4de53c:
    // 0x4de53c: 0x0  nop
    ctx->pc = 0x4de53cu;
    // NOP
    ctx->pc = 0x4de540u;
}
