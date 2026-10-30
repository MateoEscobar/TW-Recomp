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

// Function: sub_00135138
// Address: 0x135138 - 0x1352f0
void sub_00135138_0x135138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135138_0x135138");
#endif

    switch (ctx->pc) {
        case 0x135138u: goto label_135138;
        case 0x13513cu: goto label_13513c;
        case 0x135140u: goto label_135140;
        case 0x135144u: goto label_135144;
        case 0x135148u: goto label_135148;
        case 0x13514cu: goto label_13514c;
        case 0x135150u: goto label_135150;
        case 0x135154u: goto label_135154;
        case 0x135158u: goto label_135158;
        case 0x13515cu: goto label_13515c;
        case 0x135160u: goto label_135160;
        case 0x135164u: goto label_135164;
        case 0x135168u: goto label_135168;
        case 0x13516cu: goto label_13516c;
        case 0x135170u: goto label_135170;
        case 0x135174u: goto label_135174;
        case 0x135178u: goto label_135178;
        case 0x13517cu: goto label_13517c;
        case 0x135180u: goto label_135180;
        case 0x135184u: goto label_135184;
        case 0x135188u: goto label_135188;
        case 0x13518cu: goto label_13518c;
        case 0x135190u: goto label_135190;
        case 0x135194u: goto label_135194;
        case 0x135198u: goto label_135198;
        case 0x13519cu: goto label_13519c;
        case 0x1351a0u: goto label_1351a0;
        case 0x1351a4u: goto label_1351a4;
        case 0x1351a8u: goto label_1351a8;
        case 0x1351acu: goto label_1351ac;
        case 0x1351b0u: goto label_1351b0;
        case 0x1351b4u: goto label_1351b4;
        case 0x1351b8u: goto label_1351b8;
        case 0x1351bcu: goto label_1351bc;
        case 0x1351c0u: goto label_1351c0;
        case 0x1351c4u: goto label_1351c4;
        case 0x1351c8u: goto label_1351c8;
        case 0x1351ccu: goto label_1351cc;
        case 0x1351d0u: goto label_1351d0;
        case 0x1351d4u: goto label_1351d4;
        case 0x1351d8u: goto label_1351d8;
        case 0x1351dcu: goto label_1351dc;
        case 0x1351e0u: goto label_1351e0;
        case 0x1351e4u: goto label_1351e4;
        case 0x1351e8u: goto label_1351e8;
        case 0x1351ecu: goto label_1351ec;
        case 0x1351f0u: goto label_1351f0;
        case 0x1351f4u: goto label_1351f4;
        case 0x1351f8u: goto label_1351f8;
        case 0x1351fcu: goto label_1351fc;
        case 0x135200u: goto label_135200;
        case 0x135204u: goto label_135204;
        case 0x135208u: goto label_135208;
        case 0x13520cu: goto label_13520c;
        case 0x135210u: goto label_135210;
        case 0x135214u: goto label_135214;
        case 0x135218u: goto label_135218;
        case 0x13521cu: goto label_13521c;
        case 0x135220u: goto label_135220;
        case 0x135224u: goto label_135224;
        case 0x135228u: goto label_135228;
        case 0x13522cu: goto label_13522c;
        case 0x135230u: goto label_135230;
        case 0x135234u: goto label_135234;
        case 0x135238u: goto label_135238;
        case 0x13523cu: goto label_13523c;
        case 0x135240u: goto label_135240;
        case 0x135244u: goto label_135244;
        case 0x135248u: goto label_135248;
        case 0x13524cu: goto label_13524c;
        case 0x135250u: goto label_135250;
        case 0x135254u: goto label_135254;
        case 0x135258u: goto label_135258;
        case 0x13525cu: goto label_13525c;
        case 0x135260u: goto label_135260;
        case 0x135264u: goto label_135264;
        case 0x135268u: goto label_135268;
        case 0x13526cu: goto label_13526c;
        case 0x135270u: goto label_135270;
        case 0x135274u: goto label_135274;
        case 0x135278u: goto label_135278;
        case 0x13527cu: goto label_13527c;
        case 0x135280u: goto label_135280;
        case 0x135284u: goto label_135284;
        case 0x135288u: goto label_135288;
        case 0x13528cu: goto label_13528c;
        case 0x135290u: goto label_135290;
        case 0x135294u: goto label_135294;
        case 0x135298u: goto label_135298;
        case 0x13529cu: goto label_13529c;
        case 0x1352a0u: goto label_1352a0;
        case 0x1352a4u: goto label_1352a4;
        case 0x1352a8u: goto label_1352a8;
        case 0x1352acu: goto label_1352ac;
        case 0x1352b0u: goto label_1352b0;
        case 0x1352b4u: goto label_1352b4;
        case 0x1352b8u: goto label_1352b8;
        case 0x1352bcu: goto label_1352bc;
        case 0x1352c0u: goto label_1352c0;
        case 0x1352c4u: goto label_1352c4;
        case 0x1352c8u: goto label_1352c8;
        case 0x1352ccu: goto label_1352cc;
        case 0x1352d0u: goto label_1352d0;
        case 0x1352d4u: goto label_1352d4;
        case 0x1352d8u: goto label_1352d8;
        case 0x1352dcu: goto label_1352dc;
        case 0x1352e0u: goto label_1352e0;
        case 0x1352e4u: goto label_1352e4;
        case 0x1352e8u: goto label_1352e8;
        case 0x1352ecu: goto label_1352ec;
        default: break;
    }

    ctx->pc = 0x135138u;

