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

// Function: sub_0022E330
// Address: 0x22e330 - 0x22e400
void sub_0022E330_0x22e330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E330_0x22e330");
#endif

    switch (ctx->pc) {
        case 0x22e330u: goto label_22e330;
        case 0x22e334u: goto label_22e334;
        case 0x22e338u: goto label_22e338;
        case 0x22e33cu: goto label_22e33c;
        case 0x22e340u: goto label_22e340;
        case 0x22e344u: goto label_22e344;
        case 0x22e348u: goto label_22e348;
        case 0x22e34cu: goto label_22e34c;
        case 0x22e350u: goto label_22e350;
        case 0x22e354u: goto label_22e354;
        case 0x22e358u: goto label_22e358;
        case 0x22e35cu: goto label_22e35c;
        case 0x22e360u: goto label_22e360;
        case 0x22e364u: goto label_22e364;
        case 0x22e368u: goto label_22e368;
        case 0x22e36cu: goto label_22e36c;
        case 0x22e370u: goto label_22e370;
        case 0x22e374u: goto label_22e374;
        case 0x22e378u: goto label_22e378;
        case 0x22e37cu: goto label_22e37c;
        case 0x22e380u: goto label_22e380;
        case 0x22e384u: goto label_22e384;
        case 0x22e388u: goto label_22e388;
        case 0x22e38cu: goto label_22e38c;
        case 0x22e390u: goto label_22e390;
        case 0x22e394u: goto label_22e394;
        case 0x22e398u: goto label_22e398;
        case 0x22e39cu: goto label_22e39c;
        case 0x22e3a0u: goto label_22e3a0;
        case 0x22e3a4u: goto label_22e3a4;
        case 0x22e3a8u: goto label_22e3a8;
        case 0x22e3acu: goto label_22e3ac;
        case 0x22e3b0u: goto label_22e3b0;
        case 0x22e3b4u: goto label_22e3b4;
        case 0x22e3b8u: goto label_22e3b8;
        case 0x22e3bcu: goto label_22e3bc;
        case 0x22e3c0u: goto label_22e3c0;
        case 0x22e3c4u: goto label_22e3c4;
        case 0x22e3c8u: goto label_22e3c8;
        case 0x22e3ccu: goto label_22e3cc;
        case 0x22e3d0u: goto label_22e3d0;
        case 0x22e3d4u: goto label_22e3d4;
        case 0x22e3d8u: goto label_22e3d8;
        case 0x22e3dcu: goto label_22e3dc;
        case 0x22e3e0u: goto label_22e3e0;
        case 0x22e3e4u: goto label_22e3e4;
        case 0x22e3e8u: goto label_22e3e8;
        case 0x22e3ecu: goto label_22e3ec;
        case 0x22e3f0u: goto label_22e3f0;
        case 0x22e3f4u: goto label_22e3f4;
        case 0x22e3f8u: goto label_22e3f8;
        case 0x22e3fcu: goto label_22e3fc;
        default: break;
    }

    ctx->pc = 0x22e330u;

label_22e330:
    // 0x22e330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22e334:
    // 0x22e334: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22e338:
    // 0x22e338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22e33c:
    // 0x22e33c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22e340:
    // 0x22e340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22e344:
    // 0x22e344: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22e344u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22e348:
    // 0x22e348: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22e348u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22e34c:
    // 0x22e34c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_22e350:
    if (ctx->pc == 0x22E350u) {
        ctx->pc = 0x22E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E34Cu;
        // 0x22e350: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E354u;
        goto label_22e354;
    }
    ctx->pc = 0x22E34Cu;
    {
        const bool branch_taken_0x22e34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E34Cu;
        // 0x22e350: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e34c) {
            ctx->pc = 0x22E3ECu;
            goto label_22e3ec;
        }
    }
    ctx->pc = 0x22E354u;
label_22e354:
    // 0x22e354: 0xc088ac6  jal         func_222B18
label_22e358:
    if (ctx->pc == 0x22E358u) {
        ctx->pc = 0x22E35Cu;
        goto label_22e35c;
    }
    ctx->pc = 0x22E354u;
    SET_GPR_U32(ctx, 31, 0x22E35Cu);
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E354u, 0x22E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E35Cu;
label_22e35c:
    // 0x22e35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e360:
    // 0x22e360: 0xc088ac6  jal         func_222B18
label_22e364:
    if (ctx->pc == 0x22E364u) {
        ctx->pc = 0x22E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E360u;
        // 0x22e364: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E368u;
        goto label_22e368;
    }
    ctx->pc = 0x22E360u;
    SET_GPR_U32(ctx, 31, 0x22E368u);
    ctx->pc = 0x22E364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E360u;
    // 0x22e364: 0xa4400046  sh          $zero, 0x46($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x22E360u, 0x22E368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E368u;
label_22e368:
    // 0x22e368: 0xa4400040  sh          $zero, 0x40($v0)
    ctx->pc = 0x22e368u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 0));
label_22e36c:
    // 0x22e36c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22e36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22e370:
    // 0x22e370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22e370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22e374:
    // 0x22e374: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22e374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22e378:
    // 0x22e378: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22e378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22e37c:
    // 0x22e37c: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22e37cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22e380:
    // 0x22e380: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22e380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22e384:
    // 0x22e384: 0x60f809  jalr        $v1
label_22e388:
    if (ctx->pc == 0x22E388u) {
        ctx->pc = 0x22E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E384u;
        // 0x22e388: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E38Cu;
        goto label_22e38c;
    }
    ctx->pc = 0x22E384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22E38Cu);
        ctx->pc = 0x22E388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E384u;
        // 0x22e388: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E384u, 0x22E38Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22E38Cu;
