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

// Function: sub_0023CF88
// Address: 0x23cf88 - 0x23d2b8
void sub_0023CF88_0x23cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CF88_0x23cf88");
#endif

    switch (ctx->pc) {
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfc0u: goto label_23cfc0;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfc8u: goto label_23cfc8;
        case 0x23cfccu: goto label_23cfcc;
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23cfd4u: goto label_23cfd4;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe0u: goto label_23cfe0;
        case 0x23cfe4u: goto label_23cfe4;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cfecu: goto label_23cfec;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff4u: goto label_23cff4;
        case 0x23cff8u: goto label_23cff8;
        case 0x23cffcu: goto label_23cffc;
        case 0x23d000u: goto label_23d000;
        case 0x23d004u: goto label_23d004;
        case 0x23d008u: goto label_23d008;
        case 0x23d00cu: goto label_23d00c;
        case 0x23d010u: goto label_23d010;
        case 0x23d014u: goto label_23d014;
        case 0x23d018u: goto label_23d018;
        case 0x23d01cu: goto label_23d01c;
        case 0x23d020u: goto label_23d020;
        case 0x23d024u: goto label_23d024;
        case 0x23d028u: goto label_23d028;
        case 0x23d02cu: goto label_23d02c;
        case 0x23d030u: goto label_23d030;
        case 0x23d034u: goto label_23d034;
        case 0x23d038u: goto label_23d038;
        case 0x23d03cu: goto label_23d03c;
        case 0x23d040u: goto label_23d040;
        case 0x23d044u: goto label_23d044;
        case 0x23d048u: goto label_23d048;
        case 0x23d04cu: goto label_23d04c;
        case 0x23d050u: goto label_23d050;
        case 0x23d054u: goto label_23d054;
        case 0x23d058u: goto label_23d058;
        case 0x23d05cu: goto label_23d05c;
        case 0x23d060u: goto label_23d060;
        case 0x23d064u: goto label_23d064;
        case 0x23d068u: goto label_23d068;
        case 0x23d06cu: goto label_23d06c;
        case 0x23d070u: goto label_23d070;
        case 0x23d074u: goto label_23d074;
        case 0x23d078u: goto label_23d078;
        case 0x23d07cu: goto label_23d07c;
        case 0x23d080u: goto label_23d080;
        case 0x23d084u: goto label_23d084;
        case 0x23d088u: goto label_23d088;
        case 0x23d08cu: goto label_23d08c;
        case 0x23d090u: goto label_23d090;
        case 0x23d094u: goto label_23d094;
        case 0x23d098u: goto label_23d098;
        case 0x23d09cu: goto label_23d09c;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0a4u: goto label_23d0a4;
        case 0x23d0a8u: goto label_23d0a8;
        case 0x23d0acu: goto label_23d0ac;
        case 0x23d0b0u: goto label_23d0b0;
        case 0x23d0b4u: goto label_23d0b4;
        case 0x23d0b8u: goto label_23d0b8;
        case 0x23d0bcu: goto label_23d0bc;
        case 0x23d0c0u: goto label_23d0c0;
        case 0x23d0c4u: goto label_23d0c4;
        case 0x23d0c8u: goto label_23d0c8;
        case 0x23d0ccu: goto label_23d0cc;
        case 0x23d0d0u: goto label_23d0d0;
        case 0x23d0d4u: goto label_23d0d4;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d0dcu: goto label_23d0dc;
        case 0x23d0e0u: goto label_23d0e0;
        case 0x23d0e4u: goto label_23d0e4;
        case 0x23d0e8u: goto label_23d0e8;
        case 0x23d0ecu: goto label_23d0ec;
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d0f8u: goto label_23d0f8;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d100u: goto label_23d100;
        case 0x23d104u: goto label_23d104;
        case 0x23d108u: goto label_23d108;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d110u: goto label_23d110;
        case 0x23d114u: goto label_23d114;
        case 0x23d118u: goto label_23d118;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d120u: goto label_23d120;
        case 0x23d124u: goto label_23d124;
        case 0x23d128u: goto label_23d128;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d130u: goto label_23d130;
        case 0x23d134u: goto label_23d134;
        case 0x23d138u: goto label_23d138;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d140u: goto label_23d140;
        case 0x23d144u: goto label_23d144;
        case 0x23d148u: goto label_23d148;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d150u: goto label_23d150;
        case 0x23d154u: goto label_23d154;
        case 0x23d158u: goto label_23d158;
        case 0x23d15cu: goto label_23d15c;
        case 0x23d160u: goto label_23d160;
        case 0x23d164u: goto label_23d164;
        case 0x23d168u: goto label_23d168;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d170u: goto label_23d170;
        case 0x23d174u: goto label_23d174;
        case 0x23d178u: goto label_23d178;
        case 0x23d17cu: goto label_23d17c;
        case 0x23d180u: goto label_23d180;
        case 0x23d184u: goto label_23d184;
        case 0x23d188u: goto label_23d188;
        case 0x23d18cu: goto label_23d18c;
        case 0x23d190u: goto label_23d190;
        case 0x23d194u: goto label_23d194;
        case 0x23d198u: goto label_23d198;
        case 0x23d19cu: goto label_23d19c;
        case 0x23d1a0u: goto label_23d1a0;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1a8u: goto label_23d1a8;
        case 0x23d1acu: goto label_23d1ac;
        case 0x23d1b0u: goto label_23d1b0;
        case 0x23d1b4u: goto label_23d1b4;
        case 0x23d1b8u: goto label_23d1b8;
        case 0x23d1bcu: goto label_23d1bc;
        case 0x23d1c0u: goto label_23d1c0;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1c8u: goto label_23d1c8;
        case 0x23d1ccu: goto label_23d1cc;
        case 0x23d1d0u: goto label_23d1d0;
        case 0x23d1d4u: goto label_23d1d4;
        case 0x23d1d8u: goto label_23d1d8;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1e4u: goto label_23d1e4;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d1ecu: goto label_23d1ec;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d1f4u: goto label_23d1f4;
        case 0x23d1f8u: goto label_23d1f8;
        case 0x23d1fcu: goto label_23d1fc;
        case 0x23d200u: goto label_23d200;
        case 0x23d204u: goto label_23d204;
        case 0x23d208u: goto label_23d208;
        case 0x23d20cu: goto label_23d20c;
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        default: break;
    }

    ctx->pc = 0x23cf88u;

