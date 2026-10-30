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

// Function: sub_00177240
// Address: 0x177240 - 0x1774d0
void sub_00177240_0x177240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177240_0x177240");
#endif

    switch (ctx->pc) {
        case 0x1772a0u: goto label_1772a0;
        case 0x1772c4u: goto label_1772c4;
        case 0x1772e0u: goto label_1772e0;
        case 0x1772f4u: goto label_1772f4;
        case 0x177308u: goto label_177308;
        case 0x17731cu: goto label_17731c;
        case 0x177358u: goto label_177358;
        case 0x177384u: goto label_177384;
        case 0x17738cu: goto label_17738c;
        case 0x177398u: goto label_177398;
        case 0x1773ccu: goto label_1773cc;
        case 0x1773f0u: goto label_1773f0;
        case 0x177408u: goto label_177408;
        case 0x177420u: goto label_177420;
        case 0x177450u: goto label_177450;
        case 0x177468u: goto label_177468;
        case 0x17749cu: goto label_17749c;
        default: break;
    }

    ctx->pc = 0x177240u;

    // 0x177240: 0x27bdf5e0  addiu       $sp, $sp, -0xA20
    ctx->pc = 0x177240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964704));
    // 0x177244: 0x7fb509b0  sq          $s5, 0x9B0($sp)
    ctx->pc = 0x177244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2480), GPR_VEC(ctx, 21));
    // 0x177248: 0x7fb00a00  sq          $s0, 0xA00($sp)
    ctx->pc = 0x177248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2560), GPR_VEC(ctx, 16));
    // 0x17724c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x17724cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177250: 0x7fb109f0  sq          $s1, 0x9F0($sp)
    ctx->pc = 0x177250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2544), GPR_VEC(ctx, 17));
    // 0x177254: 0x7fb209e0  sq          $s2, 0x9E0($sp)
    ctx->pc = 0x177254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2528), GPR_VEC(ctx, 18));
    // 0x177258: 0x7fb309d0  sq          $s3, 0x9D0($sp)
    ctx->pc = 0x177258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2512), GPR_VEC(ctx, 19));
    // 0x17725c: 0x7fb409c0  sq          $s4, 0x9C0($sp)
    ctx->pc = 0x17725cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2496), GPR_VEC(ctx, 20));
    // 0x177260: 0x7fb609a0  sq          $s6, 0x9A0($sp)
    ctx->pc = 0x177260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2464), GPR_VEC(ctx, 22));
    // 0x177264: 0x7fb70990  sq          $s7, 0x990($sp)
    ctx->pc = 0x177264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2448), GPR_VEC(ctx, 23));
    // 0x177268: 0x7fbe0980  sq          $fp, 0x980($sp)
    ctx->pc = 0x177268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 30));
    // 0x17726c: 0xffbf0970  sd          $ra, 0x970($sp)
    ctx->pc = 0x17726cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2416), GPR_U64(ctx, 31));
    // 0x177270: 0xe7b40a10  swc1        $f20, 0xA10($sp)
    ctx->pc = 0x177270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2576), bits); }
    // 0x177274: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x177274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x177278: 0x10400088  beqz        $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x177278u;
    {
        const bool branch_taken_0x177278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177278u;
        // 0x17727c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177278) {
            ctx->pc = 0x17749Cu;
            goto label_17749c;
        }
    }
    ctx->pc = 0x177280u;
    // 0x177280: 0x24170022  addiu       $s7, $zero, 0x22
    ctx->pc = 0x177280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x177284: 0x45b80a  movz        $s7, $v0, $a1
    ctx->pc = 0x177284u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x177288: 0x27be08a0  addiu       $fp, $sp, 0x8A0
    ctx->pc = 0x177288u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 2208));
    // 0x17728c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x17728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177290: 0x27b60960  addiu       $s6, $sp, 0x960
    ctx->pc = 0x177290u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 2400));
    // 0x177294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x177294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x177298: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17729c: 0x0  nop
    ctx->pc = 0x17729cu;
    // NOP
