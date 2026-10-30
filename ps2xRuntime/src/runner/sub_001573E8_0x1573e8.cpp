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

// Function: sub_001573E8
// Address: 0x1573e8 - 0x157588
void sub_001573E8_0x1573e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001573E8_0x1573e8");
#endif

    switch (ctx->pc) {
        case 0x157448u: goto label_157448;
        case 0x157478u: goto label_157478;
        case 0x1574b0u: goto label_1574b0;
        case 0x1574c4u: goto label_1574c4;
        case 0x1574ccu: goto label_1574cc;
        case 0x157508u: goto label_157508;
        case 0x157518u: goto label_157518;
        case 0x157538u: goto label_157538;
        case 0x157540u: goto label_157540;
        case 0x157550u: goto label_157550;
        default: break;
    }

    ctx->pc = 0x1573e8u;

    // 0x1573e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1573e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1573ec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1573ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1573f0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1573f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1573f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1573f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1573f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1573f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1573fc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1573fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x157400: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x157400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x157404: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x157404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x157408: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x157408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x15740c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x15740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x157410: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x157410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x157414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157418: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x15741c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x15741Cu;
    {
        const bool branch_taken_0x15741c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15741Cu;
        // 0x157420: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15741c) {
            ctx->pc = 0x1574F0u;
            goto label_1574f0;
        }
    }
    ctx->pc = 0x157424u;
    // 0x157424: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x157424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x157428: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x157428u;
    {
        const bool branch_taken_0x157428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157428u;
        // 0x15742c: 0xae600028  sw          $zero, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157428) {
            ctx->pc = 0x1574F0u;
            goto label_1574f0;
        }
    }
    ctx->pc = 0x157430u;
    // 0x157430: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x157430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157434: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157434u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157438: 0x241e0050  addiu       $fp, $zero, 0x50
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x15743c: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x15743cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x157440: 0x24140228  addiu       $s4, $zero, 0x228
    ctx->pc = 0x157440u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x157444: 0x26720100  addiu       $s2, $s3, 0x100
    ctx->pc = 0x157444u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_157448:
    // 0x157448: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x157448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15744c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x15744Cu;
    {
        const bool branch_taken_0x15744c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15744Cu;
        // 0x157450: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15744c) {
            ctx->pc = 0x1574CCu;
            goto label_1574cc;
        }
    }
    ctx->pc = 0x157454u;
    // 0x157454: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x157458: 0x28102  srl         $s0, $v0, 4
    ctx->pc = 0x157458u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x15745c: 0x8ca4489c  lw          $a0, 0x489C($a1)
    ctx->pc = 0x15745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18588)));
    // 0x157460: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x157460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x157464: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x157464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x157468: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x157468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15746c: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x157470: 0xc0e409a  jal         func_390268
    ctx->pc = 0x157470u;
    SET_GPR_U32(ctx, 31, 0x157478u);
    ctx->pc = 0x157474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157470u;
    // 0x157474: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x157470u, 0x157478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157478u;
label_157478:
    // 0x157478: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x157478u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15747c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x15747Cu;
    {
        const bool branch_taken_0x15747c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x157480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15747Cu;
        // 0x157480: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15747c) {
            ctx->pc = 0x1574D0u;
            goto label_1574d0;
        }
    }
    ctx->pc = 0x157484u;
    // 0x157484: 0x2463d85c  addiu       $v1, $v1, -0x27A4
    ctx->pc = 0x157484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957148));
    // 0x157488: 0x600013  mtlo        $v1
    ctx->pc = 0x157488u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x15748c: 0x721e1000  madd        $v0, $s0, $fp
    ctx->pc = 0x15748cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157490: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x157490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157494: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x157494u;
    {
        const bool branch_taken_0x157494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157494u;
        // 0x157498: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157494) {
            ctx->pc = 0x1574D0u;
            goto label_1574d0;
        }
    }
    ctx->pc = 0x15749Cu;
    // 0x15749c: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x15749cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1574a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1574a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574a4: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x1574a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x1574a8: 0xc08aa9e  jal         func_22AA78
    ctx->pc = 0x1574A8u;
    SET_GPR_U32(ctx, 31, 0x1574B0u);
    ctx->pc = 0x1574ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574A8u;
    // 0x1574ac: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AA78u, 0x1574A8u, 0x1574B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574B0u;
label_1574b0:
    // 0x1574b0: 0xa6400000  sh          $zero, 0x0($s2)
    ctx->pc = 0x1574b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1574b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1574b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1574b8: 0x26e40840  addiu       $a0, $s7, 0x840
    ctx->pc = 0x1574b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2112));
    // 0x1574bc: 0xc06ba36  jal         func_1AE8D8
    ctx->pc = 0x1574BCu;
    SET_GPR_U32(ctx, 31, 0x1574C4u);
    ctx->pc = 0x1574C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1574BCu;
    // 0x1574c0: 0x822501b0  lb          $a1, 0x1B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE8D8u, 0x1574BCu, 0x1574C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574C4u;
