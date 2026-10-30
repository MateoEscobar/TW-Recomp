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

// Function: sub_003219A0
// Address: 0x3219a0 - 0x321a00
void sub_003219A0_0x3219a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003219A0_0x3219a0");
#endif

    switch (ctx->pc) {
        case 0x3219a0u: goto label_3219a0;
        case 0x3219a4u: goto label_3219a4;
        case 0x3219a8u: goto label_3219a8;
        case 0x3219acu: goto label_3219ac;
        case 0x3219b0u: goto label_3219b0;
        case 0x3219b4u: goto label_3219b4;
        case 0x3219b8u: goto label_3219b8;
        case 0x3219bcu: goto label_3219bc;
        case 0x3219c0u: goto label_3219c0;
        case 0x3219c4u: goto label_3219c4;
        case 0x3219c8u: goto label_3219c8;
        case 0x3219ccu: goto label_3219cc;
        case 0x3219d0u: goto label_3219d0;
        case 0x3219d4u: goto label_3219d4;
        case 0x3219d8u: goto label_3219d8;
        case 0x3219dcu: goto label_3219dc;
        case 0x3219e0u: goto label_3219e0;
        case 0x3219e4u: goto label_3219e4;
        case 0x3219e8u: goto label_3219e8;
        case 0x3219ecu: goto label_3219ec;
        case 0x3219f0u: goto label_3219f0;
        case 0x3219f4u: goto label_3219f4;
        case 0x3219f8u: goto label_3219f8;
        case 0x3219fcu: goto label_3219fc;
        default: break;
    }

    ctx->pc = 0x3219a0u;

label_3219a0:
    // 0x3219a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3219a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3219a4:
    // 0x3219a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3219a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3219a8:
    // 0x3219a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3219a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3219ac:
    // 0x3219ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3219acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3219b0:
    // 0x3219b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3219b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3219b4:
    // 0x3219b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3219b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3219b8:
    // 0x3219b8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3219b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3219bc:
    // 0x3219bc: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_3219c0:
    if (ctx->pc == 0x3219C0u) {
        ctx->pc = 0x3219C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219BCu;
        // 0x3219c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3219C4u;
        goto label_3219c4;
    }
    ctx->pc = 0x3219BCu;
    {
        const bool branch_taken_0x3219bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3219C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219BCu;
        // 0x3219c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3219bc) {
            ctx->pc = 0x3219D4u;
            goto label_3219d4;
        }
    }
    ctx->pc = 0x3219C4u;
label_3219c4:
    // 0x3219c4: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x3219c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_3219c8:
    // 0x3219c8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x3219c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3219cc:
    // 0x3219cc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x3219ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3219d0:
    // 0x3219d0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x3219d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_3219d4:
    // 0x3219d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3219d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3219d8:
    // 0x3219d8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x3219d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_3219dc:
    // 0x3219dc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3219dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3219e0:
    // 0x3219e0: 0x60f809  jalr        $v1
label_3219e4:
    if (ctx->pc == 0x3219E4u) {
        ctx->pc = 0x3219E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219E0u;
        // 0x3219e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3219E8u;
        goto label_3219e8;
    }
    ctx->pc = 0x3219E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3219E8u);
        ctx->pc = 0x3219E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219E0u;
        // 0x3219e4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219E0u, 0x3219E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3219E8u;
label_3219e8:
    // 0x3219e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3219e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3219ec:
    // 0x3219ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3219ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3219f0:
    // 0x3219f0: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x3219f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
label_3219f4:
    // 0x3219f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3219f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3219f8:
    // 0x3219f8: 0x3e00008  jr          $ra
label_3219fc:
    if (ctx->pc == 0x3219FCu) {
        ctx->pc = 0x3219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219F8u;
        // 0x3219fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A00u;
        goto label_fallthrough_0x3219f8;
    }
    ctx->pc = 0x3219F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3219FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3219F8u;
        // 0x3219fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3219F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3219f8:
    ctx->pc = 0x321A00u;
}