label_1772a0:
    // 0x1772a0: 0x0  nop
    ctx->pc = 0x1772a0u;
    // NOP
    // 0x1772a4: 0x0  nop
    ctx->pc = 0x1772a4u;
    // NOP
    // 0x1772a8: 0x0  nop
    ctx->pc = 0x1772a8u;
    // NOP
    // 0x1772ac: 0x0  nop
    ctx->pc = 0x1772acu;
    // NOP
    // 0x1772b0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1772B0u;
    {
        const bool branch_taken_0x1772b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1772B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772B0u;
        // 0x1772b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772b0) {
            ctx->pc = 0x1772A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1772a0;
        }
    }
    ctx->pc = 0x1772B8u;
    // 0x1772b8: 0x8ea402b8  lw          $a0, 0x2B8($s5)
    ctx->pc = 0x1772b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x1772bc: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x1772BCu;
    SET_GPR_U32(ctx, 31, 0x1772C4u);
    ctx->pc = 0x1772C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772BCu;
    // 0x1772c0: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x1772BCu, 0x1772C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772C4u;
label_1772c4:
    // 0x1772c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1772c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772c8: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x1772c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1772cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1772CCu;
    {
        const bool branch_taken_0x1772cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1772D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1772CCu;
        // 0x1772d0: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1772cc) {
            ctx->pc = 0x177334u;
            goto label_177334;
        }
    }
    ctx->pc = 0x1772D4u;
    // 0x1772d4: 0x24b10040  addiu       $s1, $a1, 0x40
    ctx->pc = 0x1772d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1772d8: 0x24b30050  addiu       $s3, $a1, 0x50
    ctx->pc = 0x1772d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x1772dc: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x1772dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1772e0:
    // 0x1772e0: 0xce200000  pref        0x00, 0x0($s1)
    ctx->pc = 0x1772e0u;
    // PREF instruction (ignored)
    // 0x1772e4: 0xce400000  pref        0x00, 0x0($s2)
    ctx->pc = 0x1772e4u;
    // PREF instruction (ignored)
    // 0x1772e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1772e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1772ec: 0xc0cd940  jal         func_336500
    ctx->pc = 0x1772ECu;
    SET_GPR_U32(ctx, 31, 0x1772F4u);
    ctx->pc = 0x1772F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772ECu;
    // 0x1772f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x1772ECu, 0x1772F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772F4u;
label_1772f4:
    // 0x1772f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1772f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1772f8: 0x8ea402b8  lw          $a0, 0x2B8($s5)
    ctx->pc = 0x1772f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x1772fc: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x1772fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x177300: 0xc087408  jal         func_21D020
    ctx->pc = 0x177300u;
    SET_GPR_U32(ctx, 31, 0x177308u);
    ctx->pc = 0x177304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177300u;
    // 0x177304: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x177300u, 0x177308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177308u;
label_177308:
    // 0x177308: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x177308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17730c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17730cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x177310: 0x27a40890  addiu       $a0, $sp, 0x890
    ctx->pc = 0x177310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
    // 0x177314: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x177314u;
    SET_GPR_U32(ctx, 31, 0x17731Cu);
    ctx->pc = 0x177318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177314u;
    // 0x177318: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x177314u, 0x17731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17731Cu;
label_17731c:
    // 0x17731c: 0x7ba20890  lq          $v0, 0x890($sp)
    ctx->pc = 0x17731cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
    // 0x177320: 0x297182b  sltu        $v1, $s4, $s7
    ctx->pc = 0x177320u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x177324: 0x7fa20880  sq          $v0, 0x880($sp)
    ctx->pc = 0x177324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 2));
    // 0x177328: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x177328u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x17732c: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x17732Cu;
    {
        const bool branch_taken_0x17732c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17732Cu;
        // 0x177330: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17732c) {
            ctx->pc = 0x1772E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1772e0;
        }
    }
    ctx->pc = 0x177334u;
label_177334:
    // 0x177334: 0x8ea202b8  lw          $v0, 0x2B8($s5)
    ctx->pc = 0x177334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x177338: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x177338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x17733c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x17733cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x177340: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x177340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177344: 0x84450092  lh          $a1, 0x92($v0)
    ctx->pc = 0x177344u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x177348: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x177348u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17734c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x177350: 0xc0cd940  jal         func_336500
    ctx->pc = 0x177350u;
    SET_GPR_U32(ctx, 31, 0x177358u);
    ctx->pc = 0x177354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177350u;
    // 0x177354: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x177350u, 0x177358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177358u;
