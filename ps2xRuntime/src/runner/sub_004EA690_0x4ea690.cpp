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

// Function: sub_004EA690
// Address: 0x4ea690 - 0x4ea710
void sub_004EA690_0x4ea690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EA690_0x4ea690");
#endif

    switch (ctx->pc) {
        case 0x4ea690u: goto label_4ea690;
        case 0x4ea694u: goto label_4ea694;
        case 0x4ea698u: goto label_4ea698;
        case 0x4ea69cu: goto label_4ea69c;
        case 0x4ea6a0u: goto label_4ea6a0;
        case 0x4ea6a4u: goto label_4ea6a4;
        case 0x4ea6a8u: goto label_4ea6a8;
        case 0x4ea6acu: goto label_4ea6ac;
        case 0x4ea6b0u: goto label_4ea6b0;
        case 0x4ea6b4u: goto label_4ea6b4;
        case 0x4ea6b8u: goto label_4ea6b8;
        case 0x4ea6bcu: goto label_4ea6bc;
        case 0x4ea6c0u: goto label_4ea6c0;
        case 0x4ea6c4u: goto label_4ea6c4;
        case 0x4ea6c8u: goto label_4ea6c8;
        case 0x4ea6ccu: goto label_4ea6cc;
        case 0x4ea6d0u: goto label_4ea6d0;
        case 0x4ea6d4u: goto label_4ea6d4;
        case 0x4ea6d8u: goto label_4ea6d8;
        case 0x4ea6dcu: goto label_4ea6dc;
        case 0x4ea6e0u: goto label_4ea6e0;
        case 0x4ea6e4u: goto label_4ea6e4;
        case 0x4ea6e8u: goto label_4ea6e8;
        case 0x4ea6ecu: goto label_4ea6ec;
        case 0x4ea6f0u: goto label_4ea6f0;
        case 0x4ea6f4u: goto label_4ea6f4;
        case 0x4ea6f8u: goto label_4ea6f8;
        case 0x4ea6fcu: goto label_4ea6fc;
        case 0x4ea700u: goto label_4ea700;
        case 0x4ea704u: goto label_4ea704;
        case 0x4ea708u: goto label_4ea708;
        case 0x4ea70cu: goto label_4ea70c;
        default: break;
    }

    ctx->pc = 0x4ea690u;

label_4ea690:
    // 0x4ea690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ea690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4ea694:
    // 0x4ea694: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4ea694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4ea698:
    // 0x4ea698: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4ea698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4ea69c:
    // 0x4ea69c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ea69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ea6a0:
    // 0x4ea6a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4ea6a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4ea6a4:
    // 0x4ea6a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ea6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ea6a8:
    // 0x4ea6a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ea6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ea6ac:
    // 0x4ea6ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4ea6b0:
    if (ctx->pc == 0x4EA6B0u) {
        ctx->pc = 0x4EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6ACu;
        // 0x4ea6b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA6B4u;
        goto label_4ea6b4;
    }
    ctx->pc = 0x4EA6ACu;
    {
        const bool branch_taken_0x4ea6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6ACu;
        // 0x4ea6b0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ea6ac) {
            ctx->pc = 0x4EA6F4u;
            goto label_4ea6f4;
        }
    }
    ctx->pc = 0x4EA6B4u;
label_4ea6b4:
    // 0x4ea6b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4ea6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ea6b8:
    // 0x4ea6b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ea6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ea6bc:
    // 0x4ea6bc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ea6bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ea6c0:
    // 0x4ea6c0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ea6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ea6c4:
    // 0x4ea6c4: 0x60f809  jalr        $v1
label_4ea6c8:
    if (ctx->pc == 0x4EA6C8u) {
        ctx->pc = 0x4EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6C4u;
        // 0x4ea6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA6CCu;
        goto label_4ea6cc;
    }
    ctx->pc = 0x4EA6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA6CCu);
        ctx->pc = 0x4EA6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6C4u;
        // 0x4ea6c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA6C4u, 0x4EA6CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA6CCu;
label_4ea6cc:
    // 0x4ea6cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4ea6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4ea6d0:
    // 0x4ea6d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ea6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ea6d4:
    // 0x4ea6d4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4ea6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4ea6d8:
    // 0x4ea6d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4ea6d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ea6dc:
    // 0x4ea6dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4ea6dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ea6e0:
    // 0x4ea6e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ea6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4ea6e4:
    // 0x4ea6e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4ea6e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4ea6e8:
    // 0x4ea6e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4ea6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4ea6ec:
    // 0x4ea6ec: 0x60f809  jalr        $v1
label_4ea6f0:
    if (ctx->pc == 0x4EA6F0u) {
        ctx->pc = 0x4EA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6ECu;
        // 0x4ea6f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA6F4u;
        goto label_4ea6f4;
    }
    ctx->pc = 0x4EA6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EA6F4u);
        ctx->pc = 0x4EA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA6ECu;
        // 0x4ea6f0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA6ECu, 0x4EA6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EA6F4u;
label_4ea6f4:
    // 0x4ea6f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4ea6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ea6f8:
    // 0x4ea6f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ea6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ea6fc:
    // 0x4ea6fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4ea6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ea700:
    // 0x4ea700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ea700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ea704:
    // 0x4ea704: 0x3e00008  jr          $ra
label_4ea708:
    if (ctx->pc == 0x4EA708u) {
        ctx->pc = 0x4EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA704u;
        // 0x4ea708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EA70Cu;
        goto label_4ea70c;
    }
    ctx->pc = 0x4EA704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EA708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EA704u;
        // 0x4ea708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EA704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EA70Cu;
label_4ea70c:
    // 0x4ea70c: 0x0  nop
    ctx->pc = 0x4ea70cu;
    // NOP
    ctx->pc = 0x4ea710u;
}
