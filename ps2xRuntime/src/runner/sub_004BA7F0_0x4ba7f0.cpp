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

// Function: sub_004BA7F0
// Address: 0x4ba7f0 - 0x4bace0
void sub_004BA7F0_0x4ba7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BA7F0_0x4ba7f0");
#endif

    switch (ctx->pc) {
        case 0x4ba878u: goto label_4ba878;
        case 0x4ba884u: goto label_4ba884;
        case 0x4ba89cu: goto label_4ba89c;
        case 0x4ba8c8u: goto label_4ba8c8;
        case 0x4ba934u: goto label_4ba934;
        case 0x4ba958u: goto label_4ba958;
        case 0x4ba970u: goto label_4ba970;
        case 0x4ba984u: goto label_4ba984;
        case 0x4ba998u: goto label_4ba998;
        case 0x4ba9a4u: goto label_4ba9a4;
        case 0x4ba9b8u: goto label_4ba9b8;
        case 0x4ba9ccu: goto label_4ba9cc;
        case 0x4ba9dcu: goto label_4ba9dc;
        case 0x4ba9e8u: goto label_4ba9e8;
        case 0x4baa04u: goto label_4baa04;
        case 0x4baa18u: goto label_4baa18;
        case 0x4baa2cu: goto label_4baa2c;
        case 0x4baa38u: goto label_4baa38;
        case 0x4baa44u: goto label_4baa44;
        case 0x4baa5cu: goto label_4baa5c;
        case 0x4baa68u: goto label_4baa68;
        case 0x4baa74u: goto label_4baa74;
        case 0x4baa84u: goto label_4baa84;
        case 0x4baaa0u: goto label_4baaa0;
        case 0x4baac0u: goto label_4baac0;
        case 0x4baad4u: goto label_4baad4;
        case 0x4baae0u: goto label_4baae0;
        case 0x4baaf0u: goto label_4baaf0;
        case 0x4baafcu: goto label_4baafc;
        case 0x4bab10u: goto label_4bab10;
        case 0x4bab20u: goto label_4bab20;
        case 0x4bab2cu: goto label_4bab2c;
        case 0x4bab3cu: goto label_4bab3c;
        case 0x4bab48u: goto label_4bab48;
        case 0x4bab58u: goto label_4bab58;
        case 0x4bab64u: goto label_4bab64;
        case 0x4bab70u: goto label_4bab70;
        case 0x4bab88u: goto label_4bab88;
        case 0x4bab94u: goto label_4bab94;
        case 0x4baba8u: goto label_4baba8;
        case 0x4babb4u: goto label_4babb4;
        case 0x4babc0u: goto label_4babc0;
        case 0x4babd8u: goto label_4babd8;
        case 0x4babe8u: goto label_4babe8;
        case 0x4babf4u: goto label_4babf4;
        case 0x4bac08u: goto label_4bac08;
        case 0x4bac14u: goto label_4bac14;
        case 0x4bac30u: goto label_4bac30;
        case 0x4bac3cu: goto label_4bac3c;
        case 0x4bac54u: goto label_4bac54;
        case 0x4bac64u: goto label_4bac64;
        case 0x4bac70u: goto label_4bac70;
        case 0x4bac84u: goto label_4bac84;
        case 0x4bac90u: goto label_4bac90;
        case 0x4bac9cu: goto label_4bac9c;
        case 0x4bacacu: goto label_4bacac;
        default: break;
    }

    ctx->pc = 0x4ba7f0u;

    // 0x4ba7f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4ba7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x4ba7f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4ba7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba7f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4ba7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x4ba7fc: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4ba7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4ba800: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x4ba800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x4ba804: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x4ba804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x4ba808: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x4ba808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x4ba80c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ba80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ba810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4ba810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4ba814: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4ba814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4ba818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ba818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ba81c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ba81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ba820: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4ba820u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba824: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x4ba824u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba828: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x4ba828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba82c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x4ba82cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x4ba830: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x4ba830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x4ba834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba838: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x4ba838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4ba83c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4BA83Cu;
    {
        const bool branch_taken_0x4ba83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA83Cu;
        // 0x4ba840: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba83c) {
            ctx->pc = 0x4BA8A8u;
            goto label_4ba8a8;
        }
    }
    ctx->pc = 0x4BA844u;
    // 0x4ba844: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4ba844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4ba848: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba84c: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x4ba84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x4ba850: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4ba850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ba854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BA854u;
    {
        const bool branch_taken_0x4ba854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA854u;
        // 0x4ba858: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba854) {
            ctx->pc = 0x4BA868u;
            goto label_4ba868;
        }
    }
    ctx->pc = 0x4BA85Cu;
    // 0x4ba85c: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x4BA85Cu;
    {
        const bool branch_taken_0x4ba85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA85Cu;
        // 0x4ba860: 0xdc621148  ld          $v0, 0x1148($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba85c) {
            ctx->pc = 0x4BACACu;
            goto label_4bacac;
        }
    }
    ctx->pc = 0x4BA864u;
    // 0x4ba864: 0x0  nop
    ctx->pc = 0x4ba864u;
    // NOP
