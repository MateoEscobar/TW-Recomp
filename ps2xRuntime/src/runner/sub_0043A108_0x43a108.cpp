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

// Function: sub_0043A108
// Address: 0x43a108 - 0x43a738
void sub_0043A108_0x43a108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A108_0x43a108");
#endif

    switch (ctx->pc) {
        case 0x43a190u: goto label_43a190;
        case 0x43a19cu: goto label_43a19c;
        case 0x43a1b4u: goto label_43a1b4;
        case 0x43a1e0u: goto label_43a1e0;
        case 0x43a24cu: goto label_43a24c;
        case 0x43a270u: goto label_43a270;
        case 0x43a288u: goto label_43a288;
        case 0x43a2acu: goto label_43a2ac;
        case 0x43a2d4u: goto label_43a2d4;
        case 0x43a2e0u: goto label_43a2e0;
        case 0x43a2f0u: goto label_43a2f0;
        case 0x43a318u: goto label_43a318;
        case 0x43a328u: goto label_43a328;
        case 0x43a334u: goto label_43a334;
        case 0x43a350u: goto label_43a350;
        case 0x43a374u: goto label_43a374;
        case 0x43a39cu: goto label_43a39c;
        case 0x43a3a8u: goto label_43a3a8;
        case 0x43a3b4u: goto label_43a3b4;
        case 0x43a3ccu: goto label_43a3cc;
        case 0x43a3d8u: goto label_43a3d8;
        case 0x43a3e4u: goto label_43a3e4;
        case 0x43a3f4u: goto label_43a3f4;
        case 0x43a410u: goto label_43a410;
        case 0x43a444u: goto label_43a444;
        case 0x43a46cu: goto label_43a46c;
        case 0x43a478u: goto label_43a478;
        case 0x43a49cu: goto label_43a49c;
        case 0x43a4a8u: goto label_43a4a8;
        case 0x43a4d0u: goto label_43a4d0;
        case 0x43a4f4u: goto label_43a4f4;
        case 0x43a500u: goto label_43a500;
        case 0x43a524u: goto label_43a524;
        case 0x43a530u: goto label_43a530;
        case 0x43a554u: goto label_43a554;
        case 0x43a560u: goto label_43a560;
        case 0x43a56cu: goto label_43a56c;
        case 0x43a584u: goto label_43a584;
        case 0x43a590u: goto label_43a590;
        case 0x43a5a4u: goto label_43a5a4;
        case 0x43a5b0u: goto label_43a5b0;
        case 0x43a5bcu: goto label_43a5bc;
        case 0x43a5e4u: goto label_43a5e4;
        case 0x43a5f4u: goto label_43a5f4;
        case 0x43a600u: goto label_43a600;
        case 0x43a628u: goto label_43a628;
        case 0x43a634u: goto label_43a634;
        case 0x43a640u: goto label_43a640;
        case 0x43a64cu: goto label_43a64c;
        case 0x43a67cu: goto label_43a67c;
        case 0x43a68cu: goto label_43a68c;
        case 0x43a698u: goto label_43a698;
        case 0x43a6c0u: goto label_43a6c0;
        case 0x43a6ccu: goto label_43a6cc;
        case 0x43a6d8u: goto label_43a6d8;
        case 0x43a6e8u: goto label_43a6e8;
        case 0x43a6f4u: goto label_43a6f4;
        case 0x43a704u: goto label_43a704;
        default: break;
    }

    ctx->pc = 0x43a108u;

    // 0x43a108: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x43a108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x43a10c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x43a10cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a110: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x43a110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x43a114: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x43a114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x43a118: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x43a118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x43a11c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x43a11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x43a120: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x43a120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x43a124: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x43a124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x43a128: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x43a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x43a12c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x43a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x43a130: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x43a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x43a134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x43a134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43a138: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x43a138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a13c: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x43a13cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43a140: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x43a140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a144: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x43a144u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x43a148: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x43a148u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x43a14c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a150: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x43a150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x43a154: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x43A154u;
    {
        const bool branch_taken_0x43a154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A154u;
        // 0x43a158: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a154) {
            ctx->pc = 0x43A1C0u;
            goto label_43a1c0;
        }
    }
    ctx->pc = 0x43A15Cu;
    // 0x43a15c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x43a15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x43a160: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a164: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x43a164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x43a168: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x43a168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x43a16c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43A16Cu;
    {
        const bool branch_taken_0x43a16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A16Cu;
        // 0x43a170: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a16c) {
            ctx->pc = 0x43A180u;
            goto label_43a180;
        }
    }
    ctx->pc = 0x43A174u;
    // 0x43a174: 0x10000163  b           . + 4 + (0x163 << 2)
    ctx->pc = 0x43A174u;
    {
        const bool branch_taken_0x43a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A174u;
        // 0x43a178: 0xdc62d170  ld          $v0, -0x2E90($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294955376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a174) {
            ctx->pc = 0x43A704u;
            goto label_43a704;
        }
    }
    ctx->pc = 0x43A17Cu;
    // 0x43a17c: 0x0  nop
    ctx->pc = 0x43a17cu;
    // NOP
