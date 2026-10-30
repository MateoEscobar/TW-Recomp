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

// Function: sub_0010B090
// Address: 0x10b090 - 0x10b1c8
void sub_0010B090_0x10b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B090_0x10b090");
#endif

    switch (ctx->pc) {
        case 0x10b090u: goto label_10b090;
        case 0x10b094u: goto label_10b094;
        case 0x10b098u: goto label_10b098;
        case 0x10b09cu: goto label_10b09c;
        case 0x10b0a0u: goto label_10b0a0;
        case 0x10b0a4u: goto label_10b0a4;
        case 0x10b0a8u: goto label_10b0a8;
        case 0x10b0acu: goto label_10b0ac;
        case 0x10b0b0u: goto label_10b0b0;
        case 0x10b0b4u: goto label_10b0b4;
        case 0x10b0b8u: goto label_10b0b8;
        case 0x10b0bcu: goto label_10b0bc;
        case 0x10b0c0u: goto label_10b0c0;
        case 0x10b0c4u: goto label_10b0c4;
        case 0x10b0c8u: goto label_10b0c8;
        case 0x10b0ccu: goto label_10b0cc;
        case 0x10b0d0u: goto label_10b0d0;
        case 0x10b0d4u: goto label_10b0d4;
        case 0x10b0d8u: goto label_10b0d8;
        case 0x10b0dcu: goto label_10b0dc;
        case 0x10b0e0u: goto label_10b0e0;
        case 0x10b0e4u: goto label_10b0e4;
        case 0x10b0e8u: goto label_10b0e8;
        case 0x10b0ecu: goto label_10b0ec;
        case 0x10b0f0u: goto label_10b0f0;
        case 0x10b0f4u: goto label_10b0f4;
        case 0x10b0f8u: goto label_10b0f8;
        case 0x10b0fcu: goto label_10b0fc;
        case 0x10b100u: goto label_10b100;
        case 0x10b104u: goto label_10b104;
        case 0x10b108u: goto label_10b108;
        case 0x10b10cu: goto label_10b10c;
        case 0x10b110u: goto label_10b110;
        case 0x10b114u: goto label_10b114;
        case 0x10b118u: goto label_10b118;
        case 0x10b11cu: goto label_10b11c;
        case 0x10b120u: goto label_10b120;
        case 0x10b124u: goto label_10b124;
        case 0x10b128u: goto label_10b128;
        case 0x10b12cu: goto label_10b12c;
        case 0x10b130u: goto label_10b130;
        case 0x10b134u: goto label_10b134;
        case 0x10b138u: goto label_10b138;
        case 0x10b13cu: goto label_10b13c;
        case 0x10b140u: goto label_10b140;
        case 0x10b144u: goto label_10b144;
        case 0x10b148u: goto label_10b148;
        case 0x10b14cu: goto label_10b14c;
        case 0x10b150u: goto label_10b150;
        case 0x10b154u: goto label_10b154;
        case 0x10b158u: goto label_10b158;
        case 0x10b15cu: goto label_10b15c;
        case 0x10b160u: goto label_10b160;
        case 0x10b164u: goto label_10b164;
        case 0x10b168u: goto label_10b168;
        case 0x10b16cu: goto label_10b16c;
        case 0x10b170u: goto label_10b170;
        case 0x10b174u: goto label_10b174;
        case 0x10b178u: goto label_10b178;
        case 0x10b17cu: goto label_10b17c;
        case 0x10b180u: goto label_10b180;
        case 0x10b184u: goto label_10b184;
        case 0x10b188u: goto label_10b188;
        case 0x10b18cu: goto label_10b18c;
        case 0x10b190u: goto label_10b190;
        case 0x10b194u: goto label_10b194;
        case 0x10b198u: goto label_10b198;
        case 0x10b19cu: goto label_10b19c;
        case 0x10b1a0u: goto label_10b1a0;
        case 0x10b1a4u: goto label_10b1a4;
        case 0x10b1a8u: goto label_10b1a8;
        case 0x10b1acu: goto label_10b1ac;
        case 0x10b1b0u: goto label_10b1b0;
        case 0x10b1b4u: goto label_10b1b4;
        case 0x10b1b8u: goto label_10b1b8;
        case 0x10b1bcu: goto label_10b1bc;
        case 0x10b1c0u: goto label_10b1c0;
        case 0x10b1c4u: goto label_10b1c4;
        default: break;
    }

    ctx->pc = 0x10b090u;