label_177358:
    // 0x177358: 0x8ea302b8  lw          $v1, 0x2B8($s5)
    ctx->pc = 0x177358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x17735c: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x177360: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x177360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x177364: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x177364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177368: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x177368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x17736c: 0x24a57210  addiu       $a1, $a1, 0x7210
    ctx->pc = 0x17736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29200));
    // 0x177370: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x177370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x177374: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x177374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x177378: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x177378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17737c: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x17737Cu;
    SET_GPR_U32(ctx, 31, 0x177384u);
    ctx->pc = 0x177380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17737Cu;
    // 0x177380: 0x7fa308d0  sq          $v1, 0x8D0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x17737Cu, 0x177384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177384u;
label_177384:
    // 0x177384: 0xc118a4c  jal         func_462930
    ctx->pc = 0x177384u;
    SET_GPR_U32(ctx, 31, 0x17738Cu);
    ctx->pc = 0x177388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177384u;
    // 0x177388: 0x8fa40960  lw          $a0, 0x960($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x462930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462930u, 0x177384u, 0x17738Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17738Cu;
label_17738c:
    // 0x17738c: 0x8ea402b8  lw          $a0, 0x2B8($s5)
    ctx->pc = 0x17738cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 696)));
    // 0x177390: 0xc087408  jal         func_21D020
    ctx->pc = 0x177390u;
    SET_GPR_U32(ctx, 31, 0x177398u);
    ctx->pc = 0x177394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177390u;
    // 0x177394: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x177390u, 0x177398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177398u;
label_177398:
    // 0x177398: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x177398u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17739c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17739cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1773a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1773a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1773a4: 0x0  nop
    ctx->pc = 0x1773a4u;
    // NOP
    // 0x1773a8: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1773a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1773ac: 0x0  nop
    ctx->pc = 0x1773acu;
    // NOP
    // 0x1773b0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x1773B0u;
    {
        const bool branch_taken_0x1773b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1773B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773B0u;
        // 0x1773b4: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773b0) {
            ctx->pc = 0x177434u;
            goto label_177434;
        }
    }
    ctx->pc = 0x1773B8u;
    // 0x1773b8: 0x27a40880  addiu       $a0, $sp, 0x880
    ctx->pc = 0x1773b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
    // 0x1773bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1773bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1773c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773c4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x1773C4u;
    SET_GPR_U32(ctx, 31, 0x1773CCu);
    ctx->pc = 0x1773C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1773C4u;
    // 0x1773c8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x1773C4u, 0x1773CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1773CCu;
label_1773cc:
    // 0x1773cc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1773ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1773d0: 0xe7b40888  swc1        $f20, 0x888($sp)
    ctx->pc = 0x1773d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2184), bits); }
    // 0x1773d4: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x1773d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1773d8: 0xe7b40880  swc1        $f20, 0x880($sp)
    ctx->pc = 0x1773d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2176), bits); }
    // 0x1773dc: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1773DCu;
    {
        const bool branch_taken_0x1773dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1773E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1773DCu;
        // 0x1773e0: 0xe7b40884  swc1        $f20, 0x884($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 2180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1773dc) {
            ctx->pc = 0x177488u;
            goto label_177488;
        }
    }
    ctx->pc = 0x1773E4u;
    // 0x1773e4: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x1773e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1773e8: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x1773e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773ec: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x1773ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1773f0:
    // 0x1773f0: 0xce200000  pref        0x00, 0x0($s1)
    ctx->pc = 0x1773f0u;
    // PREF instruction (ignored)
    // 0x1773f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1773f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773f8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1773f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1773fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1773fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177400: 0xc0cda50  jal         func_336940
    ctx->pc = 0x177400u;
    SET_GPR_U32(ctx, 31, 0x177408u);
    ctx->pc = 0x177404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177400u;
    // 0x177404: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336940u, 0x177400u, 0x177408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177408u;
label_177408:
    // 0x177408: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x177408u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17740c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177410: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x177410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x177414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177418: 0xc11f390  jal         func_47CE40
    ctx->pc = 0x177418u;
    SET_GPR_U32(ctx, 31, 0x177420u);
    ctx->pc = 0x17741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177418u;
    // 0x17741c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47CE40u, 0x177418u, 0x177420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177420u;
