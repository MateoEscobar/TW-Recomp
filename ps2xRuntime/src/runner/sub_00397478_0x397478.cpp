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

// Function: sub_00397478
// Address: 0x397478 - 0x397508
void sub_00397478_0x397478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397478_0x397478");
#endif

    switch (ctx->pc) {
        case 0x397478u: goto label_397478;
        case 0x39747cu: goto label_39747c;
        case 0x397480u: goto label_397480;
        case 0x397484u: goto label_397484;
        case 0x397488u: goto label_397488;
        case 0x39748cu: goto label_39748c;
        case 0x397490u: goto label_397490;
        case 0x397494u: goto label_397494;
        case 0x397498u: goto label_397498;
        case 0x39749cu: goto label_39749c;
        case 0x3974a0u: goto label_3974a0;
        case 0x3974a4u: goto label_3974a4;
        case 0x3974a8u: goto label_3974a8;
        case 0x3974acu: goto label_3974ac;
        case 0x3974b0u: goto label_3974b0;
        case 0x3974b4u: goto label_3974b4;
        case 0x3974b8u: goto label_3974b8;
        case 0x3974bcu: goto label_3974bc;
        case 0x3974c0u: goto label_3974c0;
        case 0x3974c4u: goto label_3974c4;
        case 0x3974c8u: goto label_3974c8;
        case 0x3974ccu: goto label_3974cc;
        case 0x3974d0u: goto label_3974d0;
        case 0x3974d4u: goto label_3974d4;
        case 0x3974d8u: goto label_3974d8;
        case 0x3974dcu: goto label_3974dc;
        case 0x3974e0u: goto label_3974e0;
        case 0x3974e4u: goto label_3974e4;
        case 0x3974e8u: goto label_3974e8;
        case 0x3974ecu: goto label_3974ec;
        case 0x3974f0u: goto label_3974f0;
        case 0x3974f4u: goto label_3974f4;
        case 0x3974f8u: goto label_3974f8;
        case 0x3974fcu: goto label_3974fc;
        case 0x397500u: goto label_397500;
        case 0x397504u: goto label_397504;
        default: break;
    }

    ctx->pc = 0x397478u;

label_397478:
    // 0x397478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39747c:
    // 0x39747c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x39747cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_397480:
    // 0x397480: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x397480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_397484:
    // 0x397484: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x397484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_397488:
    // 0x397488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x397488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39748c:
    // 0x39748c: 0xc0e4060  jal         func_390180
label_397490:
    if (ctx->pc == 0x397490u) {
        ctx->pc = 0x397490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39748Cu;
        // 0x397490: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397494u;
        goto label_397494;
    }
    ctx->pc = 0x39748Cu;
    SET_GPR_U32(ctx, 31, 0x397494u);
    ctx->pc = 0x397490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39748Cu;
    // 0x397490: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x39748Cu, 0x397494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397494u;
label_397494:
    // 0x397494: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x397494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_397498:
    // 0x397498: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_39749c:
    if (ctx->pc == 0x39749Cu) {
        ctx->pc = 0x39749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397498u;
        // 0x39749c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974A0u;
        goto label_3974a0;
    }
    ctx->pc = 0x397498u;
    {
        const bool branch_taken_0x397498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397498u;
        // 0x39749c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397498) {
            ctx->pc = 0x3974C0u;
            goto label_3974c0;
        }
    }
    ctx->pc = 0x3974A0u;
label_3974a0:
    // 0x3974a0: 0xc0e8b48  jal         func_3A2D20
label_3974a4:
    if (ctx->pc == 0x3974A4u) {
        ctx->pc = 0x3974A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974A0u;
        // 0x3974a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974A8u;
        goto label_3974a8;
    }
    ctx->pc = 0x3974A0u;
    SET_GPR_U32(ctx, 31, 0x3974A8u);
    ctx->pc = 0x3974A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3974A0u;
    // 0x3974a4: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x3974A0u, 0x3974A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3974A8u;
