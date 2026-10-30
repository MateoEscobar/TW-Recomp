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

// Function: sub_00477208
// Address: 0x477208 - 0x477460
void sub_00477208_0x477208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477208_0x477208");
#endif

    switch (ctx->pc) {
        case 0x477260u: goto label_477260;
        case 0x477274u: goto label_477274;
        case 0x4772a0u: goto label_4772a0;
        case 0x47731cu: goto label_47731c;
        case 0x477330u: goto label_477330;
        case 0x477348u: goto label_477348;
        case 0x477380u: goto label_477380;
        case 0x47738cu: goto label_47738c;
        case 0x477414u: goto label_477414;
        default: break;
    }

    ctx->pc = 0x477208u;

    // 0x477208: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x477208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x47720c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x47720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x477210: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x477210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x477214: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x477214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x477218: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x477218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x47721c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x47721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x477220: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x477220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x477224: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x477224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x477228: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x477228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x47722c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x47722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x477230: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x477230u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x477234: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x477234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x477238: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x477238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x47723c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x47723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x477240: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x477240u;
    {
        const bool branch_taken_0x477240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477240u;
        // 0x477244: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477240) {
            ctx->pc = 0x477430u;
            goto label_477430;
        }
    }
    ctx->pc = 0x477248u;
    // 0x477248: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x477248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x47724c: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x47724cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x477250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x477250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x477254: 0xa462000a  sh          $v0, 0xA($v1)
    ctx->pc = 0x477254u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x477258: 0xc12104a  jal         func_484128
    ctx->pc = 0x477258u;
    SET_GPR_U32(ctx, 31, 0x477260u);
    ctx->pc = 0x47725Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477258u;
    // 0x47725c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x477258u, 0x477260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477260u;
label_477260:
    // 0x477260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477264: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x477264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x477268: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x477268u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47726c: 0xc11f332  jal         func_47CCC8
    ctx->pc = 0x47726Cu;
    SET_GPR_U32(ctx, 31, 0x477274u);
    ctx->pc = 0x477270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47726Cu;
    // 0x477270: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CCC8u, 0x47726Cu, 0x477274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477274u;
label_477274:
    // 0x477274: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x477274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x477278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x477278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47727c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x47727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x477280: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x477280u;
    {
        const bool branch_taken_0x477280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x477284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477280u;
        // 0x477284: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x477280) {
            ctx->pc = 0x4772B4u;
            goto label_4772b4;
        }
    }
    ctx->pc = 0x477288u;
    // 0x477288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x477288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x47728c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x47728cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x477290: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x477290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x477294: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x477294u;
    {
        const bool branch_taken_0x477294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477294u;
        // 0x477298: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x477294) {
            ctx->pc = 0x4772F0u;
            goto label_4772f0;
        }
    }
    ctx->pc = 0x47729Cu;
    // 0x47729c: 0x0  nop
    ctx->pc = 0x47729cu;
    // NOP
label_4772a0:
    // 0x4772a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4772a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4772a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4772a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4772a8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4772a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4772ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4772ACu;
    {
        const bool branch_taken_0x4772ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4772B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4772ACu;
        // 0x4772b0: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4772ac) {
            ctx->pc = 0x4772F0u;
            goto label_4772f0;
        }
    }
    ctx->pc = 0x4772B4u;
label_4772b4:
    // 0x4772b4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x4772b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4772b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4772b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4772bc: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x4772bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4772c0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4772c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4772c4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4772c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4772c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4772c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4772cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4772ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4772d0: 0x46000084  c1          0x84
    ctx->pc = 0x4772d0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x4772d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4772d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4772d8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x4772d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4772dc: 0x0  nop
    ctx->pc = 0x4772dcu;
    // NOP
    // 0x4772e0: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x4772E0u;
    {
        const bool branch_taken_0x4772e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4772E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4772E0u;
        // 0x4772e4: 0xe7a20050  swc1        $f2, 0x50($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4772e0) {
            ctx->pc = 0x4772A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4772a0;
        }
    }
    ctx->pc = 0x4772E8u;
    // 0x4772e8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x4772e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x4772ec: 0x0  nop
    ctx->pc = 0x4772ecu;
    // NOP