label_43a180:
    // 0x43a180: 0x6610008  bgez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x43A180u;
    {
        const bool branch_taken_0x43a180 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x43A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A180u;
        // 0x43a184: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a180) {
            ctx->pc = 0x43A1A4u;
            goto label_43a1a4;
        }
    }
    ctx->pc = 0x43A188u;
    // 0x43a188: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A188u;
    SET_GPR_U32(ctx, 31, 0x43A190u);
    ctx->pc = 0x43A18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A188u;
    // 0x43a18c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A188u, 0x43A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A190u;
label_43a190:
    // 0x43a190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a194: 0xc10b000  jal         func_42C000
    ctx->pc = 0x43A194u;
    SET_GPR_U32(ctx, 31, 0x43A19Cu);
    ctx->pc = 0x43A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A194u;
    // 0x43a198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43A194u, 0x43A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A19Cu;
label_43a19c:
    // 0x43a19c: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x43A19Cu;
    {
        const bool branch_taken_0x43a19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A19Cu;
        // 0x43a1a0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a19c) {
            ctx->pc = 0x43A708u;
            goto label_43a708;
        }
    }
    ctx->pc = 0x43A1A4u;
label_43a1a4:
    // 0x43a1a4: 0x340586a0  ori         $a1, $zero, 0x86A0
    ctx->pc = 0x43a1a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34464);
    // 0x43a1a8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43a1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x43a1ac: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A1ACu;
    SET_GPR_U32(ctx, 31, 0x43A1B4u);
    ctx->pc = 0x43A1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A1ACu;
    // 0x43a1b0: 0x241effca  addiu       $fp, $zero, -0x36 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A1ACu, 0x43A1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A1B4u;
label_43a1b4:
    // 0x43a1b4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x43a1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a1b8: 0x2983f  dsra32      $s3, $v0, 0
    ctx->pc = 0x43a1b8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43a1bc: 0x0  nop
    ctx->pc = 0x43a1bcu;
    // NOP
label_43a1c0:
    // 0x43a1c0: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x43a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x43a1c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x43a1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x43a1c8: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x43a1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x43a1cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x43A1CCu;
    {
        const bool branch_taken_0x43a1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A1CCu;
        // 0x43a1d0: 0x3c10000f  lui         $s0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a1cc) {
            ctx->pc = 0x43A1E8u;
            goto label_43a1e8;
        }
    }
    ctx->pc = 0x43A1D4u;
    // 0x43a1d4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x43a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a1d8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A1D8u;
    SET_GPR_U32(ctx, 31, 0x43A1E0u);
    ctx->pc = 0x43A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A1D8u;
    // 0x43a1dc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A1D8u, 0x43A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A1E0u;
label_43a1e0:
    // 0x43a1e0: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x43A1E0u;
    {
        const bool branch_taken_0x43a1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A1E0u;
        // 0x43a1e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a1e0) {
            ctx->pc = 0x43A708u;
            goto label_43a708;
        }
    }
    ctx->pc = 0x43A1E8u;
label_43a1e8:
    // 0x43a1e8: 0x132503  sra         $a0, $s3, 20
    ctx->pc = 0x43a1e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 19), 20));
    // 0x43a1ec: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x43a1ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x43a1f0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x43a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x43a1f4: 0x34425f64  ori         $v0, $v0, 0x5F64
    ctx->pc = 0x43a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24420);
    // 0x43a1f8: 0x2709824  and         $s3, $s3, $s0
    ctx->pc = 0x43a1f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 16));
    // 0x43a1fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x43a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x43a200: 0x27c3fc01  addiu       $v1, $fp, -0x3FF
    ctx->pc = 0x43a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294966273));
    // 0x43a204: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x43a204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x43a208: 0x64f021  addu        $fp, $v1, $a0
    ctx->pc = 0x43a208u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43a20c: 0x45a024  and         $s4, $v0, $a1
    ctx->pc = 0x43a20cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x43a210: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x43a210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a214: 0x3c023ff0  lui         $v0, 0x3FF0
    ctx->pc = 0x43a214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
    // 0x43a218: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43a218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43a21c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x43a21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x43a220: 0x2821026  xor         $v0, $s4, $v0
    ctx->pc = 0x43a220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
    // 0x43a224: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x43a224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x43a228: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x43a228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x43a22c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43a230: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x43a230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x43a234: 0x141d03  sra         $v1, $s4, 20
    ctx->pc = 0x43a234u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 20), 20));
    // 0x43a238: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x43a238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x43a23c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43a23cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x43a240: 0x3c3f021  addu        $fp, $fp, $v1
    ctx->pc = 0x43a240u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x43a244: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A244u;
    SET_GPR_U32(ctx, 31, 0x43A24Cu);
    ctx->pc = 0x43A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A244u;
    // 0x43a248: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A244u, 0x43A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A24Cu;
