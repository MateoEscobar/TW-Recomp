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

// Function: sub_001990B8
// Address: 0x1990b8 - 0x199208
void sub_001990B8_0x1990b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001990B8_0x1990b8");
#endif

    switch (ctx->pc) {
        case 0x1990b8u: goto label_1990b8;
        case 0x1990bcu: goto label_1990bc;
        case 0x1990c0u: goto label_1990c0;
        case 0x1990c4u: goto label_1990c4;
        case 0x1990c8u: goto label_1990c8;
        case 0x1990ccu: goto label_1990cc;
        case 0x1990d0u: goto label_1990d0;
        case 0x1990d4u: goto label_1990d4;
        case 0x1990d8u: goto label_1990d8;
        case 0x1990dcu: goto label_1990dc;
        case 0x1990e0u: goto label_1990e0;
        case 0x1990e4u: goto label_1990e4;
        case 0x1990e8u: goto label_1990e8;
        case 0x1990ecu: goto label_1990ec;
        case 0x1990f0u: goto label_1990f0;
        case 0x1990f4u: goto label_1990f4;
        case 0x1990f8u: goto label_1990f8;
        case 0x1990fcu: goto label_1990fc;
        case 0x199100u: goto label_199100;
        case 0x199104u: goto label_199104;
        case 0x199108u: goto label_199108;
        case 0x19910cu: goto label_19910c;
        case 0x199110u: goto label_199110;
        case 0x199114u: goto label_199114;
        case 0x199118u: goto label_199118;
        case 0x19911cu: goto label_19911c;
        case 0x199120u: goto label_199120;
        case 0x199124u: goto label_199124;
        case 0x199128u: goto label_199128;
        case 0x19912cu: goto label_19912c;
        case 0x199130u: goto label_199130;
        case 0x199134u: goto label_199134;
        case 0x199138u: goto label_199138;
        case 0x19913cu: goto label_19913c;
        case 0x199140u: goto label_199140;
        case 0x199144u: goto label_199144;
        case 0x199148u: goto label_199148;
        case 0x19914cu: goto label_19914c;
        case 0x199150u: goto label_199150;
        case 0x199154u: goto label_199154;
        case 0x199158u: goto label_199158;
        case 0x19915cu: goto label_19915c;
        case 0x199160u: goto label_199160;
        case 0x199164u: goto label_199164;
        case 0x199168u: goto label_199168;
        case 0x19916cu: goto label_19916c;
        case 0x199170u: goto label_199170;
        case 0x199174u: goto label_199174;
        case 0x199178u: goto label_199178;
        case 0x19917cu: goto label_19917c;
        case 0x199180u: goto label_199180;
        case 0x199184u: goto label_199184;
        case 0x199188u: goto label_199188;
        case 0x19918cu: goto label_19918c;
        case 0x199190u: goto label_199190;
        case 0x199194u: goto label_199194;
        case 0x199198u: goto label_199198;
        case 0x19919cu: goto label_19919c;
        case 0x1991a0u: goto label_1991a0;
        case 0x1991a4u: goto label_1991a4;
        case 0x1991a8u: goto label_1991a8;
        case 0x1991acu: goto label_1991ac;
        case 0x1991b0u: goto label_1991b0;
        case 0x1991b4u: goto label_1991b4;
        case 0x1991b8u: goto label_1991b8;
        case 0x1991bcu: goto label_1991bc;
        case 0x1991c0u: goto label_1991c0;
        case 0x1991c4u: goto label_1991c4;
        case 0x1991c8u: goto label_1991c8;
        case 0x1991ccu: goto label_1991cc;
        case 0x1991d0u: goto label_1991d0;
        case 0x1991d4u: goto label_1991d4;
        case 0x1991d8u: goto label_1991d8;
        case 0x1991dcu: goto label_1991dc;
        case 0x1991e0u: goto label_1991e0;
        case 0x1991e4u: goto label_1991e4;
        case 0x1991e8u: goto label_1991e8;
        case 0x1991ecu: goto label_1991ec;
        case 0x1991f0u: goto label_1991f0;
        case 0x1991f4u: goto label_1991f4;
        case 0x1991f8u: goto label_1991f8;
        case 0x1991fcu: goto label_1991fc;
        case 0x199200u: goto label_199200;
        case 0x199204u: goto label_199204;
        default: break;
    }

    ctx->pc = 0x1990b8u;