label_4772f0:
    // 0x4772f0: 0x8e260054  lw          $a2, 0x54($s1)
    ctx->pc = 0x4772f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x4772f4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x4772f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x4772f8: 0x24848fb0  addiu       $a0, $a0, -0x7050
    ctx->pc = 0x4772f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938544));
    // 0x4772fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4772fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477300: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x477300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x477304: 0x26950064  addiu       $s5, $s4, 0x64
    ctx->pc = 0x477304u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x477308: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x477308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x47730c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x47730cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x477310: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x477310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x477314: 0xc11c5f8  jal         func_4717E0
    ctx->pc = 0x477314u;
    SET_GPR_U32(ctx, 31, 0x47731Cu);
    ctx->pc = 0x477318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477314u;
    // 0x477318: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4717E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4717E0u, 0x477314u, 0x47731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47731Cu;
label_47731c:
    // 0x47731c: 0x8e920064  lw          $s2, 0x64($s4)
    ctx->pc = 0x47731cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x477320: 0x12550044  beq         $s2, $s5, . + 4 + (0x44 << 2)
    ctx->pc = 0x477320u;
    {
        const bool branch_taken_0x477320 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 21));
        ctx->pc = 0x477324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477320u;
        // 0x477324: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477320) {
            ctx->pc = 0x477434u;
            goto label_477434;
        }
    }
    ctx->pc = 0x477328u;
    // 0x477328: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x477328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x47732c: 0x0  nop
    ctx->pc = 0x47732cu;
    // NOP
label_477330:
    // 0x477330: 0x8c510040  lw          $s1, 0x40($v0)
    ctx->pc = 0x477330u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x477334: 0x24530040  addiu       $s3, $v0, 0x40
    ctx->pc = 0x477334u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x477338: 0x1233003a  beq         $s1, $s3, . + 4 + (0x3A << 2)
    ctx->pc = 0x477338u;
    {
        const bool branch_taken_0x477338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x47733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477338u;
        // 0x47733c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477338) {
            ctx->pc = 0x477424u;
            goto label_477424;
        }
    }
    ctx->pc = 0x477340u;
    // 0x477340: 0x2456ad18  addiu       $s6, $v0, -0x52E8
    ctx->pc = 0x477340u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x477344: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x477344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_477348:
    // 0x477348: 0x50600034  beql        $v1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x477348u;
    {
        const bool branch_taken_0x477348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x477348) {
            ctx->pc = 0x47734Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477348u;
            // 0x47734c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47741Cu;
            goto label_47741c;
        }
    }
    ctx->pc = 0x477350u;
    // 0x477350: 0x96c4000a  lhu         $a0, 0xA($s6)
    ctx->pc = 0x477350u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 10)));
    // 0x477354: 0x9462003c  lhu         $v0, 0x3C($v1)
    ctx->pc = 0x477354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x477358: 0x50440030  beql        $v0, $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x477358u;
    {
        const bool branch_taken_0x477358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x477358) {
            ctx->pc = 0x47735Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477358u;
            // 0x47735c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47741Cu;
            goto label_47741c;
        }
    }
    ctx->pc = 0x477360u;
    // 0x477360: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x477360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x477364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x477364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x477368: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x477368u;
    {
        const bool branch_taken_0x477368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x477368) {
            ctx->pc = 0x47736Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477368u;
            // 0x47736c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47741Cu;
            goto label_47741c;
        }
    }
    ctx->pc = 0x477370u;
    // 0x477370: 0xa464003c  sh          $a0, 0x3C($v1)
    ctx->pc = 0x477370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 60), (uint16_t)GPR_U32(ctx, 4));
    // 0x477374: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x477374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x477378: 0xc12104a  jal         func_484128
    ctx->pc = 0x477378u;
    SET_GPR_U32(ctx, 31, 0x477380u);
    ctx->pc = 0x47737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477378u;
    // 0x47737c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484128u, 0x477378u, 0x477380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477380u;
