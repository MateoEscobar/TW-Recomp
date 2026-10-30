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

// Function: sub_0018D058
// Address: 0x18d058 - 0x18d1d0
void sub_0018D058_0x18d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D058_0x18d058");
#endif

    switch (ctx->pc) {
        case 0x18d058u: goto label_18d058;
        case 0x18d05cu: goto label_18d05c;
        case 0x18d060u: goto label_18d060;
        case 0x18d064u: goto label_18d064;
        case 0x18d068u: goto label_18d068;
        case 0x18d06cu: goto label_18d06c;
        case 0x18d070u: goto label_18d070;
        case 0x18d074u: goto label_18d074;
        case 0x18d078u: goto label_18d078;
        case 0x18d07cu: goto label_18d07c;
        case 0x18d080u: goto label_18d080;
        case 0x18d084u: goto label_18d084;
        case 0x18d088u: goto label_18d088;
        case 0x18d08cu: goto label_18d08c;
        case 0x18d090u: goto label_18d090;
        case 0x18d094u: goto label_18d094;
        case 0x18d098u: goto label_18d098;
        case 0x18d09cu: goto label_18d09c;
        case 0x18d0a0u: goto label_18d0a0;
        case 0x18d0a4u: goto label_18d0a4;
        case 0x18d0a8u: goto label_18d0a8;
        case 0x18d0acu: goto label_18d0ac;
        case 0x18d0b0u: goto label_18d0b0;
        case 0x18d0b4u: goto label_18d0b4;
        case 0x18d0b8u: goto label_18d0b8;
        case 0x18d0bcu: goto label_18d0bc;
        case 0x18d0c0u: goto label_18d0c0;
        case 0x18d0c4u: goto label_18d0c4;
        case 0x18d0c8u: goto label_18d0c8;
        case 0x18d0ccu: goto label_18d0cc;
        case 0x18d0d0u: goto label_18d0d0;
        case 0x18d0d4u: goto label_18d0d4;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d0dcu: goto label_18d0dc;
        case 0x18d0e0u: goto label_18d0e0;
        case 0x18d0e4u: goto label_18d0e4;
        case 0x18d0e8u: goto label_18d0e8;
        case 0x18d0ecu: goto label_18d0ec;
        case 0x18d0f0u: goto label_18d0f0;
        case 0x18d0f4u: goto label_18d0f4;
        case 0x18d0f8u: goto label_18d0f8;
        case 0x18d0fcu: goto label_18d0fc;
        case 0x18d100u: goto label_18d100;
        case 0x18d104u: goto label_18d104;
        case 0x18d108u: goto label_18d108;
        case 0x18d10cu: goto label_18d10c;
        case 0x18d110u: goto label_18d110;
        case 0x18d114u: goto label_18d114;
        case 0x18d118u: goto label_18d118;
        case 0x18d11cu: goto label_18d11c;
        case 0x18d120u: goto label_18d120;
        case 0x18d124u: goto label_18d124;
        case 0x18d128u: goto label_18d128;
        case 0x18d12cu: goto label_18d12c;
        case 0x18d130u: goto label_18d130;
        case 0x18d134u: goto label_18d134;
        case 0x18d138u: goto label_18d138;
        case 0x18d13cu: goto label_18d13c;
        case 0x18d140u: goto label_18d140;
        case 0x18d144u: goto label_18d144;
        case 0x18d148u: goto label_18d148;
        case 0x18d14cu: goto label_18d14c;
        case 0x18d150u: goto label_18d150;
        case 0x18d154u: goto label_18d154;
        case 0x18d158u: goto label_18d158;
        case 0x18d15cu: goto label_18d15c;
        case 0x18d160u: goto label_18d160;
        case 0x18d164u: goto label_18d164;
        case 0x18d168u: goto label_18d168;
        case 0x18d16cu: goto label_18d16c;
        case 0x18d170u: goto label_18d170;
        case 0x18d174u: goto label_18d174;
        case 0x18d178u: goto label_18d178;
        case 0x18d17cu: goto label_18d17c;
        case 0x18d180u: goto label_18d180;
        case 0x18d184u: goto label_18d184;
        case 0x18d188u: goto label_18d188;
        case 0x18d18cu: goto label_18d18c;
        case 0x18d190u: goto label_18d190;
        case 0x18d194u: goto label_18d194;
        case 0x18d198u: goto label_18d198;
        case 0x18d19cu: goto label_18d19c;
        case 0x18d1a0u: goto label_18d1a0;
        case 0x18d1a4u: goto label_18d1a4;
        case 0x18d1a8u: goto label_18d1a8;
        case 0x18d1acu: goto label_18d1ac;
        case 0x18d1b0u: goto label_18d1b0;
        case 0x18d1b4u: goto label_18d1b4;
        case 0x18d1b8u: goto label_18d1b8;
        case 0x18d1bcu: goto label_18d1bc;
        case 0x18d1c0u: goto label_18d1c0;
        case 0x18d1c4u: goto label_18d1c4;
        case 0x18d1c8u: goto label_18d1c8;
        case 0x18d1ccu: goto label_18d1cc;
        default: break;
    }

    ctx->pc = 0x18d058u;

