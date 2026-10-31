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

// Function: sub_0038F378
// Address: 0x38f378 - 0x38f568
void sub_0038F378_0x38f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038F378_0x38f378");
#endif

    switch (ctx->pc) {
        case 0x38f378u: goto label_38f378;
        case 0x38f37cu: goto label_38f37c;
        case 0x38f380u: goto label_38f380;
        case 0x38f384u: goto label_38f384;
        case 0x38f388u: goto label_38f388;
        case 0x38f38cu: goto label_38f38c;
        case 0x38f390u: goto label_38f390;
        case 0x38f394u: goto label_38f394;
        case 0x38f398u: goto label_38f398;
        case 0x38f39cu: goto label_38f39c;
        case 0x38f3a0u: goto label_38f3a0;
        case 0x38f3a4u: goto label_38f3a4;
        case 0x38f3a8u: goto label_38f3a8;
        case 0x38f3acu: goto label_38f3ac;
        case 0x38f3b0u: goto label_38f3b0;
        case 0x38f3b4u: goto label_38f3b4;
        case 0x38f3b8u: goto label_38f3b8;
        case 0x38f3bcu: goto label_38f3bc;
        case 0x38f3c0u: goto label_38f3c0;
        case 0x38f3c4u: goto label_38f3c4;
        case 0x38f3c8u: goto label_38f3c8;
        case 0x38f3ccu: goto label_38f3cc;
        case 0x38f3d0u: goto label_38f3d0;
        case 0x38f3d4u: goto label_38f3d4;
        case 0x38f3d8u: goto label_38f3d8;
        case 0x38f3dcu: goto label_38f3dc;
        case 0x38f3e0u: goto label_38f3e0;
        case 0x38f3e4u: goto label_38f3e4;
        case 0x38f3e8u: goto label_38f3e8;
        case 0x38f3ecu: goto label_38f3ec;
        case 0x38f3f0u: goto label_38f3f0;
        case 0x38f3f4u: goto label_38f3f4;
        case 0x38f3f8u: goto label_38f3f8;
        case 0x38f3fcu: goto label_38f3fc;
        case 0x38f400u: goto label_38f400;
        case 0x38f404u: goto label_38f404;
        case 0x38f408u: goto label_38f408;
        case 0x38f40cu: goto label_38f40c;
        case 0x38f410u: goto label_38f410;
        case 0x38f414u: goto label_38f414;
        case 0x38f418u: goto label_38f418;
        case 0x38f41cu: goto label_38f41c;
        case 0x38f420u: goto label_38f420;
        case 0x38f424u: goto label_38f424;
        case 0x38f428u: goto label_38f428;
        case 0x38f42cu: goto label_38f42c;
        case 0x38f430u: goto label_38f430;
        case 0x38f434u: goto label_38f434;
        case 0x38f438u: goto label_38f438;
        case 0x38f43cu: goto label_38f43c;
        case 0x38f440u: goto label_38f440;
        case 0x38f444u: goto label_38f444;
        case 0x38f448u: goto label_38f448;
        case 0x38f44cu: goto label_38f44c;
        case 0x38f450u: goto label_38f450;
        case 0x38f454u: goto label_38f454;
        case 0x38f458u: goto label_38f458;
        case 0x38f45cu: goto label_38f45c;
        case 0x38f460u: goto label_38f460;
        case 0x38f464u: goto label_38f464;
        case 0x38f468u: goto label_38f468;
        case 0x38f46cu: goto label_38f46c;
        case 0x38f470u: goto label_38f470;
        case 0x38f474u: goto label_38f474;
        case 0x38f478u: goto label_38f478;
        case 0x38f47cu: goto label_38f47c;
        case 0x38f480u: goto label_38f480;
        case 0x38f484u: goto label_38f484;
        case 0x38f488u: goto label_38f488;
        case 0x38f48cu: goto label_38f48c;
        case 0x38f490u: goto label_38f490;
        case 0x38f494u: goto label_38f494;
        case 0x38f498u: goto label_38f498;
        case 0x38f49cu: goto label_38f49c;
        case 0x38f4a0u: goto label_38f4a0;
        case 0x38f4a4u: goto label_38f4a4;
        case 0x38f4a8u: goto label_38f4a8;
        case 0x38f4acu: goto label_38f4ac;
        case 0x38f4b0u: goto label_38f4b0;
        case 0x38f4b4u: goto label_38f4b4;
        case 0x38f4b8u: goto label_38f4b8;
        case 0x38f4bcu: goto label_38f4bc;
        case 0x38f4c0u: goto label_38f4c0;
        case 0x38f4c4u: goto label_38f4c4;
        case 0x38f4c8u: goto label_38f4c8;
        case 0x38f4ccu: goto label_38f4cc;
        case 0x38f4d0u: goto label_38f4d0;
        case 0x38f4d4u: goto label_38f4d4;
        case 0x38f4d8u: goto label_38f4d8;
        case 0x38f4dcu: goto label_38f4dc;
        case 0x38f4e0u: goto label_38f4e0;
        case 0x38f4e4u: goto label_38f4e4;
        case 0x38f4e8u: goto label_38f4e8;
        case 0x38f4ecu: goto label_38f4ec;
        case 0x38f4f0u: goto label_38f4f0;
        case 0x38f4f4u: goto label_38f4f4;
        case 0x38f4f8u: goto label_38f4f8;
        case 0x38f4fcu: goto label_38f4fc;
        case 0x38f500u: goto label_38f500;
        case 0x38f504u: goto label_38f504;
        case 0x38f508u: goto label_38f508;
        case 0x38f50cu: goto label_38f50c;
        case 0x38f510u: goto label_38f510;
        case 0x38f514u: goto label_38f514;
        case 0x38f518u: goto label_38f518;
        case 0x38f51cu: goto label_38f51c;
        case 0x38f520u: goto label_38f520;
        case 0x38f524u: goto label_38f524;
        case 0x38f528u: goto label_38f528;
        case 0x38f52cu: goto label_38f52c;
        case 0x38f530u: goto label_38f530;
        case 0x38f534u: goto label_38f534;
        case 0x38f538u: goto label_38f538;
        case 0x38f53cu: goto label_38f53c;
        case 0x38f540u: goto label_38f540;
        case 0x38f544u: goto label_38f544;
        case 0x38f548u: goto label_38f548;
        case 0x38f54cu: goto label_38f54c;
        case 0x38f550u: goto label_38f550;
        case 0x38f554u: goto label_38f554;
        case 0x38f558u: goto label_38f558;
        case 0x38f55cu: goto label_38f55c;
        case 0x38f560u: goto label_38f560;
        case 0x38f564u: goto label_38f564;
        default: break;
    }

    ctx->pc = 0x38f378u;

