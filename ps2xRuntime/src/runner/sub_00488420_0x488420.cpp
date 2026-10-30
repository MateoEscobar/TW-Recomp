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

// Function: sub_00488420
// Address: 0x488420 - 0x488568
void sub_00488420_0x488420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488420_0x488420");
#endif

    switch (ctx->pc) {
        case 0x488420u: goto label_488420;
        case 0x488424u: goto label_488424;
        case 0x488428u: goto label_488428;
        case 0x48842cu: goto label_48842c;
        case 0x488430u: goto label_488430;
        case 0x488434u: goto label_488434;
        case 0x488438u: goto label_488438;
        case 0x48843cu: goto label_48843c;
        case 0x488440u: goto label_488440;
        case 0x488444u: goto label_488444;
        case 0x488448u: goto label_488448;
        case 0x48844cu: goto label_48844c;
        case 0x488450u: goto label_488450;
        case 0x488454u: goto label_488454;
        case 0x488458u: goto label_488458;
        case 0x48845cu: goto label_48845c;
        case 0x488460u: goto label_488460;
        case 0x488464u: goto label_488464;
        case 0x488468u: goto label_488468;
        case 0x48846cu: goto label_48846c;
        case 0x488470u: goto label_488470;
        case 0x488474u: goto label_488474;
        case 0x488478u: goto label_488478;
        case 0x48847cu: goto label_48847c;
        case 0x488480u: goto label_488480;
        case 0x488484u: goto label_488484;
        case 0x488488u: goto label_488488;
        case 0x48848cu: goto label_48848c;
        case 0x488490u: goto label_488490;
        case 0x488494u: goto label_488494;
        case 0x488498u: goto label_488498;
        case 0x48849cu: goto label_48849c;
        case 0x4884a0u: goto label_4884a0;
        case 0x4884a4u: goto label_4884a4;
        case 0x4884a8u: goto label_4884a8;
        case 0x4884acu: goto label_4884ac;
        case 0x4884b0u: goto label_4884b0;
        case 0x4884b4u: goto label_4884b4;
        case 0x4884b8u: goto label_4884b8;
        case 0x4884bcu: goto label_4884bc;
        case 0x4884c0u: goto label_4884c0;
        case 0x4884c4u: goto label_4884c4;
        case 0x4884c8u: goto label_4884c8;
        case 0x4884ccu: goto label_4884cc;
        case 0x4884d0u: goto label_4884d0;
        case 0x4884d4u: goto label_4884d4;
        case 0x4884d8u: goto label_4884d8;
        case 0x4884dcu: goto label_4884dc;
        case 0x4884e0u: goto label_4884e0;
        case 0x4884e4u: goto label_4884e4;
        case 0x4884e8u: goto label_4884e8;
        case 0x4884ecu: goto label_4884ec;
        case 0x4884f0u: goto label_4884f0;
        case 0x4884f4u: goto label_4884f4;
        case 0x4884f8u: goto label_4884f8;
        case 0x4884fcu: goto label_4884fc;
        case 0x488500u: goto label_488500;
        case 0x488504u: goto label_488504;
        case 0x488508u: goto label_488508;
        case 0x48850cu: goto label_48850c;
        case 0x488510u: goto label_488510;
        case 0x488514u: goto label_488514;
        case 0x488518u: goto label_488518;
        case 0x48851cu: goto label_48851c;
        case 0x488520u: goto label_488520;
        case 0x488524u: goto label_488524;
        case 0x488528u: goto label_488528;
        case 0x48852cu: goto label_48852c;
        case 0x488530u: goto label_488530;
        case 0x488534u: goto label_488534;
        case 0x488538u: goto label_488538;
        case 0x48853cu: goto label_48853c;
        case 0x488540u: goto label_488540;
        case 0x488544u: goto label_488544;
        case 0x488548u: goto label_488548;
        case 0x48854cu: goto label_48854c;
        case 0x488550u: goto label_488550;
        case 0x488554u: goto label_488554;
        case 0x488558u: goto label_488558;
        case 0x48855cu: goto label_48855c;
        case 0x488560u: goto label_488560;
        case 0x488564u: goto label_488564;
        default: break;
    }

    ctx->pc = 0x488420u;

label_488420:
    // 0x488420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x488420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_488424:
    // 0x488424: 0x8f838978  lw          $v1, -0x7688($gp)
    ctx->pc = 0x488424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
label_488428:
    // 0x488428: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48842c:
    // 0x48842c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x48842cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_488430:
    // 0x488430: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x488430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_488434:
    // 0x488434: 0x2452ad18  addiu       $s2, $v0, -0x52E8
    ctx->pc = 0x488434u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_488438:
    // 0x488438: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x488438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_48843c:
    // 0x48843c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x48843cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_488440:
    // 0x488440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x488440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_488444:
    // 0x488444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x488444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_488448:
    // 0x488448: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x488448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_48844c:
    // 0x48844c: 0x40f809  jalr        $v0
