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

// Function: sub_00281070
// Address: 0x281070 - 0x281188
void sub_00281070_0x281070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281070_0x281070");
#endif

    switch (ctx->pc) {
        case 0x281070u: goto label_281070;
        case 0x281074u: goto label_281074;
        case 0x281078u: goto label_281078;
        case 0x28107cu: goto label_28107c;
        case 0x281080u: goto label_281080;
        case 0x281084u: goto label_281084;
        case 0x281088u: goto label_281088;
        case 0x28108cu: goto label_28108c;
        case 0x281090u: goto label_281090;
        case 0x281094u: goto label_281094;
        case 0x281098u: goto label_281098;
        case 0x28109cu: goto label_28109c;
        case 0x2810a0u: goto label_2810a0;
        case 0x2810a4u: goto label_2810a4;
        case 0x2810a8u: goto label_2810a8;
        case 0x2810acu: goto label_2810ac;
        case 0x2810b0u: goto label_2810b0;
        case 0x2810b4u: goto label_2810b4;
        case 0x2810b8u: goto label_2810b8;
        case 0x2810bcu: goto label_2810bc;
        case 0x2810c0u: goto label_2810c0;
        case 0x2810c4u: goto label_2810c4;
        case 0x2810c8u: goto label_2810c8;
        case 0x2810ccu: goto label_2810cc;
        case 0x2810d0u: goto label_2810d0;
        case 0x2810d4u: goto label_2810d4;
        case 0x2810d8u: goto label_2810d8;
        case 0x2810dcu: goto label_2810dc;
        case 0x2810e0u: goto label_2810e0;
        case 0x2810e4u: goto label_2810e4;
        case 0x2810e8u: goto label_2810e8;
        case 0x2810ecu: goto label_2810ec;
        case 0x2810f0u: goto label_2810f0;
        case 0x2810f4u: goto label_2810f4;
        case 0x2810f8u: goto label_2810f8;
        case 0x2810fcu: goto label_2810fc;
        case 0x281100u: goto label_281100;
        case 0x281104u: goto label_281104;
        case 0x281108u: goto label_281108;
        case 0x28110cu: goto label_28110c;
        case 0x281110u: goto label_281110;
        case 0x281114u: goto label_281114;
        case 0x281118u: goto label_281118;
        case 0x28111cu: goto label_28111c;
        case 0x281120u: goto label_281120;
        case 0x281124u: goto label_281124;
        case 0x281128u: goto label_281128;
        case 0x28112cu: goto label_28112c;
        case 0x281130u: goto label_281130;
        case 0x281134u: goto label_281134;
        case 0x281138u: goto label_281138;
        case 0x28113cu: goto label_28113c;
        case 0x281140u: goto label_281140;
        case 0x281144u: goto label_281144;
        case 0x281148u: goto label_281148;
        case 0x28114cu: goto label_28114c;
        case 0x281150u: goto label_281150;
        case 0x281154u: goto label_281154;
        case 0x281158u: goto label_281158;
        case 0x28115cu: goto label_28115c;
        case 0x281160u: goto label_281160;
        case 0x281164u: goto label_281164;
        case 0x281168u: goto label_281168;
        case 0x28116cu: goto label_28116c;
        case 0x281170u: goto label_281170;
        case 0x281174u: goto label_281174;
        case 0x281178u: goto label_281178;
        case 0x28117cu: goto label_28117c;
        case 0x281180u: goto label_281180;
        case 0x281184u: goto label_281184;
        default: break;
    }

    ctx->pc = 0x281070u;

label_281070:
    // 0x281070: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x281070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_281074:
    // 0x281074: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x281074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_281078:
    // 0x281078: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x281078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_28107c:
    // 0x28107c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28107cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281080:
    // 0x281080: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x281080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_281084:
    // 0x281084: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x281084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_281088:
    // 0x281088: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x281088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_28108c:
    // 0x28108c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28108cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_281090:
    // 0x281090: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x281090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_281094:
    // 0x281094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x281094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281098:
    // 0x281098: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x281098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_28109c:
    // 0x28109c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x28109cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2810a0:
    // 0x2810a0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2810a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2810a4:
    // 0x2810a4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2810a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2810a8:
    // 0x2810a8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2810a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_2810ac:
    // 0x2810ac: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2810acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2810b0:
    // 0x2810b0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2810b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_2810b4:
    // 0x2810b4: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x2810b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_2810b8:
    // 0x2810b8: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x2810b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_2810bc:
    // 0x2810bc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2810bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2810c0:
    // 0x2810c0: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2810c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_2810c4:
    // 0x2810c4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2810c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_2810c8:
    // 0x2810c8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2810c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_2810cc:
    // 0x2810cc: 0xc0d0aa8  jal         func_342AA0
label_2810d0:
    if (ctx->pc == 0x2810D0u) {
        ctx->pc = 0x2810D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810CCu;
        // 0x2810d0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2810D4u;
        goto label_2810d4;
    }
    ctx->pc = 0x2810CCu;
    SET_GPR_U32(ctx, 31, 0x2810D4u);
    ctx->pc = 0x2810D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810CCu;
    // 0x2810d0: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AA0u, 0x2810CCu, 0x2810D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810D4u;