label_38f378:
    // 0x38f378: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x38f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_38f37c:
    // 0x38f37c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x38f37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_38f380:
    // 0x38f380: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x38f380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_38f384:
    // 0x38f384: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x38f384u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_38f388:
    // 0x38f388: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x38f388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_38f38c:
    // 0x38f38c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38f38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38f390:
    // 0x38f390: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x38f390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_38f394:
    // 0x38f394: 0x962300f8  lhu         $v1, 0xF8($s1)
    ctx->pc = 0x38f394u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 248)));
label_38f398:
    // 0x38f398: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x38f398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_38f39c:
    // 0x38f39c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_38f3a0:
    if (ctx->pc == 0x38F3A0u) {
        ctx->pc = 0x38F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F39Cu;
        // 0x38f3a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3A4u;
        goto label_38f3a4;
    }
    ctx->pc = 0x38F39Cu;
    {
        const bool branch_taken_0x38f39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F39Cu;
        // 0x38f3a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f39c) {
            ctx->pc = 0x38F49Cu;
            goto label_38f49c;
        }
    }
    ctx->pc = 0x38F3A4u;
label_38f3a4:
    // 0x38f3a4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x38f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_38f3a8:
    // 0x38f3a8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_38f3ac:
    if (ctx->pc == 0x38F3ACu) {
        ctx->pc = 0x38F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3A8u;
        // 0x38f3ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3B0u;
        goto label_38f3b0;
    }
    ctx->pc = 0x38F3A8u;
    {
        const bool branch_taken_0x38f3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3A8u;
        // 0x38f3ac: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3a8) {
            ctx->pc = 0x38F4A0u;
            goto label_38f4a0;
        }
    }
    ctx->pc = 0x38F3B0u;
