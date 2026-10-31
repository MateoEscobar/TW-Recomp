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

// Function: sub_002098B0
// Address: 0x2098b0 - 0x2099d8
void sub_002098B0_0x2098b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002098B0_0x2098b0");
#endif

    switch (ctx->pc) {
        case 0x2098b0u: goto label_2098b0;
        case 0x2098b4u: goto label_2098b4;
        case 0x2098b8u: goto label_2098b8;
        case 0x2098bcu: goto label_2098bc;
        case 0x2098c0u: goto label_2098c0;
        case 0x2098c4u: goto label_2098c4;
        case 0x2098c8u: goto label_2098c8;
        case 0x2098ccu: goto label_2098cc;
        case 0x2098d0u: goto label_2098d0;
        case 0x2098d4u: goto label_2098d4;
        case 0x2098d8u: goto label_2098d8;
        case 0x2098dcu: goto label_2098dc;
        case 0x2098e0u: goto label_2098e0;
        case 0x2098e4u: goto label_2098e4;
        case 0x2098e8u: goto label_2098e8;
        case 0x2098ecu: goto label_2098ec;
        case 0x2098f0u: goto label_2098f0;
        case 0x2098f4u: goto label_2098f4;
        case 0x2098f8u: goto label_2098f8;
        case 0x2098fcu: goto label_2098fc;
        case 0x209900u: goto label_209900;
        case 0x209904u: goto label_209904;
        case 0x209908u: goto label_209908;
        case 0x20990cu: goto label_20990c;
        case 0x209910u: goto label_209910;
        case 0x209914u: goto label_209914;
        case 0x209918u: goto label_209918;
        case 0x20991cu: goto label_20991c;
        case 0x209920u: goto label_209920;
        case 0x209924u: goto label_209924;
        case 0x209928u: goto label_209928;
        case 0x20992cu: goto label_20992c;
        case 0x209930u: goto label_209930;
        case 0x209934u: goto label_209934;
        case 0x209938u: goto label_209938;
        case 0x20993cu: goto label_20993c;
        case 0x209940u: goto label_209940;
        case 0x209944u: goto label_209944;
        case 0x209948u: goto label_209948;
        case 0x20994cu: goto label_20994c;
        case 0x209950u: goto label_209950;
        case 0x209954u: goto label_209954;
        case 0x209958u: goto label_209958;
        case 0x20995cu: goto label_20995c;
        case 0x209960u: goto label_209960;
        case 0x209964u: goto label_209964;
        case 0x209968u: goto label_209968;
        case 0x20996cu: goto label_20996c;
        case 0x209970u: goto label_209970;
        case 0x209974u: goto label_209974;
        case 0x209978u: goto label_209978;
        case 0x20997cu: goto label_20997c;
        case 0x209980u: goto label_209980;
        case 0x209984u: goto label_209984;
        case 0x209988u: goto label_209988;
        case 0x20998cu: goto label_20998c;
        case 0x209990u: goto label_209990;
        case 0x209994u: goto label_209994;
        case 0x209998u: goto label_209998;
        case 0x20999cu: goto label_20999c;
        case 0x2099a0u: goto label_2099a0;
        case 0x2099a4u: goto label_2099a4;
        case 0x2099a8u: goto label_2099a8;
        case 0x2099acu: goto label_2099ac;
        case 0x2099b0u: goto label_2099b0;
        case 0x2099b4u: goto label_2099b4;
        case 0x2099b8u: goto label_2099b8;
        case 0x2099bcu: goto label_2099bc;
        case 0x2099c0u: goto label_2099c0;
        case 0x2099c4u: goto label_2099c4;
        case 0x2099c8u: goto label_2099c8;
        case 0x2099ccu: goto label_2099cc;
        case 0x2099d0u: goto label_2099d0;
        case 0x2099d4u: goto label_2099d4;
        default: break;
    }

    ctx->pc = 0x2098b0u;

label_2098b0:
    // 0x2098b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2098b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2098b4:
    // 0x2098b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2098b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2098b8:
    // 0x2098b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2098b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2098bc:
    // 0x2098bc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2098bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2098c0:
    // 0x2098c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2098c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2098c4:
    // 0x2098c4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2098c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2098c8:
    // 0x2098c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2098c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_2098cc:
    // 0x2098cc: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_2098d0:
    if (ctx->pc == 0x2098D0u) {
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098D4u;
        goto label_2098d4;
    }
    ctx->pc = 0x2098CCu;
    {
        const bool branch_taken_0x2098cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2098D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098CCu;
        // 0x2098d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098cc) {
            ctx->pc = 0x2098F0u;
            goto label_2098f0;
        }
    }
    ctx->pc = 0x2098D4u;
label_2098d4:
    // 0x2098d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2098d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_2098d8:
    // 0x2098d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2098d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2098dc:
    // 0x2098dc: 0x8c64aa84  lw          $a0, -0x557C($v1)
    ctx->pc = 0x2098dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
label_2098e0:
    // 0x2098e0: 0x3442ff01  ori         $v0, $v0, 0xFF01
    ctx->pc = 0x2098e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65281);
