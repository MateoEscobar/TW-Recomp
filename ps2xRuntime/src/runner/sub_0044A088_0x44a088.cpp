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

// Function: sub_0044A088
// Address: 0x44a088 - 0x44a368
void sub_0044A088_0x44a088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044A088_0x44a088");
#endif

    switch (ctx->pc) {
        case 0x44a0c0u: goto label_44a0c0;
        case 0x44a0c8u: goto label_44a0c8;
        case 0x44a0e4u: goto label_44a0e4;
        case 0x44a184u: goto label_44a184;
        case 0x44a1a8u: goto label_44a1a8;
        case 0x44a1c0u: goto label_44a1c0;
        case 0x44a200u: goto label_44a200;
        case 0x44a288u: goto label_44a288;
        case 0x44a2e4u: goto label_44a2e4;
        case 0x44a308u: goto label_44a308;
        case 0x44a31cu: goto label_44a31c;
        default: break;
    }

    ctx->pc = 0x44a088u;

    // 0x44a088: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x44a088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x44a08c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44a08cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44a090: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44a094: 0x3c150059  lui         $s5, 0x59
    ctx->pc = 0x44a094u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)89 << 16));
    // 0x44a098: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44a09c: 0x3c143000  lui         $s4, 0x3000
    ctx->pc = 0x44a09cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)12288 << 16));
    // 0x44a0a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44a0a4: 0x24130020  addiu       $s3, $zero, 0x20
    ctx->pc = 0x44a0a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x44a0a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a0ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44a0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x44a0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x44a0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44a0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a0bc: 0x0  nop
    ctx->pc = 0x44a0bcu;
    // NOP
label_44a0c0:
    // 0x44a0c0: 0xc1129be  jal         func_44A6F8
    ctx->pc = 0x44A0C0u;
    SET_GPR_U32(ctx, 31, 0x44A0C8u);
    ctx->pc = 0x44A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A0C0u;
    // 0x44a0c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A6F8u, 0x44A0C0u, 0x44A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A0C8u;
label_44a0c8:
    // 0x44a0c8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44a0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0d0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x44a0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x44a0d4: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x44a0d4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x44a0d8: 0xae34082c  sw          $s4, 0x82C($s1)
    ctx->pc = 0x44a0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 20));
    // 0x44a0dc: 0xc1128da  jal         func_44A368
    ctx->pc = 0x44A0DCu;
    SET_GPR_U32(ctx, 31, 0x44A0E4u);
    ctx->pc = 0x44A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A0DCu;
    // 0x44a0e0: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A368u, 0x44A0DCu, 0x44A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A0E4u;
label_44a0e4:
    // 0x44a0e4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x44a0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a0e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x44a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x44a0ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a0f0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x44a0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x44a0f4: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x44a0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x44a0f8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x44a0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10000000
    // 0x44a0fc: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x44a0fcu;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x44a100: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x44a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x44a104: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x44a104u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x44a108: 0x4810006  bgez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x44A108u;
    {
        const bool branch_taken_0x44a108 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x44A10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A108u;
        // 0x44a10c: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a108) {
            ctx->pc = 0x44A124u;
            goto label_44a124;
        }
    }
    ctx->pc = 0x44A110u;
    // 0x44a110: 0x30a2001f  andi        $v0, $a1, 0x1F
    ctx->pc = 0x44a110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x44a114: 0x2621023  subu        $v0, $s3, $v0
    ctx->pc = 0x44a114u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x44a118: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x44a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x44a11c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x44A11Cu;
    {
        const bool branch_taken_0x44a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A11Cu;
        // 0x44a120: 0xae22084c  sw          $v0, 0x84C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a11c) {
            ctx->pc = 0x44A128u;
            goto label_44a128;
        }
    }
    ctx->pc = 0x44A124u;
label_44a124:
    // 0x44a124: 0xae33084c  sw          $s3, 0x84C($s1)
    ctx->pc = 0x44a124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 19));
