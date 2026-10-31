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

// Function: sub_0027B058
// Address: 0x27b058 - 0x27b1a0
void sub_0027B058_0x27b058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B058_0x27b058");
#endif

    switch (ctx->pc) {
        case 0x27b0a8u: goto label_27b0a8;
        case 0x27b0e8u: goto label_27b0e8;
        case 0x27b124u: goto label_27b124;
        case 0x27b15cu: goto label_27b15c;
        case 0x27b16cu: goto label_27b16c;
        default: break;
    }

    ctx->pc = 0x27b058u;

    // 0x27b058: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x27b058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x27b05c: 0x3c013f71  lui         $at, 0x3F71
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16241 << 16));
    // 0x27b060: 0x3421463b  ori         $at, $at, 0x463B
    ctx->pc = 0x27b060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17979);
    // 0x27b064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b068: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x27b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x27b06c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x27b06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x27b070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27b070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b074: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x27b074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x27b078: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x27b078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x27b07c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x27b07cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x27b080: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x27b080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27b084: 0xe440096c  swc1        $f0, 0x96C($v0)
    ctx->pc = 0x27b084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x51096Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51096Cu, _value); } while (0); }
    // 0x27b088: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x27b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x27b08c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x27b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x27b090: 0x26110090  addiu       $s1, $s0, 0x90
    ctx->pc = 0x27b090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x27b094: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x27b094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x27b098: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x27b098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x27b09c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x27b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x27b0a0: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x27B0A0u;
    SET_GPR_U32(ctx, 31, 0x27B0A8u);
    ctx->pc = 0x27B0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0A0u;
    // 0x27b0a4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27B0A0u, 0x27B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0A8u;
label_27b0a8:
    // 0x27b0a8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x27b0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27b0ac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x27b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x27b0b0: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x27b0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x27b0b4: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27b0b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27b0b8: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x27b0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x27b0bc: 0x25089568  addiu       $t0, $t0, -0x6A98
    ctx->pc = 0x27b0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294940008));
    // 0x27b0c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27b0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0c4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b0c8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x27b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27b0cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27b0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27b0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27b0d4: 0xe45400d8  swc1        $f20, 0xD8($v0)
    ctx->pc = 0x27b0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 216), bits); }
    // 0x27b0d8: 0x86270002  lh          $a3, 0x2($s1)
    ctx->pc = 0x27b0d8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27b0dc: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27b0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27b0e0: 0xc089d66  jal         func_227598
    ctx->pc = 0x27B0E0u;
    SET_GPR_U32(ctx, 31, 0x27B0E8u);
    ctx->pc = 0x27B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B0E0u;
    // 0x27b0e4: 0xf23821  addu        $a3, $a3, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27B0E0u, 0x27B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B0E8u;
label_27b0e8:
    // 0x27b0e8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27B0E8u;
    {
        const bool branch_taken_0x27b0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B0E8u;
        // 0x27b0ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b0e8) {
            ctx->pc = 0x27B164u;
            goto label_27b164;
        }
    }
    ctx->pc = 0x27B0F0u;
    // 0x27b0f0: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x27b0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x27b0f4: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x27b0f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27b0f8: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x27b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x27b0fc: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x27b100: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x27b104: 0x2529a120  addiu       $t1, $t1, -0x5EE0
    ctx->pc = 0x27b104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294943008));
    // 0x27b108: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x27b108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x27b10c: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x27b10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x27b110: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27b110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b114: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27b118: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b118u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b11c: 0xc0e6ac8  jal         func_39AB20
    ctx->pc = 0x27B11Cu;
    SET_GPR_U32(ctx, 31, 0x27B124u);
    ctx->pc = 0x27B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B11Cu;
    // 0x27b120: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AB20u, 0x27B11Cu, 0x27B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B124u;
label_27b124:
    // 0x27b124: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27B124u;
    {
        const bool branch_taken_0x27b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B124u;
        // 0x27b128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b124) {
            ctx->pc = 0x27B164u;
            goto label_27b164;
        }
    }
    ctx->pc = 0x27B12Cu;
    // 0x27b12c: 0x8e622c7c  lw          $v0, 0x2C7C($s3)
    ctx->pc = 0x27b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11388)));
    // 0x27b130: 0x3c090028  lui         $t1, 0x28
    ctx->pc = 0x27b130u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)40 << 16));
    // 0x27b134: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x27b134u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x27b138: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b13c: 0x8c44084c  lw          $a0, 0x84C($v0)
    ctx->pc = 0x27b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2124)));
    // 0x27b140: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27b140u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27b144: 0x84140  sll         $t0, $t0, 5
    ctx->pc = 0x27b144u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x27b148: 0x2529a070  addiu       $t1, $t1, -0x5F90
    ctx->pc = 0x27b148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294942832));
    // 0x27b14c: 0x1124021  addu        $t0, $t0, $s2
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 18)));
    // 0x27b150: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27b150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b154: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x27B154u;
    SET_GPR_U32(ctx, 31, 0x27B15Cu);
    ctx->pc = 0x27B158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B154u;
    // 0x27b158: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x27B154u, 0x27B15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B15Cu;
label_27b15c:
    // 0x27b15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B15Cu;
    {
        const bool branch_taken_0x27b15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B15Cu;
        // 0x27b160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b15c) {
            ctx->pc = 0x27B170u;
            goto label_27b170;
        }
    }
    ctx->pc = 0x27B164u;
label_27b164:
    // 0x27b164: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27B164u;
    SET_GPR_U32(ctx, 31, 0x27B16Cu);
    ctx->pc = 0x27B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B164u;
    // 0x27b168: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27B164u, 0x27B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B16Cu;
label_27b16c:
    // 0x27b16c: 0x8fb40000  lw          $s4, 0x0($sp)
    ctx->pc = 0x27b16cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27b170:
    // 0x27b170: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x27b170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b174: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x27b174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x27b178: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x27b178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27b17c: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x27b17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27b180: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x27b180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27b184: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x27b184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27b188: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27b18c: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x27b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27b190: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x27b190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27b194: 0x3e00008  jr          $ra
    ctx->pc = 0x27B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B194u;
        // 0x27b198: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B19Cu;
    // 0x27b19c: 0x0  nop
    ctx->pc = 0x27b19cu;
    // NOP
    ctx->pc = 0x27b1a0u;
}
