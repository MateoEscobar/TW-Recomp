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

// Function: sub_0047F488
// Address: 0x47f488 - 0x47f618
void sub_0047F488_0x47f488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F488_0x47f488");
#endif

    switch (ctx->pc) {
        case 0x47f488u: goto label_47f488;
        case 0x47f48cu: goto label_47f48c;
        case 0x47f490u: goto label_47f490;
        case 0x47f494u: goto label_47f494;
        case 0x47f498u: goto label_47f498;
        case 0x47f49cu: goto label_47f49c;
        case 0x47f4a0u: goto label_47f4a0;
        case 0x47f4a4u: goto label_47f4a4;
        case 0x47f4a8u: goto label_47f4a8;
        case 0x47f4acu: goto label_47f4ac;
        case 0x47f4b0u: goto label_47f4b0;
        case 0x47f4b4u: goto label_47f4b4;
        case 0x47f4b8u: goto label_47f4b8;
        case 0x47f4bcu: goto label_47f4bc;
        case 0x47f4c0u: goto label_47f4c0;
        case 0x47f4c4u: goto label_47f4c4;
        case 0x47f4c8u: goto label_47f4c8;
        case 0x47f4ccu: goto label_47f4cc;
        case 0x47f4d0u: goto label_47f4d0;
        case 0x47f4d4u: goto label_47f4d4;
        case 0x47f4d8u: goto label_47f4d8;
        case 0x47f4dcu: goto label_47f4dc;
        case 0x47f4e0u: goto label_47f4e0;
        case 0x47f4e4u: goto label_47f4e4;
        case 0x47f4e8u: goto label_47f4e8;
        case 0x47f4ecu: goto label_47f4ec;
        case 0x47f4f0u: goto label_47f4f0;
        case 0x47f4f4u: goto label_47f4f4;
        case 0x47f4f8u: goto label_47f4f8;
        case 0x47f4fcu: goto label_47f4fc;
        case 0x47f500u: goto label_47f500;
        case 0x47f504u: goto label_47f504;
        case 0x47f508u: goto label_47f508;
        case 0x47f50cu: goto label_47f50c;
        case 0x47f510u: goto label_47f510;
        case 0x47f514u: goto label_47f514;
        case 0x47f518u: goto label_47f518;
        case 0x47f51cu: goto label_47f51c;
        case 0x47f520u: goto label_47f520;
        case 0x47f524u: goto label_47f524;
        case 0x47f528u: goto label_47f528;
        case 0x47f52cu: goto label_47f52c;
        case 0x47f530u: goto label_47f530;
        case 0x47f534u: goto label_47f534;
        case 0x47f538u: goto label_47f538;
        case 0x47f53cu: goto label_47f53c;
        case 0x47f540u: goto label_47f540;
        case 0x47f544u: goto label_47f544;
        case 0x47f548u: goto label_47f548;
        case 0x47f54cu: goto label_47f54c;
        case 0x47f550u: goto label_47f550;
        case 0x47f554u: goto label_47f554;
        case 0x47f558u: goto label_47f558;
        case 0x47f55cu: goto label_47f55c;
        case 0x47f560u: goto label_47f560;
        case 0x47f564u: goto label_47f564;
        case 0x47f568u: goto label_47f568;
        case 0x47f56cu: goto label_47f56c;
        case 0x47f570u: goto label_47f570;
        case 0x47f574u: goto label_47f574;
        case 0x47f578u: goto label_47f578;
        case 0x47f57cu: goto label_47f57c;
        case 0x47f580u: goto label_47f580;
        case 0x47f584u: goto label_47f584;
        case 0x47f588u: goto label_47f588;
        case 0x47f58cu: goto label_47f58c;
        case 0x47f590u: goto label_47f590;
        case 0x47f594u: goto label_47f594;
        case 0x47f598u: goto label_47f598;
        case 0x47f59cu: goto label_47f59c;
        case 0x47f5a0u: goto label_47f5a0;
        case 0x47f5a4u: goto label_47f5a4;
        case 0x47f5a8u: goto label_47f5a8;
        case 0x47f5acu: goto label_47f5ac;
        case 0x47f5b0u: goto label_47f5b0;
        case 0x47f5b4u: goto label_47f5b4;
        case 0x47f5b8u: goto label_47f5b8;
        case 0x47f5bcu: goto label_47f5bc;
        case 0x47f5c0u: goto label_47f5c0;
        case 0x47f5c4u: goto label_47f5c4;
        case 0x47f5c8u: goto label_47f5c8;
        case 0x47f5ccu: goto label_47f5cc;
        case 0x47f5d0u: goto label_47f5d0;
        case 0x47f5d4u: goto label_47f5d4;
        case 0x47f5d8u: goto label_47f5d8;
        case 0x47f5dcu: goto label_47f5dc;
        case 0x47f5e0u: goto label_47f5e0;
        case 0x47f5e4u: goto label_47f5e4;
        case 0x47f5e8u: goto label_47f5e8;
        case 0x47f5ecu: goto label_47f5ec;
        case 0x47f5f0u: goto label_47f5f0;
        case 0x47f5f4u: goto label_47f5f4;
        case 0x47f5f8u: goto label_47f5f8;
        case 0x47f5fcu: goto label_47f5fc;
        case 0x47f600u: goto label_47f600;
        case 0x47f604u: goto label_47f604;
        case 0x47f608u: goto label_47f608;
        case 0x47f60cu: goto label_47f60c;
        case 0x47f610u: goto label_47f610;
        case 0x47f614u: goto label_47f614;
        default: break;
    }

    ctx->pc = 0x47f488u;