label_44a128:
    // 0x44a128: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x44a128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x44a12c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x44a12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x44a130: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x44a130u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x44a134: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x44a134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x44a138: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x44a138u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x44a13c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x44a13cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x44a140: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x44a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x44a144: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x44A144u;
    {
        const bool branch_taken_0x44a144 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x44A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A144u;
        // 0x44a148: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a144) {
            ctx->pc = 0x44A1A8u;
            goto label_44a1a8;
        }
    }
    ctx->pc = 0x44A14Cu;
    // 0x44a14c: 0x2e020023  sltiu       $v0, $s0, 0x23
    ctx->pc = 0x44a14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x44a150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A150u;
    {
        const bool branch_taken_0x44a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A150u;
        // 0x44a154: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a150) {
            ctx->pc = 0x44A168u;
            goto label_44a168;
        }
    }
    ctx->pc = 0x44A158u;
    // 0x44a158: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A158u;
    {
        const bool branch_taken_0x44a158 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A158u;
        // 0x44a15c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a158) {
            ctx->pc = 0x44A17Cu;
            goto label_44a17c;
        }
    }
    ctx->pc = 0x44A160u;
    // 0x44a160: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x44A160u;
    {
        const bool branch_taken_0x44a160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A160u;
        // 0x44a164: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a160) {
            ctx->pc = 0x44A1D0u;
            goto label_44a1d0;
        }
    }
    ctx->pc = 0x44A168u;
label_44a168:
    // 0x44a168: 0x56020019  bnel        $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x44A168u;
    {
        const bool branch_taken_0x44a168 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x44a168) {
            ctx->pc = 0x44A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A168u;
            // 0x44a16c: 0x2509021  addu        $s2, $s2, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A1D0u;
            goto label_44a1d0;
        }
    }
    ctx->pc = 0x44A170u;
    // 0x44a170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a174: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x44A174u;
    {
        const bool branch_taken_0x44a174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A174u;
        // 0x44a178: 0x26520021  addiu       $s2, $s2, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a174) {
            ctx->pc = 0x44A1D4u;
            goto label_44a1d4;
        }
    }
    ctx->pc = 0x44A17Cu;
label_44a17c:
    // 0x44a17c: 0xc112974  jal         func_44A5D0
    ctx->pc = 0x44A17Cu;
    SET_GPR_U32(ctx, 31, 0x44A184u);
    ctx->pc = 0x44A180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A17Cu;
    // 0x44a180: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A5D0u, 0x44A17Cu, 0x44A184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A184u;
label_44a184:
    // 0x44a184: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x44a184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a188: 0x8e220858  lw          $v0, 0x858($s1)
    ctx->pc = 0x44a188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x44a18c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44A18Cu;
    {
        const bool branch_taken_0x44a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A18Cu;
        // 0x44a190: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a18c) {
            ctx->pc = 0x44A1B0u;
            goto label_44a1b0;
        }
    }
    ctx->pc = 0x44A194u;
    // 0x44a194: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44A194u;
    {
        const bool branch_taken_0x44a194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x44A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A194u;
        // 0x44a198: 0x26a5e2e0  addiu       $a1, $s5, -0x1D20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959840));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a194) {
            ctx->pc = 0x44A1B4u;
            goto label_44a1b4;
        }
    }
    ctx->pc = 0x44A19Cu;
    // 0x44a19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a1a0: 0xc1129cc  jal         func_44A730
    ctx->pc = 0x44A1A0u;
    SET_GPR_U32(ctx, 31, 0x44A1A8u);
    ctx->pc = 0x44A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A1A0u;
    // 0x44a1a4: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A730u, 0x44A1A0u, 0x44A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A1A8u;
label_44a1a8:
    // 0x44a1a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x44A1A8u;
    {
        const bool branch_taken_0x44a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1A8u;
        // 0x44a1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1a8) {
            ctx->pc = 0x44A1D4u;
            goto label_44a1d4;
        }
    }
    ctx->pc = 0x44A1B0u;
label_44a1b0:
    // 0x44a1b0: 0x26a5e2e0  addiu       $a1, $s5, -0x1D20
    ctx->pc = 0x44a1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959840));
label_44a1b4:
    // 0x44a1b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x44a1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a1b8: 0xc111f8c  jal         func_447E30
    ctx->pc = 0x44A1B8u;
    SET_GPR_U32(ctx, 31, 0x44A1C0u);
    ctx->pc = 0x44A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A1B8u;
    // 0x44a1bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x447E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447E30u, 0x44A1B8u, 0x44A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A1C0u;