label_177420:
    // 0x177420: 0x277102b  sltu        $v0, $s3, $s7
    ctx->pc = 0x177420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x177424: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x177424u;
    {
        const bool branch_taken_0x177424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177424u;
        // 0x177428: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177424) {
            ctx->pc = 0x1773F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1773f0;
        }
    }
    ctx->pc = 0x17742Cu;
    // 0x17742c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x17742Cu;
    {
        const bool branch_taken_0x17742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17742Cu;
        // 0x177430: 0x8ea20020  lw          $v0, 0x20($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17742c) {
            ctx->pc = 0x17748Cu;
            goto label_17748c;
        }
    }
    ctx->pc = 0x177434u;
label_177434:
    // 0x177434: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x177434u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x177438: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177438u;
    {
        const bool branch_taken_0x177438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177438u;
        // 0x17743c: 0x26d3000c  addiu       $s3, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177438) {
            ctx->pc = 0x177488u;
            goto label_177488;
        }
    }
    ctx->pc = 0x177440u;
    // 0x177440: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x177440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x177444: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x177444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177448: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x177448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17744c: 0x0  nop
    ctx->pc = 0x17744cu;
    // NOP
label_177450:
    // 0x177450: 0xce000000  pref        0x00, 0x0($s0)
    ctx->pc = 0x177450u;
    // PREF instruction (ignored)
    // 0x177454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177458: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x177458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17745c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x17745cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177460: 0xc0cda50  jal         func_336940
    ctx->pc = 0x177460u;
    SET_GPR_U32(ctx, 31, 0x177468u);
    ctx->pc = 0x177464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177460u;
    // 0x177464: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336940u, 0x177460u, 0x177468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177468u;
label_177468:
    // 0x177468: 0x26520040  addiu       $s2, $s2, 0x40
    ctx->pc = 0x177468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x17746c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x17746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x177470: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x177470u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x177474: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x177474u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x177478: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x177478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x17747c: 0x297102b  sltu        $v0, $s4, $s7
    ctx->pc = 0x17747cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x177480: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x177480u;
    {
        const bool branch_taken_0x177480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177480u;
        // 0x177484: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177480) {
            ctx->pc = 0x177450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177450;
        }
    }
    ctx->pc = 0x177488u;
label_177488:
    // 0x177488: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x177488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_17748c:
    // 0x17748c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17748cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x177490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177494: 0xc120efe  jal         func_483BF8
    ctx->pc = 0x177494u;
    SET_GPR_U32(ctx, 31, 0x17749Cu);
    ctx->pc = 0x177498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177494u;
    // 0x177498: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483BF8u, 0x177494u, 0x17749Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17749Cu;
label_17749c:
    // 0x17749c: 0x7bb00a00  lq          $s0, 0xA00($sp)
    ctx->pc = 0x17749cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2560)));
    // 0x1774a0: 0x7bb109f0  lq          $s1, 0x9F0($sp)
    ctx->pc = 0x1774a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2544)));
    // 0x1774a4: 0x7bb209e0  lq          $s2, 0x9E0($sp)
    ctx->pc = 0x1774a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2528)));
    // 0x1774a8: 0x7bb309d0  lq          $s3, 0x9D0($sp)
    ctx->pc = 0x1774a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2512)));
    // 0x1774ac: 0x7bb409c0  lq          $s4, 0x9C0($sp)
    ctx->pc = 0x1774acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2496)));
    // 0x1774b0: 0x7bb509b0  lq          $s5, 0x9B0($sp)
    ctx->pc = 0x1774b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2480)));
    // 0x1774b4: 0x7bb609a0  lq          $s6, 0x9A0($sp)
    ctx->pc = 0x1774b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2464)));
    // 0x1774b8: 0x7bb70990  lq          $s7, 0x990($sp)
    ctx->pc = 0x1774b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2448)));
    // 0x1774bc: 0x7bbe0980  lq          $fp, 0x980($sp)
    ctx->pc = 0x1774bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
    // 0x1774c0: 0xdfbf0970  ld          $ra, 0x970($sp)
    ctx->pc = 0x1774c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2416)));
    // 0x1774c4: 0xc7b40a10  lwc1        $f20, 0xA10($sp)
    ctx->pc = 0x1774c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 2576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1774c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1774C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1774CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1774C8u;
        // 0x1774cc: 0x27bd0a20  addiu       $sp, $sp, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1774C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1774D0u;
}