label_4ba868:
    // 0x4ba868: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4BA868u;
    {
        const bool branch_taken_0x4ba868 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x4BA86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA868u;
        // 0x4ba86c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba868) {
            ctx->pc = 0x4BA88Cu;
            goto label_4ba88c;
        }
    }
    ctx->pc = 0x4BA870u;
    // 0x4ba870: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA870u;
    SET_GPR_U32(ctx, 31, 0x4BA878u);
    ctx->pc = 0x4BA874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA870u;
    // 0x4ba874: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA870u, 0x4BA878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA878u;
label_4ba878:
    // 0x4ba878: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4ba878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba87c: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BA87Cu;
    SET_GPR_U32(ctx, 31, 0x4BA884u);
    ctx->pc = 0x4BA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA87Cu;
    // 0x4ba880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BA87Cu, 0x4BA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA884u;
label_4ba884:
    // 0x4ba884: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x4BA884u;
    {
        const bool branch_taken_0x4ba884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA884u;
        // 0x4ba888: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba884) {
            ctx->pc = 0x4BACB0u;
            goto label_4bacb0;
        }
    }
    ctx->pc = 0x4BA88Cu;
label_4ba88c:
    // 0x4ba88c: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x4ba88cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x4ba890: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4ba890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4ba894: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA894u;
    SET_GPR_U32(ctx, 31, 0x4BA89Cu);
    ctx->pc = 0x4BA898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA894u;
    // 0x4ba898: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA894u, 0x4BA89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA89Cu;
label_4ba89c:
    // 0x4ba89c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4ba89cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba8a0: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x4ba8a0u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4ba8a4: 0x0  nop
    ctx->pc = 0x4ba8a4u;
    // NOP
label_4ba8a8:
    // 0x4ba8a8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x4ba8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x4ba8ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ba8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ba8b0: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x4ba8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x4ba8b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4BA8B4u;
    {
        const bool branch_taken_0x4ba8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA8B4u;
        // 0x4ba8b8: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba8b4) {
            ctx->pc = 0x4BA8D0u;
            goto label_4ba8d0;
        }
    }
    ctx->pc = 0x4BA8BCu;
    // 0x4ba8bc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4ba8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba8c0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA8C0u;
    SET_GPR_U32(ctx, 31, 0x4BA8C8u);
    ctx->pc = 0x4BA8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA8C0u;
    // 0x4ba8c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA8C0u, 0x4BA8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA8C8u;
label_4ba8c8:
    // 0x4ba8c8: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x4BA8C8u;
    {
        const bool branch_taken_0x4ba8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA8C8u;
        // 0x4ba8cc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba8c8) {
            ctx->pc = 0x4BACB0u;
            goto label_4bacb0;
        }
    }
    ctx->pc = 0x4BA8D0u;
