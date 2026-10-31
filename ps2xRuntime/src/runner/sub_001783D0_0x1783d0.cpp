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

// Function: sub_001783D0
// Address: 0x1783d0 - 0x1784f0
void sub_001783D0_0x1783d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001783D0_0x1783d0");
#endif

    switch (ctx->pc) {
        case 0x178414u: goto label_178414;
        case 0x178464u: goto label_178464;
        case 0x178470u: goto label_178470;
        case 0x178490u: goto label_178490;
        case 0x1784a0u: goto label_1784a0;
        case 0x1784b0u: goto label_1784b0;
        default: break;
    }

    ctx->pc = 0x1783d0u;

    // 0x1783d0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1783d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1783d4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1783d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1783d8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1783d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1783dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1783dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783e0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1783e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1783e4: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x1783e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1783e8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1783e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1783ec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1783ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783f0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1783f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1783f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1783f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1783f8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1783f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1783fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1783fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178400: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x178400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x178404: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178408: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17840c: 0xc137afa  jal         func_4DEBE8
    ctx->pc = 0x17840Cu;
    SET_GPR_U32(ctx, 31, 0x178414u);
    ctx->pc = 0x178410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17840Cu;
    // 0x178410: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x17840Cu, 0x178414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178414u;
label_178414:
    // 0x178414: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x178418: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17841c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17841Cu;
    {
        const bool branch_taken_0x17841c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x178420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17841Cu;
        // 0x178420: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17841c) {
            ctx->pc = 0x178440u;
            goto label_178440;
        }
    }
    ctx->pc = 0x178424u;
    // 0x178424: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x178424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x178428: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x178428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17842c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x178430: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x178430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x178434: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x178434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178438: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x178438u;
    {
        const bool branch_taken_0x178438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178438u;
        // 0x17843c: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178438) {
            ctx->pc = 0x1784D0u;
            goto label_1784d0;
        }
    }
    ctx->pc = 0x178440u;
label_178440:
    // 0x178440: 0x16000023  bnez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x178440u;
    {
        const bool branch_taken_0x178440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x178444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178440u;
        // 0x178444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178440) {
            ctx->pc = 0x1784D0u;
            goto label_1784d0;
        }
    }
    ctx->pc = 0x178448u;
    // 0x178448: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x178448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17844c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x17844cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x178450: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x178450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x178454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178458: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x178458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x17845c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x17845Cu;
    SET_GPR_U32(ctx, 31, 0x178464u);
    ctx->pc = 0x178460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17845Cu;
    // 0x178460: 0x24c61ed8  addiu       $a2, $a2, 0x1ED8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x17845Cu, 0x178464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178464u;
label_178464:
    // 0x178464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178468: 0xc061668  jal         func_1859A0
    ctx->pc = 0x178468u;
    SET_GPR_U32(ctx, 31, 0x178470u);
    ctx->pc = 0x17846Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178468u;
    // 0x17846c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x178468u, 0x178470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178470u;
label_178470:
    // 0x178470: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x178470u;
    {
        const bool branch_taken_0x178470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178470u;
        // 0x178474: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178470) {
            ctx->pc = 0x178494u;
            goto label_178494;
        }
    }
    ctx->pc = 0x178478u;
    // 0x178478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17847c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17847cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178480: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x178480u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178484: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178488: 0xc061eaa  jal         func_187AA8
    ctx->pc = 0x178488u;
    SET_GPR_U32(ctx, 31, 0x178490u);
    ctx->pc = 0x17848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178488u;
    // 0x17848c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x178488u, 0x178490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178490u;
label_178490:
    // 0x178490: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x178490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_178494:
    // 0x178494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x178494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178498: 0xc0552b8  jal         func_154AE0
    ctx->pc = 0x178498u;
    SET_GPR_U32(ctx, 31, 0x1784A0u);
    ctx->pc = 0x17849Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178498u;
    // 0x17849c: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x178498u, 0x1784A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784A0u;
label_1784a0:
    // 0x1784a0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1784a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1784a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1784a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1784a8: 0xc137afa  jal         func_4DEBE8
    ctx->pc = 0x1784A8u;
    SET_GPR_U32(ctx, 31, 0x1784B0u);
    ctx->pc = 0x1784ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1784A8u;
    // 0x1784ac: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x1784A8u, 0x1784B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1784B0u;
label_1784b0:
    // 0x1784b0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1784b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1784b4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1784b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1784b8: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x1784b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1784bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1784bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1784c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1784c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1784c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1784c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1784c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1784c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1784cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1784ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1784d0:
    // 0x1784d0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1784d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1784d4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1784d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1784d8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1784d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1784dc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1784dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1784e0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1784e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1784e4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1784e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1784e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1784E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1784ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1784E8u;
        // 0x1784ec: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1784E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1784F0u;
}