label_135138:
    // 0x135138: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x135138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_13513c:
    // 0x13513c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13513cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_135140:
    // 0x135140: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x135140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_135144:
    // 0x135144: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x135144u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_135148:
    // 0x135148: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x135148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_13514c:
    // 0x13514c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x13514cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_135150:
    // 0x135150: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x135150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_135154:
    // 0x135154: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x135154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_135158:
    // 0x135158: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13515c:
    // 0x13515c: 0x4501005d  bc1t        . + 4 + (0x5D << 2)
label_135160:
    if (ctx->pc == 0x135160u) {
        ctx->pc = 0x135160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13515Cu;
        // 0x135160: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135164u;
        goto label_135164;
    }
    ctx->pc = 0x13515Cu;
    {
        const bool branch_taken_0x13515c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13515Cu;
        // 0x135160: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13515c) {
            ctx->pc = 0x1352D4u;
            goto label_1352d4;
        }
    }
    ctx->pc = 0x135164u;
label_135164:
    // 0x135164: 0xc0e4060  jal         func_390180
label_135168:
    if (ctx->pc == 0x135168u) {
        ctx->pc = 0x135168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135164u;
        // 0x135168: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13516Cu;
        goto label_13516c;
    }
    ctx->pc = 0x135164u;
    SET_GPR_U32(ctx, 31, 0x13516Cu);
    ctx->pc = 0x135168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135164u;
    // 0x135168: 0x264401e0  addiu       $a0, $s2, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x135164u, 0x13516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13516Cu;
label_13516c:
    // 0x13516c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13516cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135170:
    // 0x135170: 0x12000058  beqz        $s0, . + 4 + (0x58 << 2)
label_135174:
    if (ctx->pc == 0x135174u) {
        ctx->pc = 0x135174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135170u;
        // 0x135174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135178u;
        goto label_135178;
    }
    ctx->pc = 0x135170u;
    {
        const bool branch_taken_0x135170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x135174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135170u;
        // 0x135174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135170) {
            ctx->pc = 0x1352D4u;
            goto label_1352d4;
        }
    }
    ctx->pc = 0x135178u;
label_135178:
    // 0x135178: 0xc04d40a  jal         func_135028
label_13517c:
    if (ctx->pc == 0x13517Cu) {
        ctx->pc = 0x13517Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135178u;
        // 0x13517c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135180u;
        goto label_135180;
    }
    ctx->pc = 0x135178u;
    SET_GPR_U32(ctx, 31, 0x135180u);
    ctx->pc = 0x13517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135178u;
    // 0x13517c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135028u, 0x135178u, 0x135180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135180u;
label_135180:
    // 0x135180: 0x7a420180  lq          $v0, 0x180($s2)
    ctx->pc = 0x135180u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 384)));
