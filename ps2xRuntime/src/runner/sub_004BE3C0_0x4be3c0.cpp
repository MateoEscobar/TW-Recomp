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

// Function: sub_004BE3C0
// Address: 0x4be3c0 - 0x4be5c0
void sub_004BE3C0_0x4be3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BE3C0_0x4be3c0");
#endif

    switch (ctx->pc) {
        case 0x4be484u: goto label_4be484;
        case 0x4be490u: goto label_4be490;
        case 0x4be524u: goto label_4be524;
        case 0x4be594u: goto label_4be594;
        case 0x4be5a0u: goto label_4be5a0;
        default: break;
    }

    ctx->pc = 0x4be3c0u;

    // 0x4be3c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4be3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4be3c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4be3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be3c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4be3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4be3cc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x4be3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x4be3d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4be3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4be3d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x4be3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x4be3d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4be3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4be3dc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x4be3dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be3e0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x4be3e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4be3e4: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x4be3e4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x4be3e8: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4be3e8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4be3ec: 0x61503  sra         $v0, $a2, 20
    ctx->pc = 0x4be3ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 20));
    // 0x4be3f0: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x4be3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x4be3f4: 0x2468fc01  addiu       $t0, $v1, -0x3FF
    ctx->pc = 0x4be3f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x4be3f8: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x4be3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x4be3fc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4BE3FCu;
    {
        const bool branch_taken_0x4be3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE3FCu;
        // 0x4be400: 0x69fc2  srl         $s3, $a2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be3fc) {
            ctx->pc = 0x4BE504u;
            goto label_4be504;
        }
    }
    ctx->pc = 0x4BE404u;
    // 0x4be404: 0x501002c  bgez        $t0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4BE404u;
    {
        const bool branch_taken_0x4be404 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x4BE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE404u;
        // 0x4be408: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be404) {
            ctx->pc = 0x4BE4B8u;
            goto label_4be4b8;
        }
    }
    ctx->pc = 0x4BE40Cu;
    // 0x4be40c: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x4be40cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x4be410: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x4be410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4be414: 0xd21024  and         $v0, $a2, $s2
    ctx->pc = 0x4be414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x4be418: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4be418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4be41c: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x4BE41Cu;
    {
        const bool branch_taken_0x4be41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE41Cu;
        // 0x4be420: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be41c) {
            ctx->pc = 0x4BE544u;
            goto label_4be544;
        }
    }
    ctx->pc = 0x4BE424u;
    // 0x4be424: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x4be424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x4be428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be42c: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x4be42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x4be430: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x4be430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4be434: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x4be434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4be438: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4be438u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4be43c: 0x71023  negu        $v0, $a3
    ctx->pc = 0x4be43cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4be440: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x4be440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4be444: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x4be444u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x4be448: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4be448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4be44c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4be44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4be450: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x4be450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be454: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4be454u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4be458: 0x11883e  dsrl32      $s1, $s1, 0
    ctx->pc = 0x4be458u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> (32 + 0));
    // 0x4be45c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x4be45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4be460: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4be460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4be464: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x4be464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4be468: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4be468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x4be46c: 0x24841978  addiu       $a0, $a0, 0x1978
    ctx->pc = 0x4be46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6520));
    // 0x4be470: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x4be470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x4be474: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4be474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4be478: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x4be478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4be47c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BE47Cu;
    SET_GPR_U32(ctx, 31, 0x4BE484u);
    ctx->pc = 0x4BE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE47Cu;
    // 0x4be480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BE47Cu, 0x4BE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE484u;
label_4be484:
    // 0x4be484: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4be484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be488: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BE488u;
    SET_GPR_U32(ctx, 31, 0x4BE490u);
    ctx->pc = 0x4BE48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE488u;
    // 0x4be48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BE488u, 0x4BE490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE490u;
label_4be490:
    // 0x4be490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4be490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be494: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x4be494u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4be498: 0xd21824  and         $v1, $a2, $s2
    ctx->pc = 0x4be498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 18));
    // 0x4be49c: 0x1317c0  sll         $v0, $s3, 31
    ctx->pc = 0x4be49cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 31));
    // 0x4be4a0: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x4be4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x4be4a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4be4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4be4a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4be4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x4be4ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4be4acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4be4b0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x4BE4B0u;
    {
        const bool branch_taken_0x4be4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4B0u;
        // 0x4be4b4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4b0) {
            ctx->pc = 0x4BE5A0u;
            goto label_4be5a0;
        }
    }
    ctx->pc = 0x4BE4B8u;
label_4be4b8:
    // 0x4be4b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be4bc: 0x1022007  srav        $a0, $v0, $t0
    ctx->pc = 0x4be4bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4be4c0: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x4be4c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4be4c4: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4be4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4be4c8: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x4BE4C8u;
    {
        const bool branch_taken_0x4be4c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4C8u;
        // 0x4be4cc: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4c8) {
            ctx->pc = 0x4BE544u;
            goto label_4be544;
        }
    }
    ctx->pc = 0x4BE4D0u;
    // 0x4be4d0: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x4be4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4be4d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4be4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4be4d8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4BE4D8u;
    {
        const bool branch_taken_0x4be4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4D8u;
        // 0x4be4dc: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4d8) {
            ctx->pc = 0x4BE568u;
            goto label_4be568;
        }
    }
    ctx->pc = 0x4BE4E0u;
    // 0x4be4e0: 0x15020003  bne         $t0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BE4E0u;
    {
        const bool branch_taken_0x4be4e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BE4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4E0u;
        // 0x4be4e4: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4e0) {
            ctx->pc = 0x4BE4F0u;
            goto label_4be4f0;
        }
    }
    ctx->pc = 0x4BE4E8u;
    // 0x4be4e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4BE4E8u;
    {
        const bool branch_taken_0x4be4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4E8u;
        // 0x4be4ec: 0x3c074000  lui         $a3, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4e8) {
            ctx->pc = 0x4BE568u;
            goto label_4be568;
        }
    }
    ctx->pc = 0x4BE4F0u;
