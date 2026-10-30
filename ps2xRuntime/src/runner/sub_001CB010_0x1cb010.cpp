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

// Function: sub_001CB010
// Address: 0x1cb010 - 0x1cb190
void sub_001CB010_0x1cb010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB010_0x1cb010");
#endif

    switch (ctx->pc) {
        case 0x1cb0d4u: goto label_1cb0d4;
        case 0x1cb0ecu: goto label_1cb0ec;
        case 0x1cb12cu: goto label_1cb12c;
        case 0x1cb148u: goto label_1cb148;
        default: break;
    }

    ctx->pc = 0x1cb010u;

    // 0x1cb010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cb010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1cb014: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cb014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1cb018: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cb018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1cb01c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cb01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cb020: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb024: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb028: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1cb028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1cb02c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1cb02cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1cb030: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cb030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cb034: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cb034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1cb038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb03c: 0x8c43cdb4  lw          $v1, -0x324C($v0)
    ctx->pc = 0x1cb03cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CDB4u));
    // 0x1cb040: 0xae050050  sw          $a1, 0x50($s0)
    ctx->pc = 0x1cb040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 5));
    // 0x1cb044: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1cb044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1cb048: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1cb048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb04c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1cb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cb050: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1cb050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1cb054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB054u;
    {
        const bool branch_taken_0x1cb054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB054u;
        // 0x1cb058: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb054) {
            ctx->pc = 0x1CB078u;
            goto label_1cb078;
        }
    }
    ctx->pc = 0x1CB05Cu;
    // 0x1cb05c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CB05Cu;
    {
        const bool branch_taken_0x1cb05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB05Cu;
        // 0x1cb060: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb05c) {
            ctx->pc = 0x1CB0B8u;
            goto label_1cb0b8;
        }
    }
    ctx->pc = 0x1CB064u;
    // 0x1cb064: 0x3c013f2b  lui         $at, 0x3F2B
    ctx->pc = 0x1cb064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16171 << 16));
    // 0x1cb068: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1cb068u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1cb06c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb06cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb070: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB070u;
    {
        const bool branch_taken_0x1cb070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB070u;
        // 0x1cb074: 0xe460ea7c  swc1        $f0, -0x1584($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294961788), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb070) {
            ctx->pc = 0x1CB0B8u;
            goto label_1cb0b8;
        }
    }
    ctx->pc = 0x1CB078u;
label_1cb078:
    // 0x1cb078: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1cb078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x1cb07c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB07Cu;
    {
        const bool branch_taken_0x1cb07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB07Cu;
        // 0x1cb080: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb07c) {
            ctx->pc = 0x1CB090u;
            goto label_1cb090;
        }
    }
    ctx->pc = 0x1CB084u;
    // 0x1cb084: 0xe441ea7c  swc1        $f1, -0x1584($v0)
    ctx->pc = 0x1cb084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961788), bits); }
    // 0x1cb088: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CB088u;
    {
        const bool branch_taken_0x1cb088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB088u;
        // 0x1cb08c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb088) {
            ctx->pc = 0x1CB0B8u;
            goto label_1cb0b8;
        }
    }
    ctx->pc = 0x1CB090u;
label_1cb090:
    // 0x1cb090: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x1cb090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1cb094: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1cb094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1cb098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb09c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB09Cu;
    {
        const bool branch_taken_0x1cb09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB09Cu;
        // 0x1cb0a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb09c) {
            ctx->pc = 0x1CB0B0u;
            goto label_1cb0b0;
        }
    }
    ctx->pc = 0x1CB0A4u;
    // 0x1cb0a4: 0x3c013f42  lui         $at, 0x3F42
    ctx->pc = 0x1cb0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16194 << 16));
    // 0x1cb0a8: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x1cb0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x1cb0ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb0b0:
    // 0x1cb0b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cb0b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0b4: 0xe440ea7c  swc1        $f0, -0x1584($v0)
    ctx->pc = 0x1cb0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294961788), bits); }
label_1cb0b8:
    // 0x1cb0b8: 0xc460ea7c  lwc1        $f0, -0x1584($v1)
    ctx->pc = 0x1cb0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cb0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb0c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb0c8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cb0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb0cc: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1CB0CCu;
    SET_GPR_U32(ctx, 31, 0x1CB0D4u);
    ctx->pc = 0x1CB0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0CCu;
    // 0x1cb0d0: 0x26110060  addiu       $s1, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CB0CCu, 0x1CB0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0D4u;
label_1cb0d4:
    // 0x1cb0d4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1cb0d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb0d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb0dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cb0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cb0e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb0e4: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1CB0E4u;
    SET_GPR_U32(ctx, 31, 0x1CB0ECu);
    ctx->pc = 0x1CB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0E4u;
    // 0x1cb0e8: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1CB0E4u, 0x1CB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0ECu;
label_1cb0ec:
    // 0x1cb0ec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cb0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1cb0f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb0f4: 0x8c62d310  lw          $v0, -0x2CF0($v1)
    ctx->pc = 0x1cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1cb0f8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1cb0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1cb0fc: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1cb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1cb100: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1cb104: 0x1444001c  bne         $v0, $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CB104u;
    {
        const bool branch_taken_0x1cb104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB104u;
        // 0x1cb108: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb104) {
            ctx->pc = 0x1CB178u;
            goto label_1cb178;
        }
    }
    ctx->pc = 0x1CB10Cu;
    // 0x1cb10c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1cb110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb114: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb11c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb120: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1cb120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1cb124: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1CB124u;
    SET_GPR_U32(ctx, 31, 0x1CB12Cu);
    ctx->pc = 0x1CB128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB124u;
    // 0x1cb128: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1CB124u, 0x1CB12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB12Cu;
label_1cb12c:
    // 0x1cb12c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x1cb12cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb134: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x1cb138: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cb138u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cb13c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1cb13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb140: 0xc070600  jal         func_1C1800
    ctx->pc = 0x1CB140u;
    SET_GPR_U32(ctx, 31, 0x1CB148u);
    ctx->pc = 0x1CB144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB140u;
    // 0x1cb144: 0x7e220020  sq          $v0, 0x20($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1800u, 0x1CB140u, 0x1CB148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB148u;
label_1cb148:
    // 0x1cb148: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1cb148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1cb14c: 0x24020086  addiu       $v0, $zero, 0x86
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1cb150: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1cb150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1cb154: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x1cb154u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cb158: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x1cb158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb15c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb160: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x1cb160u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1cb164: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x1cb164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1cb168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb16c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x1cb16cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x1cb170: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x1cb170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x1cb174: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x1cb174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_1cb178:
    // 0x1cb178: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1cb178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cb17c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1cb17cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb184: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB184u;
        // 0x1cb188: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB18Cu;
    // 0x1cb18c: 0x0  nop
    ctx->pc = 0x1cb18cu;
    // NOP
    ctx->pc = 0x1cb190u;
}