label_4ba8d0:
    // 0x4ba8d0: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x4ba8d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x4ba8d4: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4ba8d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4ba8d8: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x4ba8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x4ba8dc: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x4ba8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x4ba8e0: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x4ba8e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x4ba8e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4ba8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4ba8e8: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x4ba8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x4ba8ec: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x4ba8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x4ba8f0: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x4ba8f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ba8f4: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x4ba8f4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ba8f8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4ba8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba8fc: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x4ba8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x4ba900: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ba900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ba904: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x4ba904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x4ba908: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x4ba908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x4ba90c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ba90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ba910: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4ba910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4ba914: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4ba914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4ba918: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x4ba918u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4ba91c: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x4ba91cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x4ba920: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4ba920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4ba924: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4ba924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4ba928: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x4ba928u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x4ba92c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA92Cu;
    SET_GPR_U32(ctx, 31, 0x4BA934u);
    ctx->pc = 0x4BA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA92Cu;
    // 0x4ba930: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA92Cu, 0x4BA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA934u;
label_4ba934:
    // 0x4ba934: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x4ba934u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba938: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x4ba938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x4ba93c: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ba93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ba940: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x4ba940u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4ba944: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4BA944u;
    {
        const bool branch_taken_0x4ba944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA944u;
        // 0x4ba948: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba944) {
            ctx->pc = 0x4BAA4Cu;
            goto label_4baa4c;
        }
    }
    ctx->pc = 0x4BA94Cu;
    // 0x4ba94c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ba94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba950: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4BA950u;
    SET_GPR_U32(ctx, 31, 0x4BA958u);
    ctx->pc = 0x4BA954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA950u;
    // 0x4ba954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4BA950u, 0x4BA958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA958u;
label_4ba958:
    // 0x4ba958: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4BA958u;
    {
        const bool branch_taken_0x4ba958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA958u;
        // 0x4ba95c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba958) {
            ctx->pc = 0x4BA9B0u;
            goto label_4ba9b0;
        }
    }
    ctx->pc = 0x4BA960u;
    // 0x4ba960: 0x13c000d2  beqz        $fp, . + 4 + (0xD2 << 2)
    ctx->pc = 0x4BA960u;
    {
        const bool branch_taken_0x4ba960 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA960u;
        // 0x4ba964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba960) {
            ctx->pc = 0x4BACACu;
            goto label_4bacac;
        }
    }
    ctx->pc = 0x4BA968u;
    // 0x4ba968: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BA968u;
    SET_GPR_U32(ctx, 31, 0x4BA970u);
    ctx->pc = 0x4BA96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA968u;
    // 0x4ba96c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BA968u, 0x4BA970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA970u;
label_4ba970:
    // 0x4ba970: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4ba970u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba974: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba978: 0xdc251150  ld          $a1, 0x1150($at)
    ctx->pc = 0x4ba978u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591150u));
    // 0x4ba97c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA97Cu;
    SET_GPR_U32(ctx, 31, 0x4BA984u);
    ctx->pc = 0x4BA980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA97Cu;
    // 0x4ba980: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA97Cu, 0x4BA984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA984u;
label_4ba984:
    // 0x4ba984: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba988: 0xdc251158  ld          $a1, 0x1158($at)
    ctx->pc = 0x4ba988u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591158u));
    // 0x4ba98c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba98cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba990: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA990u;
    SET_GPR_U32(ctx, 31, 0x4BA998u);
    ctx->pc = 0x4BA994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA990u;
    // 0x4ba994: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA990u, 0x4BA998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA998u;
label_4ba998:
    // 0x4ba998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba99c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BA99Cu;
    SET_GPR_U32(ctx, 31, 0x4BA9A4u);
    ctx->pc = 0x4BA9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA99Cu;
    // 0x4ba9a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BA99Cu, 0x4BA9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA9A4u;
