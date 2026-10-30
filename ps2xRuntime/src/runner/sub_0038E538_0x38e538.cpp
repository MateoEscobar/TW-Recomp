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

// Function: sub_0038E538
// Address: 0x38e538 - 0x38e590
void sub_0038E538_0x38e538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E538_0x38e538");
#endif

    switch (ctx->pc) {
        case 0x38e538u: goto label_38e538;
        case 0x38e53cu: goto label_38e53c;
        case 0x38e540u: goto label_38e540;
        case 0x38e544u: goto label_38e544;
        case 0x38e548u: goto label_38e548;
        case 0x38e54cu: goto label_38e54c;
        case 0x38e550u: goto label_38e550;
        case 0x38e554u: goto label_38e554;
        case 0x38e558u: goto label_38e558;
        case 0x38e55cu: goto label_38e55c;
        case 0x38e560u: goto label_38e560;
        case 0x38e564u: goto label_38e564;
        case 0x38e568u: goto label_38e568;
        case 0x38e56cu: goto label_38e56c;
        case 0x38e570u: goto label_38e570;
        case 0x38e574u: goto label_38e574;
        case 0x38e578u: goto label_38e578;
        case 0x38e57cu: goto label_38e57c;
        case 0x38e580u: goto label_38e580;
        case 0x38e584u: goto label_38e584;
        case 0x38e588u: goto label_38e588;
        case 0x38e58cu: goto label_38e58c;
        default: break;
    }

    ctx->pc = 0x38e538u;

label_38e538:
    // 0x38e538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38e538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38e53c:
    // 0x38e53c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x38e53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_38e540:
    // 0x38e540: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x38e540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_38e544:
    // 0x38e544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38e544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38e548:
    // 0x38e548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x38e548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38e54c:
    // 0x38e54c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_38e550:
    // 0x38e550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38e554:
    // 0x38e554: 0x8c472b04  lw          $a3, 0x2B04($v0)
    ctx->pc = 0x38e554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_38e558:
    // 0x38e558: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x38e558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38e55c:
    // 0x38e55c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38e55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_38e560:
    // 0x38e560: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x38e560u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_38e564:
    // 0x38e564: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x38e564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_38e568:
    // 0x38e568: 0x40f809  jalr        $v0
label_38e56c:
    if (ctx->pc == 0x38E56Cu) {
        ctx->pc = 0x38E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E568u;
        // 0x38e56c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E570u;
        goto label_38e570;
    }
    ctx->pc = 0x38E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38E570u);
        ctx->pc = 0x38E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E568u;
        // 0x38e56c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E568u, 0x38E570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38E570u;
label_38e570:
    // 0x38e570: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x38e570u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_38e574:
    // 0x38e574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38e574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38e578:
    // 0x38e578: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x38e578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_38e57c:
    // 0x38e57c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x38e57cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_38e580:
    // 0x38e580: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38e580u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38e584:
    // 0x38e584: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38e584u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38e588:
    // 0x38e588: 0x3e00008  jr          $ra
label_38e58c:
    if (ctx->pc == 0x38E58Cu) {
        ctx->pc = 0x38E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E588u;
        // 0x38e58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38E590u;
        goto label_fallthrough_0x38e588;
    }
    ctx->pc = 0x38E588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E588u;
        // 0x38e58c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38e588:
    ctx->pc = 0x38E590u;
}