label_38f3b0:
    // 0x38f3b0: 0xc087420  jal         func_21D080
label_38f3b4:
    if (ctx->pc == 0x38F3B4u) {
        ctx->pc = 0x38F3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3B0u;
        // 0x38f3b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3B8u;
        goto label_38f3b8;
    }
    ctx->pc = 0x38F3B0u;
    SET_GPR_U32(ctx, 31, 0x38F3B8u);
    ctx->pc = 0x38F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F3B0u;
    // 0x38f3b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x38F3B0u, 0x38F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F3B8u;
label_38f3b8:
    // 0x38f3b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x38f3b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_38f3bc:
    // 0x38f3bc: 0x12000028  beqz        $s0, . + 4 + (0x28 << 2)
label_38f3c0:
    if (ctx->pc == 0x38F3C0u) {
        ctx->pc = 0x38F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3BCu;
        // 0x38f3c0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3C4u;
        goto label_38f3c4;
    }
    ctx->pc = 0x38F3BCu;
    {
        const bool branch_taken_0x38f3bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3BCu;
        // 0x38f3c0: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3bc) {
            ctx->pc = 0x38F460u;
            goto label_38f460;
        }
    }
    ctx->pc = 0x38F3C4u;
label_38f3c4:
    // 0x38f3c4: 0xc0e57ce  jal         func_395F38
label_38f3c8:
    if (ctx->pc == 0x38F3C8u) {
        ctx->pc = 0x38F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3C4u;
        // 0x38f3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3CCu;
        goto label_38f3cc;
    }
    ctx->pc = 0x38F3C4u;
    SET_GPR_U32(ctx, 31, 0x38F3CCu);
    ctx->pc = 0x38F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F3C4u;
    // 0x38f3c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x38F3C4u, 0x38F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F3CCu;
label_38f3cc:
    // 0x38f3cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x38f3ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f3d0:
    // 0x38f3d0: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
label_38f3d4:
    if (ctx->pc == 0x38F3D4u) {
        ctx->pc = 0x38F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3D0u;
        // 0x38f3d4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3D8u;
        goto label_38f3d8;
    }
    ctx->pc = 0x38F3D0u;
    {
        const bool branch_taken_0x38f3d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3D0u;
        // 0x38f3d4: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f3d0) {
            ctx->pc = 0x38F460u;
            goto label_38f460;
        }
    }
    ctx->pc = 0x38F3D8u;
label_38f3d8:
    // 0x38f3d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_38f3dc:
    // 0x38f3dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f3e0:
    // 0x38f3e0: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x38f3e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_38f3e4:
    // 0x38f3e4: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x38f3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_38f3e8:
    // 0x38f3e8: 0x40f809  jalr        $v0
label_38f3ec:
    if (ctx->pc == 0x38F3ECu) {
        ctx->pc = 0x38F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3E8u;
        // 0x38f3ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F3F0u;
        goto label_38f3f0;
    }
    ctx->pc = 0x38F3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F3F0u);
        ctx->pc = 0x38F3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F3E8u;
        // 0x38f3ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F3E8u, 0x38F3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F3F0u;
label_38f3f0:
    // 0x38f3f0: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x38f3f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38f3f4:
    // 0x38f3f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x38f3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38f3f8:
    // 0x38f3f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x38f3f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38f3fc:
    // 0x38f3fc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x38f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_38f400:
    // 0x38f400: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38f400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38f404:
    // 0x38f404: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x38f404u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_38f408:
    // 0x38f408: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x38f408u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38f40c:
    // 0x38f40c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x38f40cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_38f410:
    // 0x38f410: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x38f410u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_38f414:
    // 0x38f414: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x38f414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_38f418:
    // 0x38f418: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x38f418u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_38f41c:
    // 0x38f41c: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x38f41cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38f420:
    // 0x38f420: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x38f420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38f424:
    // 0x38f424: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x38f424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_38f428:
    // 0x38f428: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x38f428u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_38f42c:
    // 0x38f42c: 0x4a0003bf  vwaitq
    ctx->pc = 0x38f42cu;
    // VWAITQ (Q already resolved in this runtime)
