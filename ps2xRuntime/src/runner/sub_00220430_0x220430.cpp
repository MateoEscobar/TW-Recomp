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

// Function: sub_00220430
// Address: 0x220430 - 0x2205e0
void sub_00220430_0x220430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220430_0x220430");
#endif

    switch (ctx->pc) {
        case 0x220488u: goto label_220488;
        case 0x220494u: goto label_220494;
        case 0x2204bcu: goto label_2204bc;
        case 0x2204d0u: goto label_2204d0;
        case 0x2204e4u: goto label_2204e4;
        case 0x220508u: goto label_220508;
        case 0x220520u: goto label_220520;
        case 0x22052cu: goto label_22052c;
        case 0x220554u: goto label_220554;
        case 0x220560u: goto label_220560;
        case 0x220580u: goto label_220580;
        case 0x22058cu: goto label_22058c;
        default: break;
    }

    ctx->pc = 0x220430u;

    // 0x220430: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x220430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x220434: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x220434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x220438: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x220438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x22043c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22043cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220440: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x220440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x220444: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x220444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x220448: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x220448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x22044c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x22044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x220450: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x220450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x220454: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x220454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x220458: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x220458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x22045c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x22045cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x220460: 0x82770197  lb          $s7, 0x197($s3)
    ctx->pc = 0x220460u;
    SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 407)));
    // 0x220464: 0x12e0004f  beqz        $s7, . + 4 + (0x4F << 2)
    ctx->pc = 0x220464u;
    {
        const bool branch_taken_0x220464 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x220468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220464u;
        // 0x220468: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220464) {
            ctx->pc = 0x2205A4u;
            goto label_2205a4;
        }
    }
    ctx->pc = 0x22046Cu;
    // 0x22046c: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x22046cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
    // 0x220470: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x220470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x220474: 0x245ea548  addiu       $fp, $v0, -0x5AB8
    ctx->pc = 0x220474u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944072));
    // 0x220478: 0x92720196  lbu         $s2, 0x196($s3)
    ctx->pc = 0x220478u;
    SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 406)));
    // 0x22047c: 0x24160084  addiu       $s6, $zero, 0x84
    ctx->pc = 0x22047cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x220480: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x220480u;
    SET_GPR_U32(ctx, 31, 0x220488u);
    ctx->pc = 0x220484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220480u;
    // 0x220484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x220480u, 0x220488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220488u;
label_220488:
    // 0x220488: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22048c: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x22048Cu;
    SET_GPR_U32(ctx, 31, 0x220494u);
    ctx->pc = 0x220490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22048Cu;
    // 0x220490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x22048Cu, 0x220494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220494u;
label_220494:
    // 0x220494: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x220494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220498: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x220498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x22049c: 0x8e6603b0  lw          $a2, 0x3B0($s3)
    ctx->pc = 0x22049cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x2204a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2204a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204a4: 0x8468033a  lh          $t0, 0x33A($v1)
    ctx->pc = 0x2204a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
    // 0x2204a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2204a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204ac: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2204acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204b0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2204b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2204b4: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x2204B4u;
    SET_GPR_U32(ctx, 31, 0x2204BCu);
    ctx->pc = 0x2204B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204B4u;
    // 0x2204b8: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2204B4u, 0x2204BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204BCu;
label_2204bc:
    // 0x2204bc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x2204bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x2204c0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2204c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204c4: 0x247591e0  addiu       $s5, $v1, -0x6E20
    ctx->pc = 0x2204c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939104));
    // 0x2204c8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2204C8u;
    SET_GPR_U32(ctx, 31, 0x2204D0u);
    ctx->pc = 0x2204CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204C8u;
    // 0x2204cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2204C8u, 0x2204D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204D0u;
label_2204d0:
    // 0x2204d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2204d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2204d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2204d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2204d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204dc: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x2204DCu;
    SET_GPR_U32(ctx, 31, 0x2204E4u);
    ctx->pc = 0x2204E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2204DCu;
    // 0x2204e0: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x2204DCu, 0x2204E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2204E4u;
