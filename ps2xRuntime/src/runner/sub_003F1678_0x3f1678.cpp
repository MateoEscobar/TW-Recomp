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

// Function: sub_003F1678
// Address: 0x3f1678 - 0x3f16e8
void sub_003F1678_0x3f1678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F1678_0x3f1678");
#endif

    switch (ctx->pc) {
        case 0x3f1678u: goto label_3f1678;
        case 0x3f167cu: goto label_3f167c;
        case 0x3f1680u: goto label_3f1680;
        case 0x3f1684u: goto label_3f1684;
        case 0x3f1688u: goto label_3f1688;
        case 0x3f168cu: goto label_3f168c;
        case 0x3f1690u: goto label_3f1690;
        case 0x3f1694u: goto label_3f1694;
        case 0x3f1698u: goto label_3f1698;
        case 0x3f169cu: goto label_3f169c;
        case 0x3f16a0u: goto label_3f16a0;
        case 0x3f16a4u: goto label_3f16a4;
        case 0x3f16a8u: goto label_3f16a8;
        case 0x3f16acu: goto label_3f16ac;
        case 0x3f16b0u: goto label_3f16b0;
        case 0x3f16b4u: goto label_3f16b4;
        case 0x3f16b8u: goto label_3f16b8;
        case 0x3f16bcu: goto label_3f16bc;
        case 0x3f16c0u: goto label_3f16c0;
        case 0x3f16c4u: goto label_3f16c4;
        case 0x3f16c8u: goto label_3f16c8;
        case 0x3f16ccu: goto label_3f16cc;
        case 0x3f16d0u: goto label_3f16d0;
        case 0x3f16d4u: goto label_3f16d4;
        case 0x3f16d8u: goto label_3f16d8;
        case 0x3f16dcu: goto label_3f16dc;
        case 0x3f16e0u: goto label_3f16e0;
        case 0x3f16e4u: goto label_3f16e4;
        default: break;
    }

    ctx->pc = 0x3f1678u;

label_3f1678:
    // 0x3f1678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3f1678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3f167c:
    // 0x3f167c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3f167cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3f1680:
    // 0x3f1680: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f1680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f1684:
    // 0x3f1684: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f1684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f1688:
    // 0x3f1688: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f1688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f168c:
    // 0x3f168c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f168cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f1690:
    // 0x3f1690: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f1694:
    // 0x3f1694: 0x40f809  jalr        $v0
label_3f1698:
    if (ctx->pc == 0x3F1698u) {
        ctx->pc = 0x3F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1694u;
        // 0x3f1698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F169Cu;
        goto label_3f169c;
    }
    ctx->pc = 0x3F1694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F169Cu);
        ctx->pc = 0x3F1698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F1694u;
        // 0x3f1698: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F1694u, 0x3F169Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F169Cu;
label_3f169c:
    // 0x3f169c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3f169cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f16a0:
    // 0x3f16a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3f16a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f16a4:
    // 0x3f16a4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3f16a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3f16a8:
    // 0x3f16a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f16a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f16ac:
    // 0x3f16ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3f16acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3f16b0:
    // 0x3f16b0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_3f16b4:
    if (ctx->pc == 0x3F16B4u) {
        ctx->pc = 0x3F16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16B0u;
        // 0x3f16b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F16B8u;
        goto label_3f16b8;
    }
    ctx->pc = 0x3F16B0u;
    {
        const bool branch_taken_0x3f16b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F16B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16B0u;
        // 0x3f16b4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f16b0) {
            ctx->pc = 0x3F16C4u;
            goto label_3f16c4;
        }
    }
    ctx->pc = 0x3F16B8u;
label_3f16b8:
    // 0x3f16b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3f16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3f16bc:
    // 0x3f16bc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3f16bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3f16c0:
    // 0x3f16c0: 0xae0200cc  sw          $v0, 0xCC($s0)
    ctx->pc = 0x3f16c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 2));
label_3f16c4:
    // 0x3f16c4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3f16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3f16c8:
    // 0x3f16c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3f16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f16cc:
    // 0x3f16cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3f16ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f16d0:
    // 0x3f16d0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3f16d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_3f16d4:
    // 0x3f16d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f16d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f16d8:
    // 0x3f16d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3f16d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3f16dc:
    // 0x3f16dc: 0x3e00008  jr          $ra
label_3f16e0:
    if (ctx->pc == 0x3F16E0u) {
        ctx->pc = 0x3F16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16DCu;
        // 0x3f16e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F16E4u;
        goto label_3f16e4;
    }
    ctx->pc = 0x3F16DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F16E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F16DCu;
        // 0x3f16e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F16DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F16E4u;
label_3f16e4:
    // 0x3f16e4: 0x0  nop
    ctx->pc = 0x3f16e4u;
    // NOP
    ctx->pc = 0x3f16e8u;
}