label_43a24c:
    // 0x43a24c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x43a24cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a250: 0x26620002  addiu       $v0, $s3, 0x2
    ctx->pc = 0x43a250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x43a254: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x43a254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x43a258: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x43a258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x43a25c: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x43A25Cu;
    {
        const bool branch_taken_0x43a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A25Cu;
        // 0x43a260: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a25c) {
            ctx->pc = 0x43A3BCu;
            goto label_43a3bc;
        }
    }
    ctx->pc = 0x43A264u;
    // 0x43a264: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43a264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a268: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43A268u;
    SET_GPR_U32(ctx, 31, 0x43A270u);
    ctx->pc = 0x43A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A268u;
    // 0x43a26c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43A268u, 0x43A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A270u;
label_43a270:
    // 0x43a270: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x43A270u;
    {
        const bool branch_taken_0x43a270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A270u;
        // 0x43a274: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a270) {
            ctx->pc = 0x43A2E8u;
            goto label_43a2e8;
        }
    }
    ctx->pc = 0x43A278u;
    // 0x43a278: 0x13c00122  beqz        $fp, . + 4 + (0x122 << 2)
    ctx->pc = 0x43A278u;
    {
        const bool branch_taken_0x43a278 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A278u;
        // 0x43a27c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a278) {
            ctx->pc = 0x43A704u;
            goto label_43a704;
        }
    }
    ctx->pc = 0x43A280u;
    // 0x43a280: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43A280u;
    SET_GPR_U32(ctx, 31, 0x43A288u);
    ctx->pc = 0x43A284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A280u;
    // 0x43a284: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43A280u, 0x43A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A288u;
label_43a288:
    // 0x43a288: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x43a288u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a28c: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x43a28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x43a290: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a294: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x43a294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x43a298: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a29c: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x43a29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x43a2a0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a2a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a2a4: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A2A4u;
    SET_GPR_U32(ctx, 31, 0x43A2ACu);
    ctx->pc = 0x43A2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A2A4u;
    // 0x43a2a8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A2A4u, 0x43A2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A2ACu;
label_43a2ac:
    // 0x43a2ac: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x43a2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x43a2b0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a2b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a2b4: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x43a2b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x43a2b8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a2bc: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x43a2bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x43a2c0: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a2c4: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x43a2c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x43a2c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a2cc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A2CCu;
    SET_GPR_U32(ctx, 31, 0x43A2D4u);
    ctx->pc = 0x43A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A2CCu;
    // 0x43a2d0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A2CCu, 0x43A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A2D4u;
label_43a2d4:
    // 0x43a2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a2d8: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A2D8u;
    SET_GPR_U32(ctx, 31, 0x43A2E0u);
    ctx->pc = 0x43A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A2D8u;
    // 0x43a2dc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A2D8u, 0x43A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A2E0u;
label_43a2e0:
    // 0x43a2e0: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x43A2E0u;
    {
        const bool branch_taken_0x43a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A2E0u;
        // 0x43a2e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a2e0) {
            ctx->pc = 0x43A708u;
            goto label_43a708;
        }
    }
    ctx->pc = 0x43A2E8u;
label_43a2e8:
    // 0x43a2e8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A2E8u;
    SET_GPR_U32(ctx, 31, 0x43A2F0u);
    ctx->pc = 0x43A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A2E8u;
    // 0x43a2ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A2E8u, 0x43A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A2F0u;
label_43a2f0:
    // 0x43a2f0: 0x3405ff55  ori         $a1, $zero, 0xFF55
    ctx->pc = 0x43a2f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65365);
    // 0x43a2f4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a2f8: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x43a2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x43a2fc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a300: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x43a300u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x43a304: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a308: 0x34a51555  ori         $a1, $a1, 0x1555
    ctx->pc = 0x43a308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5461);
    // 0x43a30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a310: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A310u;
    SET_GPR_U32(ctx, 31, 0x43A318u);
    ctx->pc = 0x43A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A310u;
    // 0x43a314: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A310u, 0x43A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A318u;