label_23cf88:
    // 0x23cf88: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_23cf8c:
    // 0x23cf8c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x23cf8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_23cf90:
    // 0x23cf90: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x23cf90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_23cf94:
    // 0x23cf94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23cf98:
    // 0x23cf98: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x23cf98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_23cf9c:
    // 0x23cf9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23cfa0:
    // 0x23cfa0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x23cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_23cfa4:
    // 0x23cfa4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x23cfa4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_23cfa8:
    // 0x23cfa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23cfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23cfac:
    // 0x23cfac: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x23cfacu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_23cfb0:
    // 0x23cfb0: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x23cfb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_23cfb4:
    // 0x23cfb4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23cfb8:
    // 0x23cfb8: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x23cfb8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_23cfbc:
    // 0x23cfbc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x23cfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_23cfc0:
    // 0x23cfc0: 0x40f809  jalr        $v0
label_23cfc4:
    if (ctx->pc == 0x23CFC4u) {
        ctx->pc = 0x23CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFC0u;
        // 0x23cfc4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFC8u;
        goto label_23cfc8;
    }
    ctx->pc = 0x23CFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CFC8u);
        ctx->pc = 0x23CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFC0u;
        // 0x23cfc4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CFC0u, 0x23CFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CFC8u;
label_23cfc8:
    // 0x23cfc8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23cfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23cfcc:
    // 0x23cfcc: 0xc0cd8ec  jal         func_3363B0
label_23cfd0:
    if (ctx->pc == 0x23CFD0u) {
        ctx->pc = 0x23CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFCCu;
        // 0x23cfd0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFD4u;
        goto label_23cfd4;
    }
    ctx->pc = 0x23CFCCu;
    SET_GPR_U32(ctx, 31, 0x23CFD4u);
    ctx->pc = 0x23CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFCCu;
    // 0x23cfd0: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x23CFCCu, 0x23CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFD4u;
label_23cfd4:
    // 0x23cfd4: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x23cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23cfd8:
    // 0x23cfd8: 0xc7ad0024  lwc1        $f13, 0x24($sp)
    ctx->pc = 0x23cfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_23cfdc:
    // 0x23cfdc: 0xc0cd5ea  jal         func_3357A8