label_38f430:
    // 0x38f430: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x38f430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_38f434:
    // 0x38f434: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x38f434u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
label_38f438:
    // 0x38f438: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x38f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_38f43c:
    // 0x38f43c: 0x7fa70030  sq          $a3, 0x30($sp)
    ctx->pc = 0x38f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 7));
label_38f440:
    // 0x38f440: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x38f440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_38f444:
    // 0x38f444: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x38f444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_38f448:
    // 0x38f448: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x38f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_38f44c:
    // 0x38f44c: 0xc094ab8  jal         func_252AE0
label_38f450:
    if (ctx->pc == 0x38F450u) {
        ctx->pc = 0x38F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F44Cu;
        // 0x38f450: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F454u;
        goto label_38f454;
    }
    ctx->pc = 0x38F44Cu;
    SET_GPR_U32(ctx, 31, 0x38F454u);
    ctx->pc = 0x38F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F44Cu;
    // 0x38f450: 0x7fa70040  sq          $a3, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252AE0u, 0x38F44Cu, 0x38F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F454u;
label_38f454:
    // 0x38f454: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_38f458:
    if (ctx->pc == 0x38F458u) {
        ctx->pc = 0x38F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F454u;
        // 0x38f458: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F45Cu;
        goto label_38f45c;
    }
    ctx->pc = 0x38F454u;
    {
        const bool branch_taken_0x38f454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F454u;
        // 0x38f458: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f454) {
            ctx->pc = 0x38F460u;
            goto label_38f460;
        }
    }
    ctx->pc = 0x38F45Cu;
label_38f45c:
    // 0x38f45c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x38f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_38f460:
    // 0x38f460: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x38f460u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_38f464:
    // 0x38f464: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38f468:
    // 0x38f468: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x38f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_38f46c:
    // 0x38f46c: 0xc107442  jal         func_41D108
label_38f470:
    if (ctx->pc == 0x38F470u) {
        ctx->pc = 0x38F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F46Cu;
        // 0x38f470: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F474u;
        goto label_38f474;
    }
    ctx->pc = 0x38F46Cu;
    SET_GPR_U32(ctx, 31, 0x38F474u);
    ctx->pc = 0x38F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F46Cu;
    // 0x38f470: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D108u, 0x38F46Cu, 0x38F474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F474u;
label_38f474:
    // 0x38f474: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38f478:
    // 0x38f478: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x38f478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_38f47c:
    // 0x38f47c: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x38f47cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_38f480:
    // 0x38f480: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f484:
    // 0x38f484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38f484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f488:
    // 0x38f488: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x38f488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_38f48c:
    // 0x38f48c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x38f48cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38f490:
    // 0x38f490: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x38f490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_38f494:
    // 0x38f494: 0xc106e2c  jal         func_41B8B0
label_38f498:
    if (ctx->pc == 0x38F498u) {
        ctx->pc = 0x38F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F494u;
        // 0x38f498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F49Cu;
        goto label_38f49c;
    }
    ctx->pc = 0x38F494u;
    SET_GPR_U32(ctx, 31, 0x38F49Cu);
    ctx->pc = 0x38F498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F494u;
    // 0x38f498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B8B0u, 0x38F494u, 0x38F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F49Cu;
label_38f49c:
    // 0x38f49c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x38f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_38f4a0:
    // 0x38f4a0: 0x962500fa  lhu         $a1, 0xFA($s1)
    ctx->pc = 0x38f4a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 250)));
label_38f4a4:
    // 0x38f4a4: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x38f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11388)));
label_38f4a8:
    // 0x38f4a8: 0xc0e3ec4  jal         func_38FB10