label_22e38c:
    // 0x22e38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e390:
    // 0x22e390: 0xc089988  jal         func_226620
label_22e394:
    if (ctx->pc == 0x22E394u) {
        ctx->pc = 0x22E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E390u;
        // 0x22e394: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E398u;
        goto label_22e398;
    }
    ctx->pc = 0x22E390u;
    SET_GPR_U32(ctx, 31, 0x22E398u);
    ctx->pc = 0x22E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E390u;
    // 0x22e394: 0x3c050400  lui         $a1, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22E390u, 0x22E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E398u;
label_22e398:
    // 0x22e398: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_22e39c:
    if (ctx->pc == 0x22E39Cu) {
        ctx->pc = 0x22E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E398u;
        // 0x22e39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3A0u;
        goto label_22e3a0;
    }
    ctx->pc = 0x22E398u;
    {
        const bool branch_taken_0x22e398 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E398u;
        // 0x22e39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e398) {
            ctx->pc = 0x22E3D4u;
            goto label_22e3d4;
        }
    }
    ctx->pc = 0x22E3A0u;
label_22e3a0:
    // 0x22e3a0: 0xc089c18  jal         func_227060
label_22e3a4:
    if (ctx->pc == 0x22E3A4u) {
        ctx->pc = 0x22E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3A0u;
        // 0x22e3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3A8u;
        goto label_22e3a8;
    }
    ctx->pc = 0x22E3A0u;
    SET_GPR_U32(ctx, 31, 0x22E3A8u);
    ctx->pc = 0x22E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3A0u;
    // 0x22e3a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227060u, 0x22E3A0u, 0x22E3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3A8u;
label_22e3a8:
    // 0x22e3a8: 0xc0e57ce  jal         func_395F38
label_22e3ac:
    if (ctx->pc == 0x22E3ACu) {
        ctx->pc = 0x22E3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3A8u;
        // 0x22e3ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3B0u;
        goto label_22e3b0;
    }
    ctx->pc = 0x22E3A8u;
    SET_GPR_U32(ctx, 31, 0x22E3B0u);
    ctx->pc = 0x22E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3A8u;
    // 0x22e3ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x22E3A8u, 0x22E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3B0u;
label_22e3b0:
    // 0x22e3b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x22e3b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22e3b4:
    // 0x22e3b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_22e3b8:
    if (ctx->pc == 0x22E3B8u) {
        ctx->pc = 0x22E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3B4u;
        // 0x22e3b8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3BCu;
        goto label_22e3bc;
    }
    ctx->pc = 0x22E3B4u;
    {
        const bool branch_taken_0x22e3b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3B4u;
        // 0x22e3b8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e3b4) {
            ctx->pc = 0x22E3D0u;
            goto label_22e3d0;
        }
    }
    ctx->pc = 0x22E3BCu;
label_22e3bc:
    // 0x22e3bc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x22e3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_22e3c0:
    // 0x22e3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e3c4:
    // 0x22e3c4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x22e3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_22e3c8:
    // 0x22e3c8: 0xc093158  jal         func_24C560
label_22e3cc:
    if (ctx->pc == 0x22E3CCu) {
        ctx->pc = 0x22E3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3C8u;
        // 0x22e3cc: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3D0u;
        goto label_22e3d0;
    }
    ctx->pc = 0x22E3C8u;
    SET_GPR_U32(ctx, 31, 0x22E3D0u);
    ctx->pc = 0x22E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3C8u;
    // 0x22e3cc: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C560u, 0x22E3C8u, 0x22E3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3D0u;
label_22e3d0:
    // 0x22e3d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22e3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22e3d4:
    // 0x22e3d4: 0xc089c20  jal         func_227080
label_22e3d8:
    if (ctx->pc == 0x22E3D8u) {
        ctx->pc = 0x22E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3D4u;
        // 0x22e3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3DCu;
        goto label_22e3dc;
    }
    ctx->pc = 0x22E3D4u;
    SET_GPR_U32(ctx, 31, 0x22E3DCu);
    ctx->pc = 0x22E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3D4u;
    // 0x22e3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227080u, 0x22E3D4u, 0x22E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3DCu;
label_22e3dc:
    // 0x22e3dc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x22e3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_22e3e0:
    // 0x22e3e0: 0x8e050380  lw          $a1, 0x380($s0)
    ctx->pc = 0x22e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
label_22e3e4:
    // 0x22e3e4: 0xc06ceea  jal         func_1B3BA8
label_22e3e8:
    if (ctx->pc == 0x22E3E8u) {
        ctx->pc = 0x22E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3E4u;
        // 0x22e3e8: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E3ECu;
        goto label_22e3ec;
    }
    ctx->pc = 0x22E3E4u;
    SET_GPR_U32(ctx, 31, 0x22E3ECu);
    ctx->pc = 0x22E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E3E4u;
    // 0x22e3e8: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3BA8u, 0x22E3E4u, 0x22E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22E3ECu;
label_22e3ec:
    // 0x22e3ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e3ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e3f0:
    // 0x22e3f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e3f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e3f4:
    // 0x22e3f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22e3f8:
    // 0x22e3f8: 0x3e00008  jr          $ra
label_22e3fc:
    if (ctx->pc == 0x22E3FCu) {
        ctx->pc = 0x22E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3F8u;
        // 0x22e3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22E400u;
        goto label_fallthrough_0x22e3f8;
    }
    ctx->pc = 0x22E3F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E3F8u;
        // 0x22e3fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E3F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22e3f8:
    ctx->pc = 0x22E400u;
}