label_23cfe0:
    if (ctx->pc == 0x23CFE0u) {
        ctx->pc = 0x23CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFDCu;
        // 0x23cfe0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFE4u;
        goto label_23cfe4;
    }
    ctx->pc = 0x23CFDCu;
    SET_GPR_U32(ctx, 31, 0x23CFE4u);
    ctx->pc = 0x23CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CFDCu;
    // 0x23cfe0: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x23CFDCu, 0x23CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CFE4u;
label_23cfe4:
    // 0x23cfe4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_23cfe8:
    // 0x23cfe8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23cfe8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23cfec:
    // 0x23cfec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23cfecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23cff0:
    // 0x23cff0: 0x0  nop
    ctx->pc = 0x23cff0u;
    // NOP
label_23cff4:
    // 0x23cff4: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x23cff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23cff8:
    // 0x23cff8: 0x0  nop
    ctx->pc = 0x23cff8u;
    // NOP
label_23cffc:
    // 0x23cffc: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_23d000:
    if (ctx->pc == 0x23D000u) {
        ctx->pc = 0x23D004u;
        goto label_23d004;
    }
    ctx->pc = 0x23CFFCu;
    {
        const bool branch_taken_0x23cffc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cffc) {
            ctx->pc = 0x23D030u;
            goto label_23d030;
        }
    }
    ctx->pc = 0x23D004u;
label_23d004:
    // 0x23d004: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d008:
    // 0x23d008: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d00c:
    // 0x23d00c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d00cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d010:
    // 0x23d010: 0x0  nop
    ctx->pc = 0x23d010u;
    // NOP
label_23d014:
    // 0x23d014: 0x4602ad41  sub.s       $f21, $f21, $f2
    ctx->pc = 0x23d014u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_23d018:
    // 0x23d018: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x23d018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d01c:
    // 0x23d01c: 0x0  nop
    ctx->pc = 0x23d01cu;
    // NOP
label_23d020:
    // 0x23d020: 0x0  nop
    ctx->pc = 0x23d020u;
    // NOP
label_23d024:
    // 0x23d024: 0x0  nop
    ctx->pc = 0x23d024u;
    // NOP
label_23d028:
    // 0x23d028: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d02c:
    if (ctx->pc == 0x23D02Cu) {
        ctx->pc = 0x23D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D028u;
        // 0x23d02c: 0x4602ad41  sub.s       $f21, $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D030u;
        goto label_23d030;
    }
    ctx->pc = 0x23D028u;
    {
        const bool branch_taken_0x23d028 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d028) {
            ctx->pc = 0x23D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D028u;
            // 0x23d02c: 0x4602ad41  sub.s       $f21, $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d018;
        }
    }
    ctx->pc = 0x23D030u;
label_23d030:
    // 0x23d030: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_23d034:
    // 0x23d034: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d034u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d038:
    // 0x23d038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d03c:
    // 0x23d03c: 0x0  nop
    ctx->pc = 0x23d03cu;
    // NOP
label_23d040:
    // 0x23d040: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x23d040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d044:
    // 0x23d044: 0x0  nop
    ctx->pc = 0x23d044u;
    // NOP
label_23d048:
    // 0x23d048: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_23d04c:
    if (ctx->pc == 0x23D04Cu) {
        ctx->pc = 0x23D050u;
        goto label_23d050;
    }
    ctx->pc = 0x23D048u;
    {
        const bool branch_taken_0x23d048 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d048) {
            ctx->pc = 0x23D080u;
            goto label_23d080;
        }
    }
    ctx->pc = 0x23D050u;
label_23d050:
    // 0x23d050: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d054:
    // 0x23d054: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d054u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d058:
    // 0x23d058: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d05c:
    // 0x23d05c: 0x0  nop
    ctx->pc = 0x23d05cu;
    // NOP
label_23d060:
    // 0x23d060: 0x4602ad40  add.s       $f21, $f21, $f2
    ctx->pc = 0x23d060u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
label_23d064:
    // 0x23d064: 0x0  nop
    ctx->pc = 0x23d064u;
    // NOP
label_23d068:
    // 0x23d068: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x23d068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d06c:
    // 0x23d06c: 0x0  nop
    ctx->pc = 0x23d06cu;
    // NOP