label_4ba9a4:
    // 0x4ba9a4: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x4BA9A4u;
    {
        const bool branch_taken_0x4ba9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA9A4u;
        // 0x4ba9a8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba9a4) {
            ctx->pc = 0x4BACB0u;
            goto label_4bacb0;
        }
    }
    ctx->pc = 0x4BA9ACu;
    // 0x4ba9ac: 0x0  nop
    ctx->pc = 0x4ba9acu;
    // NOP
label_4ba9b0:
    // 0x4ba9b0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA9B0u;
    SET_GPR_U32(ctx, 31, 0x4BA9B8u);
    ctx->pc = 0x4BA9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA9B0u;
    // 0x4ba9b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA9B0u, 0x4BA9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA9B8u;
label_4ba9b8:
    // 0x4ba9b8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4ba9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4ba9bc: 0xdc251160  ld          $a1, 0x1160($at)
    ctx->pc = 0x4ba9bcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591160u));
    // 0x4ba9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4ba9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba9c4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA9C4u;
    SET_GPR_U32(ctx, 31, 0x4BA9CCu);
    ctx->pc = 0x4BA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA9C4u;
    // 0x4ba9c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA9C4u, 0x4BA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA9CCu;
label_4ba9cc:
    // 0x4ba9cc: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x4ba9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4ba9d0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x4ba9d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x4ba9d4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BA9D4u;
    SET_GPR_U32(ctx, 31, 0x4BA9DCu);
    ctx->pc = 0x4BA9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA9D4u;
    // 0x4ba9d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BA9D4u, 0x4BA9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA9DCu;
label_4ba9dc:
    // 0x4ba9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ba9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba9e0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BA9E0u;
    SET_GPR_U32(ctx, 31, 0x4BA9E8u);
    ctx->pc = 0x4BA9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA9E0u;
    // 0x4ba9e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BA9E0u, 0x4BA9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BA9E8u;
label_4ba9e8:
    // 0x4ba9e8: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x4BA9E8u;
    {
        const bool branch_taken_0x4ba9e8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA9E8u;
        // 0x4ba9ec: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba9e8) {
            ctx->pc = 0x4BA9FCu;
            goto label_4ba9fc;
        }
    }
    ctx->pc = 0x4BA9F0u;
    // 0x4ba9f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ba9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ba9f4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x4BA9F4u;
    {
        const bool branch_taken_0x4ba9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BA9F4u;
        // 0x4ba9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba9f4) {
            ctx->pc = 0x4BACA4u;
            goto label_4baca4;
        }
    }
    ctx->pc = 0x4BA9FCu;
label_4ba9fc:
    // 0x4ba9fc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BA9FCu;
    SET_GPR_U32(ctx, 31, 0x4BAA04u);
    ctx->pc = 0x4BAA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BA9FCu;
    // 0x4baa00: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BA9FCu, 0x4BAA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA04u;
label_4baa04:
    // 0x4baa04: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4baa04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa08: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4baa0c: 0xdc251168  ld          $a1, 0x1168($at)
    ctx->pc = 0x4baa0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591168u));
    // 0x4baa10: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAA10u;
    SET_GPR_U32(ctx, 31, 0x4BAA18u);
    ctx->pc = 0x4BAA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA10u;
    // 0x4baa14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAA10u, 0x4BAA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA18u;
label_4baa18:
    // 0x4baa18: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4baa1c: 0xdc251170  ld          $a1, 0x1170($at)
    ctx->pc = 0x4baa1cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591170u));
    // 0x4baa20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4baa20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa24: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAA24u;
    SET_GPR_U32(ctx, 31, 0x4BAA2Cu);
    ctx->pc = 0x4BAA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA24u;
    // 0x4baa28: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAA24u, 0x4BAA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA2Cu;
label_4baa2c:
    // 0x4baa2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4baa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa30: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAA30u;
    SET_GPR_U32(ctx, 31, 0x4BAA38u);
    ctx->pc = 0x4BAA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA30u;
    // 0x4baa34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAA30u, 0x4BAA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA38u;
