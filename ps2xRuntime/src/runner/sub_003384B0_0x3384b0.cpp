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

// Function: sub_003384B0
// Address: 0x3384b0 - 0x338528
void sub_003384B0_0x3384b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003384B0_0x3384b0");
#endif

    switch (ctx->pc) {
        case 0x3384b0u: goto label_3384b0;
        case 0x3384b4u: goto label_3384b4;
        case 0x3384b8u: goto label_3384b8;
        case 0x3384bcu: goto label_3384bc;
        case 0x3384c0u: goto label_3384c0;
        case 0x3384c4u: goto label_3384c4;
        case 0x3384c8u: goto label_3384c8;
        case 0x3384ccu: goto label_3384cc;
        case 0x3384d0u: goto label_3384d0;
        case 0x3384d4u: goto label_3384d4;
        case 0x3384d8u: goto label_3384d8;
        case 0x3384dcu: goto label_3384dc;
        case 0x3384e0u: goto label_3384e0;
        case 0x3384e4u: goto label_3384e4;
        case 0x3384e8u: goto label_3384e8;
        case 0x3384ecu: goto label_3384ec;
        case 0x3384f0u: goto label_3384f0;
        case 0x3384f4u: goto label_3384f4;
        case 0x3384f8u: goto label_3384f8;
        case 0x3384fcu: goto label_3384fc;
        case 0x338500u: goto label_338500;
        case 0x338504u: goto label_338504;
        case 0x338508u: goto label_338508;
        case 0x33850cu: goto label_33850c;
        case 0x338510u: goto label_338510;
        case 0x338514u: goto label_338514;
        case 0x338518u: goto label_338518;
        case 0x33851cu: goto label_33851c;
        case 0x338520u: goto label_338520;
        case 0x338524u: goto label_338524;
        default: break;
    }

    ctx->pc = 0x3384b0u;

label_3384b0:
    // 0x3384b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3384b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3384b4:
    // 0x3384b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3384b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3384b8:
    // 0x3384b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3384b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3384bc:
    // 0x3384bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3384bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3384c0:
    // 0x3384c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3384c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3384c4:
    // 0x3384c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3384c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3384c8:
    // 0x3384c8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3384c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3384cc:
    // 0x3384cc: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x3384ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3384d0:
    // 0x3384d0: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x3384d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3384d4:
    // 0x3384d4: 0x40f809  jalr        $v0
label_3384d8:
    if (ctx->pc == 0x3384D8u) {
        ctx->pc = 0x3384D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D4u;
        // 0x3384d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3384DCu;
        goto label_3384dc;
    }
    ctx->pc = 0x3384D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3384DCu);
        ctx->pc = 0x3384D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D4u;
        // 0x3384d8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384D4u, 0x3384DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3384DCu;
label_3384dc:
    // 0x3384dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3384dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3384e0:
    // 0x3384e0: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3384e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_3384e4:
    // 0x3384e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3384e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3384e8:
    // 0x3384e8: 0x24c66b40  addiu       $a2, $a2, 0x6B40
    ctx->pc = 0x3384e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27456));
label_3384ec:
    // 0x3384ec: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x3384ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_3384f0:
    // 0x3384f0: 0x2407002e  addiu       $a3, $zero, 0x2E
    ctx->pc = 0x3384f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_3384f4:
    // 0x3384f4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x3384f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3384f8:
    // 0x3384f8: 0x40f809  jalr        $v0
label_3384fc:
    if (ctx->pc == 0x3384FCu) {
        ctx->pc = 0x3384FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384F8u;
        // 0x3384fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338500u;
        goto label_338500;
    }
    ctx->pc = 0x3384F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x338500u);
        ctx->pc = 0x3384FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384F8u;
        // 0x3384fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3384F8u, 0x338500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x338500u;
label_338500:
    // 0x338500: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x338500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_338504:
    // 0x338504: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x338504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_338508:
    // 0x338508: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x338508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_33850c:
    // 0x33850c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x33850cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_338510:
    // 0x338510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x338510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_338514:
    // 0x338514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x338514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_338518:
    // 0x338518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33851c:
    // 0x33851c: 0x3e00008  jr          $ra
label_338520:
    if (ctx->pc == 0x338520u) {
        ctx->pc = 0x338520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33851Cu;
        // 0x338520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338524u;
        goto label_338524;
    }
    ctx->pc = 0x33851Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33851Cu;
        // 0x338520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33851Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338524u;
label_338524:
    // 0x338524: 0x0  nop
    ctx->pc = 0x338524u;
    // NOP
    ctx->pc = 0x338528u;
}