label_23d070:
    // 0x23d070: 0x0  nop
    ctx->pc = 0x23d070u;
    // NOP
label_23d074:
    // 0x23d074: 0x0  nop
    ctx->pc = 0x23d074u;
    // NOP
label_23d078:
    // 0x23d078: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d07c:
    if (ctx->pc == 0x23D07Cu) {
        ctx->pc = 0x23D07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D078u;
        // 0x23d07c: 0x4602ad40  add.s       $f21, $f21, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D080u;
        goto label_23d080;
    }
    ctx->pc = 0x23D078u;
    {
        const bool branch_taken_0x23d078 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d078) {
            ctx->pc = 0x23D07Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D078u;
            // 0x23d07c: 0x4602ad40  add.s       $f21, $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d068;
        }
    }
    ctx->pc = 0x23D080u;
label_23d080:
    // 0x23d080: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x23d080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_23d084:
    // 0x23d084: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d088:
    // 0x23d088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d08c:
    // 0x23d08c: 0x0  nop
    ctx->pc = 0x23d08cu;
    // NOP
label_23d090:
    // 0x23d090: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d090u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d094:
    // 0x23d094: 0x0  nop
    ctx->pc = 0x23d094u;
    // NOP
label_23d098:
    // 0x23d098: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_23d09c:
    if (ctx->pc == 0x23D09Cu) {
        ctx->pc = 0x23D0A0u;
        goto label_23d0a0;
    }
    ctx->pc = 0x23D098u;
    {
        const bool branch_taken_0x23d098 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d098) {
            ctx->pc = 0x23D0D0u;
            goto label_23d0d0;
        }
    }
    ctx->pc = 0x23D0A0u;
label_23d0a0:
    // 0x23d0a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d0a4:
    // 0x23d0a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d0a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d0a8:
    // 0x23d0a8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d0a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d0ac:
    // 0x23d0ac: 0x0  nop
    ctx->pc = 0x23d0acu;
    // NOP
label_23d0b0:
    // 0x23d0b0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x23d0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_23d0b4:
    // 0x23d0b4: 0x0  nop
    ctx->pc = 0x23d0b4u;
    // NOP
label_23d0b8:
    // 0x23d0b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d0bc:
    // 0x23d0bc: 0x0  nop
    ctx->pc = 0x23d0bcu;
    // NOP
label_23d0c0:
    // 0x23d0c0: 0x0  nop
    ctx->pc = 0x23d0c0u;
    // NOP
label_23d0c4:
    // 0x23d0c4: 0x0  nop
    ctx->pc = 0x23d0c4u;
    // NOP
label_23d0c8:
    // 0x23d0c8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d0cc:
    if (ctx->pc == 0x23D0CCu) {
        ctx->pc = 0x23D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0C8u;
        // 0x23d0cc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0D0u;
        goto label_23d0d0;
    }
    ctx->pc = 0x23D0C8u;
    {
        const bool branch_taken_0x23d0c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d0c8) {
            ctx->pc = 0x23D0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D0C8u;
            // 0x23d0cc: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D0B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d0b8;
        }
    }
    ctx->pc = 0x23D0D0u;
label_23d0d0:
    // 0x23d0d0: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x23d0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_23d0d4:
    // 0x23d0d4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d0d8:
    // 0x23d0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23d0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23d0dc:
    // 0x23d0dc: 0x0  nop
    ctx->pc = 0x23d0dcu;
    // NOP
label_23d0e0:
    // 0x23d0e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23d0e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d0e4:
    // 0x23d0e4: 0x0  nop
    ctx->pc = 0x23d0e4u;
    // NOP
label_23d0e8:
    // 0x23d0e8: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_23d0ec:
    if (ctx->pc == 0x23D0ECu) {
        ctx->pc = 0x23D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0E8u;
        // 0x23d0ec: 0x4600a841  sub.s       $f1, $f21, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0F0u;
        goto label_23d0f0;
    }
    ctx->pc = 0x23D0E8u;
    {
        const bool branch_taken_0x23d0e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d0e8) {
            ctx->pc = 0x23D0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D0E8u;
            // 0x23d0ec: 0x4600a841  sub.s       $f1, $f21, $f0 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D124u;
            goto label_23d124;
        }
    }
    ctx->pc = 0x23D0F0u;