label_2204e4:
    // 0x2204e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2204E4u;
    {
        const bool branch_taken_0x2204e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2204E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2204E4u;
        // 0x2204e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2204e4) {
            ctx->pc = 0x220510u;
            goto label_220510;
        }
    }
    ctx->pc = 0x2204ECu;
    // 0x2204ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2204ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2204f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2204f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2204f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2204f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2204f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2204fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2204fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220500: 0xc087900  jal         func_21E400
    ctx->pc = 0x220500u;
    SET_GPR_U32(ctx, 31, 0x220508u);
    ctx->pc = 0x220504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220500u;
    // 0x220504: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x220500u, 0x220508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220508u;
label_220508:
    // 0x220508: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x220508u;
    {
        const bool branch_taken_0x220508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220508u;
        // 0x22050c: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220508) {
            ctx->pc = 0x220590u;
            goto label_220590;
        }
    }
    ctx->pc = 0x220510u;
label_220510:
    // 0x220510: 0x8e91489c  lw          $s1, 0x489C($s4)
    ctx->pc = 0x220510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x220514: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x220514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220518: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x220518u;
    SET_GPR_U32(ctx, 31, 0x220520u);
    ctx->pc = 0x22051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220518u;
    // 0x22051c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x220518u, 0x220520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220520u;
label_220520:
    // 0x220520: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x220520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220524: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x220524u;
    SET_GPR_U32(ctx, 31, 0x22052Cu);
    ctx->pc = 0x220528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220524u;
    // 0x220528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x220524u, 0x22052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22052Cu;
label_22052c:
    // 0x22052c: 0x561018  mult        $v0, $v0, $s6
    ctx->pc = 0x22052cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x220530: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x220530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x220534: 0x8e6603b0  lw          $a2, 0x3B0($s3)
    ctx->pc = 0x220534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 944)));
    // 0x220538: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22053c: 0x8468033a  lh          $t0, 0x33A($v1)
    ctx->pc = 0x22053cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 826)));
    // 0x220540: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x220540u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220544: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x220544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220548: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x220548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22054c: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x22054Cu;
    SET_GPR_U32(ctx, 31, 0x220554u);
    ctx->pc = 0x220550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22054Cu;
    // 0x220550: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x22054Cu, 0x220554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220554u;
label_220554:
    // 0x220554: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220558: 0xc050fda  jal         func_143F68
    ctx->pc = 0x220558u;
    SET_GPR_U32(ctx, 31, 0x220560u);
    ctx->pc = 0x22055Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220558u;
    // 0x22055c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x220558u, 0x220560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220560u;
label_220560:
    // 0x220560: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x220560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x220564: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x220564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x220568: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x220568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22056c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22056cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220574: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x220574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220578: 0xc087900  jal         func_21E400
    ctx->pc = 0x220578u;
    SET_GPR_U32(ctx, 31, 0x220580u);
    ctx->pc = 0x22057Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220578u;
    // 0x22057c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x220578u, 0x220580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220580u;
label_220580:
    // 0x220580: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x220580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x220584: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x220584u;
    SET_GPR_U32(ctx, 31, 0x22058Cu);
    ctx->pc = 0x220588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220584u;
    // 0x220588: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x220584u, 0x22058Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22058Cu;
label_22058c:
    // 0x22058c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x22058cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_220590:
    // 0x220590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x220590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x220594: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x220594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220598: 0x2f2182a  slt         $v1, $s7, $s2
    ctx->pc = 0x220598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x22059c: 0x83900b  movn        $s2, $a0, $v1
    ctx->pc = 0x22059cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x2205a0: 0xa2720196  sb          $s2, 0x196($s3)
    ctx->pc = 0x2205a0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 406), (uint8_t)GPR_U32(ctx, 18));
label_2205a4:
    // 0x2205a4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2205a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2205a8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2205a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2205ac: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2205acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2205b0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2205b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2205b4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2205b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2205b8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2205b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2205bc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x2205bcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2205c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2205c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2205c4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x2205c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2205c8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2205c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2205cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2205CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2205D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2205CCu;
        // 0x2205d0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2205CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2205D4u;
    // 0x2205d4: 0x0  nop
    ctx->pc = 0x2205d4u;
    // NOP
    // 0x2205d8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2205d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2205dc: 0x0  nop
    ctx->pc = 0x2205dcu;
    // NOP
    ctx->pc = 0x2205e0u;
}