label_2098e4:
    // 0x2098e4: 0xae420074  sw          $v0, 0x74($s2)
    ctx->pc = 0x2098e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
label_2098e8:
    // 0x2098e8: 0x10000030  b           . + 4 + (0x30 << 2)
label_2098ec:
    if (ctx->pc == 0x2098ECu) {
        ctx->pc = 0x2098ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098E8u;
        // 0x2098ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098F0u;
        goto label_2098f0;
    }
    ctx->pc = 0x2098E8u;
    {
        const bool branch_taken_0x2098e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2098ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098E8u;
        // 0x2098ec: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098e8) {
            ctx->pc = 0x2099ACu;
            goto label_2099ac;
        }
    }
    ctx->pc = 0x2098F0u;
label_2098f0:
    // 0x2098f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2098f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2098f4:
    // 0x2098f4: 0x14a20030  bne         $a1, $v0, . + 4 + (0x30 << 2)
label_2098f8:
    if (ctx->pc == 0x2098F8u) {
        ctx->pc = 0x2098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098F4u;
        // 0x2098f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2098FCu;
        goto label_2098fc;
    }
    ctx->pc = 0x2098F4u;
    {
        const bool branch_taken_0x2098f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2098F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098F4u;
        // 0x2098f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2098f4) {
            ctx->pc = 0x2099B8u;
            goto label_2099b8;
        }
    }
    ctx->pc = 0x2098FCu;
label_2098fc:
    // 0x2098fc: 0xc0750fa  jal         func_1D43E8
label_209900:
    if (ctx->pc == 0x209900u) {
        ctx->pc = 0x209900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2098FCu;
        // 0x209900: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209904u;
        goto label_209904;
    }
    ctx->pc = 0x2098FCu;
    SET_GPR_U32(ctx, 31, 0x209904u);
    ctx->pc = 0x209900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2098FCu;
    // 0x209900: 0x8e440090  lw          $a0, 0x90($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43E8u, 0x2098FCu, 0x209904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209904u;
label_209904:
    // 0x209904: 0x8e440090  lw          $a0, 0x90($s2)
    ctx->pc = 0x209904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
label_209908:
    // 0x209908: 0xc0750fc  jal         func_1D43F0
label_20990c:
    if (ctx->pc == 0x20990Cu) {
        ctx->pc = 0x20990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209908u;
        // 0x20990c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209910u;
        goto label_209910;
    }
    ctx->pc = 0x209908u;
    SET_GPR_U32(ctx, 31, 0x209910u);
    ctx->pc = 0x20990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209908u;
    // 0x20990c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D43F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43F0u, 0x209908u, 0x209910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209910u;
label_209910:
    // 0x209910: 0xc08101e  jal         func_204078
label_209914:
    if (ctx->pc == 0x209914u) {
        ctx->pc = 0x209914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209910u;
        // 0x209914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209918u;
        goto label_209918;
    }
    ctx->pc = 0x209910u;
    SET_GPR_U32(ctx, 31, 0x209918u);
    ctx->pc = 0x209914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209910u;
    // 0x209914: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204078u, 0x209910u, 0x209918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209918u;
label_209918:
    // 0x209918: 0xc08101a  jal         func_204068
label_20991c:
    if (ctx->pc == 0x20991Cu) {
        ctx->pc = 0x209920u;
        goto label_209920;
    }
    ctx->pc = 0x209918u;
    SET_GPR_U32(ctx, 31, 0x209920u);
    ctx->pc = 0x204068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204068u, 0x209918u, 0x209920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209920u;
label_209920:
    // 0x209920: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_209924:
    if (ctx->pc == 0x209924u) {
        ctx->pc = 0x209924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209920u;
        // 0x209924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209928u;
        goto label_209928;
    }
    ctx->pc = 0x209920u;
    {
        const bool branch_taken_0x209920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209920u;
        // 0x209924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209920) {
            ctx->pc = 0x209960u;
            goto label_209960;
        }
    }
    ctx->pc = 0x209928u;
label_209928:
    // 0x209928: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x209928u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_20992c:
    // 0x20992c: 0x8e715024  lw          $s1, 0x5024($s3)
    ctx->pc = 0x20992cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
label_209930:
    // 0x209930: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_209934:
    // 0x209934: 0x86020078  lh          $v0, 0x78($s0)
    ctx->pc = 0x209934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 120)));
label_209938:
    // 0x209938: 0x26100078  addiu       $s0, $s0, 0x78
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20993c:
    // 0x20993c: 0xc081022  jal         func_204088
label_209940:
    if (ctx->pc == 0x209940u) {
        ctx->pc = 0x209940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20993Cu;
        // 0x209940: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209944u;
        goto label_209944;
    }
    ctx->pc = 0x20993Cu;
    SET_GPR_U32(ctx, 31, 0x209944u);
    ctx->pc = 0x209940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20993Cu;
    // 0x209940: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x20993Cu, 0x209944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209944u;
label_209944:
    // 0x209944: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x209944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209948:
    // 0x209948: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20994c:
    // 0x20994c: 0x60f809  jalr        $v1