label_23d0f0:
    // 0x23d0f0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d0f4:
    // 0x23d0f4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d0f8:
    // 0x23d0f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d0fc:
    // 0x23d0fc: 0x0  nop
    ctx->pc = 0x23d0fcu;
    // NOP
label_23d100:
    // 0x23d100: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x23d100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_23d104:
    // 0x23d104: 0x0  nop
    ctx->pc = 0x23d104u;
    // NOP
label_23d108:
    // 0x23d108: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23d108u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d10c:
    // 0x23d10c: 0x0  nop
    ctx->pc = 0x23d10cu;
    // NOP
label_23d110:
    // 0x23d110: 0x0  nop
    ctx->pc = 0x23d110u;
    // NOP
label_23d114:
    // 0x23d114: 0x0  nop
    ctx->pc = 0x23d114u;
    // NOP
label_23d118:
    // 0x23d118: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d11c:
    if (ctx->pc == 0x23D11Cu) {
        ctx->pc = 0x23D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D118u;
        // 0x23d11c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D120u;
        goto label_23d120;
    }
    ctx->pc = 0x23D118u;
    {
        const bool branch_taken_0x23d118 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d118) {
            ctx->pc = 0x23D11Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D118u;
            // 0x23d11c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d108;
        }
    }
    ctx->pc = 0x23D120u;
label_23d120:
    // 0x23d120: 0x4600a841  sub.s       $f1, $f21, $f0
    ctx->pc = 0x23d120u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_23d124:
    // 0x23d124: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x23d124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_23d128:
    // 0x23d128: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d12c:
    // 0x23d12c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d130:
    // 0x23d130: 0x0  nop
    ctx->pc = 0x23d130u;
    // NOP
label_23d134:
    // 0x23d134: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23d134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d138:
    // 0x23d138: 0x0  nop
    ctx->pc = 0x23d138u;
    // NOP
label_23d13c:
    // 0x23d13c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_23d140:
    if (ctx->pc == 0x23D140u) {
        ctx->pc = 0x23D144u;
        goto label_23d144;
    }
    ctx->pc = 0x23D13Cu;
    {
        const bool branch_taken_0x23d13c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d13c) {
            ctx->pc = 0x23D170u;
            goto label_23d170;
        }
    }
    ctx->pc = 0x23D144u;
label_23d144:
    // 0x23d144: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d148:
    // 0x23d148: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d148u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d14c:
    // 0x23d14c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d14cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d150:
    // 0x23d150: 0x0  nop
    ctx->pc = 0x23d150u;
    // NOP
label_23d154:
    // 0x23d154: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x23d154u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_23d158:
    // 0x23d158: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23d158u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d15c:
    // 0x23d15c: 0x0  nop
    ctx->pc = 0x23d15cu;
    // NOP
label_23d160:
    // 0x23d160: 0x0  nop
    ctx->pc = 0x23d160u;
    // NOP
label_23d164:
    // 0x23d164: 0x0  nop
    ctx->pc = 0x23d164u;
    // NOP
label_23d168:
    // 0x23d168: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d16c:
    if (ctx->pc == 0x23D16Cu) {
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D170u;
        goto label_23d170;
    }
    ctx->pc = 0x23D168u;
    {
        const bool branch_taken_0x23d168 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d168) {
            ctx->pc = 0x23D16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D168u;
            // 0x23d16c: 0x46020841  sub.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d158;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x23d170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
label_23d174:
    // 0x23d174: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d174u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d178:
    // 0x23d178: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d178u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d17c:
    // 0x23d17c: 0x0  nop
    ctx->pc = 0x23d17cu;
    // NOP
label_23d180:
    // 0x23d180: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d180u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d184:
    // 0x23d184: 0x0  nop
    ctx->pc = 0x23d184u;
    // NOP
label_23d188:
    // 0x23d188: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_23d18c:
    if (ctx->pc == 0x23D18Cu) {
        ctx->pc = 0x23D190u;
        goto label_23d190;
    }
    ctx->pc = 0x23D188u;
    {
        const bool branch_taken_0x23d188 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d188) {
            ctx->pc = 0x23D1C0u;
            goto label_23d1c0;
        }
    }
    ctx->pc = 0x23D190u;