label_477380:
    // 0x477380: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x477380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x477384: 0xc11a45e  jal         func_469178
    ctx->pc = 0x477384u;
    SET_GPR_U32(ctx, 31, 0x47738Cu);
    ctx->pc = 0x477388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x477384u;
    // 0x477388: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x477384u, 0x47738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47738Cu;
label_47738c:
    // 0x47738c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x47738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x477390: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x477390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x477394: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x477394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x477398: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x477398u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x47739c: 0xe7a40060  swc1        $f4, 0x60($sp)
    ctx->pc = 0x47739cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4773a0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x4773a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4773a4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x4773a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4773a8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x4773a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x4773ac: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x4773acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4773b0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x4773b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4773b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x4773b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4773b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x4773b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x4773bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4773bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4773c0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x4773c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x4773c4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4773c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4773c8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x4773c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x4773cc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x4773ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4773d0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x4773d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x4773d4: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x4773d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4773d8: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x4773d8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x4773dc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x4773dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x4773e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x4773e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x4773e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x4773e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x4773e8: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x4773e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4773ec: 0x0  nop
    ctx->pc = 0x4773ecu;
    // NOP
    // 0x4773f0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x4773F0u;
    {
        const bool branch_taken_0x4773f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4773f0) {
            ctx->pc = 0x4773F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4773F0u;
            // 0x4773f4: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x47741Cu;
            goto label_47741c;
        }
    }
    ctx->pc = 0x4773F8u;
    // 0x4773f8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x4773f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4773fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4773fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x477400: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x477400u;
    {
        const bool branch_taken_0x477400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477400u;
        // 0x477404: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x477400) {
            ctx->pc = 0x477418u;
            goto label_477418;
        }
    }
    ctx->pc = 0x477408u;
    // 0x477408: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x477408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47740c: 0xc11db32  jal         func_476CC8
    ctx->pc = 0x47740Cu;
    SET_GPR_U32(ctx, 31, 0x477414u);
    ctx->pc = 0x477410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47740Cu;
    // 0x477410: 0xc7ad0054  lwc1        $f13, 0x54($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x476CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476CC8u, 0x47740Cu, 0x477414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x477414u;
label_477414:
    // 0x477414: 0x0  nop
    ctx->pc = 0x477414u;
    // NOP
label_477418:
    // 0x477418: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x477418u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_47741c:
    // 0x47741c: 0x5633ffca  bnel        $s1, $s3, . + 4 + (-0x36 << 2)
    ctx->pc = 0x47741Cu;
    {
        const bool branch_taken_0x47741c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x47741c) {
            ctx->pc = 0x477420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x47741Cu;
            // 0x477420: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477348;
        }
    }
    ctx->pc = 0x477424u;
label_477424:
    // 0x477424: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x477424u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x477428: 0x5655ffc1  bnel        $s2, $s5, . + 4 + (-0x3F << 2)
    ctx->pc = 0x477428u;
    {
        const bool branch_taken_0x477428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        if (branch_taken_0x477428) {
            ctx->pc = 0x47742Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x477428u;
            // 0x47742c: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x477330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_477330;
        }
    }
    ctx->pc = 0x477430u;
label_477430:
    // 0x477430: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x477430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_477434:
    // 0x477434: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x477434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x477438: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x477438u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x47743c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x47743cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x477440: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x477440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x477444: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x477444u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x477448: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x477448u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x47744c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x47744cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x477450: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x477450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x477454: 0x3e00008  jr          $ra
    ctx->pc = 0x477454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x477454u;
        // 0x477458: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x477454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47745Cu;
    // 0x47745c: 0x0  nop
    ctx->pc = 0x47745cu;
    // NOP
    ctx->pc = 0x477460u;
}
