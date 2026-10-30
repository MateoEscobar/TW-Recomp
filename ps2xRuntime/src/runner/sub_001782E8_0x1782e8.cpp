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

// Function: sub_001782E8
// Address: 0x1782e8 - 0x1783d0
void sub_001782E8_0x1782e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001782E8_0x1782e8");
#endif

    switch (ctx->pc) {
        case 0x1782e8u: goto label_1782e8;
        case 0x1782ecu: goto label_1782ec;
        case 0x1782f0u: goto label_1782f0;
        case 0x1782f4u: goto label_1782f4;
        case 0x1782f8u: goto label_1782f8;
        case 0x1782fcu: goto label_1782fc;
        case 0x178300u: goto label_178300;
        case 0x178304u: goto label_178304;
        case 0x178308u: goto label_178308;
        case 0x17830cu: goto label_17830c;
        case 0x178310u: goto label_178310;
        case 0x178314u: goto label_178314;
        case 0x178318u: goto label_178318;
        case 0x17831cu: goto label_17831c;
        case 0x178320u: goto label_178320;
        case 0x178324u: goto label_178324;
        case 0x178328u: goto label_178328;
        case 0x17832cu: goto label_17832c;
        case 0x178330u: goto label_178330;
        case 0x178334u: goto label_178334;
        case 0x178338u: goto label_178338;
        case 0x17833cu: goto label_17833c;
        case 0x178340u: goto label_178340;
        case 0x178344u: goto label_178344;
        case 0x178348u: goto label_178348;
        case 0x17834cu: goto label_17834c;
        case 0x178350u: goto label_178350;
        case 0x178354u: goto label_178354;
        case 0x178358u: goto label_178358;
        case 0x17835cu: goto label_17835c;
        case 0x178360u: goto label_178360;
        case 0x178364u: goto label_178364;
        case 0x178368u: goto label_178368;
        case 0x17836cu: goto label_17836c;
        case 0x178370u: goto label_178370;
        case 0x178374u: goto label_178374;
        case 0x178378u: goto label_178378;
        case 0x17837cu: goto label_17837c;
        case 0x178380u: goto label_178380;
        case 0x178384u: goto label_178384;
        case 0x178388u: goto label_178388;
        case 0x17838cu: goto label_17838c;
        case 0x178390u: goto label_178390;
        case 0x178394u: goto label_178394;
        case 0x178398u: goto label_178398;
        case 0x17839cu: goto label_17839c;
        case 0x1783a0u: goto label_1783a0;
        case 0x1783a4u: goto label_1783a4;
        case 0x1783a8u: goto label_1783a8;
        case 0x1783acu: goto label_1783ac;
        case 0x1783b0u: goto label_1783b0;
        case 0x1783b4u: goto label_1783b4;
        case 0x1783b8u: goto label_1783b8;
        case 0x1783bcu: goto label_1783bc;
        case 0x1783c0u: goto label_1783c0;
        case 0x1783c4u: goto label_1783c4;
        case 0x1783c8u: goto label_1783c8;
        case 0x1783ccu: goto label_1783cc;
        default: break;
    }

    ctx->pc = 0x1782e8u;

label_1782e8:
    // 0x1782e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1782e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1782ec:
    // 0x1782ec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1782ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1782f0:
    // 0x1782f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1782f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1782f4:
    // 0x1782f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1782f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1782f8:
    // 0x1782f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1782f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1782fc:
    // 0x1782fc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1782fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_178300:
    // 0x178300: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x178300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_178304:
    // 0x178304: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x178304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_178308:
    // 0x178308: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x178308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_17830c:
    // 0x17830c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17830cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_178310:
    // 0x178310: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x178310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_178314:
    // 0x178314: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178318:
    // 0x178318: 0xc137afa  jal         func_4DEBE8
label_17831c:
    if (ctx->pc == 0x17831Cu) {
        ctx->pc = 0x17831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178318u;
        // 0x17831c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178320u;
        goto label_178320;
    }
    ctx->pc = 0x178318u;
    SET_GPR_U32(ctx, 31, 0x178320u);
    ctx->pc = 0x17831Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178318u;
    // 0x17831c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DEBE8u, 0x178318u, 0x178320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178320u;
label_178320:
    // 0x178320: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x178320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_178324:
    // 0x178324: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x178324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_178328:
    // 0x178328: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_17832c:
    if (ctx->pc == 0x17832Cu) {
        ctx->pc = 0x17832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178328u;
        // 0x17832c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178330u;
        goto label_178330;
    }
    ctx->pc = 0x178328u;
    {
        const bool branch_taken_0x178328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17832Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178328u;
        // 0x17832c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178328) {
            ctx->pc = 0x178358u;
            goto label_178358;
        }
    }
    ctx->pc = 0x178330u;
label_178330:
    // 0x178330: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x178330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_178334:
    // 0x178334: 0x8c700014  lw          $s0, 0x14($v1)
    ctx->pc = 0x178334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_178338:
    // 0x178338: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x178338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_17833c:
    // 0x17833c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x17833cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_178340:
    // 0x178340: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x178340u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_178344:
    // 0x178344: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x178344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_178348:
    // 0x178348: 0x40f809  jalr        $v0