label_1990b8:
    // 0x1990b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1990b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1990bc:
    // 0x1990bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1990bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_1990c0:
    // 0x1990c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1990c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1990c4:
    // 0x1990c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1990c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1990c8:
    // 0x1990c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1990c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1990cc:
    // 0x1990cc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1990ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_1990d0:
    // 0x1990d0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1990d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_1990d4:
    // 0x1990d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1990d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1990d8:
    // 0x1990d8: 0xc066e9c  jal         func_19BA70
label_1990dc:
    if (ctx->pc == 0x1990DCu) {
        ctx->pc = 0x1990DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990D8u;
        // 0x1990dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990E0u;
        goto label_1990e0;
    }
    ctx->pc = 0x1990D8u;
    SET_GPR_U32(ctx, 31, 0x1990E0u);
    ctx->pc = 0x1990DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990D8u;
    // 0x1990dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA70u, 0x1990D8u, 0x1990E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990E0u;
label_1990e0:
    // 0x1990e0: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1990e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1990e4:
    // 0x1990e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1990e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1990e8:
    // 0x1990e8: 0x24639050  addiu       $v1, $v1, -0x6FB0
    ctx->pc = 0x1990e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938704));
label_1990ec:
    // 0x1990ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1990ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1990f0:
    // 0x1990f0: 0xc06648c  jal         func_199230
label_1990f4:
    if (ctx->pc == 0x1990F4u) {
        ctx->pc = 0x1990F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1990F0u;
        // 0x1990f4: 0xae430094  sw          $v1, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1990F8u;
        goto label_1990f8;
    }
    ctx->pc = 0x1990F0u;
    SET_GPR_U32(ctx, 31, 0x1990F8u);
    ctx->pc = 0x1990F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1990F0u;
    // 0x1990f4: 0xae430094  sw          $v1, 0x94($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199230u, 0x1990F0u, 0x1990F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1990F8u;
label_1990f8:
    // 0x1990f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1990f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1990fc:
    // 0x1990fc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1990fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_199100:
    // 0x199100: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x199100u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_199104:
    // 0x199104: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x199104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_199108:
    // 0x199108: 0x24a537a8  addiu       $a1, $a1, 0x37A8
    ctx->pc = 0x199108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14248));
label_19910c:
    // 0x19910c: 0x250837b8  addiu       $t0, $t0, 0x37B8
    ctx->pc = 0x19910cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14264));
label_199110:
    // 0x199110: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x199110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_199114:
    // 0x199114: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x199114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_199118:
    // 0x199118: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x199118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19911c:
    // 0x19911c: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x19911cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_199120:
    // 0x199120: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x199120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_199124:
    // 0x199124: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x199124u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199128:
    // 0x199128: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x199128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19912c:
    // 0x19912c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19912cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199130:
    // 0x199130: 0x40f809  jalr        $v0
label_199134:
    if (ctx->pc == 0x199134u) {
        ctx->pc = 0x199134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199130u;
        // 0x199134: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199138u;
        goto label_199138;
    }
    ctx->pc = 0x199130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x199138u);
        ctx->pc = 0x199134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199130u;
        // 0x199134: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199130u, 0x199138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x199138u;
label_199138:
    // 0x199138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x199138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19913c:
    // 0x19913c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_199140:
    if (ctx->pc == 0x199140u) {
        ctx->pc = 0x199144u;
        goto label_199144;
    }
    ctx->pc = 0x19913Cu;
    {
        const bool branch_taken_0x19913c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x19913c) {
            ctx->pc = 0x199150u;
            goto label_199150;
        }
    }
    ctx->pc = 0x199144u;
label_199144:
    // 0x199144: 0xc0686fe  jal         func_1A1BF8