label_135184:
    // 0x135184: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_135188:
    // 0x135188: 0xe65401a0  swc1        $f20, 0x1A0($s2)
    ctx->pc = 0x135188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 416), bits); }
label_13518c:
    // 0x13518c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13518cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135190:
    // 0x135190: 0xc04d3c2  jal         func_134F08
label_135194:
    if (ctx->pc == 0x135194u) {
        ctx->pc = 0x135194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135190u;
        // 0x135194: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135198u;
        goto label_135198;
    }
    ctx->pc = 0x135190u;
    SET_GPR_U32(ctx, 31, 0x135198u);
    ctx->pc = 0x135194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135190u;
    // 0x135194: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134F08u, 0x135190u, 0x135198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135198u;
label_135198:
    // 0x135198: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13519c:
    // 0x13519c: 0xc04d35e  jal         func_134D78
label_1351a0:
    if (ctx->pc == 0x1351A0u) {
        ctx->pc = 0x1351A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13519Cu;
        // 0x1351a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351A4u;
        goto label_1351a4;
    }
    ctx->pc = 0x13519Cu;
    SET_GPR_U32(ctx, 31, 0x1351A4u);
    ctx->pc = 0x1351A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13519Cu;
    // 0x1351a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D78u, 0x13519Cu, 0x1351A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1351A4u;
label_1351a4:
    // 0x1351a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1351a8:
    // 0x1351a8: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1351a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1351ac:
    // 0x1351ac: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1351b0:
    // 0x1351b0: 0x60f809  jalr        $v1
label_1351b4:
    if (ctx->pc == 0x1351B4u) {
        ctx->pc = 0x1351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B0u;
        // 0x1351b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351B8u;
        goto label_1351b8;
    }
    ctx->pc = 0x1351B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1351B8u);
        ctx->pc = 0x1351B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351B0u;
        // 0x1351b4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351B0u, 0x1351B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1351B8u;
label_1351b8:
    // 0x1351b8: 0xc6540214  lwc1        $f20, 0x214($s2)
    ctx->pc = 0x1351b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1351bc:
    // 0x1351bc: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x1351bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1351c0:
    // 0x1351c0: 0x0  nop
    ctx->pc = 0x1351c0u;
    // NOP
label_1351c4:
    // 0x1351c4: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_1351c8:
    if (ctx->pc == 0x1351C8u) {
        ctx->pc = 0x1351C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C4u;
        // 0x1351c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351CCu;
        goto label_1351cc;
    }
    ctx->pc = 0x1351C4u;
    {
        const bool branch_taken_0x1351c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1351c4) {
            ctx->pc = 0x1351C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1351C4u;
            // 0x1351c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135270u;
            goto label_135270;
        }
    }
    ctx->pc = 0x1351CCu;
label_1351cc:
    // 0x1351cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1351ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1351d0:
    // 0x1351d0: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1351d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1351d4:
    // 0x1351d4: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1351d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1351d8:
    // 0x1351d8: 0x60f809  jalr        $v1
label_1351dc:
    if (ctx->pc == 0x1351DCu) {
        ctx->pc = 0x1351DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351D8u;
        // 0x1351dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351E0u;
        goto label_1351e0;
    }
    ctx->pc = 0x1351D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1351E0u);
        ctx->pc = 0x1351DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351D8u;
        // 0x1351dc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351D8u, 0x1351E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1351E0u;
label_1351e0:
    // 0x1351e0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1351e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1351e4:
    // 0x1351e4: 0x0  nop
    ctx->pc = 0x1351e4u;
    // NOP
label_1351e8:
    // 0x1351e8: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1351ec:
    if (ctx->pc == 0x1351ECu) {
        ctx->pc = 0x1351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351E8u;
        // 0x1351ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1351F0u;
        goto label_1351f0;
    }
    ctx->pc = 0x1351E8u;
    {
        const bool branch_taken_0x1351e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1351ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351E8u;
        // 0x1351ec: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351e8) {
            ctx->pc = 0x135218u;
            goto label_135218;
        }
    }
    ctx->pc = 0x1351F0u;