label_47f488:
    // 0x47f488: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x47f488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_47f48c:
    // 0x47f48c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x47f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_47f490:
    // 0x47f490: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x47f490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_47f494:
    // 0x47f494: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x47f494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_47f498:
    // 0x47f498: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x47f498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_47f49c:
    // 0x47f49c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47f4a0:
    // 0x47f4a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x47f4a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_47f4a4:
    // 0x47f4a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x47f4a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47f4a8:
    // 0x47f4a8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x47f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_47f4ac:
    // 0x47f4ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47f4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47f4b0:
    // 0x47f4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47f4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f4b4:
    // 0x47f4b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x47f4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47f4b8:
    // 0x47f4b8: 0xc11eeae  jal         func_47BAB8
label_47f4bc:
    if (ctx->pc == 0x47F4BCu) {
        ctx->pc = 0x47F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4B8u;
        // 0x47f4bc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F4C0u;
        goto label_47f4c0;
    }
    ctx->pc = 0x47F4B8u;
    SET_GPR_U32(ctx, 31, 0x47F4C0u);
    ctx->pc = 0x47F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F4B8u;
    // 0x47f4bc: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x47F4B8u, 0x47F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F4C0u;
label_47f4c0:
    // 0x47f4c0: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_47f4c4:
    if (ctx->pc == 0x47F4C4u) {
        ctx->pc = 0x47F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4C0u;
        // 0x47f4c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F4C8u;
        goto label_47f4c8;
    }
    ctx->pc = 0x47F4C0u;
    {
        const bool branch_taken_0x47f4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4C0u;
        // 0x47f4c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f4c0) {
            ctx->pc = 0x47F5F8u;
            goto label_47f5f8;
        }
    }
    ctx->pc = 0x47F4C8u;
label_47f4c8:
    // 0x47f4c8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x47f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_47f4cc:
    // 0x47f4cc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x47f4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_47f4d0:
    // 0x47f4d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x47f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_47f4d4:
    // 0x47f4d4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x47f4d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_47f4d8:
    // 0x47f4d8: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_47f4dc:
    if (ctx->pc == 0x47F4DCu) {
        ctx->pc = 0x47F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4D8u;
        // 0x47f4dc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F4E0u;
        goto label_47f4e0;
    }
    ctx->pc = 0x47F4D8u;
    {
        const bool branch_taken_0x47f4d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4D8u;
        // 0x47f4dc: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f4d8) {
            ctx->pc = 0x47F5D8u;
            goto label_47f5d8;
        }
    }
    ctx->pc = 0x47F4E0u;
label_47f4e0:
    // 0x47f4e0: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
label_47f4e4:
    if (ctx->pc == 0x47F4E4u) {
        ctx->pc = 0x47F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4E0u;
        // 0x47f4e4: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F4E8u;
        goto label_47f4e8;
    }
    ctx->pc = 0x47F4E0u;
    {
        const bool branch_taken_0x47f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f4e0) {
            ctx->pc = 0x47F4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F4E0u;
            // 0x47f4e4: 0x8e700010  lw          $s0, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F598u;
            goto label_47f598;
        }
    }
    ctx->pc = 0x47F4E8u;
label_47f4e8:
    // 0x47f4e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47f4ec:
    // 0x47f4ec: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x47f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_47f4f0:
    // 0x47f4f0: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x47f4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_47f4f4:
    // 0x47f4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x47f4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f4f8:
    // 0x47f4f8: 0xc11efa8  jal         func_47BEA0