label_209950:
    if (ctx->pc == 0x209950u) {
        ctx->pc = 0x209950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20994Cu;
        // 0x209950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209954u;
        goto label_209954;
    }
    ctx->pc = 0x20994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209954u);
        ctx->pc = 0x209950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20994Cu;
        // 0x209950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20994Cu, 0x209954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209954u;
label_209954:
    // 0x209954: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_209958:
    if (ctx->pc == 0x209958u) {
        ctx->pc = 0x209958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209954u;
        // 0x209958: 0x8e715024  lw          $s1, 0x5024($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20995Cu;
        goto label_20995c;
    }
    ctx->pc = 0x209954u;
    {
        const bool branch_taken_0x209954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209954u;
        // 0x209958: 0x8e715024  lw          $s1, 0x5024($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209954) {
            ctx->pc = 0x209968u;
            goto label_209968;
        }
    }
    ctx->pc = 0x20995Cu;
label_20995c:
    // 0x20995c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209960:
    // 0x209960: 0x1000000f  b           . + 4 + (0xF << 2)
label_209964:
    if (ctx->pc == 0x209964u) {
        ctx->pc = 0x209964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209960u;
        // 0x209964: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209968u;
        goto label_209968;
    }
    ctx->pc = 0x209960u;
    {
        const bool branch_taken_0x209960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209960u;
        // 0x209964: 0xae420074  sw          $v0, 0x74($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209960) {
            ctx->pc = 0x2099A0u;
            goto label_2099a0;
        }
    }
    ctx->pc = 0x209968u;
label_209968:
    // 0x209968: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x209968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_20996c:
    // 0x20996c: 0x860200c8  lh          $v0, 0xC8($s0)
    ctx->pc = 0x20996cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 200)));
label_209970:
    // 0x209970: 0x261000c8  addiu       $s0, $s0, 0xC8
    ctx->pc = 0x209970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
label_209974:
    // 0x209974: 0xc081022  jal         func_204088
label_209978:
    if (ctx->pc == 0x209978u) {
        ctx->pc = 0x209978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209974u;
        // 0x209978: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20997Cu;
        goto label_20997c;
    }
    ctx->pc = 0x209974u;
    SET_GPR_U32(ctx, 31, 0x20997Cu);
    ctx->pc = 0x209978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209974u;
    // 0x209978: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x209974u, 0x20997Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20997Cu;
label_20997c:
    // 0x20997c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x20997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_209980:
    // 0x209980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x209980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209984:
    // 0x209984: 0x60f809  jalr        $v1
label_209988:
    if (ctx->pc == 0x209988u) {
        ctx->pc = 0x209988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209984u;
        // 0x209988: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20998Cu;
        goto label_20998c;
    }
    ctx->pc = 0x209984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20998Cu);
        ctx->pc = 0x209988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209984u;
        // 0x209988: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209984u, 0x20998Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20998Cu;
label_20998c:
    // 0x20998c: 0x8e655024  lw          $a1, 0x5024($s3)
    ctx->pc = 0x20998cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20516)));
label_209990:
    // 0x209990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209994:
    // 0x209994: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209998:
    // 0x209998: 0xc080fee  jal         func_203FB8
label_20999c:
    if (ctx->pc == 0x20999Cu) {
        ctx->pc = 0x20999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209998u;
        // 0x20999c: 0xaca20124  sw          $v0, 0x124($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099A0u;
        goto label_2099a0;
    }
    ctx->pc = 0x209998u;
    SET_GPR_U32(ctx, 31, 0x2099A0u);
    ctx->pc = 0x20999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209998u;
    // 0x20999c: 0xaca20124  sw          $v0, 0x124($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 292), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FB8u, 0x209998u, 0x2099A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099A0u;
label_2099a0:
    // 0x2099a0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2099a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2099a4:
    // 0x2099a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2099a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2099a8:
    // 0x2099a8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x2099a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_2099ac:
    // 0x2099ac: 0xc043f0c  jal         func_10FC30
label_2099b0:
    if (ctx->pc == 0x2099B0u) {
        ctx->pc = 0x2099B4u;
        goto label_2099b4;
    }
    ctx->pc = 0x2099ACu;
    SET_GPR_U32(ctx, 31, 0x2099B4u);
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x2099ACu, 0x2099B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2099B4u;
label_2099b4:
    // 0x2099b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2099b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2099b8:
    // 0x2099b8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2099b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2099bc:
    // 0x2099bc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2099bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2099c0:
    // 0x2099c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2099c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2099c4:
    // 0x2099c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2099c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2099c8:
    // 0x2099c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2099cc:
    // 0x2099cc: 0x3e00008  jr          $ra
label_2099d0:
    if (ctx->pc == 0x2099D0u) {
        ctx->pc = 0x2099D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099CCu;
        // 0x2099d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2099D4u;
        goto label_2099d4;
    }
    ctx->pc = 0x2099CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2099CCu;
        // 0x2099d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2099CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2099D4u;
label_2099d4:
    // 0x2099d4: 0x0  nop
    ctx->pc = 0x2099d4u;
    // NOP
    ctx->pc = 0x2099d8u;
}