label_4baa38:
    // 0x4baa38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4baa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa3c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAA3Cu;
    SET_GPR_U32(ctx, 31, 0x4BAA44u);
    ctx->pc = 0x4BAA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA3Cu;
    // 0x4baa40: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAA3Cu, 0x4BAA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA44u;
label_4baa44:
    // 0x4baa44: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x4BAA44u;
    {
        const bool branch_taken_0x4baa44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAA44u;
        // 0x4baa48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4baa44) {
            ctx->pc = 0x4BACA0u;
            goto label_4baca0;
        }
    }
    ctx->pc = 0x4BAA4Cu;
label_4baa4c:
    // 0x4baa4c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4baa4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4baa50: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x4baa50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x4baa54: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAA54u;
    SET_GPR_U32(ctx, 31, 0x4BAA5Cu);
    ctx->pc = 0x4BAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA54u;
    // 0x4baa58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAA54u, 0x4BAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA5Cu;
label_4baa5c:
    // 0x4baa5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4baa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa60: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4BAA60u;
    SET_GPR_U32(ctx, 31, 0x4BAA68u);
    ctx->pc = 0x4BAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA60u;
    // 0x4baa64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4BAA60u, 0x4BAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA68u;
label_4baa68:
    // 0x4baa68: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4baa68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa6c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x4BAA6Cu;
    SET_GPR_U32(ctx, 31, 0x4BAA74u);
    ctx->pc = 0x4BAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA6Cu;
    // 0x4baa70: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x4BAA6Cu, 0x4BAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA74u;
label_4baa74:
    // 0x4baa74: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4baa74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa78: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4baa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa7c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAA7Cu;
    SET_GPR_U32(ctx, 31, 0x4BAA84u);
    ctx->pc = 0x4BAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA7Cu;
    // 0x4baa80: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAA7Cu, 0x4BAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAA84u;
label_4baa84:
    // 0x4baa84: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x4baa84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x4baa88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4baa88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa8c: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x4baa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x4baa90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4baa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baa94: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x4baa94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4baa98: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAA98u;
    SET_GPR_U32(ctx, 31, 0x4BAAA0u);
    ctx->pc = 0x4BAA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAA98u;
    // 0x4baa9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAA98u, 0x4BAAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAA0u;
label_4baaa0:
    // 0x4baaa0: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x4baaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x4baaa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4baaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baaa8: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x4baaa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x4baaac: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4baab0: 0xdc251178  ld          $a1, 0x1178($at)
    ctx->pc = 0x4baab0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591178u));
    // 0x4baab4: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x4baab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x4baab8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAAB8u;
    SET_GPR_U32(ctx, 31, 0x4BAAC0u);
    ctx->pc = 0x4BAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAAB8u;
    // 0x4baabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAAB8u, 0x4BAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAC0u;
label_4baac0:
    // 0x4baac0: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x4baac0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x4baac4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4baac8: 0xdc251180  ld          $a1, 0x1180($at)
    ctx->pc = 0x4baac8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591180u));
    // 0x4baacc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAACCu;
    SET_GPR_U32(ctx, 31, 0x4BAAD4u);
    ctx->pc = 0x4BAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAACCu;
    // 0x4baad0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAACCu, 0x4BAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAD4u;
label_4baad4:
    // 0x4baad4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4baad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baad8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAAD8u;
    SET_GPR_U32(ctx, 31, 0x4BAAE0u);
    ctx->pc = 0x4BAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAAD8u;
    // 0x4baadc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAAD8u, 0x4BAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAE0u;
label_4baae0:
    // 0x4baae0: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4baae4: 0xdc251188  ld          $a1, 0x1188($at)
    ctx->pc = 0x4baae4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591188u));
    // 0x4baae8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAAE8u;
    SET_GPR_U32(ctx, 31, 0x4BAAF0u);
    ctx->pc = 0x4BAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAAE8u;
    // 0x4baaec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAAE8u, 0x4BAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAF0u;