label_18d058:
    // 0x18d058: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18d05c:
    // 0x18d05c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18d05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d060:
    // 0x18d060: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18d060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18d064:
    // 0x18d064: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18d064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18d068:
    // 0x18d068: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x18d068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18d06c:
    // 0x18d06c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x18d06cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_18d070:
    // 0x18d070: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18d070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d074:
    // 0x18d074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18d078:
    // 0x18d078: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x18d078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_18d07c:
    // 0x18d07c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18d07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_18d080:
    // 0x18d080: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18d080u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18d084:
    // 0x18d084: 0x8e3201f8  lw          $s2, 0x1F8($s1)
    ctx->pc = 0x18d084u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 504)));
label_18d088:
    // 0x18d088: 0xae2201f8  sw          $v0, 0x1F8($s1)
    ctx->pc = 0x18d088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
label_18d08c:
    // 0x18d08c: 0xae260204  sw          $a2, 0x204($s1)
    ctx->pc = 0x18d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 6));
label_18d090:
    // 0x18d090: 0x8c85b8b8  lw          $a1, -0x4748($a0)
    ctx->pc = 0x18d090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294949048)));
label_18d094:
    // 0x18d094: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18d098:
    // 0x18d098: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18d09c:
    // 0x18d09c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18d0a0:
    // 0x18d0a0: 0x40f809  jalr        $v0
label_18d0a4:
    if (ctx->pc == 0x18D0A4u) {
        ctx->pc = 0x18D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A0u;
        // 0x18d0a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0A8u;
        goto label_18d0a8;
    }
    ctx->pc = 0x18D0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D0A8u);
        ctx->pc = 0x18D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A0u;
        // 0x18d0a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D0A0u, 0x18D0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18D0A8u;
label_18d0a8:
    // 0x18d0a8: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_18d0ac:
    if (ctx->pc == 0x18D0ACu) {
        ctx->pc = 0x18D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A8u;
        // 0x18d0ac: 0xae220208  sw          $v0, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0B0u;
        goto label_18d0b0;
    }
    ctx->pc = 0x18D0A8u;
    {
        const bool branch_taken_0x18d0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0A8u;
        // 0x18d0ac: 0xae220208  sw          $v0, 0x208($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0a8) {
            ctx->pc = 0x18D108u;
            goto label_18d108;
        }
    }
    ctx->pc = 0x18D0B0u;
label_18d0b0:
    // 0x18d0b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x18d0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d0b4:
    // 0x18d0b4: 0x0  nop
    ctx->pc = 0x18d0b4u;
    // NOP
label_18d0b8:
    // 0x18d0b8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x18d0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d0bc:
    // 0x18d0bc: 0x0  nop
    ctx->pc = 0x18d0bcu;
    // NOP
label_18d0c0:
    // 0x18d0c0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_18d0c4:
    if (ctx->pc == 0x18D0C4u) {
        ctx->pc = 0x18D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C0u;
        // 0x18d0c4: 0xa6200210  sh          $zero, 0x210($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0C8u;
        goto label_18d0c8;
    }
    ctx->pc = 0x18D0C0u;
    {
        const bool branch_taken_0x18d0c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0C0u;
        // 0x18d0c4: 0xa6200210  sh          $zero, 0x210($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 528), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0c0) {
            ctx->pc = 0x18D0F0u;
            goto label_18d0f0;
        }
    }
    ctx->pc = 0x18D0C8u;