label_47f4fc:
    if (ctx->pc == 0x47F4FCu) {
        ctx->pc = 0x47F4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F4F8u;
        // 0x47f4fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F500u;
        goto label_47f500;
    }
    ctx->pc = 0x47F4F8u;
    SET_GPR_U32(ctx, 31, 0x47F500u);
    ctx->pc = 0x47F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F4F8u;
    // 0x47f4fc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BEA0u, 0x47F4F8u, 0x47F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F500u;
label_47f500:
    // 0x47f500: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_47f504:
    if (ctx->pc == 0x47F504u) {
        ctx->pc = 0x47F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F500u;
        // 0x47f504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F508u;
        goto label_47f508;
    }
    ctx->pc = 0x47F500u;
    {
        const bool branch_taken_0x47f500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F500u;
        // 0x47f504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f500) {
            ctx->pc = 0x47F5FCu;
            goto label_47f5fc;
        }
    }
    ctx->pc = 0x47F508u;
label_47f508:
    // 0x47f508: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x47f508u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_47f50c:
    // 0x47f50c: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_47f510:
    if (ctx->pc == 0x47F510u) {
        ctx->pc = 0x47F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F50Cu;
        // 0x47f510: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F514u;
        goto label_47f514;
    }
    ctx->pc = 0x47F50Cu;
    {
        const bool branch_taken_0x47f50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F50Cu;
        // 0x47f510: 0x8fa5001c  lw          $a1, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f50c) {
            ctx->pc = 0x47F570u;
            goto label_47f570;
        }
    }
    ctx->pc = 0x47F514u;
label_47f514:
    // 0x47f514: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47f514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47f518:
    // 0x47f518: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x47f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_47f51c:
    // 0x47f51c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_47f520:
    if (ctx->pc == 0x47F520u) {
        ctx->pc = 0x47F524u;
        goto label_47f524;
    }
    ctx->pc = 0x47F51Cu;
    {
        const bool branch_taken_0x47f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x47f51c) {
            ctx->pc = 0x47F53Cu;
            goto label_47f53c;
        }
    }
    ctx->pc = 0x47F524u;
label_47f524:
    // 0x47f524: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47f524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47f528:
    // 0x47f528: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_47f52c:
    if (ctx->pc == 0x47F52Cu) {
        ctx->pc = 0x47F530u;
        goto label_47f530;
    }
    ctx->pc = 0x47F528u;
    {
        const bool branch_taken_0x47f528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f528) {
            ctx->pc = 0x47F570u;
            goto label_47f570;
        }
    }
    ctx->pc = 0x47F530u;
label_47f530:
    // 0x47f530: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_47f534:
    // 0x47f534: 0x5443fffc  bnel        $v0, $v1, . + 4 + (-0x4 << 2)
label_47f538:
    if (ctx->pc == 0x47F538u) {
        ctx->pc = 0x47F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F534u;
        // 0x47f538: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F53Cu;
        goto label_47f53c;
    }
    ctx->pc = 0x47F534u;
    {
        const bool branch_taken_0x47f534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x47f534) {
            ctx->pc = 0x47F538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F534u;
            // 0x47f538: 0x8e100030  lw          $s0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f528;
        }
    }
    ctx->pc = 0x47F53Cu;
label_47f53c:
    // 0x47f53c: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_47f540:
    if (ctx->pc == 0x47F540u) {
        ctx->pc = 0x47F544u;
        goto label_47f544;
    }
    ctx->pc = 0x47F53Cu;
    {
        const bool branch_taken_0x47f53c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f53c) {
            ctx->pc = 0x47F570u;
            goto label_47f570;
        }
    }
    ctx->pc = 0x47F544u;
label_47f544:
    // 0x47f544: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x47f544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_47f548:
    // 0x47f548: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_47f54c:
    if (ctx->pc == 0x47F54Cu) {
        ctx->pc = 0x47F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F548u;
        // 0x47f54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F550u;
        goto label_47f550;
    }
    ctx->pc = 0x47F548u;
    {
        const bool branch_taken_0x47f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F548u;
        // 0x47f54c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f548) {
            ctx->pc = 0x47F570u;
            goto label_47f570;
        }
    }
    ctx->pc = 0x47F550u;
label_47f550:
    // 0x47f550: 0x8e080004  lw          $t0, 0x4($s0)
    ctx->pc = 0x47f550u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_47f554:
    // 0x47f554: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x47f554u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f558:
    // 0x47f558: 0x40f809  jalr        $v0
