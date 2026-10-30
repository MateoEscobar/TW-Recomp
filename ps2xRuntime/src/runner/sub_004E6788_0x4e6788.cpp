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

// Function: sub_004E6788
// Address: 0x4e6788 - 0x4e6800
void sub_004E6788_0x4e6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6788_0x4e6788");
#endif

    switch (ctx->pc) {
        case 0x4e6788u: goto label_4e6788;
        case 0x4e678cu: goto label_4e678c;
        case 0x4e6790u: goto label_4e6790;
        case 0x4e6794u: goto label_4e6794;
        case 0x4e6798u: goto label_4e6798;
        case 0x4e679cu: goto label_4e679c;
        case 0x4e67a0u: goto label_4e67a0;
        case 0x4e67a4u: goto label_4e67a4;
        case 0x4e67a8u: goto label_4e67a8;
        case 0x4e67acu: goto label_4e67ac;
        case 0x4e67b0u: goto label_4e67b0;
        case 0x4e67b4u: goto label_4e67b4;
        case 0x4e67b8u: goto label_4e67b8;
        case 0x4e67bcu: goto label_4e67bc;
        case 0x4e67c0u: goto label_4e67c0;
        case 0x4e67c4u: goto label_4e67c4;
        case 0x4e67c8u: goto label_4e67c8;
        case 0x4e67ccu: goto label_4e67cc;
        case 0x4e67d0u: goto label_4e67d0;
        case 0x4e67d4u: goto label_4e67d4;
        case 0x4e67d8u: goto label_4e67d8;
        case 0x4e67dcu: goto label_4e67dc;
        case 0x4e67e0u: goto label_4e67e0;
        case 0x4e67e4u: goto label_4e67e4;
        case 0x4e67e8u: goto label_4e67e8;
        case 0x4e67ecu: goto label_4e67ec;
        case 0x4e67f0u: goto label_4e67f0;
        case 0x4e67f4u: goto label_4e67f4;
        case 0x4e67f8u: goto label_4e67f8;
        case 0x4e67fcu: goto label_4e67fc;
        default: break;
    }

    ctx->pc = 0x4e6788u;

label_4e6788:
    // 0x4e6788: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e6788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e678c:
    // 0x4e678c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e6790:
    // 0x4e6790: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e6790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e6794:
    // 0x4e6794: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e6794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e6798:
    // 0x4e6798: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e6798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e679c:
    // 0x4e679c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e679cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e67a0:
    // 0x4e67a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e67a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e67a4:
    // 0x4e67a4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e67a8:
    if (ctx->pc == 0x4E67A8u) {
        ctx->pc = 0x4E67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67A4u;
        // 0x4e67a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E67ACu;
        goto label_4e67ac;
    }
    ctx->pc = 0x4E67A4u;
    {
        const bool branch_taken_0x4e67a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E67A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67A4u;
        // 0x4e67a8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e67a4) {
            ctx->pc = 0x4E67DCu;
            goto label_4e67dc;
        }
    }
    ctx->pc = 0x4E67ACu;
label_4e67ac:
    // 0x4e67ac: 0xc06f01e  jal         func_1BC078
label_4e67b0:
    if (ctx->pc == 0x4E67B0u) {
        ctx->pc = 0x4E67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67ACu;
        // 0x4e67b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E67B4u;
        goto label_4e67b4;
    }
    ctx->pc = 0x4E67ACu;
    SET_GPR_U32(ctx, 31, 0x4E67B4u);
    ctx->pc = 0x4E67B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E67ACu;
    // 0x4e67b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BC078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BC078u, 0x4E67ACu, 0x4E67B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E67B4u;
label_4e67b4:
    // 0x4e67b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e67b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e67b8:
    // 0x4e67b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e67b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e67bc:
    // 0x4e67bc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e67bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e67c0:
    // 0x4e67c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e67c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e67c4:
    // 0x4e67c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e67c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e67c8:
    // 0x4e67c8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e67cc:
    // 0x4e67cc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e67ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e67d0:
    // 0x4e67d0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e67d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e67d4:
    // 0x4e67d4: 0x60f809  jalr        $v1
label_4e67d8:
    if (ctx->pc == 0x4E67D8u) {
        ctx->pc = 0x4E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67D4u;
        // 0x4e67d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E67DCu;
        goto label_4e67dc;
    }
    ctx->pc = 0x4E67D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E67DCu);
        ctx->pc = 0x4E67D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67D4u;
        // 0x4e67d8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E67D4u, 0x4E67DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E67DCu;
label_4e67dc:
    // 0x4e67dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e67dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e67e0:
    // 0x4e67e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e67e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e67e4:
    // 0x4e67e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e67e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e67e8:
    // 0x4e67e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e67e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e67ec:
    // 0x4e67ec: 0x3e00008  jr          $ra
label_4e67f0:
    if (ctx->pc == 0x4E67F0u) {
        ctx->pc = 0x4E67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67ECu;
        // 0x4e67f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E67F4u;
        goto label_4e67f4;
    }
    ctx->pc = 0x4E67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E67ECu;
        // 0x4e67f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E67F4u;
label_4e67f4:
    // 0x4e67f4: 0x0  nop
    ctx->pc = 0x4e67f4u;
    // NOP
label_4e67f8:
    // 0x4e67f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4e67f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4e67fc:
    // 0x4e67fc: 0x0  nop
    ctx->pc = 0x4e67fcu;
    // NOP
    ctx->pc = 0x4e6800u;
}