label_23d190:
    // 0x23d190: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x23d190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_23d194:
    // 0x23d194: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23d194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_23d198:
    // 0x23d198: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23d198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23d19c:
    // 0x23d19c: 0x0  nop
    ctx->pc = 0x23d19cu;
    // NOP
label_23d1a0:
    // 0x23d1a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23d1a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_23d1a4:
    // 0x23d1a4: 0x0  nop
    ctx->pc = 0x23d1a4u;
    // NOP
label_23d1a8:
    // 0x23d1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23d1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d1ac:
    // 0x23d1ac: 0x0  nop
    ctx->pc = 0x23d1acu;
    // NOP
label_23d1b0:
    // 0x23d1b0: 0x0  nop
    ctx->pc = 0x23d1b0u;
    // NOP
label_23d1b4:
    // 0x23d1b4: 0x0  nop
    ctx->pc = 0x23d1b4u;
    // NOP
label_23d1b8:
    // 0x23d1b8: 0x4503fffb  bc1tl       . + 4 + (-0x5 << 2)
label_23d1bc:
    if (ctx->pc == 0x23D1BCu) {
        ctx->pc = 0x23D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1B8u;
        // 0x23d1bc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1C0u;
        goto label_23d1c0;
    }
    ctx->pc = 0x23D1B8u;
    {
        const bool branch_taken_0x23d1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d1b8) {
            ctx->pc = 0x23D1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1B8u;
            // 0x23d1bc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d1a8;
        }
    }
    ctx->pc = 0x23D1C0u;
label_23d1c0:
    // 0x23d1c0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x23d1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_23d1c4:
    // 0x23d1c4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23d1c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_23d1c8:
    // 0x23d1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d1cc:
    // 0x23d1cc: 0x0  nop
    ctx->pc = 0x23d1ccu;
    // NOP
label_23d1d0:
    // 0x23d1d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d1d4:
    // 0x23d1d4: 0x0  nop
    ctx->pc = 0x23d1d4u;
    // NOP
label_23d1d8:
    // 0x23d1d8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_23d1dc:
    if (ctx->pc == 0x23D1DCu) {
        ctx->pc = 0x23D1E0u;
        goto label_23d1e0;
    }
    ctx->pc = 0x23D1D8u;
    {
        const bool branch_taken_0x23d1d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d1d8) {
            ctx->pc = 0x23D20Cu;
            goto label_23d20c;
        }
    }
    ctx->pc = 0x23D1E0u;
label_23d1e0:
    // 0x23d1e0: 0x3c01bc23  lui         $at, 0xBC23
    ctx->pc = 0x23d1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48163 << 16));
label_23d1e4:
    // 0x23d1e4: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x23d1e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_23d1e8:
    // 0x23d1e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23d1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d1ec:
    // 0x23d1ec: 0x0  nop
    ctx->pc = 0x23d1ecu;
    // NOP
label_23d1f0:
    // 0x23d1f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23d1f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d1f4:
    // 0x23d1f4: 0x0  nop
    ctx->pc = 0x23d1f4u;
    // NOP
label_23d1f8:
    // 0x23d1f8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_23d1fc:
    if (ctx->pc == 0x23D1FCu) {
        ctx->pc = 0x23D200u;
        goto label_23d200;
    }
    ctx->pc = 0x23D1F8u;
    {
        const bool branch_taken_0x23d1f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23d1f8) {
            ctx->pc = 0x23D20Cu;
            goto label_23d20c;
        }
    }
    ctx->pc = 0x23D200u;
label_23d200:
    // 0x23d200: 0xa2200332  sb          $zero, 0x332($s1)
    ctx->pc = 0x23d200u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 818), (uint8_t)GPR_U32(ctx, 0));
label_23d204:
    // 0x23d204: 0x10000024  b           . + 4 + (0x24 << 2)
label_23d208:
    if (ctx->pc == 0x23D208u) {
        ctx->pc = 0x23D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D204u;
        // 0x23d208: 0xae200304  sw          $zero, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D20Cu;
        goto label_23d20c;
    }
    ctx->pc = 0x23D204u;
    {
        const bool branch_taken_0x23d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D204u;
        // 0x23d208: 0xae200304  sw          $zero, 0x304($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d204) {
            ctx->pc = 0x23D298u;
            goto label_23d298;
        }
    }
    ctx->pc = 0x23D20Cu;
