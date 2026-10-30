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

// Function: sub_0010B608
// Address: 0x10b608 - 0x10b6e0
void sub_0010B608_0x10b608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B608_0x10b608");
#endif

    switch (ctx->pc) {
        case 0x10b65cu: goto label_10b65c;
        case 0x10b678u: goto label_10b678;
        case 0x10b688u: goto label_10b688;
        case 0x10b698u: goto label_10b698;
        case 0x10b6b8u: goto label_10b6b8;
        default: break;
    }

    ctx->pc = 0x10b608u;

    // 0x10b608: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10b608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10b60c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x10b610: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10b610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10b614: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x10b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10b618: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10b618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10b61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b620: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10b620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10b624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10b624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b628: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10b628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10b62c: 0x244242f0  addiu       $v0, $v0, 0x42F0
    ctx->pc = 0x10b62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17136));
    // 0x10b630: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10b634: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x10b634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b638: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x10b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x10b63c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x10b63cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b644: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x10b644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b648: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x10b648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b64c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x10b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x10b650: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x10b650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x10b654: 0xc04163c  jal         func_1058F0
    ctx->pc = 0x10B654u;
    SET_GPR_U32(ctx, 31, 0x10B65Cu);
    ctx->pc = 0x10B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B654u;
    // 0x10b658: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1058F0u, 0x10B654u, 0x10B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B65Cu;
label_10b65c:
    // 0x10b65c: 0xae130020  sw          $s3, 0x20($s0)
    ctx->pc = 0x10b65cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 19));
    // 0x10b660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10b660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b664: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10b664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10b668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b66c: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x10b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x10b670: 0xc05d420  jal         func_175080
    ctx->pc = 0x10B670u;
    SET_GPR_U32(ctx, 31, 0x10B678u);
    ctx->pc = 0x10B674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B670u;
    // 0x10b674: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175080u, 0x10B670u, 0x10B678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B678u;
label_10b678:
    // 0x10b678: 0x8e4402b8  lw          $a0, 0x2B8($s2)
    ctx->pc = 0x10b678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 696)));
    // 0x10b67c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x10b67cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b680: 0xc04128e  jal         func_104A38
    ctx->pc = 0x10B680u;
    SET_GPR_U32(ctx, 31, 0x10B688u);
    ctx->pc = 0x10B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B680u;
    // 0x10b684: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104A38u, 0x10B680u, 0x10B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B688u;
label_10b688:
    // 0x10b688: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x10b688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x10b68c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10b68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b690: 0xc042ed8  jal         func_10BB60
    ctx->pc = 0x10B690u;
    SET_GPR_U32(ctx, 31, 0x10B698u);
    ctx->pc = 0x10B694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B690u;
    // 0x10b694: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BB60u, 0x10B690u, 0x10B698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B698u;
label_10b698:
    // 0x10b698: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x10b698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
    // 0x10b69c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10b69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6a0: 0xae150028  sw          $s5, 0x28($s0)
    ctx->pc = 0x10b6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 21));
    // 0x10b6a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10b6a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x10b6a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6ac: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x10b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x10b6b0: 0xc041164  jal         func_104590
    ctx->pc = 0x10B6B0u;
    SET_GPR_U32(ctx, 31, 0x10B6B8u);
    ctx->pc = 0x10B6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B6B0u;
    // 0x10b6b4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104590u, 0x10B6B0u, 0x10B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B6B8u;
label_10b6b8:
    // 0x10b6b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10b6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b6bc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10b6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b6c0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10b6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10b6c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10b6c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b6c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10b6c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b6cc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10b6ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b6d0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x10b6d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B6D8u;
        // 0x10b6dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B6E0u;
}
