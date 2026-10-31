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

// Function: sub_001651B8
// Address: 0x1651b8 - 0x165220
void sub_001651B8_0x1651b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001651B8_0x1651b8");
#endif

    switch (ctx->pc) {
        case 0x1651b8u: goto label_1651b8;
        case 0x1651bcu: goto label_1651bc;
        case 0x1651c0u: goto label_1651c0;
        case 0x1651c4u: goto label_1651c4;
        case 0x1651c8u: goto label_1651c8;
        case 0x1651ccu: goto label_1651cc;
        case 0x1651d0u: goto label_1651d0;
        case 0x1651d4u: goto label_1651d4;
        case 0x1651d8u: goto label_1651d8;
        case 0x1651dcu: goto label_1651dc;
        case 0x1651e0u: goto label_1651e0;
        case 0x1651e4u: goto label_1651e4;
        case 0x1651e8u: goto label_1651e8;
        case 0x1651ecu: goto label_1651ec;
        case 0x1651f0u: goto label_1651f0;
        case 0x1651f4u: goto label_1651f4;
        case 0x1651f8u: goto label_1651f8;
        case 0x1651fcu: goto label_1651fc;
        case 0x165200u: goto label_165200;
        case 0x165204u: goto label_165204;
        case 0x165208u: goto label_165208;
        case 0x16520cu: goto label_16520c;
        case 0x165210u: goto label_165210;
        case 0x165214u: goto label_165214;
        case 0x165218u: goto label_165218;
        case 0x16521cu: goto label_16521c;
        default: break;
    }

    ctx->pc = 0x1651b8u;

label_1651b8:
    // 0x1651b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1651b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1651bc:
    // 0x1651bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1651bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1651c0:
    // 0x1651c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1651c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1651c4:
    // 0x1651c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1651c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1651c8:
    // 0x1651c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1651c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1651cc:
    // 0x1651cc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_1651d0:
    if (ctx->pc == 0x1651D0u) {
        ctx->pc = 0x1651D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651CCu;
        // 0x1651d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651D4u;
        goto label_1651d4;
    }
    ctx->pc = 0x1651CCu;
    {
        const bool branch_taken_0x1651cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651CCu;
        // 0x1651d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651cc) {
            ctx->pc = 0x165200u;
            goto label_165200;
        }
    }
    ctx->pc = 0x1651D4u;
label_1651d4:
    // 0x1651d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1651d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1651d8:
    // 0x1651d8: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x1651d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_1651dc:
    // 0x1651dc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1651dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1651e0:
    // 0x1651e0: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x1651e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_1651e4:
    // 0x1651e4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x1651e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1651e8:
    // 0x1651e8: 0x40f809  jalr        $v0
label_1651ec:
    if (ctx->pc == 0x1651ECu) {
        ctx->pc = 0x1651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651E8u;
        // 0x1651ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1651F0u;
        goto label_1651f0;
    }
    ctx->pc = 0x1651E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1651F0u);
        ctx->pc = 0x1651ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651E8u;
        // 0x1651ec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1651E8u, 0x1651F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1651F0u;
label_1651f0:
    // 0x1651f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1651f4:
    // 0x1651f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1651f8:
    // 0x1651f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1651fc:
    if (ctx->pc == 0x1651FCu) {
        ctx->pc = 0x1651FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F8u;
        // 0x1651fc: 0xac62014c  sw          $v0, 0x14C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165200u;
        goto label_165200;
    }
    ctx->pc = 0x1651F8u;
    {
        const bool branch_taken_0x1651f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1651F8u;
        // 0x1651fc: 0xac62014c  sw          $v0, 0x14C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651f8) {
            ctx->pc = 0x16520Cu;
            goto label_16520c;
        }
    }
    ctx->pc = 0x165200u;
label_165200:
    // 0x165200: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x165200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_165204:
    // 0x165204: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x165204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_165208:
    // 0x165208: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x165208u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
label_16520c:
    // 0x16520c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16520cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_165210:
    // 0x165210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_165214:
    // 0x165214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165218:
    // 0x165218: 0x3e00008  jr          $ra
label_16521c:
    if (ctx->pc == 0x16521Cu) {
        ctx->pc = 0x16521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165218u;
        // 0x16521c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x165220u;
        goto label_fallthrough_0x165218;
    }
    ctx->pc = 0x165218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165218u;
        // 0x16521c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x165218:
    ctx->pc = 0x165220u;
}