label_4baaf0:
    // 0x4baaf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4baaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baaf4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAAF4u;
    SET_GPR_U32(ctx, 31, 0x4BAAFCu);
    ctx->pc = 0x4BAAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAAF4u;
    // 0x4baaf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAAF4u, 0x4BAAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAAFCu;
label_4baafc:
    // 0x4baafc: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4baafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bab00: 0xdc251190  ld          $a1, 0x1190($at)
    ctx->pc = 0x4bab00u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591190u));
    // 0x4bab04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bab04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab08: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB08u;
    SET_GPR_U32(ctx, 31, 0x4BAB10u);
    ctx->pc = 0x4BAB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB08u;
    // 0x4bab0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB08u, 0x4BAB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB10u;
label_4bab10:
    // 0x4bab10: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bab10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bab14: 0xdc251198  ld          $a1, 0x1198($at)
    ctx->pc = 0x4bab14u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x591198u));
    // 0x4bab18: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAB18u;
    SET_GPR_U32(ctx, 31, 0x4BAB20u);
    ctx->pc = 0x4BAB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB18u;
    // 0x4bab1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAB18u, 0x4BAB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB20u;
label_4bab20:
    // 0x4bab20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4bab20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab24: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB24u;
    SET_GPR_U32(ctx, 31, 0x4BAB2Cu);
    ctx->pc = 0x4BAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB24u;
    // 0x4bab28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB24u, 0x4BAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB2Cu;
label_4bab2c:
    // 0x4bab2c: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bab30: 0xdc2511a0  ld          $a1, 0x11A0($at)
    ctx->pc = 0x4bab30u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911A0u));
    // 0x4bab34: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAB34u;
    SET_GPR_U32(ctx, 31, 0x4BAB3Cu);
    ctx->pc = 0x4BAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB34u;
    // 0x4bab38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAB34u, 0x4BAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB3Cu;
label_4bab3c:
    // 0x4bab3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab40: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB40u;
    SET_GPR_U32(ctx, 31, 0x4BAB48u);
    ctx->pc = 0x4BAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB40u;
    // 0x4bab44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB40u, 0x4BAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB48u;
label_4bab48:
    // 0x4bab48: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bab4c: 0xdc2511a8  ld          $a1, 0x11A8($at)
    ctx->pc = 0x4bab4cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911A8u));
    // 0x4bab50: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAB50u;
    SET_GPR_U32(ctx, 31, 0x4BAB58u);
    ctx->pc = 0x4BAB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB50u;
    // 0x4bab54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAB50u, 0x4BAB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB58u;
label_4bab58:
    // 0x4bab58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4bab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab5c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB5Cu;
    SET_GPR_U32(ctx, 31, 0x4BAB64u);
    ctx->pc = 0x4BAB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB5Cu;
    // 0x4bab60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB5Cu, 0x4BAB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB64u;
label_4bab64:
    // 0x4bab64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab68: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAB68u;
    SET_GPR_U32(ctx, 31, 0x4BAB70u);
    ctx->pc = 0x4BAB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB68u;
    // 0x4bab6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAB68u, 0x4BAB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB70u;
label_4bab70:
    // 0x4bab70: 0x1a80002a  blez        $s4, . + 4 + (0x2A << 2)
    ctx->pc = 0x4BAB70u;
    {
        const bool branch_taken_0x4bab70 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x4BAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAB70u;
        // 0x4bab74: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bab70) {
            ctx->pc = 0x4BAC1Cu;
            goto label_4bac1c;
        }
    }
    ctx->pc = 0x4BAB78u;
    // 0x4bab78: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4bab78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4bab7c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4bab7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4bab80: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB80u;
    SET_GPR_U32(ctx, 31, 0x4BAB88u);
    ctx->pc = 0x4BAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB80u;
    // 0x4bab84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB80u, 0x4BAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB88u;