label_47f55c:
    if (ctx->pc == 0x47F55Cu) {
        ctx->pc = 0x47F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F558u;
        // 0x47f55c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F560u;
        goto label_47f560;
    }
    ctx->pc = 0x47F558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F560u);
        ctx->pc = 0x47F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F558u;
        // 0x47f55c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F558u, 0x47F560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F560u;
label_47f560:
    // 0x47f560: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_47f564:
    if (ctx->pc == 0x47F564u) {
        ctx->pc = 0x47F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F560u;
        // 0x47f564: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F568u;
        goto label_47f568;
    }
    ctx->pc = 0x47F560u;
    {
        const bool branch_taken_0x47f560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F560u;
        // 0x47f564: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f560) {
            ctx->pc = 0x47F580u;
            goto label_47f580;
        }
    }
    ctx->pc = 0x47F568u;
label_47f568:
    // 0x47f568: 0x10000024  b           . + 4 + (0x24 << 2)
label_47f56c:
    if (ctx->pc == 0x47F56Cu) {
        ctx->pc = 0x47F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F568u;
        // 0x47f56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F570u;
        goto label_47f570;
    }
    ctx->pc = 0x47F568u;
    {
        const bool branch_taken_0x47f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F568u;
        // 0x47f56c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f568) {
            ctx->pc = 0x47F5FCu;
            goto label_47f5fc;
        }
    }
    ctx->pc = 0x47F570u;
label_47f570:
    // 0x47f570: 0xc11fc30  jal         func_47F0C0
label_47f574:
    if (ctx->pc == 0x47F574u) {
        ctx->pc = 0x47F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F570u;
        // 0x47f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F578u;
        goto label_47f578;
    }
    ctx->pc = 0x47F570u;
    SET_GPR_U32(ctx, 31, 0x47F578u);
    ctx->pc = 0x47F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F570u;
    // 0x47f574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47F0C0u, 0x47F570u, 0x47F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F578u;
label_47f578:
    // 0x47f578: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_47f57c:
    if (ctx->pc == 0x47F57Cu) {
        ctx->pc = 0x47F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F578u;
        // 0x47f57c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F580u;
        goto label_47f580;
    }
    ctx->pc = 0x47F578u;
    {
        const bool branch_taken_0x47f578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F578u;
        // 0x47f57c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f578) {
            ctx->pc = 0x47F5F8u;
            goto label_47f5f8;
        }
    }
    ctx->pc = 0x47F580u;
label_47f580:
    // 0x47f580: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x47f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_47f584:
    // 0x47f584: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x47f584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
label_47f588:
    // 0x47f588: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x47f588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47f58c:
    // 0x47f58c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_47f590:
    if (ctx->pc == 0x47F590u) {
        ctx->pc = 0x47F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F58Cu;
        // 0x47f590: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F594u;
        goto label_47f594;
    }
    ctx->pc = 0x47F58Cu;
    {
        const bool branch_taken_0x47f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x47F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F58Cu;
        // 0x47f590: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f58c) {
            ctx->pc = 0x47F4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f4e8;
        }
    }
    ctx->pc = 0x47F594u;
label_47f594:
    // 0x47f594: 0x8e700010  lw          $s0, 0x10($s3)
    ctx->pc = 0x47f594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_47f598:
    // 0x47f598: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_47f59c:
    if (ctx->pc == 0x47F59Cu) {
        ctx->pc = 0x47F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F598u;
        // 0x47f59c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5A0u;
        goto label_47f5a0;
    }
    ctx->pc = 0x47F598u;
    {
        const bool branch_taken_0x47f598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F598u;
        // 0x47f59c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f598) {
            ctx->pc = 0x47F5FCu;
            goto label_47f5fc;
        }
    }
    ctx->pc = 0x47F5A0u;
label_47f5a0:
    // 0x47f5a0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x47f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_47f5a4:
    // 0x47f5a4: 0x0  nop
    ctx->pc = 0x47f5a4u;
    // NOP
label_47f5a8:
    // 0x47f5a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47f5ac:
    if (ctx->pc == 0x47F5ACu) {
        ctx->pc = 0x47F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5A8u;
        // 0x47f5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5B0u;
        goto label_47f5b0;
    }
    ctx->pc = 0x47F5A8u;
    {
        const bool branch_taken_0x47f5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5A8u;
        // 0x47f5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f5a8) {
            ctx->pc = 0x47F5C4u;
            goto label_47f5c4;
        }
    }
    ctx->pc = 0x47F5B0u;