label_10b090:
    // 0x10b090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_10b094:
    // 0x10b094: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10b094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_10b098:
    // 0x10b098: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_10b09c:
    // 0x10b09c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x10b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_10b0a0:
    // 0x10b0a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10b0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_10b0a4:
    // 0x10b0a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10b0a8:
    // 0x10b0a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10b0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_10b0ac:
    // 0x10b0ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10b0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10b0b0:
    // 0x10b0b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10b0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_10b0b4:
    // 0x10b0b4: 0x244249e0  addiu       $v0, $v0, 0x49E0
    ctx->pc = 0x10b0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18912));
label_10b0b8:
    // 0x10b0b8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_10b0bc:
    // 0x10b0bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x10b0bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_10b0c0:
    // 0x10b0c0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10b0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_10b0c4:
    // 0x10b0c4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10b0c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10b0c8:
    // 0x10b0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10b0cc:
    // 0x10b0cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b0d0:
    // 0x10b0d0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10b0d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_10b0d4:
    // 0x10b0d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b0d8:
    // 0x10b0d8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_10b0dc:
    // 0x10b0dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x10b0dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_10b0e0:
    // 0x10b0e0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x10b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_10b0e4:
    // 0x10b0e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b0e8:
    // 0x10b0e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10b0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_10b0ec:
    // 0x10b0ec: 0x8e2202b8  lw          $v0, 0x2B8($s1)
    ctx->pc = 0x10b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10b0f0:
    // 0x10b0f0: 0xc44003a4  lwc1        $f0, 0x3A4($v0)
    ctx->pc = 0x10b0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10b0f4:
    // 0x10b0f4: 0xc05d420  jal         func_175080
label_10b0f8:
    if (ctx->pc == 0x10B0F8u) {
        ctx->pc = 0x10B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B0F4u;
        // 0x10b0f8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B0FCu;
        goto label_10b0fc;
    }
    ctx->pc = 0x10B0F4u;
    SET_GPR_U32(ctx, 31, 0x10B0FCu);
    ctx->pc = 0x10B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B0F4u;
    // 0x10b0f8: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10B0F4u, 0x10B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B0FCu;
label_10b0fc:
    // 0x10b0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10b100:
    // 0x10b100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b104:
    // 0x10b104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10b104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b108:
    // 0x10b108: 0xc05d420  jal         func_175080
label_10b10c:
    if (ctx->pc == 0x10B10Cu) {
        ctx->pc = 0x10B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B108u;
        // 0x10b10c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B110u;
        goto label_10b110;
    }
    ctx->pc = 0x10B108u;
    SET_GPR_U32(ctx, 31, 0x10B110u);
    ctx->pc = 0x10B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B108u;
    // 0x10b10c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10B108u, 0x10B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B110u;
label_10b110:
    // 0x10b110: 0x8e2502b8  lw          $a1, 0x2B8($s1)
    ctx->pc = 0x10b110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10b114:
    // 0x10b114: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x10b114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10b118:
    // 0x10b118: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10b11c:
    // 0x10b11c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x10b11cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10b120:
    // 0x10b120: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10b120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10b124:
    // 0x10b124: 0x40f809  jalr        $v0
label_10b128:
    if (ctx->pc == 0x10B128u) {
        ctx->pc = 0x10B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B124u;
        // 0x10b128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B12Cu;
        goto label_10b12c;
    }
    ctx->pc = 0x10B124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10B12Cu);
        ctx->pc = 0x10B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B124u;
        // 0x10b128: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B124u, 0x10B12Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B12Cu;
label_10b12c:
    // 0x10b12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10b12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10b130:
    // 0x10b130: 0xc042ed8  jal         func_10BB60
label_10b134:
    if (ctx->pc == 0x10B134u) {
        ctx->pc = 0x10B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B130u;
        // 0x10b134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B138u;
        goto label_10b138;
    }
    ctx->pc = 0x10B130u;
    SET_GPR_U32(ctx, 31, 0x10B138u);
    ctx->pc = 0x10B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B130u;
    // 0x10b134: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10B130u, 0x10B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B138u;