label_4bab88:
    // 0x4bab88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bab8c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAB8Cu;
    SET_GPR_U32(ctx, 31, 0x4BAB94u);
    ctx->pc = 0x4BAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAB8Cu;
    // 0x4bab90: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAB8Cu, 0x4BAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAB94u;
label_4bab94:
    // 0x4bab94: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x4BAB94u;
    {
        const bool branch_taken_0x4bab94 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BAB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAB94u;
        // 0x4bab98: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bab94) {
            ctx->pc = 0x4BABC8u;
            goto label_4babc8;
        }
    }
    ctx->pc = 0x4BAB9Cu;
    // 0x4bab9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bab9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4baba0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BABA0u;
    SET_GPR_U32(ctx, 31, 0x4BABA8u);
    ctx->pc = 0x4BABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABA0u;
    // 0x4baba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BABA0u, 0x4BABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABA8u;
label_4baba8:
    // 0x4baba8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4baba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4babac: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BABACu;
    SET_GPR_U32(ctx, 31, 0x4BABB4u);
    ctx->pc = 0x4BABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABACu;
    // 0x4babb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BABACu, 0x4BABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABB4u;
label_4babb4:
    // 0x4babb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4babb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4babb8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BABB8u;
    SET_GPR_U32(ctx, 31, 0x4BABC0u);
    ctx->pc = 0x4BABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABB8u;
    // 0x4babbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BABB8u, 0x4BABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABC0u;
label_4babc0:
    // 0x4babc0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x4BABC0u;
    {
        const bool branch_taken_0x4babc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BABC0u;
        // 0x4babc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4babc0) {
            ctx->pc = 0x4BACA0u;
            goto label_4baca0;
        }
    }
    ctx->pc = 0x4BABC8u;
label_4babc8:
    // 0x4babc8: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4babc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4babcc: 0xdc2511b0  ld          $a1, 0x11B0($at)
    ctx->pc = 0x4babccu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911B0u));
    // 0x4babd0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BABD0u;
    SET_GPR_U32(ctx, 31, 0x4BABD8u);
    ctx->pc = 0x4BABD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABD0u;
    // 0x4babd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BABD0u, 0x4BABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABD8u;
label_4babd8:
    // 0x4babd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4babd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4babdc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4babdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4babe0: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BABE0u;
    SET_GPR_U32(ctx, 31, 0x4BABE8u);
    ctx->pc = 0x4BABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABE0u;
    // 0x4babe4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BABE0u, 0x4BABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABE8u;
label_4babe8:
    // 0x4babe8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4babe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4babec: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BABECu;
    SET_GPR_U32(ctx, 31, 0x4BABF4u);
    ctx->pc = 0x4BABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BABECu;
    // 0x4babf0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BABECu, 0x4BABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BABF4u;
label_4babf4:
    // 0x4babf4: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4babf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4babf8: 0xdc2511b8  ld          $a1, 0x11B8($at)
    ctx->pc = 0x4babf8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911B8u));
    // 0x4babfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4babfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac00: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAC00u;
    SET_GPR_U32(ctx, 31, 0x4BAC08u);
    ctx->pc = 0x4BAC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC00u;
    // 0x4bac04: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAC00u, 0x4BAC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC08u;
label_4bac08:
    // 0x4bac08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bac08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac0c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4BAC0Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC14u);
    ctx->pc = 0x4BAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC0Cu;
    // 0x4bac10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4BAC0Cu, 0x4BAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC14u;
label_4bac14:
    // 0x4bac14: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4BAC14u;
    {
        const bool branch_taken_0x4bac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAC14u;
        // 0x4bac18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bac14) {
            ctx->pc = 0x4BAC88u;
            goto label_4bac88;
        }
    }
    ctx->pc = 0x4BAC1Cu;
