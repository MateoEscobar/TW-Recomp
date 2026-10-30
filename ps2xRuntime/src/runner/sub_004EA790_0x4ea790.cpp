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

// Function: sub_004EA790
// Address: 0x4ea790 - 0x4ea810
void sub_004EA790_0x4ea790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA790_0x4ea790");
#endif

    switch (ctx->pc) {
        case 0x4ea790u: goto label_4ea790;
        case 0x4ea794u: goto label_4ea794;
        case 0x4ea798u: goto label_4ea798;
        case 0x4ea79cu: goto label_4ea79c;
        case 0x4ea7a0u: goto label_4ea7a0;
        case 0x4ea7a4u: goto label_4ea7a4;
        case 0x4ea7a8u: goto label_4ea7a8;
        case 0x4ea7acu: goto label_4ea7ac;
        case 0x4ea7b0u: goto label_4ea7b0;
        case 0x4ea7b4u: goto label_4ea7b4;
        case 0x4ea7b8u: goto label_4ea7b8;
        case 0x4ea7bcu: goto label_4ea7bc;
        case 0x4ea7c0u: goto label_4ea7c0;
        case 0x4ea7c4u: goto label_4ea7c4;
        case 0x4ea7c8u: goto label_4ea7c8;
        case 0x4ea7ccu: goto label_4ea7cc;
        case 0x4ea7d0u: goto label_4ea7d0;
        case 0x4ea7d4u: goto label_4ea7d4;
        case 0x4ea7d8u: goto label_4ea7d8;
        case 0x4ea7dcu: goto label_4ea7dc;
        case 0x4ea7e0u: goto label_4ea7e0;
        case 0x4ea7e4u: goto label_4ea7e4;
        case 0x4ea7e8u: goto label_4ea7e8;
        case 0x4ea7ecu: goto label_4ea7ec;
        case 0x4ea7f0u: goto label_4ea7f0;
        case 0x4ea7f4u: goto label_4ea7f4;
        case 0x4ea7f8u: goto label_4ea7f8;
        case 0x4ea7fcu: goto label_4ea7fc;
        case 0x4ea800u: goto label_4ea800;
        case 0x4ea804u: goto label_4ea804;
        case 0x4ea808u: goto label_4ea808;
        case 0x4ea80cu: goto label_4ea80c;
        default: break;
    }

    ctx->pc = 0x4ea790u;

label_4ea790:
    // 0x4ea790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea794:
    // 0x4ea794: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea798:
    // 0x4ea798: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea79c:
    // 0x4ea79c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea7a0:
    // 0x4ea7a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea7a4:
    // 0x4ea7a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea7a8:
    // 0x4ea7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea7ac:
    // 0x4ea7ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea7b0:
    if (ctx->pc == 0x4EA7B0u) {
        ctx->pc = 0x4EA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7ACu;
        // 0x4ea7b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA7B4u;
        goto label_4ea7b4;
    }
    ctx->pc = 0x4EA7ACu;
    {
        const bool branch_taken_0x4ea7ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7ACu;
        // 0x4ea7b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea7ac) {
            ctx->pc = 0x4EA7F4u;
            goto label_4ea7f4;
        }
    }
    ctx->pc = 0x4EA7B4u;
label_4ea7b4:
    // 0x4ea7b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea7b8:
    // 0x4ea7b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea7bc:
    // 0x4ea7bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea7bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea7c0:
    // 0x4ea7c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea7c4:
    // 0x4ea7c4: 0x60f809  jalr        $v1
label_4ea7c8:
    if (ctx->pc == 0x4EA7C8u) {
        ctx->pc = 0x4EA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7C4u;
        // 0x4ea7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA7CCu;
        goto label_4ea7cc;
    }
    ctx->pc = 0x4EA7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA7CCu);
        ctx->pc = 0x4EA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7C4u;
        // 0x4ea7c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA7C4u, 0x4EA7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA7CCu;
label_4ea7cc:
    // 0x4ea7cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea7d0:
    // 0x4ea7d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea7d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea7d4:
    // 0x4ea7d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea7d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea7d8:
    // 0x4ea7d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea7dc:
    // 0x4ea7dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea7e0:
    // 0x4ea7e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea7e4:
    // 0x4ea7e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea7e8:
    // 0x4ea7e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea7ec:
    // 0x4ea7ec: 0x60f809  jalr        $v1
label_4ea7f0:
    if (ctx->pc == 0x4EA7F0u) {
        ctx->pc = 0x4EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7ECu;
        // 0x4ea7f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA7F4u;
        goto label_4ea7f4;
    }
    ctx->pc = 0x4EA7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA7F4u);
        ctx->pc = 0x4EA7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA7ECu;
        // 0x4ea7f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA7ECu, 0x4EA7F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA7F4u;
label_4ea7f4:
    // 0x4ea7f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea7f8:
    // 0x4ea7f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea7f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea7fc:
    // 0x4ea7fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea7fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea800:
    // 0x4ea800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea804:
    // 0x4ea804: 0x3e00008  jr          $ra
label_4ea808:
    if (ctx->pc == 0x4EA808u) {
        ctx->pc = 0x4EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA804u;
        // 0x4ea808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA80Cu;
        goto label_4ea80c;
    }
    ctx->pc = 0x4EA804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA804u;
        // 0x4ea808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA80Cu;
label_4ea80c:
    // 0x4ea80c: 0x0  nop
    ctx->pc = 0x4ea80cu;
    // NOP
    ctx->pc = 0x4ea810u;
}