label_43a318:
    // 0x43a318: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x43a318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x43a31c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x43a31cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x43a320: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A320u;
    SET_GPR_U32(ctx, 31, 0x43A328u);
    ctx->pc = 0x43A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A320u;
    // 0x43a324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A320u, 0x43A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A328u;
label_43a328:
    // 0x43a328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a32c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A32Cu;
    SET_GPR_U32(ctx, 31, 0x43A334u);
    ctx->pc = 0x43A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A32Cu;
    // 0x43a330: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A32Cu, 0x43A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A334u;
label_43a334:
    // 0x43a334: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x43A334u;
    {
        const bool branch_taken_0x43a334 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A334u;
        // 0x43a338: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a334) {
            ctx->pc = 0x43A348u;
            goto label_43a348;
        }
    }
    ctx->pc = 0x43A33Cu;
    // 0x43a33c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a340: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x43A340u;
    {
        const bool branch_taken_0x43a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A340u;
        // 0x43a344: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a340) {
            ctx->pc = 0x43A6FCu;
            goto label_43a6fc;
        }
    }
    ctx->pc = 0x43A348u;
label_43a348:
    // 0x43a348: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43A348u;
    SET_GPR_U32(ctx, 31, 0x43A350u);
    ctx->pc = 0x43A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A348u;
    // 0x43a34c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43A348u, 0x43A350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A350u;
label_43a350:
    // 0x43a350: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x43a350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a354: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x43a354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x43a358: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a35c: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x43a35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x43a360: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a364: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x43a364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x43a368: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a36c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A36Cu;
    SET_GPR_U32(ctx, 31, 0x43A374u);
    ctx->pc = 0x43A370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A36Cu;
    // 0x43a370: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A36Cu, 0x43A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A374u;
label_43a374:
    // 0x43a374: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x43a374u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x43a378: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a37c: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x43a37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x43a380: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a384: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x43a384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x43a388: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a38c: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x43a38cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x43a390: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a394: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A394u;
    SET_GPR_U32(ctx, 31, 0x43A39Cu);
    ctx->pc = 0x43A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A394u;
    // 0x43a398: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A394u, 0x43A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A39Cu;
label_43a39c:
    // 0x43a39c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3a0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A3A0u;
    SET_GPR_U32(ctx, 31, 0x43A3A8u);
    ctx->pc = 0x43A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3A0u;
    // 0x43a3a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A3A0u, 0x43A3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3A8u;
label_43a3a8:
    // 0x43a3a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3ac: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A3ACu;
    SET_GPR_U32(ctx, 31, 0x43A3B4u);
    ctx->pc = 0x43A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3ACu;
    // 0x43a3b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A3ACu, 0x43A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3B4u;
label_43a3b4:
    // 0x43a3b4: 0x100000d0  b           . + 4 + (0xD0 << 2)
    ctx->pc = 0x43A3B4u;
    {
        const bool branch_taken_0x43a3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A3B4u;
        // 0x43a3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a3b4) {
            ctx->pc = 0x43A6F8u;
            goto label_43a6f8;
        }
    }
    ctx->pc = 0x43A3BCu;
label_43a3bc:
    // 0x43a3bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x43a3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x43a3c0: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43a3c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x43a3c4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A3C4u;
    SET_GPR_U32(ctx, 31, 0x43A3CCu);
    ctx->pc = 0x43A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3C4u;
    // 0x43a3c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A3C4u, 0x43A3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3CCu;
label_43a3cc:
    // 0x43a3cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43a3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3d0: 0xc10b000  jal         func_42C000
    ctx->pc = 0x43A3D0u;
    SET_GPR_U32(ctx, 31, 0x43A3D8u);
    ctx->pc = 0x43A3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3D0u;
    // 0x43a3d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x43A3D0u, 0x43A3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3D8u;
label_43a3d8:
    // 0x43a3d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x43a3d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3dc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43A3DCu;
    SET_GPR_U32(ctx, 31, 0x43A3E4u);
    ctx->pc = 0x43A3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3DCu;
    // 0x43a3e0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43A3DCu, 0x43A3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3E4u;
label_43a3e4:
    // 0x43a3e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43a3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x43a3e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3ec: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A3ECu;
    SET_GPR_U32(ctx, 31, 0x43A3F4u);
    ctx->pc = 0x43A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A3ECu;
    // 0x43a3f0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A3ECu, 0x43A3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A3F4u;
