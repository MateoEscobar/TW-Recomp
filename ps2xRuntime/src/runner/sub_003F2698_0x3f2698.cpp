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

// Function: sub_003F2698
// Address: 0x3f2698 - 0x3f2700
void sub_003F2698_0x3f2698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F2698_0x3f2698");
#endif

    switch (ctx->pc) {
        case 0x3f2698u: goto label_3f2698;
        case 0x3f269cu: goto label_3f269c;
        case 0x3f26a0u: goto label_3f26a0;
        case 0x3f26a4u: goto label_3f26a4;
        case 0x3f26a8u: goto label_3f26a8;
        case 0x3f26acu: goto label_3f26ac;
        case 0x3f26b0u: goto label_3f26b0;
        case 0x3f26b4u: goto label_3f26b4;
        case 0x3f26b8u: goto label_3f26b8;
        case 0x3f26bcu: goto label_3f26bc;
        case 0x3f26c0u: goto label_3f26c0;
        case 0x3f26c4u: goto label_3f26c4;
        case 0x3f26c8u: goto label_3f26c8;
        case 0x3f26ccu: goto label_3f26cc;
        case 0x3f26d0u: goto label_3f26d0;
        case 0x3f26d4u: goto label_3f26d4;
        case 0x3f26d8u: goto label_3f26d8;
        case 0x3f26dcu: goto label_3f26dc;
        case 0x3f26e0u: goto label_3f26e0;
        case 0x3f26e4u: goto label_3f26e4;
        case 0x3f26e8u: goto label_3f26e8;
        case 0x3f26ecu: goto label_3f26ec;
        case 0x3f26f0u: goto label_3f26f0;
        case 0x3f26f4u: goto label_3f26f4;
        case 0x3f26f8u: goto label_3f26f8;
        case 0x3f26fcu: goto label_3f26fc;
        default: break;
    }

    ctx->pc = 0x3f2698u;

label_3f2698:
    // 0x3f2698: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f2698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f269c:
    // 0x3f269c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f269cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f26a0:
    // 0x3f26a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f26a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f26a4:
    // 0x3f26a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3f26a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f26a8:
    // 0x3f26a8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3f26a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3f26ac:
    // 0x3f26ac: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_3f26b0:
    if (ctx->pc == 0x3F26B0u) {
        ctx->pc = 0x3F26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26ACu;
        // 0x3f26b0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F26B4u;
        goto label_3f26b4;
    }
    ctx->pc = 0x3F26ACu;
    {
        const bool branch_taken_0x3f26ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f26ac) {
            ctx->pc = 0x3F26B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F26ACu;
            // 0x3f26b0: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F26D0u;
            goto label_3f26d0;
        }
    }
    ctx->pc = 0x3F26B4u;
label_3f26b4:
    // 0x3f26b4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f26b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f26b8:
    // 0x3f26b8: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f26b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f26bc:
    // 0x3f26bc: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f26c0:
    // 0x3f26c0: 0x60f809  jalr        $v1
label_3f26c4:
    if (ctx->pc == 0x3F26C4u) {
        ctx->pc = 0x3F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26C0u;
        // 0x3f26c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F26C8u;
        goto label_3f26c8;
    }
    ctx->pc = 0x3F26C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F26C8u);
        ctx->pc = 0x3F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26C0u;
        // 0x3f26c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F26C0u, 0x3F26C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F26C8u;
label_3f26c8:
    // 0x3f26c8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3f26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3f26cc:
    // 0x3f26cc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x3f26ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3f26d0:
    // 0x3f26d0: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
label_3f26d4:
    if (ctx->pc == 0x3F26D4u) {
        ctx->pc = 0x3F26D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26D0u;
        // 0x3f26d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F26D8u;
        goto label_3f26d8;
    }
    ctx->pc = 0x3F26D0u;
    {
        const bool branch_taken_0x3f26d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f26d0) {
            ctx->pc = 0x3F26D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F26D0u;
            // 0x3f26d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F26F4u;
            goto label_3f26f4;
        }
    }
    ctx->pc = 0x3F26D8u;
label_3f26d8:
    // 0x3f26d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3f26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3f26dc:
    // 0x3f26dc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x3f26dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
label_3f26e0:
    // 0x3f26e0: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x3f26e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_3f26e4:
    // 0x3f26e4: 0x60f809  jalr        $v1
label_3f26e8:
    if (ctx->pc == 0x3F26E8u) {
        ctx->pc = 0x3F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26E4u;
        // 0x3f26e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F26ECu;
        goto label_3f26ec;
    }
    ctx->pc = 0x3F26E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3F26ECu);
        ctx->pc = 0x3F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26E4u;
        // 0x3f26e8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F26E4u, 0x3F26ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F26ECu;
label_3f26ec:
    // 0x3f26ec: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3f26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3f26f0:
    // 0x3f26f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f26f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f26f4:
    // 0x3f26f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f26f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f26f8:
    // 0x3f26f8: 0x3e00008  jr          $ra
label_3f26fc:
    if (ctx->pc == 0x3F26FCu) {
        ctx->pc = 0x3F26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26F8u;
        // 0x3f26fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F2700u;
        goto label_fallthrough_0x3f26f8;
    }
    ctx->pc = 0x3F26F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F26F8u;
        // 0x3f26fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F26F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f26f8:
    ctx->pc = 0x3F2700u;
}