label_1574c4:
    // 0x1574c4: 0xc05152a  jal         func_1454A8
    ctx->pc = 0x1574C4u;
    SET_GPR_U32(ctx, 31, 0x1574CCu);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x1574C4u, 0x1574CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1574CCu;
label_1574cc:
    // 0x1574cc: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1574ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1574d0:
    // 0x1574d0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1574d4: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1574d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1574d8: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x1574d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1574dc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1574DCu;
    {
        const bool branch_taken_0x1574dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1574E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1574DCu;
        // 0x1574e0: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1574dc) {
            ctx->pc = 0x157448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157448;
        }
    }
    ctx->pc = 0x1574E4u;
    // 0x1574e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1574e8: 0x52c2001a  beql        $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1574E8u;
    {
        const bool branch_taken_0x1574e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x1574e8) {
            ctx->pc = 0x1574ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1574E8u;
            // 0x1574ec: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157554u;
            goto label_157554;
        }
    }
    ctx->pc = 0x1574F0u;
label_1574f0:
    // 0x1574f0: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1574f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1574f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1574f8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1574F8u;
    {
        const bool branch_taken_0x1574f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1574f8) {
            ctx->pc = 0x157510u;
            goto label_157510;
        }
    }
    ctx->pc = 0x157500u;
    // 0x157500: 0xc055c88  jal         func_157220
    ctx->pc = 0x157500u;
    SET_GPR_U32(ctx, 31, 0x157508u);
    ctx->pc = 0x157504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157500u;
    // 0x157504: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157220u, 0x157500u, 0x157508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157508u;
label_157508:
    // 0x157508: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x157508u;
    {
        const bool branch_taken_0x157508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157508u;
        // 0x15750c: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157508) {
            ctx->pc = 0x15751Cu;
            goto label_15751c;
        }
    }
    ctx->pc = 0x157510u;
label_157510:
    // 0x157510: 0xc055c24  jal         func_157090
    ctx->pc = 0x157510u;
    SET_GPR_U32(ctx, 31, 0x157518u);
    ctx->pc = 0x157514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157510u;
    // 0x157514: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157090u, 0x157510u, 0x157518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157518u;
label_157518:
    // 0x157518: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x157518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_15751c:
    // 0x15751c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15751cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157520: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157520u;
    {
        const bool branch_taken_0x157520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x157524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157520u;
        // 0x157524: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157520) {
            ctx->pc = 0x157530u;
            goto label_157530;
        }
    }
    ctx->pc = 0x157528u;
    // 0x157528: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157528u;
    {
        const bool branch_taken_0x157528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x157528) {
            ctx->pc = 0x157538u;
            goto label_157538;
        }
    }
    ctx->pc = 0x157530u;
label_157530:
    // 0x157530: 0xc05152a  jal         func_1454A8
    ctx->pc = 0x157530u;
    SET_GPR_U32(ctx, 31, 0x157538u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x157530u, 0x157538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157538u;
label_157538:
    // 0x157538: 0xc055d6e  jal         func_1575B8
    ctx->pc = 0x157538u;
    SET_GPR_U32(ctx, 31, 0x157540u);
    ctx->pc = 0x15753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157538u;
    // 0x15753c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1575B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1575B8u, 0x157538u, 0x157540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157540u;
label_157540:
    // 0x157540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157540u;
    {
        const bool branch_taken_0x157540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157540u;
        // 0x157544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157540) {
            ctx->pc = 0x157558u;
            goto label_157558;
        }
    }
    ctx->pc = 0x157548u;
    // 0x157548: 0xc05152a  jal         func_1454A8
    ctx->pc = 0x157548u;
    SET_GPR_U32(ctx, 31, 0x157550u);
    ctx->pc = 0x1454A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1454A8u, 0x157548u, 0x157550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157550u;
label_157550:
    // 0x157550: 0xae600020  sw          $zero, 0x20($s3)
    ctx->pc = 0x157550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
label_157554:
    // 0x157554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x157554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_157558:
    // 0x157558: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x157558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15755c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x15755cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157560: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x157560u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157564: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x157564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157568: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x157568u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15756c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x15756cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157570: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x157570u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157574: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x157574u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157578: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x157578u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15757c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15757cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157580: 0x3e00008  jr          $ra
    ctx->pc = 0x157580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157580u;
        // 0x157584: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157588u;
}