label_1351f0:
    // 0x1351f0: 0xc6540214  lwc1        $f20, 0x214($s2)
    ctx->pc = 0x1351f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1351f4:
    // 0x1351f4: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x1351f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_1351f8:
    // 0x1351f8: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_1351fc:
    // 0x1351fc: 0x60f809  jalr        $v1
label_135200:
    if (ctx->pc == 0x135200u) {
        ctx->pc = 0x135200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351FCu;
        // 0x135200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135204u;
        goto label_135204;
    }
    ctx->pc = 0x1351FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x135204u);
        ctx->pc = 0x135200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351FCu;
        // 0x135200: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1351FCu, 0x135204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135204u;
label_135204:
    // 0x135204: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x135204u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_135208:
    // 0x135208: 0xc64001a0  lwc1        $f0, 0x1A0($s2)
    ctx->pc = 0x135208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13520c:
    // 0x13520c: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x13520cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
label_135210:
    // 0x135210: 0x1000000b  b           . + 4 + (0xB << 2)
label_135214:
    if (ctx->pc == 0x135214u) {
        ctx->pc = 0x135214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135210u;
        // 0x135214: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135218u;
        goto label_135218;
    }
    ctx->pc = 0x135210u;
    {
        const bool branch_taken_0x135210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135210u;
        // 0x135214: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135210) {
            ctx->pc = 0x135240u;
            goto label_135240;
        }
    }
    ctx->pc = 0x135218u;
label_135218:
    // 0x135218: 0xc6540214  lwc1        $f20, 0x214($s2)
    ctx->pc = 0x135218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_13521c:
    // 0x13521c: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x13521cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_135220:
    // 0x135220: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x135220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_135224:
    // 0x135224: 0x60f809  jalr        $v1
label_135228:
    if (ctx->pc == 0x135228u) {
        ctx->pc = 0x135228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135224u;
        // 0x135228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13522Cu;
        goto label_13522c;
    }
    ctx->pc = 0x135224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13522Cu);
        ctx->pc = 0x135228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135224u;
        // 0x135228: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135224u, 0x13522Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13522Cu;
label_13522c:
    // 0x13522c: 0xc64101a0  lwc1        $f1, 0x1A0($s2)
    ctx->pc = 0x13522cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_135230:
    // 0x135230: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x135230u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_135234:
    // 0x135234: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x135234u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_135238:
    // 0x135238: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x135238u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
label_13523c:
    // 0x13523c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x13523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135240:
    // 0x135240: 0x84500190  lh          $s0, 0x190($v0)
    ctx->pc = 0x135240u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 400)));
label_135244:
    // 0x135244: 0x24510190  addiu       $s1, $v0, 0x190
    ctx->pc = 0x135244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_135248:
    // 0x135248: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x135248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_13524c:
    // 0x13524c: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_135250:
    // 0x135250: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_135254:
    // 0x135254: 0x60f809  jalr        $v1
label_135258:
    if (ctx->pc == 0x135258u) {
        ctx->pc = 0x135258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135254u;
        // 0x135258: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13525Cu;
        goto label_13525c;
    }
    ctx->pc = 0x135254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13525Cu);
        ctx->pc = 0x135258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135254u;
        // 0x135258: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135254u, 0x13525Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13525Cu;
label_13525c:
    // 0x13525c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x13525cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_135260:
    // 0x135260: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x135260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_135264:
    // 0x135264: 0x40f809  jalr        $v0
label_135268:
    if (ctx->pc == 0x135268u) {
        ctx->pc = 0x135268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135264u;
        // 0x135268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13526Cu;
        goto label_13526c;
    }
    ctx->pc = 0x135264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13526Cu);
        ctx->pc = 0x135268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135264u;
        // 0x135268: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135264u, 0x13526Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13526Cu;
label_13526c:
    // 0x13526c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x13526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_135270:
    // 0x135270: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x135270u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_135274:
    // 0x135274: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x135274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_135278:
    // 0x135278: 0x40f809  jalr        $v0
label_13527c:
    if (ctx->pc == 0x13527Cu) {
        ctx->pc = 0x13527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135278u;
        // 0x13527c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135280u;
        goto label_135280;
    }
    ctx->pc = 0x135278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135280u);
        ctx->pc = 0x13527Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135278u;
        // 0x13527c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135278u, 0x135280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135280u;