label_199148:
    if (ctx->pc == 0x199148u) {
        ctx->pc = 0x199148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199144u;
        // 0x199148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19914Cu;
        goto label_19914c;
    }
    ctx->pc = 0x199144u;
    SET_GPR_U32(ctx, 31, 0x19914Cu);
    ctx->pc = 0x199148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199144u;
    // 0x199148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BF8u, 0x199144u, 0x19914Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19914Cu;
label_19914c:
    // 0x19914c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19914cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_199150:
    // 0x199150: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x199150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_199154:
    // 0x199154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x199154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_199158:
    // 0x199158: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x199158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19915c:
    // 0x19915c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x19915cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_199160:
    // 0x199160: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x199160u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_199164:
    // 0x199164: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x199164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_199168:
    // 0x199168: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x199168u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_19916c:
    // 0x19916c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x19916cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_199170:
    // 0x199170: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199170u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_199174:
    // 0x199174: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x199174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_199178:
    // 0x199178: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x199178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19917c:
    // 0x19917c: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x19917cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_199180:
    // 0x199180: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x199180u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_199184:
    // 0x199184: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x199184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_199188:
    // 0x199188: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x199188u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_19918c:
    // 0x19918c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_199190:
    // 0x199190: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x199190u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_199194:
    // 0x199194: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x199194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_199198:
    // 0x199198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19919c:
    // 0x19919c: 0x8e4600a0  lw          $a2, 0xA0($s2)
    ctx->pc = 0x19919cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1991a0:
    // 0x1991a0: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1991a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1991a4:
    // 0x1991a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1991a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_1991a8:
    // 0x1991a8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1991a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1991ac:
    // 0x1991ac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1991acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_1991b0:
    // 0x1991b0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1991b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1991b4:
    // 0x1991b4: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1991b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1991b8:
    // 0x1991b8: 0x40f809  jalr        $v0
label_1991bc:
    if (ctx->pc == 0x1991BCu) {
        ctx->pc = 0x1991BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991B8u;
        // 0x1991bc: 0x8e49009c  lw          $t1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991C0u;
        goto label_1991c0;
    }
    ctx->pc = 0x1991B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1991C0u);
        ctx->pc = 0x1991BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991B8u;
        // 0x1991bc: 0x8e49009c  lw          $t1, 0x9C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1991B8u, 0x1991C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1991C0u;
label_1991c0:
    // 0x1991c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1991c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1991c4:
    // 0x1991c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1991c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1991c8:
    // 0x1991c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1991cc:
    // 0x1991cc: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1991ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1991d0:
    // 0x1991d0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1991d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1991d4:
    // 0x1991d4: 0x40f809  jalr        $v0
label_1991d8:
    if (ctx->pc == 0x1991D8u) {
        ctx->pc = 0x1991D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991D4u;
        // 0x1991d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991DCu;
        goto label_1991dc;
    }
    ctx->pc = 0x1991D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1991DCu);
        ctx->pc = 0x1991D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991D4u;
        // 0x1991d8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1991D4u, 0x1991DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1991DCu;
label_1991dc:
    // 0x1991dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1991dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1991e0:
    // 0x1991e0: 0xc066eec  jal         func_19BBB0
label_1991e4:
    if (ctx->pc == 0x1991E4u) {
        ctx->pc = 0x1991E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991E0u;
        // 0x1991e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1991E8u;
        goto label_1991e8;
    }
    ctx->pc = 0x1991E0u;
    SET_GPR_U32(ctx, 31, 0x1991E8u);
    ctx->pc = 0x1991E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1991E0u;
    // 0x1991e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBB0u, 0x1991E0u, 0x1991E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1991E8u;
label_1991e8:
    // 0x1991e8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1991e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1991ec:
    // 0x1991ec: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1991ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1991f0:
    // 0x1991f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1991f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1991f4:
    // 0x1991f4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1991f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1991f8:
    // 0x1991f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1991f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1991fc:
    // 0x1991fc: 0x3e00008  jr          $ra
label_199200:
    if (ctx->pc == 0x199200u) {
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x199204u;
        goto label_199204;
    }
    ctx->pc = 0x1991FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991FCu;
        // 0x199200: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1991FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199204u;
label_199204:
    // 0x199204: 0x0  nop
    ctx->pc = 0x199204u;
    // NOP
    ctx->pc = 0x199208u;
}