label_47f5b0:
    // 0x47f5b0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47f5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47f5b4:
    // 0x47f5b4: 0x40f809  jalr        $v0
label_47f5b8:
    if (ctx->pc == 0x47F5B8u) {
        ctx->pc = 0x47F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5B4u;
        // 0x47f5b8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5BCu;
        goto label_47f5bc;
    }
    ctx->pc = 0x47F5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47F5BCu);
        ctx->pc = 0x47F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5B4u;
        // 0x47f5b8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F5B4u, 0x47F5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47F5BCu;
label_47f5bc:
    // 0x47f5bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_47f5c0:
    if (ctx->pc == 0x47F5C0u) {
        ctx->pc = 0x47F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5BCu;
        // 0x47f5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5C4u;
        goto label_47f5c4;
    }
    ctx->pc = 0x47F5BCu;
    {
        const bool branch_taken_0x47f5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5BCu;
        // 0x47f5c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f5bc) {
            ctx->pc = 0x47F5FCu;
            goto label_47f5fc;
        }
    }
    ctx->pc = 0x47F5C4u;
label_47f5c4:
    // 0x47f5c4: 0x8e100030  lw          $s0, 0x30($s0)
    ctx->pc = 0x47f5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_47f5c8:
    // 0x47f5c8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
label_47f5cc:
    if (ctx->pc == 0x47F5CCu) {
        ctx->pc = 0x47F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5C8u;
        // 0x47f5cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5D0u;
        goto label_47f5d0;
    }
    ctx->pc = 0x47F5C8u;
    {
        const bool branch_taken_0x47f5c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x47f5c8) {
            ctx->pc = 0x47F5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47F5C8u;
            // 0x47f5cc: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47F5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47f5a8;
        }
    }
    ctx->pc = 0x47F5D0u;
label_47f5d0:
    // 0x47f5d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_47f5d4:
    if (ctx->pc == 0x47F5D4u) {
        ctx->pc = 0x47F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5D0u;
        // 0x47f5d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5D8u;
        goto label_47f5d8;
    }
    ctx->pc = 0x47F5D0u;
    {
        const bool branch_taken_0x47f5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5D0u;
        // 0x47f5d4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47f5d0) {
            ctx->pc = 0x47F5FCu;
            goto label_47f5fc;
        }
    }
    ctx->pc = 0x47F5D8u;
label_47f5d8:
    // 0x47f5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47f5dc:
    // 0x47f5dc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_47f5e0:
    // 0x47f5e0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_47f5e4:
    // 0x47f5e4: 0xc11eff2  jal         func_47BFC8
label_47f5e8:
    if (ctx->pc == 0x47F5E8u) {
        ctx->pc = 0x47F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5E4u;
        // 0x47f5e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5ECu;
        goto label_47f5ec;
    }
    ctx->pc = 0x47F5E4u;
    SET_GPR_U32(ctx, 31, 0x47F5ECu);
    ctx->pc = 0x47F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F5E4u;
    // 0x47f5e8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47F5E4u, 0x47F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F5ECu;
label_47f5ec:
    // 0x47f5ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_47f5f0:
    // 0x47f5f0: 0xc11f024  jal         func_47C090
label_47f5f4:
    if (ctx->pc == 0x47F5F4u) {
        ctx->pc = 0x47F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F5F0u;
        // 0x47f5f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F5F8u;
        goto label_47f5f8;
    }
    ctx->pc = 0x47F5F0u;
    SET_GPR_U32(ctx, 31, 0x47F5F8u);
    ctx->pc = 0x47F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47F5F0u;
    // 0x47f5f4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47F5F0u, 0x47F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F5F8u;
label_47f5f8:
    // 0x47f5f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x47f5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47f5fc:
    // 0x47f5fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x47f5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_47f600:
    // 0x47f600: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x47f600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47f604:
    // 0x47f604: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x47f604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47f608:
    // 0x47f608: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47f608u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47f60c:
    // 0x47f60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47f60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47f610:
    // 0x47f610: 0x3e00008  jr          $ra
label_47f614:
    if (ctx->pc == 0x47F614u) {
        ctx->pc = 0x47F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F610u;
        // 0x47f614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x47F618u;
        goto label_fallthrough_0x47f610;
    }
    ctx->pc = 0x47F610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47F610u;
        // 0x47f614: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x47f610:
    ctx->pc = 0x47F618u;
}