label_17834c:
    if (ctx->pc == 0x17834Cu) {
        ctx->pc = 0x17834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178348u;
        // 0x17834c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178350u;
        goto label_178350;
    }
    ctx->pc = 0x178348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178350u);
        ctx->pc = 0x17834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178348u;
        // 0x17834c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178348u, 0x178350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178350u;
label_178350:
    // 0x178350: 0x10000017  b           . + 4 + (0x17 << 2)
label_178354:
    if (ctx->pc == 0x178354u) {
        ctx->pc = 0x178354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178350u;
        // 0x178354: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178358u;
        goto label_178358;
    }
    ctx->pc = 0x178350u;
    {
        const bool branch_taken_0x178350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178350u;
        // 0x178354: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178350) {
            ctx->pc = 0x1783B0u;
            goto label_1783b0;
        }
    }
    ctx->pc = 0x178358u;
label_178358:
    // 0x178358: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x178358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_17835c:
    // 0x17835c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x17835cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_178360:
    // 0x178360: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x178360u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_178364:
    // 0x178364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178368:
    // 0x178368: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x178368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_17836c:
    // 0x17836c: 0xc10ca04  jal         func_432810
label_178370:
    if (ctx->pc == 0x178370u) {
        ctx->pc = 0x178370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17836Cu;
        // 0x178370: 0x24c61ed8  addiu       $a2, $a2, 0x1ED8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178374u;
        goto label_178374;
    }
    ctx->pc = 0x17836Cu;
    SET_GPR_U32(ctx, 31, 0x178374u);
    ctx->pc = 0x178370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17836Cu;
    // 0x178370: 0x24c61ed8  addiu       $a2, $a2, 0x1ED8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x17836Cu, 0x178374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178374u;
label_178374:
    // 0x178374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178378:
    // 0x178378: 0xc061668  jal         func_1859A0
label_17837c:
    if (ctx->pc == 0x17837Cu) {
        ctx->pc = 0x17837Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178378u;
        // 0x17837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178380u;
        goto label_178380;
    }
    ctx->pc = 0x178378u;
    SET_GPR_U32(ctx, 31, 0x178380u);
    ctx->pc = 0x17837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178378u;
    // 0x17837c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1859A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1859A0u, 0x178378u, 0x178380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178380u;
label_178380:
    // 0x178380: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_178384:
    if (ctx->pc == 0x178384u) {
        ctx->pc = 0x178384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178380u;
        // 0x178384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178388u;
        goto label_178388;
    }
    ctx->pc = 0x178380u;
    {
        const bool branch_taken_0x178380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178380u;
        // 0x178384: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178380) {
            ctx->pc = 0x1783B4u;
            goto label_1783b4;
        }
    }
    ctx->pc = 0x178388u;
label_178388:
    // 0x178388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17838c:
    // 0x17838c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_178390:
    // 0x178390: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178390u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178394:
    // 0x178394: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x178394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_178398:
    // 0x178398: 0xc061eaa  jal         func_187AA8
label_17839c:
    if (ctx->pc == 0x17839Cu) {
        ctx->pc = 0x17839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178398u;
        // 0x17839c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1783A0u;
        goto label_1783a0;
    }
    ctx->pc = 0x178398u;
    SET_GPR_U32(ctx, 31, 0x1783A0u);
    ctx->pc = 0x17839Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178398u;
    // 0x17839c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187AA8u, 0x178398u, 0x1783A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783A0u;
label_1783a0:
    // 0x1783a0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1783a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_1783a4:
    // 0x1783a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1783a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1783a8:
    // 0x1783a8: 0xc0552b8  jal         func_154AE0
label_1783ac:
    if (ctx->pc == 0x1783ACu) {
        ctx->pc = 0x1783ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783A8u;
        // 0x1783ac: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1783B0u;
        goto label_1783b0;
    }
    ctx->pc = 0x1783A8u;
    SET_GPR_U32(ctx, 31, 0x1783B0u);
    ctx->pc = 0x1783ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1783A8u;
    // 0x1783ac: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x1783A8u, 0x1783B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1783B0u;
label_1783b0:
    // 0x1783b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1783b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1783b4:
    // 0x1783b4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1783b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1783b8:
    // 0x1783b8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1783b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1783bc:
    // 0x1783bc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1783bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1783c0:
    // 0x1783c0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1783c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1783c4:
    // 0x1783c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1783c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1783c8:
    // 0x1783c8: 0x3e00008  jr          $ra
label_1783cc:
    if (ctx->pc == 0x1783CCu) {
        ctx->pc = 0x1783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783C8u;
        // 0x1783cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1783D0u;
        goto label_fallthrough_0x1783c8;
    }
    ctx->pc = 0x1783C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1783CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1783C8u;
        // 0x1783cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1783C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1783c8:
    ctx->pc = 0x1783D0u;
}