label_488450:
    if (ctx->pc == 0x488450u) {
        ctx->pc = 0x488450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48844Cu;
        // 0x488450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488454u;
        goto label_488454;
    }
    ctx->pc = 0x48844Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488454u);
        ctx->pc = 0x488450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48844Cu;
        // 0x488450: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48844Cu, 0x488454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488454u;
label_488454:
    // 0x488454: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x488454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488458:
    // 0x488458: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_48845c:
    if (ctx->pc == 0x48845Cu) {
        ctx->pc = 0x48845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488458u;
        // 0x48845c: 0x8f838978  lw          $v1, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488460u;
        goto label_488460;
    }
    ctx->pc = 0x488458u;
    {
        const bool branch_taken_0x488458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488458u;
        // 0x48845c: 0x8f838978  lw          $v1, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488458) {
            ctx->pc = 0x488470u;
            goto label_488470;
        }
    }
    ctx->pc = 0x488460u;
label_488460:
    // 0x488460: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x488460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
label_488464:
    // 0x488464: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x488464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_488468:
    // 0x488468: 0x10000038  b           . + 4 + (0x38 << 2)
label_48846c:
    if (ctx->pc == 0x48846Cu) {
        ctx->pc = 0x48846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488468u;
        // 0x48846c: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488470u;
        goto label_488470;
    }
    ctx->pc = 0x488468u;
    {
        const bool branch_taken_0x488468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488468u;
        // 0x48846c: 0xaca30054  sw          $v1, 0x54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488468) {
            ctx->pc = 0x48854Cu;
            goto label_48854c;
        }
    }
    ctx->pc = 0x488470u;
label_488470:
    // 0x488470: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x488470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_488474:
    // 0x488474: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x488474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_488478:
    // 0x488478: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x488478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48847c:
    // 0x48847c: 0x40f809  jalr        $v0
label_488480:
    if (ctx->pc == 0x488480u) {
        ctx->pc = 0x488480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48847Cu;
        // 0x488480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488484u;
        goto label_488484;
    }
    ctx->pc = 0x48847Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x488484u);
        ctx->pc = 0x488480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48847Cu;
        // 0x488480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48847Cu, 0x488484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x488484u;
label_488484:
    // 0x488484: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x488484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_488488:
    // 0x488488: 0x54a00019  bnel        $a1, $zero, . + 4 + (0x19 << 2)
label_48848c:
    if (ctx->pc == 0x48848Cu) {
        ctx->pc = 0x48848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488488u;
        // 0x48848c: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488490u;
        goto label_488490;
    }
    ctx->pc = 0x488488u;
    {
        const bool branch_taken_0x488488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x488488) {
            ctx->pc = 0x48848Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488488u;
            // 0x48848c: 0x8f828978  lw          $v0, -0x7688($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936952)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4884F0u;
            goto label_4884f0;
        }
    }
    ctx->pc = 0x488490u;
label_488490:
    // 0x488490: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_488494:
    if (ctx->pc == 0x488494u) {
        ctx->pc = 0x488494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488490u;
        // 0x488494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488498u;
        goto label_488498;
    }
    ctx->pc = 0x488490u;
    {
        const bool branch_taken_0x488490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x488494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488490u;
        // 0x488494: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488490) {
            ctx->pc = 0x4884C0u;
            goto label_4884c0;
        }
    }
    ctx->pc = 0x488498u;
label_488498:
    // 0x488498: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x488498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48849c:
    // 0x48849c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x48849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4884a0:
    // 0x4884a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4884a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4884a4:
    // 0x4884a4: 0xc11eff2  jal         func_47BFC8
label_4884a8:
    if (ctx->pc == 0x4884A8u) {
        ctx->pc = 0x4884A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884A4u;
        // 0x4884a8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884ACu;
        goto label_4884ac;
    }
    ctx->pc = 0x4884A4u;
    SET_GPR_U32(ctx, 31, 0x4884ACu);
    ctx->pc = 0x4884A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4884A4u;
    // 0x4884a8: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4884A4u, 0x4884ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884ACu;
label_4884ac:
    // 0x4884ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4884acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4884b0:
    // 0x4884b0: 0xc11f024  jal         func_47C090
label_4884b4:
    if (ctx->pc == 0x4884B4u) {
        ctx->pc = 0x4884B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884B0u;
        // 0x4884b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884B8u;
        goto label_4884b8;
    }
    ctx->pc = 0x4884B0u;
    SET_GPR_U32(ctx, 31, 0x4884B8u);
    ctx->pc = 0x4884B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4884B0u;
    // 0x4884b4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4884B0u, 0x4884B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884B8u;
label_4884b8:
    // 0x4884b8: 0x10000024  b           . + 4 + (0x24 << 2)
label_4884bc:
    if (ctx->pc == 0x4884BCu) {
        ctx->pc = 0x4884BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884B8u;
        // 0x4884bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884C0u;
        goto label_4884c0;
    }
    ctx->pc = 0x4884B8u;
    {
        const bool branch_taken_0x4884b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4884BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884B8u;
        // 0x4884bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4884b8) {
            ctx->pc = 0x48854Cu;
            goto label_48854c;
        }
    }
    ctx->pc = 0x4884C0u;
