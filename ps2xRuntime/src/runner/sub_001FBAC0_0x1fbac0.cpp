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

// Function: sub_001FBAC0
// Address: 0x1fbac0 - 0x1fbb18
void sub_001FBAC0_0x1fbac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FBAC0_0x1fbac0");
#endif

    switch (ctx->pc) {
        case 0x1fbac0u: goto label_1fbac0;
        case 0x1fbac4u: goto label_1fbac4;
        case 0x1fbac8u: goto label_1fbac8;
        case 0x1fbaccu: goto label_1fbacc;
        case 0x1fbad0u: goto label_1fbad0;
        case 0x1fbad4u: goto label_1fbad4;
        case 0x1fbad8u: goto label_1fbad8;
        case 0x1fbadcu: goto label_1fbadc;
        case 0x1fbae0u: goto label_1fbae0;
        case 0x1fbae4u: goto label_1fbae4;
        case 0x1fbae8u: goto label_1fbae8;
        case 0x1fbaecu: goto label_1fbaec;
        case 0x1fbaf0u: goto label_1fbaf0;
        case 0x1fbaf4u: goto label_1fbaf4;
        case 0x1fbaf8u: goto label_1fbaf8;
        case 0x1fbafcu: goto label_1fbafc;
        case 0x1fbb00u: goto label_1fbb00;
        case 0x1fbb04u: goto label_1fbb04;
        case 0x1fbb08u: goto label_1fbb08;
        case 0x1fbb0cu: goto label_1fbb0c;
        case 0x1fbb10u: goto label_1fbb10;
        case 0x1fbb14u: goto label_1fbb14;
        default: break;
    }

    ctx->pc = 0x1fbac0u;

label_1fbac0:
    // 0x1fbac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fbac4:
    // 0x1fbac4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1fbac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1fbac8:
    // 0x1fbac8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fbac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1fbacc:
    // 0x1fbacc: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x1fbaccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_1fbad0:
    // 0x1fbad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fbad4:
    // 0x1fbad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fbad8:
    // 0x1fbad8: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x1fbad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_1fbadc:
    // 0x1fbadc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbae0:
    // 0x1fbae0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1fbae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1fbae4:
    // 0x1fbae4: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x1fbae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1fbae8:
    // 0x1fbae8: 0xa0f809  jalr        $a1
label_1fbaec:
    if (ctx->pc == 0x1FBAECu) {
        ctx->pc = 0x1FBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAE8u;
        // 0x1fbaec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBAF0u;
        goto label_1fbaf0;
    }
    ctx->pc = 0x1FBAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1FBAF0u);
        ctx->pc = 0x1FBAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAE8u;
        // 0x1fbaec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBAE8u, 0x1FBAF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBAF0u;
label_1fbaf0:
    // 0x1fbaf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fbaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1fbaf4:
    // 0x1fbaf4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1fbaf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_1fbaf8:
    // 0x1fbaf8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x1fbaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1fbafc:
    // 0x1fbafc: 0x60f809  jalr        $v1
label_1fbb00:
    if (ctx->pc == 0x1FBB00u) {
        ctx->pc = 0x1FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAFCu;
        // 0x1fbb00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB04u;
        goto label_1fbb04;
    }
    ctx->pc = 0x1FBAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FBB04u);
        ctx->pc = 0x1FBB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBAFCu;
        // 0x1fbb00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBAFCu, 0x1FBB04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FBB04u;
label_1fbb04:
    // 0x1fbb04: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_1fbb08:
    // 0x1fbb08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbb08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbb0c:
    // 0x1fbb0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fbb10:
    // 0x1fbb10: 0x3e00008  jr          $ra
label_1fbb14:
    if (ctx->pc == 0x1FBB14u) {
        ctx->pc = 0x1FBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB10u;
        // 0x1fbb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FBB18u;
        goto label_fallthrough_0x1fbb10;
    }
    ctx->pc = 0x1FBB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB10u;
        // 0x1fbb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBB10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1fbb10:
    ctx->pc = 0x1FBB18u;
}