label_43a3f4:
    // 0x43a3f4: 0x3c03fff9  lui         $v1, 0xFFF9
    ctx->pc = 0x43a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65529 << 16));
    // 0x43a3f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x43a3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a3fc: 0x3463eb86  ori         $v1, $v1, 0xEB86
    ctx->pc = 0x43a3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)60294);
    // 0x43a400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a404: 0x263a021  addu        $s4, $s3, $v1
    ctx->pc = 0x43a404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x43a408: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A408u;
    SET_GPR_U32(ctx, 31, 0x43A410u);
    ctx->pc = 0x43A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A408u;
    // 0x43a40c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A408u, 0x43A410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A410u;
label_43a410:
    // 0x43a410: 0x3c100006  lui         $s0, 0x6
    ctx->pc = 0x43a410u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)6 << 16));
    // 0x43a414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a418: 0x3610b851  ori         $s0, $s0, 0xB851
    ctx->pc = 0x43a418u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)47185);
    // 0x43a41c: 0x3405ff0e  ori         $a1, $zero, 0xFF0E
    ctx->pc = 0x43a41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65294);
    // 0x43a420: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a420u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a424: 0x34a5d04e  ori         $a1, $a1, 0xD04E
    ctx->pc = 0x43a424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53326);
    // 0x43a428: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a42c: 0x34a583c6  ori         $a1, $a1, 0x83C6
    ctx->pc = 0x43a42cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33734);
    // 0x43a430: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a434: 0x34a5069f  ori         $a1, $a1, 0x69F
    ctx->pc = 0x43a434u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1695);
    // 0x43a438: 0x2138023  subu        $s0, $s0, $s3
    ctx->pc = 0x43a438u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x43a43c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A43Cu;
    SET_GPR_U32(ctx, 31, 0x43A444u);
    ctx->pc = 0x43A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A43Cu;
    // 0x43a440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A43Cu, 0x43A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A444u;
label_43a444:
    // 0x43a444: 0x290a025  or          $s4, $s4, $s0
    ctx->pc = 0x43a444u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 16));
    // 0x43a448: 0x3405ff31  ori         $a1, $zero, 0xFF31
    ctx->pc = 0x43a448u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65329);
    // 0x43a44c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a44cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a450: 0x34a5c714  ori         $a1, $a1, 0xC714
    ctx->pc = 0x43a450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50964);
    // 0x43a454: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a458: 0x34a5ec73  ori         $a1, $a1, 0xEC73
    ctx->pc = 0x43a458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)60531);
    // 0x43a45c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a45cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a460: 0x34a518af  ori         $a1, $a1, 0x18AF
    ctx->pc = 0x43a460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6319);
    // 0x43a464: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A464u;
    SET_GPR_U32(ctx, 31, 0x43A46Cu);
    ctx->pc = 0x43A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A464u;
    // 0x43a468: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A464u, 0x43A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A46Cu;
label_43a46c:
    // 0x43a46c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43a46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a470: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A470u;
    SET_GPR_U32(ctx, 31, 0x43A478u);
    ctx->pc = 0x43A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A470u;
    // 0x43a474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A470u, 0x43A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A478u;
label_43a478:
    // 0x43a478: 0x3405ff66  ori         $a1, $zero, 0xFF66
    ctx->pc = 0x43a478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65382);
    // 0x43a47c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a480: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x43a480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x43a484: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a484u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a488: 0x34a5ccbf  ori         $a1, $a1, 0xCCBF
    ctx->pc = 0x43a488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52415);
    // 0x43a48c: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a48cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a490: 0x34a51a04  ori         $a1, $a1, 0x1A04
    ctx->pc = 0x43a490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6660);
    // 0x43a494: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A494u;
    SET_GPR_U32(ctx, 31, 0x43A49Cu);
    ctx->pc = 0x43A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A494u;
    // 0x43a498: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A494u, 0x43A49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A49Cu;
label_43a49c:
    // 0x43a49c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43a49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a4a0: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A4A0u;
    SET_GPR_U32(ctx, 31, 0x43A4A8u);
    ctx->pc = 0x43A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A4A0u;
    // 0x43a4a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A4A0u, 0x43A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A4A8u;
label_43a4a8:
    // 0x43a4a8: 0x3405ff0b  ori         $a1, $zero, 0xFF0B
    ctx->pc = 0x43a4a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65291);
    // 0x43a4ac: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a4acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a4b0: 0x34a5c44b  ori         $a1, $a1, 0xC44B
    ctx->pc = 0x43a4b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50251);
    // 0x43a4b4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a4b8: 0x34a5f9f2  ori         $a1, $a1, 0xF9F2
    ctx->pc = 0x43a4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63986);
    // 0x43a4bc: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a4bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a4c0: 0x34a51244  ori         $a1, $a1, 0x1244
    ctx->pc = 0x43a4c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4676);
    // 0x43a4c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a4c8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A4C8u;
    SET_GPR_U32(ctx, 31, 0x43A4D0u);
    ctx->pc = 0x43A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A4C8u;
    // 0x43a4cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A4C8u, 0x43A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A4D0u;