label_38f4ac:
    if (ctx->pc == 0x38F4ACu) {
        ctx->pc = 0x38F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4A8u;
        // 0x38f4ac: 0x8c44084c  lw          $a0, 0x84C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4B0u;
        goto label_38f4b0;
    }
    ctx->pc = 0x38F4A8u;
    SET_GPR_U32(ctx, 31, 0x38F4B0u);
    ctx->pc = 0x38F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F4A8u;
    // 0x38f4ac: 0x8c44084c  lw          $a0, 0x84C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FB10u, 0x38F4A8u, 0x38F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F4B0u;
label_38f4b0:
    // 0x38f4b0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_38f4b4:
    if (ctx->pc == 0x38F4B4u) {
        ctx->pc = 0x38F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B0u;
        // 0x38f4b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4B8u;
        goto label_38f4b8;
    }
    ctx->pc = 0x38F4B0u;
    {
        const bool branch_taken_0x38f4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4B0u;
        // 0x38f4b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4b0) {
            ctx->pc = 0x38F534u;
            goto label_38f534;
        }
    }
    ctx->pc = 0x38F4B8u;
label_38f4b8:
    // 0x38f4b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f4bc:
    // 0x38f4bc: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38f4bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38f4c0:
    // 0x38f4c0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38f4c4:
    // 0x38f4c4: 0x60f809  jalr        $v1
label_38f4c8:
    if (ctx->pc == 0x38F4C8u) {
        ctx->pc = 0x38F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4C4u;
        // 0x38f4c8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4CCu;
        goto label_38f4cc;
    }
    ctx->pc = 0x38F4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F4CCu);
        ctx->pc = 0x38F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4C4u;
        // 0x38f4c8: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F4C4u, 0x38F4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F4CCu;
label_38f4cc:
    // 0x38f4cc: 0xc094040  jal         func_250100
label_38f4d0:
    if (ctx->pc == 0x38F4D0u) {
        ctx->pc = 0x38F4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4CCu;
        // 0x38f4d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4D4u;
        goto label_38f4d4;
    }
    ctx->pc = 0x38F4CCu;
    SET_GPR_U32(ctx, 31, 0x38F4D4u);
    ctx->pc = 0x38F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F4CCu;
    // 0x38f4d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250100u, 0x38F4CCu, 0x38F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F4D4u;
label_38f4d4:
    // 0x38f4d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38f4d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_38f4d8:
    // 0x38f4d8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_38f4dc:
    if (ctx->pc == 0x38F4DCu) {
        ctx->pc = 0x38F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4D8u;
        // 0x38f4dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F4E0u;
        goto label_38f4e0;
    }
    ctx->pc = 0x38F4D8u;
    {
        const bool branch_taken_0x38f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4D8u;
        // 0x38f4dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f4d8) {
            ctx->pc = 0x38F514u;
            goto label_38f514;
        }
    }
    ctx->pc = 0x38F4E0u;
label_38f4e0:
    // 0x38f4e0: 0x94620048  lhu         $v0, 0x48($v1)
    ctx->pc = 0x38f4e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_38f4e4:
    // 0x38f4e4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x38f4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_38f4e8:
    // 0x38f4e8: 0xa4620048  sh          $v0, 0x48($v1)
    ctx->pc = 0x38f4e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 72), (uint16_t)GPR_U32(ctx, 2));
label_38f4ec:
    // 0x38f4ec: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x38f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f4f0:
    // 0x38f4f0: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x38f4f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_38f4f4:
    // 0x38f4f4: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x38f4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_38f4f8:
    // 0x38f4f8: 0x40f809  jalr        $v0
label_38f4fc:
    if (ctx->pc == 0x38F4FCu) {
        ctx->pc = 0x38F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4F8u;
        // 0x38f4fc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F500u;
        goto label_38f500;
    }
    ctx->pc = 0x38F4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38F500u);
        ctx->pc = 0x38F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F4F8u;
        // 0x38f4fc: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F4F8u, 0x38F500u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F500u;
label_38f500:
    // 0x38f500: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f504:
    // 0x38f504: 0xc0942c4  jal         func_250B10
