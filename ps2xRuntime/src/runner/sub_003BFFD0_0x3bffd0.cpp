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

// Function: sub_003BFFD0
// Address: 0x3bffd0 - 0x3c0108
void sub_003BFFD0_0x3bffd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFFD0_0x3bffd0");
#endif

    switch (ctx->pc) {
        case 0x3bffd0u: goto label_3bffd0;
        case 0x3bffd4u: goto label_3bffd4;
        case 0x3bffd8u: goto label_3bffd8;
        case 0x3bffdcu: goto label_3bffdc;
        case 0x3bffe0u: goto label_3bffe0;
        case 0x3bffe4u: goto label_3bffe4;
        case 0x3bffe8u: goto label_3bffe8;
        case 0x3bffecu: goto label_3bffec;
        case 0x3bfff0u: goto label_3bfff0;
        case 0x3bfff4u: goto label_3bfff4;
        case 0x3bfff8u: goto label_3bfff8;
        case 0x3bfffcu: goto label_3bfffc;
        case 0x3c0000u: goto label_3c0000;
        case 0x3c0004u: goto label_3c0004;
        case 0x3c0008u: goto label_3c0008;
        case 0x3c000cu: goto label_3c000c;
        case 0x3c0010u: goto label_3c0010;
        case 0x3c0014u: goto label_3c0014;
        case 0x3c0018u: goto label_3c0018;
        case 0x3c001cu: goto label_3c001c;
        case 0x3c0020u: goto label_3c0020;
        case 0x3c0024u: goto label_3c0024;
        case 0x3c0028u: goto label_3c0028;
        case 0x3c002cu: goto label_3c002c;
        case 0x3c0030u: goto label_3c0030;
        case 0x3c0034u: goto label_3c0034;
        case 0x3c0038u: goto label_3c0038;
        case 0x3c003cu: goto label_3c003c;
        case 0x3c0040u: goto label_3c0040;
        case 0x3c0044u: goto label_3c0044;
        case 0x3c0048u: goto label_3c0048;
        case 0x3c004cu: goto label_3c004c;
        case 0x3c0050u: goto label_3c0050;
        case 0x3c0054u: goto label_3c0054;
        case 0x3c0058u: goto label_3c0058;
        case 0x3c005cu: goto label_3c005c;
        case 0x3c0060u: goto label_3c0060;
        case 0x3c0064u: goto label_3c0064;
        case 0x3c0068u: goto label_3c0068;
        case 0x3c006cu: goto label_3c006c;
        case 0x3c0070u: goto label_3c0070;
        case 0x3c0074u: goto label_3c0074;
        case 0x3c0078u: goto label_3c0078;
        case 0x3c007cu: goto label_3c007c;
        case 0x3c0080u: goto label_3c0080;
        case 0x3c0084u: goto label_3c0084;
        case 0x3c0088u: goto label_3c0088;
        case 0x3c008cu: goto label_3c008c;
        case 0x3c0090u: goto label_3c0090;
        case 0x3c0094u: goto label_3c0094;
        case 0x3c0098u: goto label_3c0098;
        case 0x3c009cu: goto label_3c009c;
        case 0x3c00a0u: goto label_3c00a0;
        case 0x3c00a4u: goto label_3c00a4;
        case 0x3c00a8u: goto label_3c00a8;
        case 0x3c00acu: goto label_3c00ac;
        case 0x3c00b0u: goto label_3c00b0;
        case 0x3c00b4u: goto label_3c00b4;
        case 0x3c00b8u: goto label_3c00b8;
        case 0x3c00bcu: goto label_3c00bc;
        case 0x3c00c0u: goto label_3c00c0;
        case 0x3c00c4u: goto label_3c00c4;
        case 0x3c00c8u: goto label_3c00c8;
        case 0x3c00ccu: goto label_3c00cc;
        case 0x3c00d0u: goto label_3c00d0;
        case 0x3c00d4u: goto label_3c00d4;
        case 0x3c00d8u: goto label_3c00d8;
        case 0x3c00dcu: goto label_3c00dc;
        case 0x3c00e0u: goto label_3c00e0;
        case 0x3c00e4u: goto label_3c00e4;
        case 0x3c00e8u: goto label_3c00e8;
        case 0x3c00ecu: goto label_3c00ec;
        case 0x3c00f0u: goto label_3c00f0;
        case 0x3c00f4u: goto label_3c00f4;
        case 0x3c00f8u: goto label_3c00f8;
        case 0x3c00fcu: goto label_3c00fc;
        case 0x3c0100u: goto label_3c0100;
        case 0x3c0104u: goto label_3c0104;
        default: break;
    }

    ctx->pc = 0x3bffd0u;

