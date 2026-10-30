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

// Function: sub_004F6500
// Address: 0x4f6500 - 0x4f6578
void sub_004F6500_0x4f6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F6500_0x4f6500");
#endif

    switch (ctx->pc) {
        case 0x4f6500u: goto label_4f6500;
        case 0x4f6504u: goto label_4f6504;
        case 0x4f6508u: goto label_4f6508;
        case 0x4f650cu: goto label_4f650c;
        case 0x4f6510u: goto label_4f6510;
        case 0x4f6514u: goto label_4f6514;
        case 0x4f6518u: goto label_4f6518;
        case 0x4f651cu: goto label_4f651c;
        case 0x4f6520u: goto label_4f6520;
        case 0x4f6524u: goto label_4f6524;
        case 0x4f6528u: goto label_4f6528;
        case 0x4f652cu: goto label_4f652c;
        case 0x4f6530u: goto label_4f6530;
        case 0x4f6534u: goto label_4f6534;
        case 0x4f6538u: goto label_4f6538;
        case 0x4f653cu: goto label_4f653c;
        case 0x4f6540u: goto label_4f6540;
        case 0x4f6544u: goto label_4f6544;
        case 0x4f6548u: goto label_4f6548;
        case 0x4f654cu: goto label_4f654c;
        case 0x4f6550u: goto label_4f6550;
        case 0x4f6554u: goto label_4f6554;
        case 0x4f6558u: goto label_4f6558;
        case 0x4f655cu: goto label_4f655c;
        case 0x4f6560u: goto label_4f6560;
        case 0x4f6564u: goto label_4f6564;
        case 0x4f6568u: goto label_4f6568;
        case 0x4f656cu: goto label_4f656c;
        case 0x4f6570u: goto label_4f6570;
        case 0x4f6574u: goto label_4f6574;
        default: break;
    }

    ctx->pc = 0x4f6500u;

label_4f6500:
    // 0x4f6500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f6504:
    // 0x4f6504: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f6504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f6508:
    // 0x4f6508: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f650c:
    // 0x4f650c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f650cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f6510:
    // 0x4f6510: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f6510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f6514:
    // 0x4f6514: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f6514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f6518:
    // 0x4f6518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f6518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f651c:
    // 0x4f651c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4f6520:
    if (ctx->pc == 0x4F6520u) {
        ctx->pc = 0x4F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F651Cu;
        // 0x4f6520: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6524u;
        goto label_4f6524;
    }
    ctx->pc = 0x4F651Cu;
    {
        const bool branch_taken_0x4f651c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F651Cu;
        // 0x4f6520: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f651c) {
            ctx->pc = 0x4F6554u;
            goto label_4f6554;
        }
    }
    ctx->pc = 0x4F6524u;
label_4f6524:
    // 0x4f6524: 0xc10a9b0  jal         func_42A6C0
label_4f6528:
    if (ctx->pc == 0x4F6528u) {
        ctx->pc = 0x4F6528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6524u;
        // 0x4f6528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F652Cu;
        goto label_4f652c;
    }
    ctx->pc = 0x4F6524u;
    SET_GPR_U32(ctx, 31, 0x4F652Cu);
    ctx->pc = 0x4F6528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6524u;
    // 0x4f6528: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A6C0u, 0x4F6524u, 0x4F652Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F652Cu;
label_4f652c:
    // 0x4f652c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f6530:
    // 0x4f6530: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f6530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f6534:
    // 0x4f6534: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f6534u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f6538:
    // 0x4f6538: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f6538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f653c:
    // 0x4f653c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f653cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f6540:
    // 0x4f6540: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f6540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f6544:
    // 0x4f6544: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f6544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f6548:
    // 0x4f6548: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f6548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f654c:
    // 0x4f654c: 0x60f809  jalr        $v1
label_4f6550:
    if (ctx->pc == 0x4F6550u) {
        ctx->pc = 0x4F6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F654Cu;
        // 0x4f6550: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F6554u;
        goto label_4f6554;
    }
    ctx->pc = 0x4F654Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F6554u);
        ctx->pc = 0x4F6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F654Cu;
        // 0x4f6550: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F654Cu, 0x4F6554u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F6554u;
label_4f6554:
    // 0x4f6554: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f6554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f6558:
    // 0x4f6558: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f6558u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f655c:
    // 0x4f655c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f655cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f6560:
    // 0x4f6560: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f6560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f6564:
    // 0x4f6564: 0x3e00008  jr          $ra
label_4f6568:
    if (ctx->pc == 0x4F6568u) {
        ctx->pc = 0x4F6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6564u;
        // 0x4f6568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F656Cu;
        goto label_4f656c;
    }
    ctx->pc = 0x4F6564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F6568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F6564u;
        // 0x4f6568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F6564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F656Cu;
label_4f656c:
    // 0x4f656c: 0x0  nop
    ctx->pc = 0x4f656cu;
    // NOP
label_4f6570:
    // 0x4f6570: 0x0  nop
    ctx->pc = 0x4f6570u;
    // NOP
label_4f6574:
    // 0x4f6574: 0x0  nop
    ctx->pc = 0x4f6574u;
    // NOP
    ctx->pc = 0x4f6578u;
}
