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

// Function: sub_003283C8
// Address: 0x3283c8 - 0x328508
void sub_003283C8_0x3283c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003283C8_0x3283c8");
#endif

    switch (ctx->pc) {
        case 0x3283f8u: goto label_3283f8;
        case 0x328404u: goto label_328404;
        case 0x32841cu: goto label_32841c;
        case 0x328438u: goto label_328438;
        case 0x3284acu: goto label_3284ac;
        default: break;
    }

    ctx->pc = 0x3283c8u;

    // 0x3283c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3283c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3283cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3283ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3283d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3283d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3283d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3283d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283d8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3283d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3283dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3283e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3283e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3283e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3283e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283e8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3283e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3283ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3283f0: 0xc0c9ece  jal         func_327B38
    ctx->pc = 0x3283F0u;
    SET_GPR_U32(ctx, 31, 0x3283F8u);
    ctx->pc = 0x3283F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283F0u;
    // 0x3283f4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327B38u, 0x3283F0u, 0x3283F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283F8u;
label_3283f8:
    // 0x3283f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3283f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3283fc: 0xc0c9ebe  jal         func_327AF8
    ctx->pc = 0x3283FCu;
    SET_GPR_U32(ctx, 31, 0x328404u);
    ctx->pc = 0x328400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3283FCu;
    // 0x328400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327AF8u, 0x3283FCu, 0x328404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328404u;
label_328404:
    // 0x328404: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x328404u;
    {
        const bool branch_taken_0x328404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328404u;
        // 0x328408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328404) {
            ctx->pc = 0x3284E4u;
            goto label_3284e4;
        }
    }
    ctx->pc = 0x32840Cu;
    // 0x32840c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x32840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x328410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x328410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x328414: 0xc0c9f38  jal         func_327CE0
    ctx->pc = 0x328414u;
    SET_GPR_U32(ctx, 31, 0x32841Cu);
    ctx->pc = 0x328418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328414u;
    // 0x328418: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327CE0u, 0x328414u, 0x32841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32841Cu;
label_32841c:
    // 0x32841c: 0x2646fff0  addiu       $a2, $s2, -0x10
    ctx->pc = 0x32841cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x328420: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x328420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328424: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x328424u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x328428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x328428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32842c: 0x63103  sra         $a2, $a2, 4
    ctx->pc = 0x32842cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 4));
    // 0x328430: 0xc0ca072  jal         func_3281C8
    ctx->pc = 0x328430u;
    SET_GPR_U32(ctx, 31, 0x328438u);
    ctx->pc = 0x328434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328430u;
    // 0x328434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3281C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3281C8u, 0x328430u, 0x328438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328438u;
label_328438:
    // 0x328438: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x328438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32843c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x32843cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x328440: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x328440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x328444: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x328444u;
    {
        const bool branch_taken_0x328444 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x328444) {
            ctx->pc = 0x328448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328444u;
            // 0x328448: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328484u;
            goto label_328484;
        }
    }
    ctx->pc = 0x32844Cu;
    // 0x32844c: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x32844cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x328450: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x328450u;
    {
        const bool branch_taken_0x328450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328450u;
        // 0x328454: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328450) {
            ctx->pc = 0x328468u;
            goto label_328468;
        }
    }
    ctx->pc = 0x328458u;
    // 0x328458: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x328458u;
    {
        const bool branch_taken_0x328458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x32845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328458u;
        // 0x32845c: 0x42982  srl         $a1, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328458) {
            ctx->pc = 0x32849Cu;
            goto label_32849c;
        }
    }
    ctx->pc = 0x328460u;
    // 0x328460: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x328460u;
    {
        const bool branch_taken_0x328460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328460u;
        // 0x328464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328460) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x328468u;
label_328468:
    // 0x328468: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x328468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x32846c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32846Cu;
    {
        const bool branch_taken_0x32846c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x328470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32846Cu;
        // 0x328470: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32846c) {
            ctx->pc = 0x3284BCu;
            goto label_3284bc;
        }
    }
    ctx->pc = 0x328474u;
    // 0x328474: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x328474u;
    {
        const bool branch_taken_0x328474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x328478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328474u;
        // 0x328478: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328474) {
            ctx->pc = 0x3284BCu;
            goto label_3284bc;
        }
    }
    ctx->pc = 0x32847Cu;
    // 0x32847c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x32847Cu;
    {
        const bool branch_taken_0x32847c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32847Cu;
        // 0x328480: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32847c) {
            ctx->pc = 0x3284ECu;
            goto label_3284ec;
        }
    }
    ctx->pc = 0x328484u;
label_328484:
    // 0x328484: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x328484u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x328488: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x328488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32848c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x32848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x328490: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x328490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x328494: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x328494u;
    {
        const bool branch_taken_0x328494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x328498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328494u;
        // 0x328498: 0x24425150  addiu       $v0, $v0, 0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328494) {
            ctx->pc = 0x3284D4u;
            goto label_3284d4;
        }
    }
    ctx->pc = 0x32849Cu;
label_32849c:
    // 0x32849c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x32849cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3284a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3284a4: 0xc0ca556  jal         func_329558
    ctx->pc = 0x3284A4u;
    SET_GPR_U32(ctx, 31, 0x3284ACu);
    ctx->pc = 0x3284A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3284A4u;
    // 0x3284a8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329558u, 0x3284A4u, 0x3284ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3284ACu;
label_3284ac:
    // 0x3284ac: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3284acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3284b0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3284b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3284b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3284B4u;
    {
        const bool branch_taken_0x3284b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284B4u;
        // 0x3284b8: 0x244252c0  addiu       $v0, $v0, 0x52C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284b4) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x3284BCu;
label_3284bc:
    // 0x3284bc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3284bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3284c0: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x3284c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x3284c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3284c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3284c8: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x3284c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x3284cc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3284ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3284d0: 0x244252c8  addiu       $v0, $v0, 0x52C8
    ctx->pc = 0x3284d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21192));
label_3284d4:
    // 0x3284d4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3284d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3284d8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3284d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3284dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3284DCu;
    {
        const bool branch_taken_0x3284dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3284E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3284DCu;
        // 0x3284e0: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3284dc) {
            ctx->pc = 0x3284E8u;
            goto label_3284e8;
        }
    }
    ctx->pc = 0x3284E4u;
label_3284e4:
    // 0x3284e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3284e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3284e8:
    // 0x3284e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3284e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3284ec:
    // 0x3284ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3284ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3284f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3284f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3284f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3284f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3284f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3284f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3284fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3284fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328500: 0x3e00008  jr          $ra
    ctx->pc = 0x328500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328500u;
        // 0x328504: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328508u;
}