label_38f508:
    if (ctx->pc == 0x38F508u) {
        ctx->pc = 0x38F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F504u;
        // 0x38f508: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F50Cu;
        goto label_38f50c;
    }
    ctx->pc = 0x38F504u;
    SET_GPR_U32(ctx, 31, 0x38F50Cu);
    ctx->pc = 0x38F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F504u;
    // 0x38f508: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B10u, 0x38F504u, 0x38F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F50Cu;
label_38f50c:
    // 0x38f50c: 0x1000000a  b           . + 4 + (0xA << 2)
label_38f510:
    if (ctx->pc == 0x38F510u) {
        ctx->pc = 0x38F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F50Cu;
        // 0x38f510: 0xc62000cc  lwc1        $f0, 0xCC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F514u;
        goto label_38f514;
    }
    ctx->pc = 0x38F50Cu;
    {
        const bool branch_taken_0x38f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F50Cu;
        // 0x38f510: 0xc62000cc  lwc1        $f0, 0xCC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f50c) {
            ctx->pc = 0x38F538u;
            goto label_38f538;
        }
    }
    ctx->pc = 0x38F514u;
label_38f514:
    // 0x38f514: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x38f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38f518:
    // 0x38f518: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x38f518u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_38f51c:
    // 0x38f51c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x38f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_38f520:
    // 0x38f520: 0x60f809  jalr        $v1
label_38f524:
    if (ctx->pc == 0x38F524u) {
        ctx->pc = 0x38F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F520u;
        // 0x38f524: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F528u;
        goto label_38f528;
    }
    ctx->pc = 0x38F520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x38F528u);
        ctx->pc = 0x38F524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F520u;
        // 0x38f524: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F520u, 0x38F528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38F528u;
label_38f528:
    // 0x38f528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x38f528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_38f52c:
    // 0x38f52c: 0xc0942c4  jal         func_250B10
label_38f530:
    if (ctx->pc == 0x38F530u) {
        ctx->pc = 0x38F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F52Cu;
        // 0x38f530: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F534u;
        goto label_38f534;
    }
    ctx->pc = 0x38F52Cu;
    SET_GPR_U32(ctx, 31, 0x38F534u);
    ctx->pc = 0x38F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F52Cu;
    // 0x38f530: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B10u, 0x38F52Cu, 0x38F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F534u;
label_38f534:
    // 0x38f534: 0xc62000cc  lwc1        $f0, 0xCC($s1)
    ctx->pc = 0x38f534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_38f538:
    // 0x38f538: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x38f538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_38f53c:
    // 0x38f53c: 0xc62c00d4  lwc1        $f12, 0xD4($s1)
    ctx->pc = 0x38f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_38f540:
    // 0x38f540: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x38f540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_38f544:
    // 0x38f544: 0x460c0328  max.s       $f12, $f0, $f12
    ctx->pc = 0x38f544u;
    ctx->f[12] = std::max(ctx->f[0], ctx->f[12]);
label_38f548:
    // 0x38f548: 0xc105d20  jal         func_417480
label_38f54c:
    if (ctx->pc == 0x38F54Cu) {
        ctx->pc = 0x38F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F548u;
        // 0x38f54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F550u;
        goto label_38f550;
    }
    ctx->pc = 0x38F548u;
    SET_GPR_U32(ctx, 31, 0x38F550u);
    ctx->pc = 0x38F54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F548u;
    // 0x38f54c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x417480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417480u, 0x38F548u, 0x38F550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38F550u;
label_38f550:
    // 0x38f550: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x38f550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_38f554:
    // 0x38f554: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x38f554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_38f558:
    // 0x38f558: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x38f558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_38f55c:
    // 0x38f55c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x38f55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38f560:
    // 0x38f560: 0x3e00008  jr          $ra
label_38f564:
    if (ctx->pc == 0x38F564u) {
        ctx->pc = 0x38F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F560u;
        // 0x38f564: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38F568u;
        goto label_fallthrough_0x38f560;
    }
    ctx->pc = 0x38F560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F560u;
        // 0x38f564: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38f560:
    ctx->pc = 0x38F568u;
}