label_2810d4:
    // 0x2810d4: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2810d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2810d8:
    // 0x2810d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2810dc:
    // 0x2810dc: 0xc086618  jal         func_219860
label_2810e0:
    if (ctx->pc == 0x2810E0u) {
        ctx->pc = 0x2810E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810DCu;
        // 0x2810e0: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2810E4u;
        goto label_2810e4;
    }
    ctx->pc = 0x2810DCu;
    SET_GPR_U32(ctx, 31, 0x2810E4u);
    ctx->pc = 0x2810E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810DCu;
    // 0x2810e0: 0x7fa30100  sq          $v1, 0x100($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2810DCu, 0x2810E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810E4u;
label_2810e4:
    // 0x2810e4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x2810e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2810e8:
    // 0x2810e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2810e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2810ec:
    // 0x2810ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2810ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2810f0:
    // 0x2810f0: 0xc086618  jal         func_219860
label_2810f4:
    if (ctx->pc == 0x2810F4u) {
        ctx->pc = 0x2810F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2810F0u;
        // 0x2810f4: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2810F8u;
        goto label_2810f8;
    }
    ctx->pc = 0x2810F0u;
    SET_GPR_U32(ctx, 31, 0x2810F8u);
    ctx->pc = 0x2810F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2810F0u;
    // 0x2810f4: 0xe7a10108  swc1        $f1, 0x108($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x219860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219860u, 0x2810F0u, 0x2810F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2810F8u;
label_2810f8:
    // 0x2810f8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2810f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2810fc:
    // 0x2810fc: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2810fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_281100:
    // 0x281100: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x281100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_281104:
    // 0x281104: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x281104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_281108:
    // 0x281108: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x281108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28110c:
    // 0x28110c: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x28110cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_281110:
    // 0x281110: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x281110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_281114:
    // 0x281114: 0x40f809  jalr        $v0
label_281118:
    if (ctx->pc == 0x281118u) {
        ctx->pc = 0x281118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281114u;
        // 0x281118: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28111Cu;
        goto label_28111c;
    }
    ctx->pc = 0x281114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28111Cu);
        ctx->pc = 0x281118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281114u;
        // 0x281118: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281114u, 0x28111Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28111Cu;
label_28111c:
    // 0x28111c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x28111cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_281120:
    // 0x281120: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x281120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_281124:
    // 0x281124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x281124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_281128:
    // 0x281128: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x281128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
label_28112c:
    // 0x28112c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x28112cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_281130:
    // 0x281130: 0x8c647198  lw          $a0, 0x7198($v1)
    ctx->pc = 0x281130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29080)));
label_281134:
    // 0x281134: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x281134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281138:
    // 0x281138: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x281138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28113c:
    // 0x28113c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28113cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_281140:
    // 0x281140: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x281140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_281144:
    // 0x281144: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x281144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_281148:
    // 0x281148: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x281148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_28114c:
    // 0x28114c: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x28114cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_281150:
    // 0x281150: 0xc0cfaee  jal         func_33EBB8
label_281154:
    if (ctx->pc == 0x281154u) {
        ctx->pc = 0x281154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281150u;
        // 0x281154: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281158u;
        goto label_281158;
    }
    ctx->pc = 0x281150u;
    SET_GPR_U32(ctx, 31, 0x281158u);
    ctx->pc = 0x281154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281150u;
    // 0x281154: 0xafa00028  sw          $zero, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EBB8u, 0x281150u, 0x281158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281158u;
label_281158:
    // 0x281158: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x281158u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28115c:
    // 0x28115c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281160:
    // 0x281160: 0xc0d0ab8  jal         func_342AE0
label_281164:
    if (ctx->pc == 0x281164u) {
        ctx->pc = 0x281164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281160u;
        // 0x281164: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281168u;
        goto label_281168;
    }
    ctx->pc = 0x281160u;
    SET_GPR_U32(ctx, 31, 0x281168u);
    ctx->pc = 0x281164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281160u;
    // 0x281164: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AE0u, 0x281160u, 0x281168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281168u;
label_281168:
    // 0x281168: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28116c:
    // 0x28116c: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x28116cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_281170:
    // 0x281170: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x281170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_281174:
    // 0x281174: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x281174u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_281178:
    // 0x281178: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x281178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_28117c:
    // 0x28117c: 0x3e00008  jr          $ra
label_281180:
    if (ctx->pc == 0x281180u) {
        ctx->pc = 0x281180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28117Cu;
        // 0x281180: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x281184u;
        goto label_281184;
    }
    ctx->pc = 0x28117Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28117Cu;
        // 0x281180: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28117Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281184u;
label_281184:
    // 0x281184: 0x0  nop
    ctx->pc = 0x281184u;
    // NOP
    ctx->pc = 0x281188u;
}