label_3974a8:
    // 0x3974a8: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3974a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_3974ac:
    // 0x3974ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3974acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3974b0:
    // 0x3974b0: 0xc0e8b80  jal         func_3A2E00
label_3974b4:
    if (ctx->pc == 0x3974B4u) {
        ctx->pc = 0x3974B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974B0u;
        // 0x3974b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974B8u;
        goto label_3974b8;
    }
    ctx->pc = 0x3974B0u;
    SET_GPR_U32(ctx, 31, 0x3974B8u);
    ctx->pc = 0x3974B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3974B0u;
    // 0x3974b4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x3974B0u, 0x3974B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3974B8u;
label_3974b8:
    // 0x3974b8: 0xc0e8b50  jal         func_3A2D40
label_3974bc:
    if (ctx->pc == 0x3974BCu) {
        ctx->pc = 0x3974BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974B8u;
        // 0x3974bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974C0u;
        goto label_3974c0;
    }
    ctx->pc = 0x3974B8u;
    SET_GPR_U32(ctx, 31, 0x3974C0u);
    ctx->pc = 0x3974BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3974B8u;
    // 0x3974bc: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x3974B8u, 0x3974C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3974C0u;
label_3974c0:
    // 0x3974c0: 0xc0e9434  jal         func_3A50D0
label_3974c4:
    if (ctx->pc == 0x3974C4u) {
        ctx->pc = 0x3974C8u;
        goto label_3974c8;
    }
    ctx->pc = 0x3974C0u;
    SET_GPR_U32(ctx, 31, 0x3974C8u);
    ctx->pc = 0x3A50D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A50D0u, 0x3974C0u, 0x3974C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3974C8u;
label_3974c8:
    // 0x3974c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3974c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3974cc:
    // 0x3974cc: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_3974d0:
    if (ctx->pc == 0x3974D0u) {
        ctx->pc = 0x3974D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974CCu;
        // 0x3974d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974D4u;
        goto label_3974d4;
    }
    ctx->pc = 0x3974CCu;
    {
        const bool branch_taken_0x3974cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3974cc) {
            ctx->pc = 0x3974D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3974CCu;
            // 0x3974d0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3974E0u;
            goto label_3974e0;
        }
    }
    ctx->pc = 0x3974D4u;
label_3974d4:
    // 0x3974d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3974d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3974d8:
    // 0x3974d8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3974dc:
    if (ctx->pc == 0x3974DCu) {
        ctx->pc = 0x3974DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974D8u;
        // 0x3974dc: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974E0u;
        goto label_3974e0;
    }
    ctx->pc = 0x3974D8u;
    {
        const bool branch_taken_0x3974d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3974DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974D8u;
        // 0x3974dc: 0x8c62bd30  lw          $v0, -0x42D0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974d8) {
            ctx->pc = 0x3974F0u;
            goto label_3974f0;
        }
    }
    ctx->pc = 0x3974E0u;
label_3974e0:
    // 0x3974e0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3974e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3974e4:
    // 0x3974e4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3974e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3974e8:
    // 0x3974e8: 0x40f809  jalr        $v0
label_3974ec:
    if (ctx->pc == 0x3974ECu) {
        ctx->pc = 0x3974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974E8u;
        // 0x3974ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3974F0u;
        goto label_3974f0;
    }
    ctx->pc = 0x3974E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3974F0u);
        ctx->pc = 0x3974ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974E8u;
        // 0x3974ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3974E8u, 0x3974F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3974F0u;
label_3974f0:
    // 0x3974f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3974f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3974f4:
    // 0x3974f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3974f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3974f8:
    // 0x3974f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3974f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3974fc:
    // 0x3974fc: 0x3e00008  jr          $ra
label_397500:
    if (ctx->pc == 0x397500u) {
        ctx->pc = 0x397500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974FCu;
        // 0x397500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397504u;
        goto label_397504;
    }
    ctx->pc = 0x3974FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974FCu;
        // 0x397500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3974FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397504u;
label_397504:
    // 0x397504: 0x0  nop
    ctx->pc = 0x397504u;
    // NOP
    ctx->pc = 0x397508u;
}