label_3bffd0:
    // 0x3bffd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3bffd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3bffd4:
    // 0x3bffd4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3bffd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3bffd8:
    // 0x3bffd8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3bffd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3bffdc:
    // 0x3bffdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bffdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bffe0:
    // 0x3bffe0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3bffe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3bffe4:
    // 0x3bffe4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3bffe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3bffe8:
    // 0x3bffe8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3bffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3bffec:
    // 0x3bffec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3bffecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfff0:
    // 0x3bfff0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bfff0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bfff4:
    // 0x3bfff4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bfff8:
    // 0x3bfff8: 0x40f809  jalr        $v0
label_3bfffc:
    if (ctx->pc == 0x3BFFFCu) {
        ctx->pc = 0x3BFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF8u;
        // 0x3bfffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0000u;
        goto label_3c0000;
    }
    ctx->pc = 0x3BFFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0000u);
        ctx->pc = 0x3BFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF8u;
        // 0x3bfffc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFFF8u, 0x3C0000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0000u;
label_3c0000:
    // 0x3c0000: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3c0000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0004:
    // 0x3c0004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3c0004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0008:
    // 0x3c0008: 0xc0e858c  jal         func_3A1630
label_3c000c:
    if (ctx->pc == 0x3C000Cu) {
        ctx->pc = 0x3C000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0008u;
        // 0x3c000c: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0010u;
        goto label_3c0010;
    }
    ctx->pc = 0x3C0008u;
    SET_GPR_U32(ctx, 31, 0x3C0010u);
    ctx->pc = 0x3C000Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0008u;
    // 0x3c000c: 0x8e650010  lw          $a1, 0x10($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C0008u, 0x3C0010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0010u;
label_3c0010:
    // 0x3c0010: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x3c0010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3c0014:
    // 0x3c0014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0018:
    // 0x3c0018: 0x14620034  bne         $v1, $v0, . + 4 + (0x34 << 2)
label_3c001c:
    if (ctx->pc == 0x3C001Cu) {
        ctx->pc = 0x3C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0018u;
        // 0x3c001c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0020u;
        goto label_3c0020;
    }
    ctx->pc = 0x3C0018u;
    {
        const bool branch_taken_0x3c0018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0018u;
        // 0x3c001c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0018) {
            ctx->pc = 0x3C00ECu;
            goto label_3c00ec;
        }
    }
    ctx->pc = 0x3C0020u;
label_3c0020:
    // 0x3c0020: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3c0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3c0024:
    // 0x3c0024: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
label_3c0028:
    if (ctx->pc == 0x3C0028u) {
        ctx->pc = 0x3C0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0024u;
        // 0x3c0028: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C002Cu;
        goto label_3c002c;
    }
    ctx->pc = 0x3C0024u;
    {
        const bool branch_taken_0x3c0024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3C0028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0024u;
        // 0x3c0028: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0024) {
            ctx->pc = 0x3C00E4u;
            goto label_3c00e4;
        }
    }
    ctx->pc = 0x3C002Cu;
label_3c002c:
    // 0x3c002c: 0x3c013e61  lui         $at, 0x3E61
    ctx->pc = 0x3c002cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15969 << 16));
label_3c0030:
    // 0x3c0030: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x3c0030u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
label_3c0034:
    // 0x3c0034: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3c0034u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c0038:
    // 0x3c0038: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3c0038u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3c003c:
    // 0x3c003c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c003cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3c0040:
    // 0x3c0040: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3c0040u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c0044:
    // 0x3c0044: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3c0044u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3c0048:
    // 0x3c0048: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3c0048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3c004c:
    // 0x3c004c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c004cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0050:
    // 0x3c0050: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3c0050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3c0054:
    // 0x3c0054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0058:
    // 0x3c0058: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3c0058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3c005c:
    // 0x3c005c: 0x26312658  addiu       $s1, $s1, 0x2658
    ctx->pc = 0x3c005cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9816));
label_3c0060:
    // 0x3c0060: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x3c0060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3c0064:
    // 0x3c0064: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3c0064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c0068:
    // 0x3c0068: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3c0068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3c006c:
    // 0x3c006c: 0xc0e90ca  jal         func_3A4328
label_3c0070:
    if (ctx->pc == 0x3C0070u) {
        ctx->pc = 0x3C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C006Cu;
        // 0x3c0070: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0074u;
        goto label_3c0074;
    }
    ctx->pc = 0x3C006Cu;
    SET_GPR_U32(ctx, 31, 0x3C0074u);
    ctx->pc = 0x3C0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C006Cu;
    // 0x3c0070: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3C006Cu, 0x3C0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0074u;