label_18d0c8:
    // 0x18d0c8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18d0cc:
    // 0x18d0cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d0d0:
    // 0x18d0d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d0d4:
    // 0x18d0d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d0d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d0d8:
    // 0x18d0d8: 0x0  nop
    ctx->pc = 0x18d0d8u;
    // NOP
label_18d0dc:
    // 0x18d0dc: 0x0  nop
    ctx->pc = 0x18d0dcu;
    // NOP
label_18d0e0:
    // 0x18d0e0: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x18d0e0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_18d0e4:
    // 0x18d0e4: 0xe62101fc  swc1        $f1, 0x1FC($s1)
    ctx->pc = 0x18d0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_18d0e8:
    // 0x18d0e8: 0x10000032  b           . + 4 + (0x32 << 2)
label_18d0ec:
    if (ctx->pc == 0x18D0ECu) {
        ctx->pc = 0x18D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E8u;
        // 0x18d0ec: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D0F0u;
        goto label_18d0f0;
    }
    ctx->pc = 0x18D0E8u;
    {
        const bool branch_taken_0x18d0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D0E8u;
        // 0x18d0ec: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0e8) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D0F0u;
label_18d0f0:
    // 0x18d0f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18d0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18d0f4:
    // 0x18d0f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d0f8:
    // 0x18d0f8: 0xe62101fc  swc1        $f1, 0x1FC($s1)
    ctx->pc = 0x18d0f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_18d0fc:
    // 0x18d0fc: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x18d0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_18d100:
    // 0x18d100: 0x1000002c  b           . + 4 + (0x2C << 2)
label_18d104:
    if (ctx->pc == 0x18D104u) {
        ctx->pc = 0x18D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D100u;
        // 0x18d104: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D108u;
        goto label_18d108;
    }
    ctx->pc = 0x18D100u;
    {
        const bool branch_taken_0x18d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D100u;
        // 0x18d104: 0xae2001f8  sw          $zero, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d100) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D108u;
label_18d108:
    // 0x18d108: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18d108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_18d10c:
    // 0x18d10c: 0x0  nop
    ctx->pc = 0x18d10cu;
    // NOP
label_18d110:
    // 0x18d110: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x18d110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d114:
    // 0x18d114: 0x0  nop
    ctx->pc = 0x18d114u;
    // NOP
label_18d118:
    // 0x18d118: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_18d11c:
    if (ctx->pc == 0x18D11Cu) {
        ctx->pc = 0x18D120u;
        goto label_18d120;
    }
    ctx->pc = 0x18D118u;
    {
        const bool branch_taken_0x18d118 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d118) {
            ctx->pc = 0x18D1A0u;
            goto label_18d1a0;
        }
    }
    ctx->pc = 0x18D120u;
label_18d120:
    // 0x18d120: 0xc62001fc  lwc1        $f0, 0x1FC($s1)
    ctx->pc = 0x18d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18d124:
    // 0x18d124: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x18d124u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d128:
    // 0x18d128: 0x0  nop
    ctx->pc = 0x18d128u;
    // NOP
label_18d12c:
    // 0x18d12c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_18d130:
    if (ctx->pc == 0x18D130u) {
        ctx->pc = 0x18D134u;
        goto label_18d134;
    }
    ctx->pc = 0x18D12Cu;
    {
        const bool branch_taken_0x18d12c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18d12c) {
            ctx->pc = 0x18D154u;
            goto label_18d154;
        }
    }
    ctx->pc = 0x18D134u;
label_18d134:
    // 0x18d134: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d138:
    // 0x18d138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d13c:
    // 0x18d13c: 0xe62201fc  swc1        $f2, 0x1FC($s1)
    ctx->pc = 0x18d13cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_18d140:
    // 0x18d140: 0x0  nop
    ctx->pc = 0x18d140u;
    // NOP
label_18d144:
    // 0x18d144: 0x0  nop
    ctx->pc = 0x18d144u;
    // NOP
label_18d148:
    // 0x18d148: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x18d148u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
label_18d14c:
    // 0x18d14c: 0x10000019  b           . + 4 + (0x19 << 2)