label_43a4d0:
    // 0x43a4d0: 0x3405ff1d  ori         $a1, $zero, 0xFF1D
    ctx->pc = 0x43a4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65309);
    // 0x43a4d4: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x43a4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x43a4d8: 0x34a5cc92  ori         $a1, $a1, 0xCC92
    ctx->pc = 0x43a4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52370);
    // 0x43a4dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a4e0: 0x34a5d960  ori         $a1, $a1, 0xD960
    ctx->pc = 0x43a4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55648);
    // 0x43a4e4: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x43a4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x43a4e8: 0x34a503de  ori         $a1, $a1, 0x3DE
    ctx->pc = 0x43a4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)990);
    // 0x43a4ec: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A4ECu;
    SET_GPR_U32(ctx, 31, 0x43A4F4u);
    ctx->pc = 0x43A4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A4ECu;
    // 0x43a4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A4ECu, 0x43A4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A4F4u;
label_43a4f4:
    // 0x43a4f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43a4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a4f8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A4F8u;
    SET_GPR_U32(ctx, 31, 0x43A500u);
    ctx->pc = 0x43A4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A4F8u;
    // 0x43a4fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A4F8u, 0x43A500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A500u;
label_43a500:
    // 0x43a500: 0x3405ff49  ori         $a1, $zero, 0xFF49
    ctx->pc = 0x43a500u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65353);
    // 0x43a504: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x43a504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x43a508: 0x34a59249  ori         $a1, $a1, 0x9249
    ctx->pc = 0x43a508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)37449);
    // 0x43a50c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a50cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a510: 0x34a58452  ori         $a1, $a1, 0x8452
    ctx->pc = 0x43a510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)33874);
    // 0x43a514: 0x52af8  dsll        $a1, $a1, 11
    ctx->pc = 0x43a514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    // 0x43a518: 0x34a50359  ori         $a1, $a1, 0x359
    ctx->pc = 0x43a518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)857);
    // 0x43a51c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A51Cu;
    SET_GPR_U32(ctx, 31, 0x43A524u);
    ctx->pc = 0x43A520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A51Cu;
    // 0x43a520: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A51Cu, 0x43A524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A524u;
label_43a524:
    // 0x43a524: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43a524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a528: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A528u;
    SET_GPR_U32(ctx, 31, 0x43A530u);
    ctx->pc = 0x43A52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A528u;
    // 0x43a52c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A528u, 0x43A530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A530u;
label_43a530:
    // 0x43a530: 0x3405ff95  ori         $a1, $zero, 0xFF95
    ctx->pc = 0x43a530u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65429);
    // 0x43a534: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43a534u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x43a538: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x43a538u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x43a53c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a53cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a540: 0x34a5aaaa  ori         $a1, $a1, 0xAAAA
    ctx->pc = 0x43a540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43690);
    // 0x43a544: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x43a544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x43a548: 0x34a51593  ori         $a1, $a1, 0x1593
    ctx->pc = 0x43a548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5523);
    // 0x43a54c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A54Cu;
    SET_GPR_U32(ctx, 31, 0x43A554u);
    ctx->pc = 0x43A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A54Cu;
    // 0x43a550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A54Cu, 0x43A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A554u;
label_43a554:
    // 0x43a554: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x43a554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a558: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A558u;
    SET_GPR_U32(ctx, 31, 0x43A560u);
    ctx->pc = 0x43A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A558u;
    // 0x43a55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A558u, 0x43A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A560u;
label_43a560:
    // 0x43a560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a564: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A564u;
    SET_GPR_U32(ctx, 31, 0x43A56Cu);
    ctx->pc = 0x43A568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A564u;
    // 0x43a568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A564u, 0x43A56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A56Cu;
label_43a56c:
    // 0x43a56c: 0x1a800039  blez        $s4, . + 4 + (0x39 << 2)
    ctx->pc = 0x43A56Cu;
    {
        const bool branch_taken_0x43a56c = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x43A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A56Cu;
        // 0x43a570: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a56c) {
            ctx->pc = 0x43A654u;
            goto label_43a654;
        }
    }
    ctx->pc = 0x43A574u;
    // 0x43a574: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x43a574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x43a578: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x43a578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x43a57c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A57Cu;
    SET_GPR_U32(ctx, 31, 0x43A584u);
    ctx->pc = 0x43A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A57Cu;
    // 0x43a580: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A57Cu, 0x43A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A584u;