label_10b138:
    // 0x10b138: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_10b13c:
    // 0x10b13c: 0x8e2502b8  lw          $a1, 0x2B8($s1)
    ctx->pc = 0x10b13cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_10b140:
    // 0x10b140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x10b140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10b144:
    // 0x10b144: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x10b144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_10b148:
    // 0x10b148: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x10b148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_10b14c:
    // 0x10b14c: 0x40f809  jalr        $v0
label_10b150:
    if (ctx->pc == 0x10B150u) {
        ctx->pc = 0x10B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B14Cu;
        // 0x10b150: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B154u;
        goto label_10b154;
    }
    ctx->pc = 0x10B14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10B154u);
        ctx->pc = 0x10B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B14Cu;
        // 0x10b150: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B14Cu, 0x10B154u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B154u;
label_10b154:
    // 0x10b154: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10b158:
    // 0x10b158: 0xc042ed8  jal         func_10BB60
label_10b15c:
    if (ctx->pc == 0x10B15Cu) {
        ctx->pc = 0x10B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B158u;
        // 0x10b15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B160u;
        goto label_10b160;
    }
    ctx->pc = 0x10B158u;
    SET_GPR_U32(ctx, 31, 0x10B160u);
    ctx->pc = 0x10B15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B158u;
    // 0x10b15c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10B158u, 0x10B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B160u;
label_10b160:
    // 0x10b160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10b160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_10b164:
    // 0x10b164: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x10b164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_10b168:
    // 0x10b168: 0xc042ca6  jal         func_10B298
label_10b16c:
    if (ctx->pc == 0x10B16Cu) {
        ctx->pc = 0x10B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B168u;
        // 0x10b16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B170u;
        goto label_10b170;
    }
    ctx->pc = 0x10B168u;
    SET_GPR_U32(ctx, 31, 0x10B170u);
    ctx->pc = 0x10B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B168u;
    // 0x10b16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B298u, 0x10B168u, 0x10B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B170u;
label_10b170:
    // 0x10b170: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x10b170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_10b174:
    // 0x10b174: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x10b174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10b178:
    // 0x10b178: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10b178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b17c:
    // 0x10b17c: 0xc041164  jal         func_104590
label_10b180:
    if (ctx->pc == 0x10B180u) {
        ctx->pc = 0x10B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B17Cu;
        // 0x10b180: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B184u;
        goto label_10b184;
    }
    ctx->pc = 0x10B17Cu;
    SET_GPR_U32(ctx, 31, 0x10B184u);
    ctx->pc = 0x10B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B17Cu;
    // 0x10b180: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10B17Cu, 0x10B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B184u;
label_10b184:
    // 0x10b184: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10b184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_10b188:
    // 0x10b188: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10b188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b18c:
    // 0x10b18c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10b18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10b190:
    // 0x10b190: 0xc041164  jal         func_104590
label_10b194:
    if (ctx->pc == 0x10B194u) {
        ctx->pc = 0x10B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B190u;
        // 0x10b194: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B198u;
        goto label_10b198;
    }
    ctx->pc = 0x10B190u;
    SET_GPR_U32(ctx, 31, 0x10B198u);
    ctx->pc = 0x10B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B190u;
    // 0x10b194: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10B190u, 0x10B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B198u;
label_10b198:
    // 0x10b198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10b198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10b19c:
    // 0x10b19c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10b19cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10b1a0:
    // 0x10b1a0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10b1a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10b1a4:
    // 0x10b1a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10b1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10b1a8:
    // 0x10b1a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10b1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10b1ac:
    // 0x10b1ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10b1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10b1b0:
    // 0x10b1b0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10b1b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10b1b4:
    // 0x10b1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10b1b8:
    // 0x10b1b8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10b1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_10b1bc:
    // 0x10b1bc: 0x3e00008  jr          $ra
label_10b1c0:
    if (ctx->pc == 0x10B1C0u) {
        ctx->pc = 0x10B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1BCu;
        // 0x10b1c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B1C4u;
        goto label_10b1c4;
    }
    ctx->pc = 0x10B1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B1BCu;
        // 0x10b1c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B1C4u;
label_10b1c4:
    // 0x10b1c4: 0x0  nop
    ctx->pc = 0x10b1c4u;
    // NOP
    ctx->pc = 0x10b1c8u;
}