label_3c0074:
    // 0x3c0074: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3c0074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c0078:
    // 0x3c0078: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3c0078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3c007c:
    // 0x3c007c: 0xc136b18  jal         func_4DAC60
label_3c0080:
    if (ctx->pc == 0x3C0080u) {
        ctx->pc = 0x3C0080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C007Cu;
        // 0x3c0080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0084u;
        goto label_3c0084;
    }
    ctx->pc = 0x3C007Cu;
    SET_GPR_U32(ctx, 31, 0x3C0084u);
    ctx->pc = 0x3C0080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C007Cu;
    // 0x3c0080: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3C007Cu, 0x3C0084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0084u;
label_3c0084:
    // 0x3c0084: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3c0084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c0088:
    // 0x3c0088: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x3c0088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3c008c:
    // 0x3c008c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c008cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0090:
    // 0x3c0090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0094:
    // 0x3c0094: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x3c0094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3c0098:
    // 0x3c0098: 0xc0e911e  jal         func_3A4478
label_3c009c:
    if (ctx->pc == 0x3C009Cu) {
        ctx->pc = 0x3C009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0098u;
        // 0x3c009c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00A0u;
        goto label_3c00a0;
    }
    ctx->pc = 0x3C0098u;
    SET_GPR_U32(ctx, 31, 0x3C00A0u);
    ctx->pc = 0x3C009Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0098u;
    // 0x3c009c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3C0098u, 0x3C00A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C00A0u;
label_3c00a0:
    // 0x3c00a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c00a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c00a4:
    // 0x3c00a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3c00a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c00a8:
    // 0x3c00a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c00a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c00ac:
    // 0x3c00ac: 0xc0e94fc  jal         func_3A53F0
label_3c00b0:
    if (ctx->pc == 0x3C00B0u) {
        ctx->pc = 0x3C00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00ACu;
        // 0x3c00b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00B4u;
        goto label_3c00b4;
    }
    ctx->pc = 0x3C00ACu;
    SET_GPR_U32(ctx, 31, 0x3C00B4u);
    ctx->pc = 0x3C00B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C00ACu;
    // 0x3c00b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3C00ACu, 0x3C00B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C00B4u;
label_3c00b4:
    // 0x3c00b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3c00b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3c00b8:
    // 0x3c00b8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3c00b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3c00bc:
    // 0x3c00bc: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3c00bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3c00c0:
    // 0x3c00c0: 0xc0cd4ee  jal         func_3353B8
label_3c00c4:
    if (ctx->pc == 0x3C00C4u) {
        ctx->pc = 0x3C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00C0u;
        // 0x3c00c4: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00C8u;
        goto label_3c00c8;
    }
    ctx->pc = 0x3C00C0u;
    SET_GPR_U32(ctx, 31, 0x3C00C8u);
    ctx->pc = 0x3C00C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C00C0u;
    // 0x3c00c4: 0xae62001c  sw          $v0, 0x1C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3C00C0u, 0x3C00C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C00C8u;
label_3c00c8:
    // 0x3c00c8: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x3c00c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3c00cc:
    // 0x3c00cc: 0xc0e932c  jal         func_3A4CB0
label_3c00d0:
    if (ctx->pc == 0x3C00D0u) {
        ctx->pc = 0x3C00D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00CCu;
        // 0x3c00d0: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00D4u;
        goto label_3c00d4;
    }
    ctx->pc = 0x3C00CCu;
    SET_GPR_U32(ctx, 31, 0x3C00D4u);
    ctx->pc = 0x3C00D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C00CCu;
    // 0x3c00d0: 0x24450019  addiu       $a1, $v0, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CB0u, 0x3C00CCu, 0x3C00D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C00D4u;
label_3c00d4:
    // 0x3c00d4: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3c00d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3c00d8:
    // 0x3c00d8: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x3c00d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
label_3c00dc:
    // 0x3c00dc: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3c00dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3c00e0:
    // 0x3c00e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c00e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c00e4:
    // 0x3c00e4: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x3c00e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_3c00e8:
    // 0x3c00e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3c00e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c00ec:
    // 0x3c00ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c00ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c00f0:
    // 0x3c00f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3c00f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c00f4:
    // 0x3c00f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3c00f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c00f8:
    // 0x3c00f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3c00f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c00fc:
    // 0x3c00fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3c00fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3c0100:
    // 0x3c0100: 0x3e00008  jr          $ra
label_3c0104:
    if (ctx->pc == 0x3C0104u) {
        ctx->pc = 0x3C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0100u;
        // 0x3c0104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0108u;
        goto label_fallthrough_0x3c0100;
    }
    ctx->pc = 0x3C0100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0100u;
        // 0x3c0104: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c0100:
    ctx->pc = 0x3C0108u;
}