label_43a584:
    // 0x43a584: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a588: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A588u;
    SET_GPR_U32(ctx, 31, 0x43A590u);
    ctx->pc = 0x43A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A588u;
    // 0x43a58c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A588u, 0x43A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A590u;
label_43a590:
    // 0x43a590: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x43A590u;
    {
        const bool branch_taken_0x43a590 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x43A594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A590u;
        // 0x43a594: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a590) {
            ctx->pc = 0x43A5C4u;
            goto label_43a5c4;
        }
    }
    ctx->pc = 0x43A598u;
    // 0x43a598: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43a598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a59c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A59Cu;
    SET_GPR_U32(ctx, 31, 0x43A5A4u);
    ctx->pc = 0x43A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A59Cu;
    // 0x43a5a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A59Cu, 0x43A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A5A4u;
label_43a5a4:
    // 0x43a5a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43a5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a5a8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A5A8u;
    SET_GPR_U32(ctx, 31, 0x43A5B0u);
    ctx->pc = 0x43A5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A5A8u;
    // 0x43a5ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A5A8u, 0x43A5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A5B0u;
label_43a5b0:
    // 0x43a5b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a5b4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A5B4u;
    SET_GPR_U32(ctx, 31, 0x43A5BCu);
    ctx->pc = 0x43A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A5B4u;
    // 0x43a5b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A5B4u, 0x43A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A5BCu;
label_43a5bc:
    // 0x43a5bc: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x43A5BCu;
    {
        const bool branch_taken_0x43a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A5BCu;
        // 0x43a5c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a5bc) {
            ctx->pc = 0x43A6F8u;
            goto label_43a6f8;
        }
    }
    ctx->pc = 0x43A5C4u;
label_43a5c4:
    // 0x43a5c4: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x43a5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x43a5c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a5c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a5cc: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x43a5ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x43a5d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a5d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a5d4: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x43a5d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x43a5d8: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a5d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a5dc: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A5DCu;
    SET_GPR_U32(ctx, 31, 0x43A5E4u);
    ctx->pc = 0x43A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A5DCu;
    // 0x43a5e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A5DCu, 0x43A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A5E4u;
label_43a5e4:
    // 0x43a5e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a5e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a5e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43a5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a5ec: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A5ECu;
    SET_GPR_U32(ctx, 31, 0x43A5F4u);
    ctx->pc = 0x43A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A5ECu;
    // 0x43a5f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A5ECu, 0x43A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A5F4u;
label_43a5f4:
    // 0x43a5f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43a5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a5f8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A5F8u;
    SET_GPR_U32(ctx, 31, 0x43A600u);
    ctx->pc = 0x43A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A5F8u;
    // 0x43a5fc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A5F8u, 0x43A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A600u;
label_43a600:
    // 0x43a600: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x43a600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x43a604: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a608: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x43a608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x43a60c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a610: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x43a610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x43a614: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a618: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x43a618u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x43a61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a620: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A620u;
    SET_GPR_U32(ctx, 31, 0x43A628u);
    ctx->pc = 0x43A624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A620u;
    // 0x43a624: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A620u, 0x43A628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A628u;
label_43a628:
    // 0x43a628: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a62c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43A62Cu;
    SET_GPR_U32(ctx, 31, 0x43A634u);
    ctx->pc = 0x43A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A62Cu;
    // 0x43a630: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43A62Cu, 0x43A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A634u;
label_43a634:
    // 0x43a634: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x43a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a638: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A638u;
    SET_GPR_U32(ctx, 31, 0x43A640u);
    ctx->pc = 0x43A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A638u;
    // 0x43a63c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A638u, 0x43A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A640u;
label_43a640:
    // 0x43a640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a644: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A644u;
    SET_GPR_U32(ctx, 31, 0x43A64Cu);
    ctx->pc = 0x43A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A644u;
    // 0x43a648: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A644u, 0x43A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A64Cu;
label_43a64c:
    // 0x43a64c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x43A64Cu;
    {
        const bool branch_taken_0x43a64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A64Cu;
        // 0x43a650: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a64c) {
            ctx->pc = 0x43A6F8u;
            goto label_43a6f8;
        }
    }
    ctx->pc = 0x43A654u;