label_18d150:
    if (ctx->pc == 0x18D150u) {
        ctx->pc = 0x18D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D14Cu;
        // 0x18d150: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D154u;
        goto label_18d154;
    }
    ctx->pc = 0x18D14Cu;
    {
        const bool branch_taken_0x18d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D14Cu;
        // 0x18d150: 0xe6200200  swc1        $f0, 0x200($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d14c) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D154u;
label_18d154:
    // 0x18d154: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d158:
    // 0x18d158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18d158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18d15c:
    // 0x18d15c: 0x0  nop
    ctx->pc = 0x18d15cu;
    // NOP
label_18d160:
    // 0x18d160: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18d160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_18d164:
    // 0x18d164: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x18d164u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_18d168:
    // 0x18d168: 0x4602a032  c.eq.s      $f20, $f2
    ctx->pc = 0x18d168u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18d16c:
    // 0x18d16c: 0x0  nop
    ctx->pc = 0x18d16cu;
    // NOP
label_18d170:
    // 0x18d170: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_18d174:
    if (ctx->pc == 0x18D174u) {
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0xe6210200  swc1        $f1, 0x200($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D178u;
        goto label_18d178;
    }
    ctx->pc = 0x18D170u;
    {
        const bool branch_taken_0x18d170 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x18D174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D170u;
        // 0x18d174: 0xe6210200  swc1        $f1, 0x200($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d170) {
            ctx->pc = 0x18D188u;
            goto label_18d188;
        }
    }
    ctx->pc = 0x18D178u;
label_18d178:
    // 0x18d178: 0x0  nop
    ctx->pc = 0x18d178u;
    // NOP
label_18d17c:
    // 0x18d17c: 0x0  nop
    ctx->pc = 0x18d17cu;
    // NOP
label_18d180:
    // 0x18d180: 0x46140803  div.s       $f0, $f1, $f20
    ctx->pc = 0x18d180u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
label_18d184:
    // 0x18d184: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x18d184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_18d188:
    // 0x18d188: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18d18c:
    // 0x18d18c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_18d190:
    if (ctx->pc == 0x18D190u) {
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0xae3201f8  sw          $s2, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D194u;
        goto label_18d194;
    }
    ctx->pc = 0x18D18Cu;
    {
        const bool branch_taken_0x18d18c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x18D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D18Cu;
        // 0x18d190: 0xae3201f8  sw          $s2, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d18c) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D194u;
label_18d194:
    // 0x18d194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18d194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_18d198:
    // 0x18d198: 0x10000006  b           . + 4 + (0x6 << 2)
label_18d19c:
    if (ctx->pc == 0x18D19Cu) {
        ctx->pc = 0x18D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D198u;
        // 0x18d19c: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1A0u;
        goto label_18d1a0;
    }
    ctx->pc = 0x18D198u;
    {
        const bool branch_taken_0x18d198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D198u;
        // 0x18d19c: 0xae2201f8  sw          $v0, 0x1F8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d198) {
            ctx->pc = 0x18D1B4u;
            goto label_18d1b4;
        }
    }
    ctx->pc = 0x18D1A0u;
label_18d1a0:
    // 0x18d1a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18d1a4:
    // 0x18d1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18d1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18d1a8:
    // 0x18d1a8: 0x0  nop
    ctx->pc = 0x18d1a8u;
    // NOP
label_18d1ac:
    // 0x18d1ac: 0xe6200200  swc1        $f0, 0x200($s1)
    ctx->pc = 0x18d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 512), bits); }
label_18d1b0:
    // 0x18d1b0: 0xe62001fc  swc1        $f0, 0x1FC($s1)
    ctx->pc = 0x18d1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 508), bits); }
label_18d1b4:
    // 0x18d1b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18d1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18d1b8:
    // 0x18d1b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18d1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18d1bc:
    // 0x18d1bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18d1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18d1c0:
    // 0x18d1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18d1c4:
    // 0x18d1c4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x18d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18d1c8:
    // 0x18d1c8: 0x3e00008  jr          $ra
label_18d1cc:
    if (ctx->pc == 0x18D1CCu) {
        ctx->pc = 0x18D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C8u;
        // 0x18d1cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18D1D0u;
        goto label_fallthrough_0x18d1c8;
    }
    ctx->pc = 0x18D1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1C8u;
        // 0x18d1cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18d1c8:
    ctx->pc = 0x18D1D0u;
}