label_4bac1c:
    // 0x4bac1c: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x4BAC1Cu;
    {
        const bool branch_taken_0x4bac1c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4bac1c) {
            ctx->pc = 0x4BAC44u;
            goto label_4bac44;
        }
    }
    ctx->pc = 0x4BAC24u;
    // 0x4bac24: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bac24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac28: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAC28u;
    SET_GPR_U32(ctx, 31, 0x4BAC30u);
    ctx->pc = 0x4BAC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC28u;
    // 0x4bac2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAC28u, 0x4BAC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC30u;
label_4bac30:
    // 0x4bac30: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bac30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac34: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAC34u;
    SET_GPR_U32(ctx, 31, 0x4BAC3Cu);
    ctx->pc = 0x4BAC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC34u;
    // 0x4bac38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAC34u, 0x4BAC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC3Cu;
label_4bac3c:
    // 0x4bac3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x4BAC3Cu;
    {
        const bool branch_taken_0x4bac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BAC3Cu;
        // 0x4bac40: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bac3c) {
            ctx->pc = 0x4BACA0u;
            goto label_4baca0;
        }
    }
    ctx->pc = 0x4BAC44u;
label_4bac44:
    // 0x4bac44: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bac44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bac48: 0xdc2511c0  ld          $a1, 0x11C0($at)
    ctx->pc = 0x4bac48u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911C0u));
    // 0x4bac4c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAC4Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC54u);
    ctx->pc = 0x4BAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC4Cu;
    // 0x4bac50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAC4Cu, 0x4BAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC54u;
label_4bac54:
    // 0x4bac54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4bac54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4bac58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac5c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAC5Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC64u);
    ctx->pc = 0x4BAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC5Cu;
    // 0x4bac60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAC5Cu, 0x4BAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC64u;
label_4bac64:
    // 0x4bac64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4bac64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac68: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAC68u;
    SET_GPR_U32(ctx, 31, 0x4BAC70u);
    ctx->pc = 0x4BAC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC68u;
    // 0x4bac6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAC68u, 0x4BAC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC70u;
label_4bac70:
    // 0x4bac70: 0x3c010059  lui         $at, 0x59
    ctx->pc = 0x4bac70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)89 << 16));
    // 0x4bac74: 0xdc2511c8  ld          $a1, 0x11C8($at)
    ctx->pc = 0x4bac74u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5911C8u));
    // 0x4bac78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4bac78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac7c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4BAC7Cu;
    SET_GPR_U32(ctx, 31, 0x4BAC84u);
    ctx->pc = 0x4BAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC7Cu;
    // 0x4bac80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4BAC7Cu, 0x4BAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC84u;
label_4bac84:
    // 0x4bac84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4bac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bac88:
    // 0x4bac88: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAC88u;
    SET_GPR_U32(ctx, 31, 0x4BAC90u);
    ctx->pc = 0x4BAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC88u;
    // 0x4bac8c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAC88u, 0x4BAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC90u;
label_4bac90:
    // 0x4bac90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4bac90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bac94: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BAC94u;
    SET_GPR_U32(ctx, 31, 0x4BAC9Cu);
    ctx->pc = 0x4BAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4BAC94u;
    // 0x4bac98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BAC94u, 0x4BAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BAC9Cu;
label_4bac9c:
    // 0x4bac9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4bac9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4baca0:
    // 0x4baca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4baca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4baca4:
    // 0x4baca4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4BACA4u;
    SET_GPR_U32(ctx, 31, 0x4BACACu);
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4BACA4u, 0x4BACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4BACACu;
label_4bacac:
    // 0x4bacac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4bacacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4bacb0:
    // 0x4bacb0: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4bacb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4bacb4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x4bacb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4bacb8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x4bacb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4bacbc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x4bacbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4bacc0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4bacc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4bacc4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4bacc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4bacc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4bacc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4baccc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4bacccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bacd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4bacd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bacd4: 0x3e00008  jr          $ra
    ctx->pc = 0x4BACD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4BACD4u;
        // 0x4bacd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4BACD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4BACDCu;
    // 0x4bacdc: 0x0  nop
    ctx->pc = 0x4bacdcu;
    // NOP
    ctx->pc = 0x4bace0u;
}