label_43a654:
    // 0x43a654: 0x13c00022  beqz        $fp, . + 4 + (0x22 << 2)
    ctx->pc = 0x43A654u;
    {
        const bool branch_taken_0x43a654 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A654u;
        // 0x43a658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a654) {
            ctx->pc = 0x43A6E0u;
            goto label_43a6e0;
        }
    }
    ctx->pc = 0x43A65Cu;
    // 0x43a65c: 0x3405ff98  ori         $a1, $zero, 0xFF98
    ctx->pc = 0x43a65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65432);
    // 0x43a660: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a664: 0x34a5b90b  ori         $a1, $a1, 0xB90B
    ctx->pc = 0x43a664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)47371);
    // 0x43a668: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a66c: 0x34a5fb80  ori         $a1, $a1, 0xFB80
    ctx->pc = 0x43a66cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64384);
    // 0x43a670: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a674: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A674u;
    SET_GPR_U32(ctx, 31, 0x43A67Cu);
    ctx->pc = 0x43A678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A674u;
    // 0x43a678: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A674u, 0x43A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A67Cu;
label_43a67c:
    // 0x43a67c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43a67cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a680: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43a680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a684: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A684u;
    SET_GPR_U32(ctx, 31, 0x43A68Cu);
    ctx->pc = 0x43A688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A684u;
    // 0x43a688: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A684u, 0x43A68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A68Cu;
label_43a68c:
    // 0x43a68c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43a68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a690: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A690u;
    SET_GPR_U32(ctx, 31, 0x43A698u);
    ctx->pc = 0x43A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A690u;
    // 0x43a694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A690u, 0x43A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A698u;
label_43a698:
    // 0x43a698: 0x3405f7a8  ori         $a1, $zero, 0xF7A8
    ctx->pc = 0x43a698u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63400);
    // 0x43a69c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a69cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a6a0: 0x34a5e7bc  ori         $a1, $a1, 0xE7BC
    ctx->pc = 0x43a6a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59324);
    // 0x43a6a4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x43a6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x43a6a8: 0x34a5d5e4  ori         $a1, $a1, 0xD5E4
    ctx->pc = 0x43a6a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54756);
    // 0x43a6ac: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x43a6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x43a6b0: 0x34a53c76  ori         $a1, $a1, 0x3C76
    ctx->pc = 0x43a6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15478);
    // 0x43a6b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43a6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a6b8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A6B8u;
    SET_GPR_U32(ctx, 31, 0x43A6C0u);
    ctx->pc = 0x43A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A6B8u;
    // 0x43a6bc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A6B8u, 0x43A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A6C0u;
label_43a6c0:
    // 0x43a6c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43a6c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a6c4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A6C4u;
    SET_GPR_U32(ctx, 31, 0x43A6CCu);
    ctx->pc = 0x43A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A6C4u;
    // 0x43a6c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A6C4u, 0x43A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A6CCu;
label_43a6cc:
    // 0x43a6cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43a6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a6d0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A6D0u;
    SET_GPR_U32(ctx, 31, 0x43A6D8u);
    ctx->pc = 0x43A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A6D0u;
    // 0x43a6d4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A6D0u, 0x43A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A6D8u;
label_43a6d8:
    // 0x43a6d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x43A6D8u;
    {
        const bool branch_taken_0x43a6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A6D8u;
        // 0x43a6dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a6d8) {
            ctx->pc = 0x43A6F8u;
            goto label_43a6f8;
        }
    }
    ctx->pc = 0x43A6E0u;
label_43a6e0:
    // 0x43a6e0: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A6E0u;
    SET_GPR_U32(ctx, 31, 0x43A6E8u);
    ctx->pc = 0x43A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A6E0u;
    // 0x43a6e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A6E0u, 0x43A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A6E8u;
label_43a6e8:
    // 0x43a6e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x43a6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a6ec: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43A6ECu;
    SET_GPR_U32(ctx, 31, 0x43A6F4u);
    ctx->pc = 0x43A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43A6ECu;
    // 0x43a6f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43A6ECu, 0x43A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A6F4u;
label_43a6f4:
    // 0x43a6f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x43a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_43a6f8:
    // 0x43a6f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x43a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43a6fc:
    // 0x43a6fc: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43A6FCu;
    SET_GPR_U32(ctx, 31, 0x43A704u);
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43A6FCu, 0x43A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43A704u;
label_43a704:
    // 0x43a704: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x43a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_43a708:
    // 0x43a708: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x43a708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x43a70c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x43a70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x43a710: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x43a710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x43a714: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43a714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x43a718: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x43a718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x43a71c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x43a71cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43a720: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x43a720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43a724: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x43a724u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a728: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x43A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43A72Cu;
        // 0x43a730: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43A734u;
    // 0x43a734: 0x0  nop
    ctx->pc = 0x43a734u;
    // NOP
    ctx->pc = 0x43a738u;
}