label_44a1c0:
    // 0x44a1c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x44a1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a1c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x44a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44a1c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x44A1C8u;
    {
        const bool branch_taken_0x44a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1C8u;
        // 0x44a1cc: 0xae23012c  sw          $v1, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1c8) {
            ctx->pc = 0x44A1DCu;
            goto label_44a1dc;
        }
    }
    ctx->pc = 0x44A1D0u;
label_44a1d0:
    // 0x44a1d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x44a1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44a1d4:
    // 0x44a1d4: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
    ctx->pc = 0x44A1D4u;
    {
        const bool branch_taken_0x44a1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1D4u;
        // 0x44a1d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a1d4) {
            ctx->pc = 0x44A0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a0c0;
        }
    }
    ctx->pc = 0x44A1DCu;
label_44a1dc:
    // 0x44a1dc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x44a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a1e0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44a1e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44a1e4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44a1e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44a1e8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44a1e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44a1ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44a1ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a1f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x44A1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A1F8u;
        // 0x44a1fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A200u;
label_44a200:
    // 0x44a200: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x44a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x44a204: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x44a204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x44a208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x44a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x44a20c: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x44a20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x44a210: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x44a210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x44a214: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x44a214u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x44a218: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x44a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x44a21c: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x44a21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x44a220: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x44a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x44a224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x44a224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a228: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x44a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x44a22c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44a22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44a230: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x44a230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x44a234: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x44a234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44a238: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44a238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x44a23c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x44a23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x44a240: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x44a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44a244: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44a244u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x44a248: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x44a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x44a24c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x44a24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x44a250: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x44A250u;
    {
        const bool branch_taken_0x44a250 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x44a250) {
            ctx->pc = 0x44A254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A250u;
            // 0x44a254: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A338u;
            goto label_44a338;
        }
    }
    ctx->pc = 0x44A258u;
    // 0x44a258: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x44a258u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x44a25c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x44a25cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x44a260: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x44a260u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x44a264: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x44a264u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x44a268: 0x36942020  ori         $s4, $s4, 0x2020
    ctx->pc = 0x44a268u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)8224);
    // 0x44a26c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x44a26cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x44a270: 0x3c173000  lui         $s7, 0x3000
    ctx->pc = 0x44a270u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)12288 << 16));
    // 0x44a274: 0x3c164000  lui         $s6, 0x4000
    ctx->pc = 0x44a274u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16384 << 16));
    // 0x44a278: 0x3673b420  ori         $s3, $s3, 0xB420
    ctx->pc = 0x44a278u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46112);
    // 0x44a27c: 0x36522010  ori         $s2, $s2, 0x2010
    ctx->pc = 0x44a27cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8208);
    // 0x44a280: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x44a280u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x44a284: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x44a284u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_44a288:
    // 0x44a288: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x44a288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x44a28c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x44a28cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x44a290: 0x8e05082c  lw          $a1, 0x82C($s0)
    ctx->pc = 0x44a290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2092)));
    // 0x44a294: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x44a294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x44a298: 0x871024  and         $v0, $a0, $a3
    ctx->pc = 0x44a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x44a29c: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x44a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x44a2a0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x44a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x44a2a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x44a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x44a2a8: 0x3084007f  andi        $a0, $a0, 0x7F
    ctx->pc = 0x44a2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)127);
    // 0x44a2ac: 0x10be0005  beq         $a1, $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A2ACu;
    {
        const bool branch_taken_0x44a2ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 30));
        ctx->pc = 0x44A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2ACu;
        // 0x44a2b0: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2ac) {
            ctx->pc = 0x44A2C4u;
            goto label_44a2c4;
        }
    }
    ctx->pc = 0x44A2B4u;
    // 0x44a2b4: 0x50b70004  beql        $a1, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x44A2B4u;
    {
        const bool branch_taken_0x44a2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 23));
        if (branch_taken_0x44a2b4) {
            ctx->pc = 0x44A2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A2B4u;
            // 0x44a2b8: 0x2c420020  sltiu       $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A2C8u;
            goto label_44a2c8;
        }
    }
    ctx->pc = 0x44A2BCu;
    // 0x44a2bc: 0x54b6000d  bnel        $a1, $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x44A2BCu;
    {
        const bool branch_taken_0x44a2bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 22));
        if (branch_taken_0x44a2bc) {
            ctx->pc = 0x44A2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44A2BCu;
            // 0x44a2c0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44A2F4u;
            goto label_44a2f4;
        }
    }
    ctx->pc = 0x44A2C4u;
