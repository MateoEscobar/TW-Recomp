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

// Function: sub_0043A738
// Address: 0x43a738 - 0x43a8f8
void sub_0043A738_0x43a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A738_0x43a738");
#endif

    switch (ctx->pc) {
        case 0x43a7a8u: goto label_43a7a8;
        case 0x43a7b4u: goto label_43a7b4;
        case 0x43a7ccu: goto label_43a7cc;
        case 0x43a820u: goto label_43a820;
        case 0x43a844u: goto label_43a844;
        case 0x43a86cu: goto label_43a86c;
        case 0x43a894u: goto label_43a894;
        case 0x43a8a0u: goto label_43a8a0;
        case 0x43a8c4u: goto label_43a8c4;
        case 0x43a8e0u: goto label_43a8e0;
        default: break;
    }

    ctx->pc = 0x43a738u;

    // 0x43a738: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x43a738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x43a73c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x43a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x43a740: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x43a740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x43a744: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43a744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a748: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x43a748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x43a74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43a750: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43a750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a754: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x43a754u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43a758: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x43a758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a75c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43a75cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43a760: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x43a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x43a764: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a768: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x43a768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43a76c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43A76Cu;
    {
        const bool branch_taken_0x43a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A76Cu;
        // 0x43a770: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a76c) {
            ctx->pc = 0x43A7D8u;
            goto label_43a7d8;
        }
    }
    ctx->pc = 0x43A774u;
    // 0x43a774: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x43a774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x43a778: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a77c: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x43a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x43a780: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43a780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43a784: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43A784u;
    {
        const bool branch_taken_0x43a784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A784u;
        // 0x43a788: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a784) {
            ctx->pc = 0x43A798u;
            goto label_43a798;
        }
    }
    ctx->pc = 0x43A78Cu;
    // 0x43a78c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x43A78Cu;
    {
        const bool branch_taken_0x43a78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A78Cu;
        // 0x43a790: 0xdc62d190  ld          $v0, -0x2E70($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294955408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a78c) {
            ctx->pc = 0x43A8E0u;
            goto label_43a8e0;
        }
    }
    ctx->pc = 0x43A794u;
    // 0x43a794: 0x0  nop
    ctx->pc = 0x43a794u;
    // NOP
label_43a798:
    // 0x43a798: 0x6010008  bgez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x43A798u;
    {
        const bool branch_taken_0x43a798 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x43A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A798u;
        // 0x43a79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a798) {
            ctx->pc = 0x43A7BCu;
            goto label_43a7bc;
        }
    }
    ctx->pc = 0x43A7A0u;
    // 0x43a7a0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A7A0u;
    SET_GPR_U32(ctx, 31, 0x43A7A8u);
    ctx->pc = 0x43A7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A7A0u;
    // 0x43a7a4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A7A0u, 0x43A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A7A8u;
label_43a7a8:
    // 0x43a7a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a7ac: 0xc10b000  jal         func_42C000
    ctx->pc = 0x43A7ACu;
    SET_GPR_U32(ctx, 31, 0x43A7B4u);
    ctx->pc = 0x43A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A7ACu;
    // 0x43a7b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43A7ACu, 0x43A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A7B4u;
label_43a7b4:
    // 0x43a7b4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x43A7B4u;
    {
        const bool branch_taken_0x43a7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A7B4u;
        // 0x43a7b8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a7b4) {
            ctx->pc = 0x43A8E4u;
            goto label_43a8e4;
        }
    }
    ctx->pc = 0x43A7BCu;
label_43a7bc:
    // 0x43a7bc: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x43a7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x43a7c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43a7c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x43a7c4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A7C4u;
    SET_GPR_U32(ctx, 31, 0x43A7CCu);
    ctx->pc = 0x43A7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A7C4u;
    // 0x43a7c8: 0x2412ffca  addiu       $s2, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A7C4u, 0x43A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A7CCu;
label_43a7cc:
    // 0x43a7cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a7ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a7d0: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x43a7d0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43a7d4: 0x0  nop
    ctx->pc = 0x43a7d4u;
    // NOP
label_43a7d8:
    // 0x43a7d8: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x43a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x43a7dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a7e0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x43a7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x43a7e4: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x43A7E4u;
    {
        const bool branch_taken_0x43a7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43a7e4) {
            ctx->pc = 0x43A7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43A7E4u;
            // 0x43a7e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43A8D0u;
            goto label_43a8d0;
        }
    }
    ctx->pc = 0x43A7ECu;
    // 0x43a7ec: 0x101503  sra         $v0, $s0, 20
    ctx->pc = 0x43a7ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
    // 0x43a7f0: 0x2644fc01  addiu       $a0, $s2, -0x3FF
    ctx->pc = 0x43a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966273));
    // 0x43a7f4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x43a7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x43a7f8: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x43a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x43a7fc: 0x1227c2  srl         $a0, $s2, 31
    ctx->pc = 0x43a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 31));
    // 0x43a800: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x43a800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x43a804: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x43a804u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x43a808: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x43a808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x43a80c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x43a80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x43a810: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x43a810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x43a814: 0x628025  or          $s0, $v1, $v0
    ctx->pc = 0x43a814u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x43a818: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43A818u;
    SET_GPR_U32(ctx, 31, 0x43A820u);
    ctx->pc = 0x43A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A818u;
    // 0x43a81c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43A818u, 0x43A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A820u;