label_4be4f0:
    // 0x4be4f0: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x4be4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x4be4f4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4be4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4be4f8: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x4be4f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4be4fc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x4BE4FCu;
    {
        const bool branch_taken_0x4be4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE4FCu;
        // 0x4be500: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be4fc) {
            ctx->pc = 0x4BE568u;
            goto label_4be568;
        }
    }
    ctx->pc = 0x4BE504u;
label_4be504:
    // 0x4be504: 0x29020034  slti        $v0, $t0, 0x34
    ctx->pc = 0x4be504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x4be508: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BE508u;
    {
        const bool branch_taken_0x4be508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4be508) {
            ctx->pc = 0x4BE50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4BE508u;
            // 0x4be50c: 0x2468fbed  addiu       $t0, $v1, -0x413 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4BE52Cu;
            goto label_4be52c;
        }
    }
    ctx->pc = 0x4BE510u;
    // 0x4be510: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x4be510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x4be514: 0x15020022  bne         $t0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x4BE514u;
    {
        const bool branch_taken_0x4be514 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x4BE518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE514u;
        // 0x4be518: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be514) {
            ctx->pc = 0x4BE5A0u;
            goto label_4be5a0;
        }
    }
    ctx->pc = 0x4BE51Cu;
    // 0x4be51c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BE51Cu;
    SET_GPR_U32(ctx, 31, 0x4BE524u);
    ctx->pc = 0x4BE520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE51Cu;
    // 0x4be520: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BE51Cu, 0x4BE524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE524u;
label_4be524:
    // 0x4be524: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x4BE524u;
    {
        const bool branch_taken_0x4be524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE524u;
        // 0x4be528: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be524) {
            ctx->pc = 0x4BE5A4u;
            goto label_4be5a4;
        }
    }
    ctx->pc = 0x4BE52Cu;
label_4be52c:
    // 0x4be52c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4be52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4be530: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4be530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4be534: 0x1022006  srlv        $a0, $v0, $t0
    ctx->pc = 0x4be534u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4be538: 0xe41824  and         $v1, $a3, $a0
    ctx->pc = 0x4be538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4be53c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BE53Cu;
    {
        const bool branch_taken_0x4be53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BE540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE53Cu;
        // 0x4be540: 0x42042  srl         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be53c) {
            ctx->pc = 0x4BE54Cu;
            goto label_4be54c;
        }
    }
    ctx->pc = 0x4BE544u;
label_4be544:
    // 0x4be544: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4BE544u;
    {
        const bool branch_taken_0x4be544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE544u;
        // 0x4be548: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be544) {
            ctx->pc = 0x4BE5A0u;
            goto label_4be5a0;
        }
    }
    ctx->pc = 0x4BE54Cu;
label_4be54c:
    // 0x4be54c: 0xe41024  and         $v0, $a3, $a0
    ctx->pc = 0x4be54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4be550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4BE550u;
    {
        const bool branch_taken_0x4be550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE550u;
        // 0x4be554: 0x41827  nor         $v1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4be550) {
            ctx->pc = 0x4BE568u;
            goto label_4be568;
        }
    }
    ctx->pc = 0x4BE558u;
    // 0x4be558: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4be558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x4be55c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x4be55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4be560: 0x1021007  srav        $v0, $v0, $t0
    ctx->pc = 0x4be560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 8) & 0x1F));
    // 0x4be564: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x4be564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4be568:
    // 0x4be568: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x4be568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4be56c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4be56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4be570: 0x6483c  dsll32      $t1, $a2, 0
    ctx->pc = 0x4be570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 0));
    // 0x4be574: 0x1222825  or          $a1, $t1, $v0
    ctx->pc = 0x4be574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x4be578: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4be578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4be57c: 0x24631978  addiu       $v1, $v1, 0x1978
    ctx->pc = 0x4be57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6520));
    // 0x4be580: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x4be580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x4be584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4be584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4be588: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x4be588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4be58c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BE58Cu;
    SET_GPR_U32(ctx, 31, 0x4BE594u);
    ctx->pc = 0x4BE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE58Cu;
    // 0x4be590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BE58Cu, 0x4BE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE594u;
label_4be594:
    // 0x4be594: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4be594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4be598: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BE598u;
    SET_GPR_U32(ctx, 31, 0x4BE5A0u);
    ctx->pc = 0x4BE59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BE598u;
    // 0x4be59c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BE598u, 0x4BE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BE5A0u;
label_4be5a0:
    // 0x4be5a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4be5a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4be5a4:
    // 0x4be5a4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x4be5a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4be5a8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4be5a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4be5ac: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x4be5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4be5b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4be5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4be5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BE5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BE5B4u;
        // 0x4be5b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BE5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BE5BCu;
    // 0x4be5bc: 0x0  nop
    ctx->pc = 0x4be5bcu;
    // NOP
    ctx->pc = 0x4be5c0u;
}
