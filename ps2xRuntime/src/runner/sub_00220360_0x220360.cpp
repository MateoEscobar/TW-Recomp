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

// Function: sub_00220360
// Address: 0x220360 - 0x220430
void sub_00220360_0x220360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220360_0x220360");
#endif

    switch (ctx->pc) {
        case 0x2203a8u: goto label_2203a8;
        case 0x2203b4u: goto label_2203b4;
        case 0x2203e0u: goto label_2203e0;
        case 0x2203f0u: goto label_2203f0;
        case 0x220400u: goto label_220400;
        default: break;
    }

    ctx->pc = 0x220360u;

    // 0x220360: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x220360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x220364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x220364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x220368: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x220368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x22036c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x22036cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220370: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x220370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x220374: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x220374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x220378: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x220378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x22037c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x22037cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x220380: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x220380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x220384: 0x82a20197  lb          $v0, 0x197($s5)
    ctx->pc = 0x220384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 407)));
    // 0x220388: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x220388u;
    {
        const bool branch_taken_0x220388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22038Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220388u;
        // 0x22038c: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220388) {
            ctx->pc = 0x220408u;
            goto label_220408;
        }
    }
    ctx->pc = 0x220390u;
    // 0x220390: 0x3c110056  lui         $s1, 0x56
    ctx->pc = 0x220390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
    // 0x220394: 0x8e92489c  lw          $s2, 0x489C($s4)
    ctx->pc = 0x220394u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x220398: 0x2631a548  addiu       $s1, $s1, -0x5AB8
    ctx->pc = 0x220398u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944072));
    // 0x22039c: 0x92b30196  lbu         $s3, 0x196($s5)
    ctx->pc = 0x22039cu;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 406)));
    // 0x2203a0: 0xc136ad6  jal         func_4DAB58
    ctx->pc = 0x2203A0u;
    SET_GPR_U32(ctx, 31, 0x2203A8u);
    ctx->pc = 0x2203A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203A0u;
    // 0x2203a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB58u, 0x2203A0u, 0x2203A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203A8u;
label_2203a8:
    // 0x2203a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2203a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203ac: 0xc136ad4  jal         func_4DAB50
    ctx->pc = 0x2203ACu;
    SET_GPR_U32(ctx, 31, 0x2203B4u);
    ctx->pc = 0x2203B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203ACu;
    // 0x2203b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAB50u, 0x2203ACu, 0x2203B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203B4u;
label_2203b4:
    // 0x2203b4: 0x24030084  addiu       $v1, $zero, 0x84
    ctx->pc = 0x2203b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2203b8: 0x8e84489c  lw          $a0, 0x489C($s4)
    ctx->pc = 0x2203b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
    // 0x2203bc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2203bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2203c0: 0x8ea603b0  lw          $a2, 0x3B0($s5)
    ctx->pc = 0x2203c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 944)));
    // 0x2203c4: 0x8488033a  lh          $t0, 0x33A($a0)
    ctx->pc = 0x2203c4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 826)));
    // 0x2203c8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2203c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2203ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2203d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2203d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2203d8: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x2203D8u;
    SET_GPR_U32(ctx, 31, 0x2203E0u);
    ctx->pc = 0x2203DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203D8u;
    // 0x2203dc: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2203D8u, 0x2203E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203E0u;
label_2203e0:
    // 0x2203e0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2203e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2203e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2203e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203e8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2203E8u;
    SET_GPR_U32(ctx, 31, 0x2203F0u);
    ctx->pc = 0x2203ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203E8u;
    // 0x2203ec: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2203E8u, 0x2203F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2203F0u;
label_2203f0:
    // 0x2203f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2203f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2203f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2203f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2203f8: 0xc04436c  jal         func_110DB0
    ctx->pc = 0x2203F8u;
    SET_GPR_U32(ctx, 31, 0x220400u);
    ctx->pc = 0x2203FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2203F8u;
    // 0x2203fc: 0x8c64aa84  lw          $a0, -0x557C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110DB0u, 0x2203F8u, 0x220400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220400u;
label_220400:
    // 0x220400: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x220400u;
    {
        const bool branch_taken_0x220400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220400u;
        // 0x220404: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x220400) {
            ctx->pc = 0x22040Cu;
            goto label_22040c;
        }
    }
    ctx->pc = 0x220408u;
label_220408:
    // 0x220408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x220408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22040c:
    // 0x22040c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x22040cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x220410: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x220410u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x220414: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x220414u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220418: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x220418u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22041c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x22041cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220424: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x220424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220428: 0x3e00008  jr          $ra
    ctx->pc = 0x220428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220428u;
        // 0x22042c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220430u;
}