label_44a2c4:
    // 0x44a2c4: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x44a2c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_44a2c8:
    // 0x44a2c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44A2C8u;
    {
        const bool branch_taken_0x44a2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2C8u;
        // 0x44a2cc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2c8) {
            ctx->pc = 0x44A2F4u;
            goto label_44a2f4;
        }
    }
    ctx->pc = 0x44A2D0u;
    // 0x44a2d0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x44a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x44a2d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x44A2D4u;
    {
        const bool branch_taken_0x44a2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2D4u;
        // 0x44a2d8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2d4) {
            ctx->pc = 0x44A2F4u;
            goto label_44a2f4;
        }
    }
    ctx->pc = 0x44A2DCu;
    // 0x44a2dc: 0xc1119a0  jal         func_446680
    ctx->pc = 0x44A2DCu;
    SET_GPR_U32(ctx, 31, 0x44A2E4u);
    ctx->pc = 0x44A2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A2DCu;
    // 0x44a2e0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x44A2DCu, 0x44A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A2E4u;
label_44a2e4:
    // 0x44a2e4: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x44a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44a2e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x44A2E8u;
    {
        const bool branch_taken_0x44a2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2E8u;
        // 0x44a2ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2e8) {
            ctx->pc = 0x44A314u;
            goto label_44a314;
        }
    }
    ctx->pc = 0x44A2F0u;
    // 0x44a2f0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x44a2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_44a2f4:
    // 0x44a2f4: 0x28421389  slti        $v0, $v0, 0x1389
    ctx->pc = 0x44a2f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5001) ? 1 : 0);
    // 0x44a2f8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x44A2F8u;
    {
        const bool branch_taken_0x44a2f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A2F8u;
        // 0x44a2fc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a2f8) {
            ctx->pc = 0x44A324u;
            goto label_44a324;
        }
    }
    ctx->pc = 0x44A300u;
    // 0x44a300: 0xc1119a0  jal         func_446680
    ctx->pc = 0x44A300u;
    SET_GPR_U32(ctx, 31, 0x44A308u);
    ctx->pc = 0x44A304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44A300u;
    // 0x44a304: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446680u, 0x44A300u, 0x44A308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A308u;
label_44a308:
    // 0x44a308: 0x8e030878  lw          $v1, 0x878($s0)
    ctx->pc = 0x44a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x44a30c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44A30Cu;
    {
        const bool branch_taken_0x44a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A30Cu;
        // 0x44a310: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a30c) {
            ctx->pc = 0x44A324u;
            goto label_44a324;
        }
    }
    ctx->pc = 0x44A314u;
label_44a314:
    // 0x44a314: 0xc111f1c  jal         func_447C70
    ctx->pc = 0x44A314u;
    SET_GPR_U32(ctx, 31, 0x44A31Cu);
    ctx->pc = 0x447C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x447C70u, 0x44A314u, 0x44A31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44A31Cu;
label_44a31c:
    // 0x44a31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x44A31Cu;
    {
        const bool branch_taken_0x44a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A31Cu;
        // 0x44a320: 0xae00082c  sw          $zero, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44a31c) {
            ctx->pc = 0x44A338u;
            goto label_44a338;
        }
    }
    ctx->pc = 0x44A324u;
label_44a324:
    // 0x44a324: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x44a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x44a328: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x44a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x44a32c: 0x1055ffd6  beq         $v0, $s5, . + 4 + (-0x2A << 2)
    ctx->pc = 0x44A32Cu;
    {
        const bool branch_taken_0x44a32c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x44a32c) {
            ctx->pc = 0x44A288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44a288;
        }
    }
    ctx->pc = 0x44A334u;
    // 0x44a334: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x44a334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
label_44a338:
    // 0x44a338: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x44a338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x44a33c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x44a33cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x44a340: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x44a340u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x44a344: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x44a344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x44a348: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x44a348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44a34c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x44a34cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44a350: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44a350u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44a354: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x44a354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44a358: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x44a358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44a35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x44a35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44a360: 0x3e00008  jr          $ra
    ctx->pc = 0x44A360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44A364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44A360u;
        // 0x44a364: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44A360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44A368u;
}