label_4884c0:
    // 0x4884c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4884c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4884c4:
    // 0x4884c4: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x4884c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_4884c8:
    // 0x4884c8: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x4884c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_4884cc:
    // 0x4884cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4884ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4884d0:
    // 0x4884d0: 0xc11eff2  jal         func_47BFC8
label_4884d4:
    if (ctx->pc == 0x4884D4u) {
        ctx->pc = 0x4884D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884D0u;
        // 0x4884d4: 0x24c66d40  addiu       $a2, $a2, 0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884D8u;
        goto label_4884d8;
    }
    ctx->pc = 0x4884D0u;
    SET_GPR_U32(ctx, 31, 0x4884D8u);
    ctx->pc = 0x4884D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4884D0u;
    // 0x4884d4: 0x24c66d40  addiu       $a2, $a2, 0x6D40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4884D0u, 0x4884D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884D8u;
label_4884d8:
    // 0x4884d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4884d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4884dc:
    // 0x4884dc: 0xc11f024  jal         func_47C090
label_4884e0:
    if (ctx->pc == 0x4884E0u) {
        ctx->pc = 0x4884E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884DCu;
        // 0x4884e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884E4u;
        goto label_4884e4;
    }
    ctx->pc = 0x4884DCu;
    SET_GPR_U32(ctx, 31, 0x4884E4u);
    ctx->pc = 0x4884E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4884DCu;
    // 0x4884e0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4884DCu, 0x4884E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4884E4u;
label_4884e4:
    // 0x4884e4: 0x10000019  b           . + 4 + (0x19 << 2)
label_4884e8:
    if (ctx->pc == 0x4884E8u) {
        ctx->pc = 0x4884E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884E4u;
        // 0x4884e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4884ECu;
        goto label_4884ec;
    }
    ctx->pc = 0x4884E4u;
    {
        const bool branch_taken_0x4884e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4884E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884E4u;
        // 0x4884e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4884e4) {
            ctx->pc = 0x48854Cu;
            goto label_48854c;
        }
    }
    ctx->pc = 0x4884ECu;
label_4884ec:
    // 0x4884ec: 0x0  nop
    ctx->pc = 0x4884ecu;
    // NOP
label_4884f0:
    // 0x4884f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4884f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4884f4:
    // 0x4884f4: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x4884f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_4884f8:
    // 0x4884f8: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
label_4884fc:
    if (ctx->pc == 0x4884FCu) {
        ctx->pc = 0x4884FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884F8u;
        // 0x4884fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488500u;
        goto label_488500;
    }
    ctx->pc = 0x4884F8u;
    {
        const bool branch_taken_0x4884f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4884FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4884F8u;
        // 0x4884fc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4884f8) {
            ctx->pc = 0x48854Cu;
            goto label_48854c;
        }
    }
    ctx->pc = 0x488500u;
label_488500:
    // 0x488500: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x488500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_488504:
    // 0x488504: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_488508:
    if (ctx->pc == 0x488508u) {
        ctx->pc = 0x488508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488504u;
        // 0x488508: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x48850Cu;
        goto label_48850c;
    }
    ctx->pc = 0x488504u;
    {
        const bool branch_taken_0x488504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488504) {
            ctx->pc = 0x488508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488504u;
            // 0x488508: 0xaca60004  sw          $a2, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488528u;
            goto label_488528;
        }
    }
    ctx->pc = 0x48850Cu;
label_48850c:
    // 0x48850c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x48850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_488510:
    // 0x488510: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x488510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_488514:
    // 0x488514: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x488514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_488518:
    // 0x488518: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x488518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_48851c:
    // 0x48851c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x48851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_488520:
    // 0x488520: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x488520u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_488524:
    // 0x488524: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x488524u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_488528:
    // 0x488528: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x488528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_48852c:
    // 0x48852c: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x48852cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_488530:
    // 0x488530: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x488530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_488534:
    // 0x488534: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x488534u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_488538:
    // 0x488538: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x488538u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_48853c:
    // 0x48853c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x48853cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_488540:
    // 0x488540: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x488540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_488544:
    // 0x488544: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x488544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_488548:
    // 0x488548: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x488548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48854c:
    // 0x48854c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x48854cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_488550:
    // 0x488550: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x488550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_488554:
    // 0x488554: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_488558:
    // 0x488558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x488558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48855c:
    // 0x48855c: 0x3e00008  jr          $ra
label_488560:
    if (ctx->pc == 0x488560u) {
        ctx->pc = 0x488560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48855Cu;
        // 0x488560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x488564u;
        goto label_488564;
    }
    ctx->pc = 0x48855Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48855Cu;
        // 0x488560: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48855Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488564u;
label_488564:
    // 0x488564: 0x0  nop
    ctx->pc = 0x488564u;
    // NOP
    ctx->pc = 0x488568u;
}