label_43a820:
    // 0x43a820: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x43a820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a824: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x43a824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a828: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x43a828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x43a82c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x43a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x43a830: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x43a830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x43a834: 0x658825  or          $s1, $v1, $a1
    ctx->pc = 0x43a834u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x43a838: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43a838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a83c: 0xc10e842  jal         func_43A108
    ctx->pc = 0x43A83Cu;
    SET_GPR_U32(ctx, 31, 0x43A844u);
    ctx->pc = 0x43A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A83Cu;
    // 0x43a840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43A108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43A108u, 0x43A83Cu, 0x43A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A844u;
label_43a844:
    // 0x43a844: 0x3405f567  ori         $a1, $zero, 0xF567
    ctx->pc = 0x43a844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62823);
    // 0x43a848: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a84c: 0x34a5fbcc  ori         $a1, $a1, 0xFBCC
    ctx->pc = 0x43a84cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64460);
    // 0x43a850: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a850u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a854: 0x34a58f89  ori         $a1, $a1, 0x8F89
    ctx->pc = 0x43a854u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36745);
    // 0x43a858: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a85c: 0x34a50b36  ori         $a1, $a1, 0xB36
    ctx->pc = 0x43a85cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2870);
    // 0x43a860: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a864: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A864u;
    SET_GPR_U32(ctx, 31, 0x43A86Cu);
    ctx->pc = 0x43A868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A864u;
    // 0x43a868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A864u, 0x43A86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A86Cu;
label_43a86c:
    // 0x43a86c: 0x3405ff6f  ori         $a1, $zero, 0xFF6F
    ctx->pc = 0x43a86cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65391);
    // 0x43a870: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x43a870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x43a874: 0x34a5b7b1  ori         $a1, $a1, 0xB7B1
    ctx->pc = 0x43a874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47025);
    // 0x43a878: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a87c: 0x34a5a4dc  ori         $a1, $a1, 0xA4DC
    ctx->pc = 0x43a87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42204);
    // 0x43a880: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x43a880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x43a884: 0x34a5050e  ori         $a1, $a1, 0x50E
    ctx->pc = 0x43a884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1294);
    // 0x43a888: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a88c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A88Cu;
    SET_GPR_U32(ctx, 31, 0x43A894u);
    ctx->pc = 0x43A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A88Cu;
    // 0x43a890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A88Cu, 0x43A894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A894u;
label_43a894:
    // 0x43a894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a898: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A898u;
    SET_GPR_U32(ctx, 31, 0x43A8A0u);
    ctx->pc = 0x43A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A898u;
    // 0x43a89c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A898u, 0x43A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A8A0u;
label_43a8a0:
    // 0x43a8a0: 0x3405ff4d  ori         $a1, $zero, 0xFF4D
    ctx->pc = 0x43a8a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65357);
    // 0x43a8a4: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x43a8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x43a8a8: 0x34a5826a  ori         $a1, $a1, 0x826A
    ctx->pc = 0x43a8a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33386);
    // 0x43a8ac: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x43a8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x43a8b0: 0x34a59f60  ori         $a1, $a1, 0x9F60
    ctx->pc = 0x43a8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40800);
    // 0x43a8b4: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x43a8b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x43a8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a8bc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A8BCu;
    SET_GPR_U32(ctx, 31, 0x43A8C4u);
    ctx->pc = 0x43A8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A8BCu;
    // 0x43a8c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A8BCu, 0x43A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A8C4u;
label_43a8c4:
    // 0x43a8c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a8c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43A8C8u;
    {
        const bool branch_taken_0x43a8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A8C8u;
        // 0x43a8cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a8c8) {
            ctx->pc = 0x43A8D8u;
            goto label_43a8d8;
        }
    }
    ctx->pc = 0x43A8D0u;
label_43a8d0:
    // 0x43a8d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x43a8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a8d4: 0x0  nop
    ctx->pc = 0x43a8d4u;
    // NOP
label_43a8d8:
    // 0x43a8d8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A8D8u;
    SET_GPR_U32(ctx, 31, 0x43A8E0u);
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A8D8u, 0x43A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A8E0u;
label_43a8e0:
    // 0x43a8e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x43a8e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_43a8e4:
    // 0x43a8e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x43a8e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43a8e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x43a8e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43a8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x43A8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A8F0u;
        // 0x43a8f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43A8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43A8F8u;
}