label_23d20c:
    // 0x23d20c: 0x0  nop
    ctx->pc = 0x23d20cu;
    // NOP
label_23d210:
    // 0x23d210: 0x0  nop
    ctx->pc = 0x23d210u;
    // NOP
label_23d214:
    // 0x23d214: 0x46160803  div.s       $f0, $f1, $f22
    ctx->pc = 0x23d214u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[22]); }
label_23d218:
    // 0x23d218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d21c:
    // 0x23d21c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x23d21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_23d220:
    // 0x23d220: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23d220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23d224:
    // 0x23d224: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x23d224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_23d228:
    // 0x23d228: 0xe6360304  swc1        $f22, 0x304($s1)
    ctx->pc = 0x23d228u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 772), bits); }
label_23d22c:
    // 0x23d22c: 0x24631740  addiu       $v1, $v1, 0x1740
    ctx->pc = 0x23d22cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
label_23d230:
    // 0x23d230: 0xa2220332  sb          $v0, 0x332($s1)
    ctx->pc = 0x23d230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 818), (uint8_t)GPR_U32(ctx, 2));
label_23d234:
    // 0x23d234: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x23d234u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
label_23d238:
    // 0x23d238: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x23d238u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_23d23c:
    // 0x23d23c: 0xe6200308  swc1        $f0, 0x308($s1)
    ctx->pc = 0x23d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 776), bits); }
label_23d240:
    // 0x23d240: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23d240u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_23d244:
    // 0x23d244: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x23d244u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23d248:
    // 0x23d248: 0xc12e310  jal         func_4B8C40
label_23d24c:
    if (ctx->pc == 0x23D24Cu) {
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D250u;
        goto label_23d250;
    }
    ctx->pc = 0x23D248u;
    SET_GPR_U32(ctx, 31, 0x23D250u);
    ctx->pc = 0x23D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D248u;
    // 0x23d24c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x23D248u, 0x23D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x23d250u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_23d254:
    // 0x23d254: 0xc12e29c  jal         func_4B8A70
label_23d258:
    if (ctx->pc == 0x23D258u) {
        ctx->pc = 0x23D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D254u;
        // 0x23d258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D25Cu;
        goto label_23d25c;
    }
    ctx->pc = 0x23D254u;
    SET_GPR_U32(ctx, 31, 0x23D25Cu);
    ctx->pc = 0x23D258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D254u;
    // 0x23d258: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x23D254u, 0x23D25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D25Cu;
label_23d25c:
    // 0x23d25c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x23d25cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d260:
    // 0x23d260: 0x4403a800  mfc1        $v1, $f21
    ctx->pc = 0x23d260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_23d264:
    // 0x23d264: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x23d264u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d268:
    // 0x23d268: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x23d268u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_23d26c:
    // 0x23d26c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23d26cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d270:
    // 0x23d270: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x23d270u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_23d274:
    // 0x23d274: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23d274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_23d278:
    // 0x23d278: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x23d278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_23d27c:
    // 0x23d27c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x23d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d280:
    // 0x23d280: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x23d280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d284:
    // 0x23d284: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x23d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d288:
    // 0x23d288: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x23d288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_23d28c:
    // 0x23d28c: 0xe6220320  swc1        $f2, 0x320($s1)
    ctx->pc = 0x23d28cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 800), bits); }
label_23d290:
    // 0x23d290: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x23d290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_23d294:
    // 0x23d294: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x23d294u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_23d298:
    // 0x23d298: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x23d298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23d29c:
    // 0x23d29c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x23d29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23d2a0:
    // 0x23d2a0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23d2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23d2a4:
    // 0x23d2a4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x23d2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23d2a8:
    // 0x23d2a8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x23d2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_23d2ac:
    // 0x23d2ac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x23d2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23d2b0:
    // 0x23d2b0: 0x3e00008  jr          $ra
label_23d2b4:
    if (ctx->pc == 0x23D2B4u) {
        ctx->pc = 0x23D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B0u;
        // 0x23d2b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2B8u;
        goto label_fallthrough_0x23d2b0;
    }
    ctx->pc = 0x23D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B0u;
        // 0x23d2b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d2b0:
    ctx->pc = 0x23D2B8u;
}