label_135280:
    // 0x135280: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x135280u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_135284:
    // 0x135284: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x135284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_135288:
    // 0x135288: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x135288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_13528c:
    // 0x13528c: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x13528cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_135290:
    // 0x135290: 0x84a40218  lh          $a0, 0x218($a1)
    ctx->pc = 0x135290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 536)));
label_135294:
    // 0x135294: 0x8ca2021c  lw          $v0, 0x21C($a1)
    ctx->pc = 0x135294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 540)));
label_135298:
    // 0x135298: 0x40f809  jalr        $v0
label_13529c:
    if (ctx->pc == 0x13529Cu) {
        ctx->pc = 0x13529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135298u;
        // 0x13529c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352A0u;
        goto label_1352a0;
    }
    ctx->pc = 0x135298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1352A0u);
        ctx->pc = 0x13529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135298u;
        // 0x13529c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135298u, 0x1352A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1352A0u;
label_1352a0:
    // 0x1352a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1352a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1352a4:
    // 0x1352a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1352a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1352a8:
    // 0x1352a8: 0xc0cdc0a  jal         func_337028
label_1352ac:
    if (ctx->pc == 0x1352ACu) {
        ctx->pc = 0x1352ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352A8u;
        // 0x1352ac: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352B0u;
        goto label_1352b0;
    }
    ctx->pc = 0x1352A8u;
    SET_GPR_U32(ctx, 31, 0x1352B0u);
    ctx->pc = 0x1352ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352A8u;
    // 0x1352ac: 0x26460180  addiu       $a2, $s2, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337028u, 0x1352A8u, 0x1352B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352B0u;
label_1352b0:
    // 0x1352b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1352b4:
    if (ctx->pc == 0x1352B4u) {
        ctx->pc = 0x1352B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352B0u;
        // 0x1352b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352B8u;
        goto label_1352b8;
    }
    ctx->pc = 0x1352B0u;
    {
        const bool branch_taken_0x1352b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1352B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352B0u;
        // 0x1352b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352b0) {
            ctx->pc = 0x1352C8u;
            goto label_1352c8;
        }
    }
    ctx->pc = 0x1352B8u;
label_1352b8:
    // 0x1352b8: 0xc0cd972  jal         func_3365C8
label_1352bc:
    if (ctx->pc == 0x1352BCu) {
        ctx->pc = 0x1352BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352B8u;
        // 0x1352bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352C0u;
        goto label_1352c0;
    }
    ctx->pc = 0x1352B8u;
    SET_GPR_U32(ctx, 31, 0x1352C0u);
    ctx->pc = 0x1352BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352B8u;
    // 0x1352bc: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365C8u, 0x1352B8u, 0x1352C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352C0u;
label_1352c0:
    // 0x1352c0: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1352c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1352c4:
    // 0x1352c4: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x1352c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_1352c8:
    // 0x1352c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1352c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1352cc:
    // 0x1352cc: 0xc04828c  jal         func_120A30
label_1352d0:
    if (ctx->pc == 0x1352D0u) {
        ctx->pc = 0x1352D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352CCu;
        // 0x1352d0: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352D4u;
        goto label_1352d4;
    }
    ctx->pc = 0x1352CCu;
    SET_GPR_U32(ctx, 31, 0x1352D4u);
    ctx->pc = 0x1352D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1352CCu;
    // 0x1352d0: 0xc48c01a0  lwc1        $f12, 0x1A0($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A30u, 0x1352CCu, 0x1352D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1352D4u;
label_1352d4:
    // 0x1352d4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1352d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1352d8:
    // 0x1352d8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1352d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1352dc:
    // 0x1352dc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1352dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1352e0:
    // 0x1352e0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1352e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1352e4:
    // 0x1352e4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1352e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1352e8:
    // 0x1352e8: 0x3e00008  jr          $ra
label_1352ec:
    if (ctx->pc == 0x1352ECu) {
        ctx->pc = 0x1352ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352E8u;
        // 0x1352ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1352F0u;
        goto label_fallthrough_0x1352e8;
    }
    ctx->pc = 0x1352E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1352ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1352E8u;
        // 0x1352ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1352E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1352e8:
    ctx->pc = 0x1352F0u;
}
